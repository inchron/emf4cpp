// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EStringToStringMapEntryImpl.cpp
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

#include "EStringToStringMapEntry.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EStringToStringMapEntryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EStringToStringMapEntry::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(EStringToStringMapEntryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EStringToStringMapEntry::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__KEY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getKey());
    }
        return _any;
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getValue());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void EStringToStringMapEntry::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__KEY:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setKey(_t0);
    }
        return;
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__VALUE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setValue(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean EStringToStringMapEntry::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__KEY:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getKey());
    case ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__VALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getValue());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void EStringToStringMapEntry::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr EStringToStringMapEntry::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::ecore::EcorePackage::_instance()->getEStringToStringMapEntry();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EStringToStringMapEntry::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EStringToStringMapEntry::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

