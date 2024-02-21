// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * nil/RootImpl.cpp
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

#include "Root.hpp"
#include <nil/NilPackage.hpp>
#include <nil/Root.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RootImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nil;

void Root::_initialize()
{
    // Supertypes

    // References
    if (m_containmentReference)
    {
        m_containmentReference->_initialize();
    }
    for (const auto &ref : getManyContainmentReference())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(RootImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Root::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::nil::NilPackage::ROOT__REFERENCE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getReference());
    }
        return _any;
    case ::nil::NilPackage::ROOT__MANYREFERENCE:
    {
        _any = getManyReference().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::nil::NilPackage::ROOT__CONTAINMENTREFERENCE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getContainmentReference());
    }
        return _any;
    case ::nil::NilPackage::ROOT__MANYCONTAINMENTREFERENCE:
    {
        _any =
                getManyContainmentReference().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Root::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nil::NilPackage::ROOT__REFERENCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::nil::Root > (_t0);
        setReference(_t1);
    }
        return;
    case ::nil::NilPackage::ROOT__MANYREFERENCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getManyReference().clear();
        getManyReference().insert_all(*_t0);
    }
        return;
    case ::nil::NilPackage::ROOT__CONTAINMENTREFERENCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::nil::Root > (_t0);
        setContainmentReference(_t1);
    }
        return;
    case ::nil::NilPackage::ROOT__MANYCONTAINMENTREFERENCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getManyContainmentReference().clear();
        getManyContainmentReference().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean Root::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::nil::NilPackage::ROOT__REFERENCE:
        return getReference().get() != nullptr;
    case ::nil::NilPackage::ROOT__MANYREFERENCE:
        return getManyReference().size() > 0;
    case ::nil::NilPackage::ROOT__CONTAINMENTREFERENCE:
        return getContainmentReference().get() != nullptr;
    case ::nil::NilPackage::ROOT__MANYCONTAINMENTREFERENCE:
        return getManyContainmentReference().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Root::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Root::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::nil::NilPackage::_instance()->getRoot();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Root::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::nil::NilPackage::ROOT__REFERENCE:
    {
    }
        return;
    case ::nil::NilPackage::ROOT__MANYREFERENCE:
    {
    }
        return;
    case ::nil::NilPackage::ROOT__CONTAINMENTREFERENCE:
    {
    }
        return;
    case ::nil::NilPackage::ROOT__MANYCONTAINMENTREFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Root::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::nil::NilPackage::ROOT__REFERENCE:
    {
    }
        return;
    case ::nil::NilPackage::ROOT__MANYREFERENCE:
    {
    }
        return;
    case ::nil::NilPackage::ROOT__CONTAINMENTREFERENCE:
    {
    }
        return;
    case ::nil::NilPackage::ROOT__MANYCONTAINMENTREFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

