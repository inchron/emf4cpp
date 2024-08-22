// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * XMLSerializer.hpp
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

#ifndef XMLSerializer_HPP
#define XMLSerializer_HPP

#include <map>
#include <ostream>
#include <sstream>
#include <unordered_map>

#include <ecore/EObject.hpp>

#include "../dllEcorecpp.hpp"
#include "../mapping.hpp"
#include "../parser/Reference.hpp"
#include "../util/ExtendedMetaData.hpp"
#include "greedy_serializer.hpp"


namespace ecorecpp {
namespace serializer {
class EXPORT_ECORECPP_DLL XMLSerializer {
public:
	enum class XmiIndentMode { NoIndentation, Indentation };

	XMLSerializer( std::ostream& );

	~XMLSerializer() = default;

	void serialize( const ::ecorecpp::mapping::EList<::ecore::EObject_ptr>::ptr_type& objlist );

	void setIndentMode( XmiIndentMode );
	XmiIndentMode getIndentMode() const;

	void setKeepDefault( bool );
	bool getKeepDefault() const;

	void setExtendedMetaData( bool );
	bool getExtendedMetaData() const;

	void setExternalReferences( const std::list<::ecorecpp::parser::Reference>& );

protected:
	::ecorecpp::mapping::type_definitions::string_t get_type( ::ecore::EObject_ptr obj ) const;
	::ecorecpp::mapping::type_definitions::string_t get_reference( ::ecore::EObject_ptr obj ) const;

	::ecore::EStructuralFeature_ptr getEStructuralFeature(
		::ecore::EClass_ptr eclass, ::ecorecpp::mapping::type_definitions::string_t name ) const;

	::ecorecpp::mapping::type_definitions::string_t get_reference(
		::ecore::EObject_ptr from, ::ecore::EObject_ptr to, bool isCrossDocumentReference ) const;

	void create_node( ::ecore::EObject_ptr parent_obj, ::ecore::EObject_ptr child_obj,
					  ::ecore::EStructuralFeature_ptr ef );
	void create_crossref_node( ::ecore::EObject_ptr parent_obj, ::ecore::EObject_ptr child_obj,
							   ::ecore::EStructuralFeature_ptr ef );

	void serialize_node( ::ecore::EObject_ptr );
	void serialize_node_attributes( ::ecore::EObject_ptr );
	void serialize_node_children( ::ecore::EObject_ptr );

	std::ostream& m_out;

	/** Default values for output format
	 *
	 *  See Resource.hpp for options to influence the content/form of the
	 *  serialized output.
	 */
	XmiIndentMode m_mode = XmiIndentMode::Indentation;
	bool m_keepDefault{ false };

	std::ostringstream m_internalBuffer;

	int m_level{ 0 };  // current_level
	::ecore::EObject_ptr m_root_obj;

	greedy_serializer m_ser{ m_internalBuffer, m_mode == XmiIndentMode::Indentation };

	void addUsedPackage( ::ecore::EPackage_ptr );
	std::map<::ecore::EPackage_ptr, ::ecorecpp::mapping::type_definitions::string_t>
		_packageAliases;
	std::map<::ecorecpp::mapping::type_definitions::string_t, unsigned int> _packageNameCounter;

	::ecore::Ptr<util::ExtendedMetaData> m_extendedMetaData;

	std::unordered_multimap<::ecore::EObject_ptr, ::ecorecpp::parser::Reference>
		_unresolvedReferences;
};

}  // namespace serializer
}  // namespace ecorecpp

#endif
