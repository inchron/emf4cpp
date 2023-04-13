// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level2/Level2ClassImpl.cpp
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

#include "Level2Class.hpp"
#include <TopLevelPackage/Level1/Level2/Level2Package.hpp>
#include <TopLevelPackage/TopLevelClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(Level2ClassImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::TopLevelPackage::Level1::Level2;

void Level2Class::_initialize()
{
    // Supertypes
    ::TopLevelPackage::TopLevelClass::_initialize();

    // References

    /*PROTECTED REGION ID(Level2ClassImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Level2Class::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::TopLevelPackage::Level1::Level2::Level2Package::LEVEL2CLASS__REFERENCE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getReference());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Level2Class::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::TopLevelPackage::Level1::Level2::Level2Package::LEVEL2CLASS__REFERENCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EObject > (_t0);
        setReference(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean Level2Class::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::TopLevelPackage::Level1::Level2::Level2Package::LEVEL2CLASS__REFERENCE:
        return getReference().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Level2Class::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Level2Class::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::TopLevelPackage::Level1::Level2::Level2Package::_instance()->getLevel2Class();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Level2Class::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::TopLevelPackage::Level1::Level2::Level2Package::LEVEL2CLASS__REFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Level2Class::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::TopLevelPackage::Level1::Level2::Level2Package::LEVEL2CLASS__REFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

