// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/XMLTypeDocumentRootImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016-2019 <emf4cpp@inchron.com>
 * Copyright (C) INCHRON AG 2019-2023 <emf4cpp@inchron.com>
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

#include "XMLTypeDocumentRoot.hpp"
#include <type/TypePackage.hpp>
#include <ecore/EStringToStringMapEntry.hpp>
#include <type/ProcessingInstruction.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(XMLTypeDocumentRootImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::type;

void XMLTypeDocumentRoot::_initialize()
{
    // Supertypes

    // References
    for (const auto &ref : getXMLNSPrefixMap())
    {
        ref->_initialize();
    }
    for (const auto &ref : getXSISchemaLocation())
    {
        ref->_initialize();
    }
    for (const auto &ref : getProcessingInstruction())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(XMLTypeDocumentRootImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject XMLTypeDocumentRoot::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__MIXED:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(getMixed().size());
        for (size_t _i = 0; _i < getMixed().size(); _i++)
            ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                    > ::toAny(_anys[_i], getMixed()[_i]);
        _any = _anys;
    }
        return _any;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP:
    {
        _any = getXMLNSPrefixMap().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION:
    {
        _any = getXSISchemaLocation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__CDATA:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(getCDATA().size());
        for (size_t _i = 0; _i < getCDATA().size(); _i++)
            ::ecorecpp::mapping::any_traits < ::type::String
                    > ::toAny(_anys[_i], getCDATA()[_i]);
        _any = _anys;
    }
        return _any;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__COMMENT:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(getComment().size());
        for (size_t _i = 0; _i < getComment().size(); _i++)
            ::ecorecpp::mapping::any_traits < ::type::String
                    > ::toAny(_anys[_i], getComment()[_i]);
        _any = _anys;
    }
        return _any;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__PROCESSINGINSTRUCTION:
    {
        _any = getProcessingInstruction().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__TEXT:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(getText().size());
        for (size_t _i = 0; _i < getText().size(); _i++)
            ::ecorecpp::mapping::any_traits < ::type::String
                    > ::toAny(_anys[_i], getText()[_i]);
        _any = _anys;
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void XMLTypeDocumentRoot::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__MIXED:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < std::vector
                < ::ecorecpp::mapping::any >> (_newValue);
        std::vector < ::ecore::EFeatureMapEntry > _t1;
        _t1.reserve(_t0.size());
        for (const auto &anyValue : _t0)
        {
            ecore::EFeatureMapEntry value;
            ::ecorecpp::mapping::any_traits < ecore::EFeatureMapEntry
                    > ::fromAny(anyValue, value);
            _t1.push_back(value);
        }
        setMixed (_t1);
    }
        return;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getXMLNSPrefixMap().clear();
        getXMLNSPrefixMap().insert_all(*_t0);
    }
        return;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getXSISchemaLocation().clear();
        getXSISchemaLocation().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean XMLTypeDocumentRoot::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__MIXED:
        return getMixed().size() > 0;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP:
        return getXMLNSPrefixMap().size() > 0;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION:
        return getXSISchemaLocation().size() > 0;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__CDATA:
        return getCDATA().size() > 0;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__COMMENT:
        return getComment().size() > 0;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__PROCESSINGINSTRUCTION:
        return getProcessingInstruction().size() > 0;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__TEXT:
        return getText().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void XMLTypeDocumentRoot::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr XMLTypeDocumentRoot::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::type::TypePackage::_instance()->getXMLTypeDocumentRoot();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void XMLTypeDocumentRoot::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP:
    {
    }
        return;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void XMLTypeDocumentRoot::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP:
    {
    }
        return;
    case ::type::TypePackage::XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

