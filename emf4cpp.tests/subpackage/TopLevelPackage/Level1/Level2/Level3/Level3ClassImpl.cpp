// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level2/Level3/Level3ClassImpl.cpp
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

#include "Level3Class.hpp"
#include <TopLevelPackage/Level1/Level2/Level3/Level3Package.hpp>
#include <TopLevelPackage/Level1/Level2/Level2Class.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(Level3ClassImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::TopLevelPackage::Level1::Level2::Level3;

void Level3Class::_initialize()
{
    // Supertypes
    ::TopLevelPackage::Level1::Level2::Level2Class::_initialize();

    // References

    /*PROTECTED REGION ID(Level3ClassImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Level3Class::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::TopLevelPackage::Level1::Level2::Level3::Level3Package::LEVEL3CLASS__REFERENCE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getReference());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Level3Class::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::TopLevelPackage::Level1::Level2::Level3::Level3Package::LEVEL3CLASS__REFERENCE:
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

::ecore::EBoolean Level3Class::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::TopLevelPackage::Level1::Level2::Level3::Level3Package::LEVEL3CLASS__REFERENCE:
        return getReference().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Level3Class::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Level3Class::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::TopLevelPackage::Level1::Level2::Level3::Level3Package::_instance()->getLevel3Class();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Level3Class::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::TopLevelPackage::Level1::Level2::Level3::Level3Package::LEVEL3CLASS__REFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Level3Class::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::TopLevelPackage::Level1::Level2::Level3::Level3Package::LEVEL3CLASS__REFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

