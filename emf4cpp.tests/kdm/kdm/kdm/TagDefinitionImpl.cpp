// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/TagDefinitionImpl.cpp
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

#include "TagDefinition.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/core/Element.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TagDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::kdm;

void TagDefinition::_initialize()
{
    // Supertypes
    ::kdm::core::Element::_initialize();

    // References

    /*PROTECTED REGION ID(TagDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TagDefinition::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__TAG:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getTag());
    }
        return _any;
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__TYPE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getType());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void TagDefinition::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__TAG:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setTag(_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__TYPE:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setType(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean TagDefinition::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__TAG:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getTag());
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__TYPE:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getType());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void TagDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr TagDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::kdm::KdmPackage::_instance()->getTagDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TagDefinition::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__ANNOTATION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TagDefinition::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGDEFINITION__ANNOTATION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

