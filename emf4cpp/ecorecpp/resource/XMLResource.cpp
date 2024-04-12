// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * XMLResource.cpp
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "XMLResource.hpp"

#include <algorithm>
#include <util/EcoreUtil.hpp>

#include <QString>
#include <QUuid>

#include <ecorecpp/parser/XMLHandler.hpp>
#include <ecorecpp/serializer/XMLSerializer.hpp>

namespace ecorecpp {
namespace resource {

using ::ecorecpp::serializer::XMLSerializer;

XMLResourceFactory::~XMLResourceFactory() = default;

Resource_ptr XMLResourceFactory::createResource( const QUrl& uri )
{
	return Resource_ptr( new XMLResource( uri ) );
}

const std::string XMLResource::OPTION_KEEP_DEFAULT_CONTENT = "KEEP_DEFAULT_CONTENT";
const std::string XMLResource::OPTION_FORMATTED = "FORMATTED";
const std::string XMLResource::OPTION_EXTENDED_META_DATA = "EXTENDED_META_DATA";
const std::string XMLResource::OPTION_RESOLVE_EXTERNAL_REFERENCES = "RESOLVE_EXTERNAL_REFERENCES";
const std::string XMLResource::OPTION_PROCESS_DANGLING_HREF = "PROCESS_DANGLING_HREF";

XMLResource::XMLResource( const QUrl& uri ) : Resource( uri )
{
}

XMLResource::~XMLResource() = default;

void XMLResource::setID( ::ecore::EObject_ptr eobj, const std::string& id )
{
	_eObjectToIDMap[eobj] = id;
	_idToEObjectMap[id] = eobj;
}

std::string XMLResource::getID( ::ecore::EObject_ptr eobj )
{
	auto it = _eObjectToIDMap.find( eobj );
	if ( it != _eObjectToIDMap.end() )
		return it->second;

	if ( !useUUIDs() )
		return std::string();

	return createID( eobj );
}

::ecore::EObject_ptr XMLResource::getEObject( const std::string& uriFragment )
{
	auto it = _idToEObjectMap.find( uriFragment );
	if ( it != _idToEObjectMap.end() ) {
		auto retVal = it->second.lock();
		if ( retVal )
			return retVal;
		_idToEObjectMap.erase( it );
	}

	auto retVal = Resource::getEObject( uriFragment );
	if ( retVal ) {
		auto id = ::ecorecpp::util::EcoreUtil::getId( retVal );
		if ( !id.empty() )
			setID( retVal, id );
	}

	return retVal;
}

std::string XMLResource::getURIFragment( ::ecore::EObject_ptr obj )
{
	if ( useIDs() || useUUIDs() ) {
		std::string id = getID( obj );
		if ( !id.empty() )
			return id;
	}

	return Resource::getURIFragment( obj );
}

void XMLResource::load( std::istream& is, const Resource::OptionMap& options )
{
	if ( !is )
		throw std::logic_error( "Input stream not readable!" );

	// get length of file:
	is.seekg( 0, is.end );
	std::streamsize length = is.tellg();
	is.seekg( 0, is.beg );

	// allocate memory:
	std::vector<::ecorecpp::mapping::type_definitions::char_t> buffer( length );

	// read data as a block:
	is.read( buffer.data(), length );

	// The file is read in text mode. If it contains \r\n line
	// endings, the number of bytes read can be smaller than the
	// file size calculated by seekg().
	length = is.gcount();
	buffer.resize( length );

	if ( auto it = options.find( OPTION_CIPHER ); it != options.end() ) {
		std::string value = it->second;
		std::transform( value.begin(), value.end(), value.begin(),
						[]( unsigned char c ) { return std::tolower( c ); } );
		if ( value == "true" )
			buffer = doDecrypt( buffer );
	}

	/* Decompression is done automatically by checking magic numbers.
	 * https://en.wikipedia.org/wiki/List_of_file_signatures -> "50 4B" */
	if ( buffer[0] == 0x50 and buffer[1] == 0x4b ) {
		/* There are two more variants, but we only support non-empty, contiguous archives. */
		if ( buffer[2] == 0x03 and buffer[3] == 0x04 ) {
			buffer = doUncompress( buffer );
		}
	}

	doLoad( buffer, options );
}

void XMLResource::save( std::ostream& os, const Resource::OptionMap& options )
{
	if ( !os )
		throw std::logic_error( "Output stream not writeable!" );

	std::stringstream streamBuffer;
	XMLSerializer ser( streamBuffer );

	XMLSerializer::XmiIndentMode mode = XMLSerializer::XmiIndentMode::Indentation;
	if ( auto it = options.find( OPTION_FORMATTED ); it != options.end() ) {
		std::string modeStr = it->second;
		std::transform( modeStr.begin(), modeStr.end(), modeStr.begin(),
						[]( unsigned char c ) { return std::tolower( c ); } );
		mode = ( modeStr == "true" ) ? XMLSerializer::XmiIndentMode::Indentation
									 : XMLSerializer::XmiIndentMode::NoIndentation;
	}
	ser.setIndentMode( mode );

	bool keepDefault = false;
	if ( auto it = options.find( OPTION_KEEP_DEFAULT_CONTENT ); it != options.end() ) {
		std::string keepStr = it->second;
		std::transform( keepStr.begin(), keepStr.end(), keepStr.begin(),
						[]( unsigned char c ) { return std::tolower( c ); } );
		keepDefault = ( keepStr == "true" );
	}
	ser.setKeepDefault( keepDefault );

	bool extendedMetaData = false;
	if ( auto it = options.find( OPTION_EXTENDED_META_DATA ); it != options.end() ) {
		std::string emdStr = it->second;
		std::transform( emdStr.begin(), emdStr.end(), emdStr.begin(),
						[]( unsigned char c ) { return std::tolower( c ); } );
		extendedMetaData = ( emdStr != "false" );
	}
	ser.setExtendedMetaData( extendedMetaData );

	if ( !getUnresolvedCrossDocumentReferences().empty() ) {
		if ( auto it = options.find( OPTION_PROCESS_DANGLING_HREF ); it != options.end() ) {
			std::string pdhStr = it->second;
			std::transform( pdhStr.begin(), pdhStr.end(), pdhStr.begin(),
							[]( unsigned char c ) { return std::tolower( c ); } );
			if ( pdhStr == "throw" ) {
				throw std::logic_error( "Unresolved cross document references exist!" );
			}
			else if ( pdhStr == "record" ) {
				ser.setExternalReferences( getUnresolvedCrossDocumentReferences() );
			}
		}
		else
			throw std::logic_error( "Unresolved cross document references exist!" );
	}

	ser.serialize( getContents() );

	const auto& temp = streamBuffer.str();
	Buffer buffer( temp.length() );
	buffer.assign( temp.begin(), temp.end() );

	/* Should I compress before encryption? Yes, because by definition, data
	 * that is encrypted should not be compressible; if you can compress
	 * encrypted data it is probably not well encrypted. */
	if ( auto it = options.find( OPTION_ZIP ); it != options.end() ) {
		std::string value = it->second;
		std::transform( value.begin(), value.end(), value.begin(),
						[]( unsigned char c ) { return std::tolower( c ); } );
		if ( value == "true" )
			buffer = doCompress( buffer );
	}

	if ( auto it = options.find( OPTION_CIPHER ); it != options.end() ) {
		std::string value = it->second;
		std::transform( value.begin(), value.end(), value.begin(),
						[]( unsigned char c ) { return std::tolower( c ); } );
		if ( value == "true" )
			buffer = doEncrypt( buffer );
	}

	os.write( buffer.data(), buffer.size() );
}

XMLResource::Buffer XMLResource::doCompress( const Buffer& )
{
	throw std::logic_error( "XMLResource::doCompress() is not implemented." );
}

XMLResource::Buffer XMLResource::doUncompress( const Buffer& )
{
	throw std::logic_error( "XMLResource::doUncompress() is not implemented." );
}

XMLResource::Buffer XMLResource::doEncrypt( const Buffer& )
{
	throw std::logic_error( "XMLResource::doEncrypt() is not implemented." );
}

XMLResource::Buffer XMLResource::doDecrypt( const Buffer& )
{
	throw std::logic_error( "XMLResource::doDecrypt() is not implemented." );
}

void XMLResource::doLoad( const std::vector<::ecorecpp::mapping::type_definitions::char_t>& buffer,
						  const Resource::OptionMap& options )
{
	/*
	 * Create our SAX handler object and install it on the parser, as the
	 * document and error handler.
	 */
	XMLHandler handler;

	bool extendedMetaData = false;
	if ( auto it = options.find( OPTION_EXTENDED_META_DATA ); it != options.end() ) {
		std::string emdStr = it->second;
		std::transform( emdStr.begin(), emdStr.end(), emdStr.begin(),
						[]( unsigned char c ) { return std::tolower( c ); } );
		extendedMetaData = ( emdStr != "false" );
	}
	handler.setExtendedMetaData( extendedMetaData );

	bool resolveExternalReferences = true;
	if ( auto it = options.find( OPTION_RESOLVE_EXTERNAL_REFERENCES ); it != options.end() ) {
		std::string emdStr = it->second;
		std::transform( emdStr.begin(), emdStr.end(), emdStr.begin(),
						[]( unsigned char c ) { return std::tolower( c ); } );
		resolveExternalReferences = ( emdStr == "true" );
	}

	xml_parser::SemanticState<XMLHandler> ss( handler );

	State<xml_parser::SemanticState<XMLHandler>> st( ss, buffer.data(), buffer.size() );

	/*
	 * Get the starting time and kick off the parse of the indicated
	 * file. Catch any exceptions that might propogate out of it.
	 */
	xml_parser::grammar::the_xml::match( st );

	for ( const auto& root : handler.getRootElements() ) {
		getContents()->push_back( root );
	}

	for ( auto&& entry : handler.getXmiIds() ) {
		_idToEObjectMap.insert( std::make_pair( entry.first, entry.second ) );
		_eObjectToIDMap.insert( std::make_pair( entry.second, entry.first ) );
	}

	/* Now the model knows it's resource and we can try to resolve
	 * the (cross-document) references, too.
	 */
	handler.resolveReferences();

	_unresolvedCrossDocumentReferences.clear();
	if ( resolveExternalReferences )
		handler.resolveCrossDocumentReferences();
	else
		_unresolvedCrossDocumentReferences = handler.getCrossDocumentReferences();

	for ( const auto& root : *getContents() ) {
		root->_initialize();
	}
}

bool XMLResource::useIDs() const
{
	return false;
}

bool XMLResource::useUUIDs() const
{
	return false;
}

/** By default, this implementation creates UUIDs.
 *
 * http://download.eclipse.org/modeling/emf/emf/javadoc/2.5.0/org/eclipse/emf/ecore/util/EcoreUtil.html#generateUUID()
 * contradicts itself: On one side it references
 * http://www.ietf.org/rfc/rfc2045.txt as "base 64", but on the other side the
 * result must be a valid "NCName" according to
 * http://www.w3.org/TR/1999/REC-xml-names-19990114/#NT-NCName - which it
 * can't be as base 64 contains a '+' and a '/', which a NCName must not
 * contain. */
std::string XMLResource::createID( ::ecore::EObject_ptr obj )
{
	QString uuid( QUuid::createUuid().toRfc4122().toBase64( QByteArray::Base64Encoding
															| QByteArray::OmitTrailingEquals ) );
	uuid.prepend( '_' );

	setID( obj, uuid.toStdString() );
	return uuid.toStdString();
}

}  // namespace resource
}  // namespace ecorecpp
