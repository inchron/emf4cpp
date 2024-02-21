// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/OperationDefImpl.cpp
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

#include "OperationDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>
#include <idlmm/ParameterDef.hpp>
#include <idlmm/ExceptionDef.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(OperationDefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

void OperationDef::_initialize()
{
    // Supertypes
    ::idlmm::Contained::_initialize();
    ::idlmm::Typed::_initialize();

    // References
    for (const auto &ref : getParameters())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(OperationDefImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject OperationDef::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::OPERATIONDEF__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getIdentifier());
    }
        return _any;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__REPOSITORYID:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getRepositoryId());
    }
        return _any;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__VERSION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getVersion());
    }
        return _any;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__ABSOLUTENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getAbsoluteName());
    }
        return _any;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__DEFINEDIN:
    {
        _any = ::ecore::as < ::ecore::EObject > (getDefinedIn());
    }
        return _any;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CONTAINEDTYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getContainedType());
    }
        return _any;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__SHAREDTYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getSharedType());
    }
        return _any;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__PARAMETERS:
    {
        _any = getParameters().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__ISONEWAY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isIsOneway());
    }
        return _any;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CONTEXTS:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(getContexts().size());
        for (size_t _i = 0; _i < getContexts().size(); _i++)
            ::ecorecpp::mapping::any_traits < ::ecore::EString
                    > ::toAny(_anys[_i], getContexts()[_i]);
        _any = _anys;
    }
        return _any;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CANRAISE:
    {
        _any = getCanRaise().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void OperationDef::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::OPERATIONDEF__IDENTIFIER:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setIdentifier(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__REPOSITORYID:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setRepositoryId(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__VERSION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setVersion(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__ABSOLUTENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setAbsoluteName(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__DEFINEDIN:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::Container > (_t0);
        setDefinedIn(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CONTAINEDTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::IDLType > (_t0);
        setContainedType(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__SHAREDTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::TypedefDef > (_t0);
        setSharedType(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__PARAMETERS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getParameters().clear();
        getParameters().insert_all(*_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__ISONEWAY:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setIsOneway(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CONTEXTS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < std::vector
                < ::ecorecpp::mapping::any >> (_newValue);
        std::vector < ::ecore::EString > _t1;
        _t1.reserve(_t0.size());
        for (const auto &anyValue : _t0)
        {
            ecore::EString value;
            ::ecorecpp::mapping::any_traits < ecore::EString
                    > ::fromAny(anyValue, value);
            _t1.push_back(value);
        }
        setContexts (_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CANRAISE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getCanRaise().clear();
        getCanRaise().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean OperationDef::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::OPERATIONDEF__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getIdentifier());
    case ::idlmm::IdlmmPackage::OPERATIONDEF__REPOSITORYID:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getRepositoryId());
    case ::idlmm::IdlmmPackage::OPERATIONDEF__VERSION:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getVersion());
    case ::idlmm::IdlmmPackage::OPERATIONDEF__ABSOLUTENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getAbsoluteName());
    case ::idlmm::IdlmmPackage::OPERATIONDEF__DEFINEDIN:
        return getDefinedIn().get() != nullptr;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CONTAINEDTYPE:
        return getContainedType().get() != nullptr;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__SHAREDTYPE:
        return getSharedType().get() != nullptr;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__PARAMETERS:
        return getParameters().size() > 0;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__ISONEWAY:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isIsOneway());
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CONTEXTS:
        return getContexts().size() > 0;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CANRAISE:
        return getCanRaise().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void OperationDef::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr OperationDef::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::idlmm::IdlmmPackage::_instance()->getOperationDef();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void OperationDef::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::OPERATIONDEF__DEFINEDIN:
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
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CONTAINEDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__SHAREDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__PARAMETERS:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CANRAISE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void OperationDef::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::OPERATIONDEF__DEFINEDIN:
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
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CONTAINEDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__SHAREDTYPE:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__PARAMETERS:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::OPERATIONDEF__CANRAISE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

