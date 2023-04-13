// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/TopLevelImpl.cpp
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

#include "TopLevel.hpp"
#include <eopposite/EoppositePackage.hpp>
#include <eopposite/NamedObject.hpp>
#include <eopposite/LeftHand.hpp>
#include <eopposite/RightHand.hpp>
#include <eopposite/RightMultiple.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TopLevelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::eopposite;

void TopLevel::_initialize()
{
    // Supertypes
    ::eopposite::NamedObject::_initialize();

    // References
    for (const auto &ref : getLeftees())
    {
        ref->_initialize();
    }
    for (const auto &ref : getRightees())
    {
        ref->_initialize();
    }
    for (const auto &ref : getRightMultiples())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(TopLevelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TopLevel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::TOPLEVEL__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getName());
    }
        return _any;
    case ::eopposite::EoppositePackage::TOPLEVEL__LEFTEES:
    {
        _any = getLeftees().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES:
    {
        _any = getRightees().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES:
    {
        _any = getRightMultiples().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void TopLevel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::TOPLEVEL__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__LEFTEES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getLeftees().clear();
        getLeftees().insert_all(*_t0);
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getRightees().clear();
        getRightees().insert_all(*_t0);
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getRightMultiples().clear();
        getRightMultiples().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean TopLevel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::TOPLEVEL__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getName());
    case ::eopposite::EoppositePackage::TOPLEVEL__LEFTEES:
        return getLeftees().size() > 0;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES:
        return getRightees().size() > 0;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES:
        return getRightMultiples().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void TopLevel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr TopLevel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::eopposite::EoppositePackage::_instance()->getTopLevel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TopLevel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::TOPLEVEL__LEFTEES:
    {
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES:
    {
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TopLevel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::TOPLEVEL__LEFTEES:
    {
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES:
    {
    }
        return;
    case ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

