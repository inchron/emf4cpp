// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * v_1_0/edate/Apollo11Impl.cpp
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

#include "Apollo11.hpp"
#include <v_1_0/edate/EdatePackage.hpp>
#include <v_1_0/edate/Person.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(Apollo11Impl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::v_1_0::edate;

void Apollo11::_initialize()
{
    // Supertypes

    // References
    if (m_Member)
    {
        m_Member->_initialize();
    }

    /*PROTECTED REGION ID(Apollo11Impl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Apollo11::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::v_1_0::edate::EdatePackage::APOLLO11__FIRSTMANONMOONDATE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDate
                > ::toAny(_any, getFirstManOnMoonDate());
    }
        return _any;
    case ::v_1_0::edate::EdatePackage::APOLLO11__MEMBER:
    {
        _any = ::ecore::as < ::ecore::EObject > (getMember());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Apollo11::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::v_1_0::edate::EdatePackage::APOLLO11__FIRSTMANONMOONDATE:
    {
        ::ecore::EDate _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDate
                > ::fromAny(_newValue, _t0);
        setFirstManOnMoonDate(_t0);
    }
        return;
    case ::v_1_0::edate::EdatePackage::APOLLO11__MEMBER:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::v_1_0::edate::Person > (_t0);
        setMember(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean Apollo11::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::v_1_0::edate::EdatePackage::APOLLO11__FIRSTMANONMOONDATE:
        return getFirstManOnMoonDate()
                != ::ecorecpp::mapping::EDate("1969-07-20T20:18:00.000+0000");
    case ::v_1_0::edate::EdatePackage::APOLLO11__MEMBER:
        return getMember().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Apollo11::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Apollo11::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::v_1_0::edate::EdatePackage::_instance()->getApollo11();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Apollo11::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::v_1_0::edate::EdatePackage::APOLLO11__MEMBER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Apollo11::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::v_1_0::edate::EdatePackage::APOLLO11__MEMBER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

