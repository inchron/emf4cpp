// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/UnionFieldImpl.cpp
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

#include "UnionField.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(UnionFieldImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

void UnionField::_initialize()
{
    // Supertypes
    ::idlmm::Typed::_initialize();

    // References

    /*PROTECTED REGION ID(UnionFieldImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject UnionField::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::UNIONFIELD__CONTAINEDTYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getContainedType());
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONFIELD__SHAREDTYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getSharedType());
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONFIELD__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getIdentifier());
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONFIELD__LABEL:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(getLabel().size());
        for (size_t _i = 0; _i < getLabel().size(); _i++)
            ::ecorecpp::mapping::any_traits < ::idlmm::EAny
                    > ::toAny(_anys[_i], getLabel()[_i]);
        _any = _anys;
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void UnionField::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::UNIONFIELD__CONTAINEDTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::IDLType > (_t0);
        setContainedType(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONFIELD__SHAREDTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::TypedefDef > (_t0);
        setSharedType(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONFIELD__IDENTIFIER:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setIdentifier(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONFIELD__LABEL:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < std::vector
                < ::ecorecpp::mapping::any >> (_newValue);
        std::vector < ::idlmm::EAny > _t1;
        _t1.reserve(_t0.size());
        for (const auto &anyValue : _t0)
        {
            idlmm::EAny value;
            ::ecorecpp::mapping::any_traits < idlmm::EAny
                    > ::fromAny(anyValue, value);
            _t1.push_back(value);
        }
        setLabel (_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean UnionField::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::UNIONFIELD__CONTAINEDTYPE:
        return getContainedType().get() != nullptr;
    case ::idlmm::IdlmmPackage::UNIONFIELD__SHAREDTYPE:
        return getSharedType().get() != nullptr;
    case ::idlmm::IdlmmPackage::UNIONFIELD__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getIdentifier());
    case ::idlmm::IdlmmPackage::UNIONFIELD__LABEL:
        return getLabel().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void UnionField::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr UnionField::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::idlmm::IdlmmPackage::_instance()->getUnionField();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void UnionField::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::UNIONFIELD__CONTAINEDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONFIELD__SHAREDTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void UnionField::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::UNIONFIELD__CONTAINEDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONFIELD__SHAREDTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

