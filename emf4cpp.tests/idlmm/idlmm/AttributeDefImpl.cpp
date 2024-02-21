// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/AttributeDefImpl.cpp
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

#include "AttributeDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>
#include <idlmm/ExceptionDef.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AttributeDefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

void AttributeDef::_initialize()
{
    // Supertypes
    ::idlmm::Contained::_initialize();
    ::idlmm::Typed::_initialize();

    // References

    /*PROTECTED REGION ID(AttributeDefImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AttributeDef::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getIdentifier());
    }
        return _any;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__REPOSITORYID:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getRepositoryId());
    }
        return _any;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__VERSION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getVersion());
    }
        return _any;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__ABSOLUTENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getAbsoluteName());
    }
        return _any;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__DEFINEDIN:
    {
        _any = ::ecore::as < ::ecore::EObject > (getDefinedIn());
    }
        return _any;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__CONTAINEDTYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getContainedType());
    }
        return _any;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__SHAREDTYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getSharedType());
    }
        return _any;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__GETRAISES:
    {
        _any = getGetRaises().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__SETRAISES:
    {
        _any = getSetRaises().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__ISREADONLY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isIsReadonly());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void AttributeDef::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__IDENTIFIER:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setIdentifier(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__REPOSITORYID:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setRepositoryId(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__VERSION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setVersion(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__ABSOLUTENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setAbsoluteName(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__DEFINEDIN:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::Container > (_t0);
        setDefinedIn(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__CONTAINEDTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::IDLType > (_t0);
        setContainedType(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__SHAREDTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::TypedefDef > (_t0);
        setSharedType(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__GETRAISES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getGetRaises().clear();
        getGetRaises().insert_all(*_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__SETRAISES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getSetRaises().clear();
        getSetRaises().insert_all(*_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__ISREADONLY:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setIsReadonly(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean AttributeDef::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getIdentifier());
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__REPOSITORYID:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getRepositoryId());
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__VERSION:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getVersion());
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__ABSOLUTENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getAbsoluteName());
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__DEFINEDIN:
        return getDefinedIn().get() != nullptr;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__CONTAINEDTYPE:
        return getContainedType().get() != nullptr;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__SHAREDTYPE:
        return getSharedType().get() != nullptr;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__GETRAISES:
        return getGetRaises().size() > 0;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__SETRAISES:
        return getSetRaises().size() > 0;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__ISREADONLY:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isIsReadonly());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void AttributeDef::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr AttributeDef::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::idlmm::IdlmmPackage::_instance()->getAttributeDef();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AttributeDef::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__DEFINEDIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::idlmm::Container_ptr _t1 = std::dynamic_pointer_cast
                < ::idlmm::Container > (_t0);

        ::idlmm::Container_ptr _old_definedIn = getDefinedIn();
        if (_old_definedIn && _old_definedIn != _t0)
        {
            ::ecore::EJavaObject _this = ::ecore::EObject::_this();
            _old_definedIn->::ecore::EObject::_inverseRemove(
                    ::idlmm::IdlmmPackage::_instance()->getContainer__contains(),
                    _this);
        }

        // set reference
        basicsetDefinedIn(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__CONTAINEDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__SHAREDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__GETRAISES:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__SETRAISES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AttributeDef::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__DEFINEDIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::idlmm::Container_ptr _t1 = std::dynamic_pointer_cast
                < ::idlmm::Container > (_t0);

        // set reference
        if (basicgetDefinedIn() == _t1)
            basicsetDefinedIn(nullptr);
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__CONTAINEDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__SHAREDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__GETRAISES:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::ATTRIBUTEDEF__SETRAISES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

