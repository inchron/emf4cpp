// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * XMLResource.hpp
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

#ifndef XMLResource_HPP
#define XMLResource_HPP

#include <map>
#include <unordered_map>

#include "../dllEcorecpp.hpp"
#include "../mapping/type_definitions.hpp"
#include "Resource.hpp"

namespace ecore {
class EObject;
}  // namespace ecore

namespace ecorecpp {
namespace resource {

//Factory
class EXPORT_ECORECPP_DLL XMLResourceFactory : public Resource::Factory {
public:
	XMLResourceFactory() = default;
	~XMLResourceFactory() override;

	Resource_ptr createResource( const QUrl& ) override;
};

//Resource
class EXPORT_ECORECPP_DLL XMLResource : public Resource {
public:
	/**
	 * Keep default content ( e.g. default attributes). This applies to saving and
	 * converting contents to DOM.
	 * By default the default content is discarded.
	 * To save the default content, set this option to 'true'.
	 */
	static const std::string OPTION_KEEP_DEFAULT_CONTENT /*="KEEP_DEFAULT_CONTENT"*/;

	/**
     * Add indentation to produce a readable document.
	 * The default is 'true' unless set to 'false' explicitly.
	 */
	static const std::string OPTION_FORMATTED /*="FORMATTED"*/;

	/**
	 * Consider the ExtendedMetaData of the EPackage when handling
	 * serializations. If the option is used, the default is 'true', unless
	 * set to 'false' explicitly.
	 */
	static const std::string OPTION_EXTENDED_META_DATA /*="EXTENDED_META_DATA"*/;

	/**
	 * If 'true' (default) all cross document references will be resolved by
	 * loading the referenced resource.
	 */
	static const std::string OPTION_RESOLVE_EXTERNAL_REFERENCES /*=RESOLVE_EXTERNAL_REFERENCES*/;

	/**
	 * This can be one of "THROW" (default), "DISCARD", "RECORD". The default will be
	 * "THROW" and throws an exception if there are dangling hrefs during serialization.
	 * "RECORD" will write all dangling hrefs to the xmi.
	 * "DISCARD" will ignore dangling hrefs.
	 */
	static const std::string OPTION_PROCESS_DANGLING_HREF /*=PROCESS_DANGLING_HREF*/;

	explicit XMLResource( const QUrl& );
	~XMLResource() override;

	void load( std::istream&, const Resource::OptionMap& = Resource::OptionMap() ) override;
	void save( std::ostream&, const Resource::OptionMap& = Resource::OptionMap() ) override;

	void setID( ::ecore::EObject_ptr, const std::string& );
	std::string getID( ::ecore::EObject_ptr );

	::ecore::EObject_ptr getEObject( const std::string& uriFragment ) override;
	std::string getURIFragment( ::ecore::EObject_ptr ) override;

	/** Use ids from the map, where the user has set them. They are stored in
	 * the attribue xmi:id. */
	virtual bool useIDs() const;
	/** Generate unique ids automatically. They are stored in the attribute
	 * xmi:id. */
	virtual bool useUUIDs() const;
	/* If all is disabled, xpath is used for references. */

	using Buffer = std::vector<::ecorecpp::mapping::type_definitions::char_t>;

protected:
	/** Generates a new UUID and calls setId(). */
	virtual std::string createID( ::ecore::EObject_ptr );

private:
	void doLoad( const Buffer&, const Resource::OptionMap& = Resource::OptionMap() );
	virtual Buffer doCompress( const Buffer& );
	virtual Buffer doUncompress( const Buffer& );
	virtual Buffer doEncrypt( const Buffer& );
	virtual Buffer doDecrypt( const Buffer& );

	using WeakEObject_ptr = std::weak_ptr<::ecore::EObject>;

	std::map<WeakEObject_ptr, std::string, std::owner_less<WeakEObject_ptr>> _eObjectToIDMap;

	/* Safe because the std::weak_ptr is only the value. */
	std::unordered_map<std::string, WeakEObject_ptr> _idToEObjectMap;
};

}  // namespace resource
}  // namespace ecorecpp

#endif /* XMLResource_HPP */
