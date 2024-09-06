// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceSet.hpp
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

#ifndef ResourceSet_HPP
#define ResourceSet_HPP

#include "../dllEcorecpp.hpp"

#include <iostream>

#include <ecorecpp/mapping/EList.hpp>
#include <ecorecpp/util/TreeIterator.hpp>

#include "Resource.hpp"

namespace ecore {
	class EObject;
}

namespace ecorecpp {
namespace resource {

class ResourceSet;
using ResourceSet_ptr = std::shared_ptr<ResourceSet>;

class URIConverter;

class EXPORT_ECORECPP_DLL ResourceSet {
public:
	/** There is a global instance for general use. */
	static ResourceSet& getInstance();

	/** You can also use individual instances. In case of an auto-load, a new
	 * Resource will always be created in the ResourceSet of the existing
	 * Resource. */
	ResourceSet();
	/** You can specialize the ResourceSet, if needed. */
	virtual ~ResourceSet();

	ResourceSet(const ResourceSet&)    = delete;
	void operator=(const ResourceSet&) = delete;

	::ecorecpp::mapping::EList<Resource_ptr>& getResources();

	virtual Resource_ptr createResource(const QUrl& uri);
	virtual Resource_ptr createResource(const QUrl& uri, const std::string& contentType);

	Resource_ptr getResource(const QUrl& uri, bool loadOnDemand);

	::ecorecpp::util::TreeIterator<::ecore::EObject_ptr> getAllContents();

    /** Returns the object resolved by the URI.
     *
     * Every object contained by a resource has a corresponding URI that identifies it.
     * The URI without the fragment is used to resolve a resource. If this is successful,
     * the fragment is used to resolve the object within the resource.
     * 
     * @param[in] uri The URI to resolve.
     * @param[in] loadOnDemand If set, the resource is created and loaded if it does not
     *        yet exist.
     * @return The object resolved by the URI, or a nullptr if there isn't one.
     */
	virtual ::ecore::EObject_ptr getEObject(const QUrl& uri, bool loadOnDemand);

	URIConverter* getURIConverter();
	void setURIConverter(const URIConverter&);

	Resource::Factory::Registry* getResourceFactoryRegistry() const;
	void setResourceFactoryRegistry(Resource::Factory::Registry*);

private:
	std::unique_ptr<URIConverter> _uriConverter;
	std::unique_ptr<Resource::Factory::Registry> _resourceRegistry;

	::ecorecpp::mapping::EList<Resource_ptr>::ptr_type _resources;
};

} // resource
} // ecorecpp

#endif    /* ResourceSet_HPP */
