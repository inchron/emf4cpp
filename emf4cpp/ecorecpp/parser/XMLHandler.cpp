// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/XMLHandler.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#include "XMLHandler.hpp"

#include <iostream>
#include <map>	// for pair
#include <vector>

#include <ecore.hpp>

#include "../mapping.hpp"
#include "../MetaModelRepository.hpp"
#include "../resource/ResourceSet.hpp"
#include "../util/debug.hpp"
#include "../util/escape_html.hpp"
#include "../util/EcoreUtil.hpp"
#include "../util/ExtendedMetaData.hpp"

using namespace ::ecorecpp;
using namespace ::ecore;

namespace ecorecpp {
namespace parser {

void XMLHandler::setExtendedMetaData( bool b ) {
	if ( b )
		m_extendedMetaData = ::ecorecpp::util::ExtendedMetaData::_instance();
	else
		m_extendedMetaData = ::ecore::Ptr<util::ExtendedMetaData>();
}

bool XMLHandler::getExtendedMetaData() const { return ! ! m_extendedMetaData; }

::ecore::EStructuralFeature_ptr XMLHandler::getEStructuralFeature( ::ecore::EClass_ptr eclass,
																   ::ecore::EString name ) {
	if ( m_extendedMetaData ) {
		for ( const auto& ef : eclass->getEAllStructuralFeatures() ) {
			if ( m_extendedMetaData->getName( ef ) == name )
				return ef;
		}
	}
	return eclass->getEStructuralFeature( name );
}


/* Process the content a XMIObjectElement or a XMIValueElement.
 *
 * According to XML Metadata Interchange (XML), v2.4.2 [1] a XMIObjectElement
 * with an empty content may end the starting element with "/>" (p.61, item
 * 2a), however this is not allowed for XMIValueElements (p.61, item 2b).
 *
 * Unfortunately an ordinary XML parser which is not XMI-aware, e.g. like
 * Qt's QDomDocument, will end empty XMIValueElements with "/>". To support
 * this, a call to this method was inserted into struct unique_tag_end_ in
 * simple_xml_parser.hpp. It passes an empty string, just as the conforming
 * version would do.
 *
 * Including cross-document references, we end up with three possible
 * contexts, in which this method is called:
 *
 * (1) <attribute></attribute>
 * (2) <attribute />
 * (3) <reference href="..." />
 *
 * [1] e.g. https://www.omg.org/spec/XMI/2.5.1/PDF
 */
void XMLHandler::characters( xml_parser::match_pair const& chars ) {
	if ( ! m_expected_literal )
		return;

	EObject_ptr const& eobj = m_objects.back();
	EClass_ptr const eclass = eobj->eClass();

	::ecorecpp::mapping::type_definitions::string_t const& name = m_expected_literal_name;

	DEBUG_XMI_MSG( cerr, name );

	EStructuralFeature_ptr const esf = getEStructuralFeature( eclass, name );

	if ( as<EReference>( esf ) ) {
		/* m_expected_literal_name does not identify an EAttribute, hence any
		 * parsed text content is ignored. */
		return;
	}

	try {
		assert( m_level );

		::ecorecpp::mapping::type_definitions::string_t literal( chars.first, chars.second );

		util::unescape_html( literal );

		EDataType_ptr const edt = as<EDataType>( esf->getEType() );

		EFactory_ptr const efac = edt->getEPackage()->getEFactoryInstance();
		assert( efac );

		any anyObj = efac->createFromString( edt, literal );
		EAttribute_ptr const eattr = as<EAttribute>( esf );
		eattr && eattr->getUpperBound() != 1 ? appendMultipleAttributeValue( eobj, eattr, anyObj )
											 : eobj->eSet( esf, anyObj );
	} catch ( const char* e ) {
		ERROR_MSG( "ERROR: " << e );
	}
}

void XMLHandler::processing_tag( xml_parser::match_pair const& tag,
								 xml_parser::attr_list_t const& attr_list ) {}


void XMLHandler::start_tag( xml_parser::match_pair const& nameP,
							xml_parser::attr_list_t const& attributes ) {
	::ecorecpp::mapping::type_definitions::string_t* type = nullptr;
	::ecorecpp::mapping::type_definitions::string_t* href = nullptr;
	::ecorecpp::mapping::type_definitions::string_t* xmiId = nullptr;
	::ecorecpp::mapping::type_definitions::string_t name( nameP.first, nameP.second );
	bool isNull = false;
	DEBUG_XMI_MSG( cerr, "--- START: " << m_level << " " << name );
	static MetaModelRepository_ptr _mmr = MetaModelRepository::_instance();

	// Data
	EPackage_ptr epkg = nullptr;
	EFactory_ptr efac;
	EClassifier_ptr eclassifier = nullptr;
	EClass_ptr eclass = nullptr;
	EObject_ptr eobj = nullptr;
	const size_t length = attributes.size();
	std::vector<std::pair<::ecorecpp::mapping::type_definitions::string_t,
						  ::ecorecpp::mapping::type_definitions::string_t>>
		attr_list( length );

	if ( ! m_level )
		type = &name;

	for ( size_t i = 0; i < length; i++ ) {
		// xsi:type may not be the first attribute using our serializer
		attr_list[i] =
			std::make_pair( ::ecorecpp::mapping::type_definitions::string_t(
								attributes[i].first.first, attributes[i].first.second ),
							::ecorecpp::mapping::type_definitions::string_t(
								attributes[i].second.first, attributes[i].second.second ) );

		util::unescape_html( attr_list[i].second );

		if ( attr_list[i].first == "xsi:nil" )
			isNull = true;

		if ( ! type && ( attr_list[i].first == "xsi:type" ) )
			type = &attr_list[i].second;

		if ( attr_list[i].first == "xmi:id" ) {
			xmiId = &attr_list[i].second;
		}

		if ( attr_list[i].first == "href" ) {
			href = &attr_list[i].second;
		}

		/* Support multiple, versioned packages.
		 * Example: xmlns:edate="http://www.example.org/edate/3.0"
		 */
		if ( attr_list[i].first.find( "xmlns:" ) == 0 ) {
			const size_t first_colon = 6;  // sizeof("xmlns:");
			auto type_ns = attr_list[i].first.substr( first_colon );
			auto type_nsuri = attr_list[i].second;
			_nsUriMap.insert( std::make_pair( type_ns, type_nsuri ) );
		}
	}

	if ( ! m_level && ( name == "xmi:XMI" || name == "xmi::XMI" ) )
		return;

	if ( href ) {
		DEBUG_XMI_MSG( cerr, "    --- Unresolved cross document reference: " << *href );

		Reference cr;
		cr._obj = m_objects.back();
		cr._featureName = name;
		cr._href = *href;
		if ( cr._href[0] == '#' ) {
			/* According to the XMI standard a href wth empty URI part denotes
			 * an XML element in the same document (see https://www.omg.org/spec/XMI/2.5.1/PDF
			 * page 64, row 2m. and 2n.) */
		    cr._href.erase( cr._href.begin() );
			m_unresolved_references.push_back( cr );

		} else {
			cr._refType = ( type ) ? *type : "";
			m_unresolved_cross_references.push_back( cr );
		}

		m_expected_literal = true;
		m_expected_literal_name = name;
		++m_level;

		return;
	}

	if ( type ) {
		size_t const double_dot = type->find( ':' );
		::ecorecpp::mapping::type_definitions::string_t type_ns = type->substr( 0, double_dot );
		::ecorecpp::mapping::type_definitions::string_t type_name = type->substr( double_dot + 1 );

		if ( ! m_current_metamodel
			 || double_dot != ::ecorecpp::mapping::type_definitions::string_t::npos ) {
			/* Support multiple, versioned packages.
			 *
			 * The type_ns denotes a namespace, which must be translated to a
			 * nsUri from a previously read 'xmlns:ns="nsURI"' attribute.
			 */
			auto it = _nsUriMap.find( type_ns );
			if ( it != _nsUriMap.end() ) {
				epkg = _mmr->getByNSURI( it->second );
			}
			/* Fallback: No ns-nsUri mapping or no EPackage found. */
			if ( ! epkg )
				epkg = _mmr->getByNSPrefix( type_ns );
			if ( ! epkg )
				throw std::logic_error( std::string( "missing package: " ) + type_ns );

			if ( ! m_level ) {
				m_current_metamodel = epkg;
				m_current_namespace = type_ns;

				if ( m_extendedMetaData ) {
					auto docRoot = m_extendedMetaData->getDocumentRoot( epkg );
					if ( docRoot ) {
						eclassifier = getEStructuralFeature( docRoot, type_name )->getEType();
					}
				}
			}
		} else {
			epkg = m_current_metamodel;
		}

		if ( ! eclassifier )
			eclassifier = epkg->getEClassifier( type_name );

	} else {
		assert( m_level );
		eclassifier = getEStructuralFeature( m_objects.back()->eClass(), name )->getEType();
		epkg = eclassifier->getEPackage();
	}

	assert( eclassifier );
	assert( epkg );
	eclass = as<EClass>( eclassifier );

	if ( ! isNull && eclass ) {
		efac = epkg->getEFactoryInstance();
		assert( efac );
		eobj = efac->create( eclass );
		assert( eobj );

		DEBUG_XMI_MSG( cerr, "--- START: " << ( m_level + 1 ) );

		// Attributes
		for ( size_t i = 0; i < length; i++ ) {
			try {
				::ecorecpp::mapping::type_definitions::string_t const& aname = attr_list[i].first;

				if ( ! isAtCurrentNamespace( aname ) )
					continue;

				::ecorecpp::mapping::type_definitions::string_t const& avalue = attr_list[i].second;

				DEBUG_XMI_MSG( cerr, "    --- Attributes: (" << ( i + 1 ) << "/" << length << ") "
															 << aname << " " << avalue );

				EStructuralFeature_ptr const esf = getEStructuralFeature( eclass, aname );
				assert( esf );

				EClassifier_ptr const aeclassifier = esf->getEType();
				assert( aeclassifier );

				EDataType_ptr const aedt = as<EDataType>( aeclassifier );

				if ( ! aedt ) {
					Reference ref;
					ref._obj = eobj;
					ref._featureName = aname;
					ref._href = avalue;
					m_unresolved_references.push_back( ref );

					DEBUG_XMI_MSG( cerr, "    --- Unresolved reference: " << avalue );
				} else {
					// Convert from string
					EPackage_ptr const pkg = aedt->getEPackage();
					EFactory_ptr const fac = pkg->getEFactoryInstance();

					if ( esf->getUpperBound() != 1 ) {
						/* Parses EEnumLiterals as TAG="literal literal" */
						/* Split literal along spaces */
						std::istringstream input( avalue );
						std::string subLiteral;
						EAttribute_ptr const eattr = as<EAttribute>( esf );
						while ( std::getline( input, subLiteral, ' ' ) ) {
							any anyVal = fac->createFromString( aedt, subLiteral );
							appendMultipleAttributeValue( eobj, eattr, anyVal );
						}
					} else {
						any anyVal = fac->createFromString( aedt, avalue );
						eobj->eSet( esf, anyVal );
					}
				}
			} catch ( const char* e ) {
				ERROR_MSG( "ERROR: " << e );
			} catch ( const any::bad_any_cast& e ) {
				ERROR_MSG( "ERROR: " << e.what() );
			}
		}

		if ( m_level ) {
			EObject_ptr const& peobj = m_objects.back();
			EClass_ptr const peclass = peobj->eClass();
			EStructuralFeature_ptr const esf = getEStructuralFeature( peclass, name );

			any anyObj;

			EReference_ptr const eref = as<EReference>( esf );
			if ( eref && eref->getUpperBound() != 1 ) {
				// Gets the collection and adds the new element
				anyObj = peobj->eGet( esf );
				auto list = ecorecpp::mapping::any::any_cast<
					mapping::EList<::ecore::EObject_ptr>::ptr_type>( anyObj );

				list->push_back_unsafe( eobj );
			} else {
				anyObj = eobj;
				EAttribute_ptr const eattr = as<EAttribute>( esf );
				eattr && eattr->getUpperBound() != 1
					? appendMultipleAttributeValue( peobj, eattr, anyObj )
					: peobj->eSet( esf, anyObj );
			}

			// EOpposite relations are implemented via a call of _inverseAdd()
			// and _inverseRemove(), which are called implicitly by eSet(). No
			// need to call them extra.
		}

		if ( xmiId && ! xmiId->empty() )
			_xmiIds.insert( std::make_pair( *xmiId, eobj ) );
		else {
			// There may be an EAttribute marked as ID, it may even be
			// transient.
			auto id = ::ecorecpp::util::EcoreUtil::getId( eobj );
			if ( ! id.empty() )
				_xmiIds.insert( std::make_pair( id, eobj ) );
		}

		m_objects.push_back( eobj );
		if ( ! m_level )
			m_root_objects.push_back( eobj );

	} else {
		m_expected_literal = true;
		m_expected_literal_name = name;
	}

	++m_level;
}

void XMLHandler::end_tag( xml_parser::match_pair const& nameP ) {
	DEBUG_XMI_MSG( cerr, "---     END: " << m_level );

	if ( m_level > 0 )
		--m_level;

	if ( m_level && ! m_expected_literal )
		m_objects.pop_back();

	m_expected_literal = false;
}

const std::list<EObject_ptr>& XMLHandler::getRootElements() const { return m_root_objects; }

XMLHandler::XmiIdMap& XMLHandler::getXmiIds() { return _xmiIds; }

void XMLHandler::resolveReferences() {
	if ( m_root_objects.empty() )
		return;

	auto model_root = m_root_objects.front();
	::ecorecpp::resource::Resource_ptr resource = model_root->eResource();
	if ( ! resource )
		throw std::logic_error( "Cannot resolve references. Model has no resource." );

	for ( const auto& refs : m_unresolved_references ) {
		std::istringstream input( refs._href );
		std::string ref;
		EObject_ptr resolvedObj = nullptr;

		while ( std::getline( input, ref, ' ' ) ) {
			resolvedObj = resource->getEObject( ref );

			if ( ! resolvedObj ) {
				std::cerr << "Cannot resolve reference: " << ref << '\n';
				continue;
			}

			auto const eobj = refs._obj;
			assert( eobj );

			auto const eclass = eobj->eClass();
			assert( eclass );

			EStructuralFeature_ptr const esf = getEStructuralFeature( eclass, refs._featureName );
			assert( esf );

			DEBUG_XMI_MSG( cerr, "--- Resolving reference: " << ref << " from " << eclass->getName()
															 << ":" << refs._featureName );

			EJavaObject owner = eobj->eGet( esf );

			if ( esf->getUpperBound() != 1 ) {
				ecorecpp::mapping::any::any_cast<mapping::EList<::ecore::EObject_ptr>::ptr_type>(
					owner )
					->push_back( resolvedObj );
			} else {
				eobj->eSet( esf, resolvedObj );
			}
		}
	}
}

void XMLHandler::resolveCrossDocumentReferences() {
	if ( m_root_objects.empty() )
		return;

	auto model_root = m_root_objects.front();
	::ecorecpp::resource::Resource_ptr resource = model_root->eResource();
	if ( ! resource )
		throw std::logic_error( "Cannot resolve cross references. Model has no resource." );

	::ecorecpp::resource::ResourceSet* resourceSet = resource->getResourceSet();
	if ( ! resourceSet )
		throw std::logic_error(
			"Cannot resolve cross references. No resource set for model found." );

	for ( const auto& ref : m_unresolved_cross_references ) {
#ifdef ECORECPP_USE_WSTRING
		QUrl refUri( QString::fromStdWString( ref._href ) );
#else
		QUrl refUri( QString::fromStdString( ref._href ) );
#endif

		EObject_ptr resolvedObj = resourceSet->getEObject( refUri, /*loadOnDemand*/ true );

		if ( ! resolvedObj ) {
			std::cerr << "Cannot resolve cross reference: " << ref._href << std::endl;
			continue;
		}

		auto const eobj = ref._obj;
		assert( eobj );

		auto const eclass = eobj->eClass();
		assert( eclass );

		EStructuralFeature_ptr const esf = getEStructuralFeature( eclass, ref._featureName );
		assert( esf );

		DEBUG_XMI_MSG( cerr, "--- Resolving cross reference: " << ref._href << " from "
															   << eclass->getName() << ":"
															   << ref._featureName );

		EJavaObject owner = eobj->eGet( esf );

		if ( esf->getUpperBound() != 1 ) {
			ecorecpp::mapping::any::any_cast<mapping::EList<::ecore::EObject_ptr>::ptr_type>(
				owner )
				->push_back( resolvedObj );
		} else {
			eobj->eSet( esf, resolvedObj );
		}
	}
}

const std::list<Reference>& XMLHandler::getCrossDocumentReferences() const {
	return m_unresolved_cross_references;
}


void XMLHandler::appendMultipleAttributeValue( EObject_ptr const& eobj, EAttribute_ptr const& eattr,
											   any anyObj ) {
	assert( eattr->getUpperBound() != 1 );
	auto oldList = eobj->eGet( eattr );
	auto list = ecorecpp::mapping::any::any_cast<std::vector<ecorecpp::mapping::any>>( oldList );
	list.push_back( anyObj );
	eobj->eSet( eattr, list );
}

}  // namespace parser
}  // namespace ecorecpp
