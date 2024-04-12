// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceCompression.hpp
 * Copyright (C) INCHRON AG 2024 <info@inchron.com>
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
#ifndef ECORECPP_RESOURCE_COMPRESSION_HPP
#define ECORECPP_RESOURCE_COMPRESSION_HPP

#include <iostream>

#include <QBuffer>
#include <QDateTime>
#include <QString>
#include <quazip/quazip.h>
#include <quazip/quazipfile.h>
#include <quazip/quazipfileinfo.h>

#include "XMLResource.hpp"

namespace ecorecpp {
namespace resource {

/* An anonymous namespace limits the visibility to the scope which includes
 * this file. */
namespace {

/** A reference implementation of compressed XMI according to EMF.
 *
 * This implementation uses Qt and Quazip https://github.com/stachenov/quazip.
 * Because not everyone wants to (or can) use these libraries, this class is
 * provided as a header-only file and is not used by EMF4CPP itself.
 *
 * In your derived XMLResource, declare doCompress() and doUncompress() as
 * override methods and add this to the implementation:
@code{.cpp}
#include <ecorecpp/resource/Compression.hpp>

ecorecpp::resource::XMLResource::Buffer XMLResource::doCompress( const Buffer& input ) {
	return ecorecpp::resource::Compression::doCompress( input );
}

ecorecpp::resource::XMLResource::Buffer XMLResource::doUncompress( const Buffer& input ) {
	return ecorecpp::resource::Compression::doUncompress( input );
}
@endcode
 *
 * The created archive as well as the uncompressed file entry is held in
 * memory buffers, no temporary files are created.
 */
class Compression {
	inline static unsigned int verbosity{};
	inline static const QString zipEntryName{ QStringLiteral( "ResourceContents" ) };

public:
	using Buffer = XMLResource::Buffer;

	static void setVerbosity( unsigned int v )
	{
		verbosity = v;
	}
	static unsigned int getVerbosity()
	{
		return verbosity;
	}

	static Buffer doCompress( const Buffer& input )
	{
		if ( getVerbosity() > 0 )
			std::cerr << "Compressing xmi\n";

		/* The underlying in-memory device, where the zip archive is created. */
		QBuffer data;

		QuaZip archive( &data );
		auto openResult = archive.open( QuaZip::mdCreate );
		if ( not openResult )
			throw std::invalid_argument( "zip archive not writable" );

		QuaZipFile content( &archive );
		QuaZipNewInfo info( zipEntryName, zipEntryName );
		info.dateTime = QDateTime::currentDateTime();
		info.setPermissions( QFileDevice::ReadOwner | QFileDevice::WriteOwner
							 | QFileDevice::ReadUser | QFileDevice::WriteUser
							 | QFileDevice::ReadGroup | QFileDevice::ReadOther );
		openResult = content.open( QIODevice::WriteOnly, info );
		if ( not openResult )
			throw std::invalid_argument( "zip entry not writable" );

		auto bytesWritten = content.write( input.data(), input.size() );
		if ( (unsigned)bytesWritten != input.size() )
			throw std::invalid_argument( "zip entry not completely written" );

		/* Flush all data (to memory). */
		content.close();
		archive.close();
		data.close();

		/* The created zip archive is copied to the Buffer. Because of
		 * return-value-optimization, this is already the Buffer from where
		 * the parser will read the XMI. */
		data.open( QIODevice::ReadOnly );
		Buffer returnValue;
		returnValue.resize( data.size() );
		data.read( returnValue.data(), data.size() );

		return returnValue;
	}

	static XMLResource::Buffer doUncompress( const XMLResource::Buffer& input )
	{
		if ( getVerbosity() > 0 )
			std::cerr << "Detected compressed xmi\n";

		/* The underlying in-memory device, with the content of the zip archive. */
		QByteArray ba( input.data(), input.size() );
		QBuffer data( &ba );

		QuaZip archive( &data );
		auto openResult = archive.open( QuaZip::mdUnzip );
		if ( not openResult )
			throw std::invalid_argument( "zip entry not readable" );

		if ( getVerbosity() > 1 ) {
			auto infos = archive.getFileInfoList();
			for ( const auto& info : infos ) {
				std::cerr << info.name.toStdString() << " "
						  << info.dateTime.toString().toStdString() << " compressed "
						  << info.compressedSize << " uncompressed " << info.uncompressedSize
						  << "\n";
			}
		}

		archive.setCurrentFile( zipEntryName );
		QuaZipFile content( &archive );
		openResult = content.open( QIODevice::ReadOnly );
		if ( not openResult )
			throw std::invalid_argument( "zip does not contain expected entry" );

		/* The XMI is extracted into the Buffer. Because of return-value-
		 * optimization, this is already the Buffer from where the parser will
		 * read the XMI. */
		Buffer returnValue;
		const auto uncompressedSize = content.usize();
		returnValue.resize( uncompressedSize );
		auto bytesRead = content.read( returnValue.data(), uncompressedSize );
		if ( bytesRead != uncompressedSize )
			throw std::invalid_argument( "zip entry not completely written" );

		return returnValue;
	}
};

}  // namespace
}  // namespace resource
}  // namespace ecorecpp

#endif /*ECORECPP_RESOURCE_COMPRESSION_HPP*/
