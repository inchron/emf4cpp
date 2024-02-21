// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/UnionDefImpl.cpp
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

#include "UnionDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/TypedefDef.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/UnionField.hpp>
#include <idlmm/IDLType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(UnionDefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

void UnionDef::_initialize()
{
    // Supertypes
    ::idlmm::TypedefDef::_initialize();

    // References
    for (const auto &ref : getUnionMembers())
    {
        ref->_initialize();
    }
    if (m_containedDiscrim)
    {
        m_containedDiscrim->_initialize();
    }

    /*PROTECTED REGION ID(UnionDefImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject UnionDef::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::UNIONDEF__TYPECODE:
    {
        ::ecorecpp::mapping::any_traits < ::idlmm::ETypeCode
                > ::toAny(_any, getTypeCode());
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getIdentifier());
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__REPOSITORYID:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getRepositoryId());
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__VERSION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getVersion());
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__ABSOLUTENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getAbsoluteName());
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__DEFINEDIN:
    {
        _any = ::ecore::as < ::ecore::EObject > (getDefinedIn());
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
    {
        _any = getUnionMembers().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
    {
        _any = ::ecore::as < ::ecore::EObject > (getContainedDiscrim());
    }
        return _any;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
    {
        _any = ::ecore::as < ::ecore::EObject > (getSharedDiscrim());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void UnionDef::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::UNIONDEF__TYPECODE:
    {
        ::idlmm::ETypeCode _t0;
        ::ecorecpp::mapping::any_traits < ::idlmm::ETypeCode
                > ::fromAny(_newValue, _t0);
        setTypeCode(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__IDENTIFIER:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setIdentifier(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__REPOSITORYID:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setRepositoryId(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__VERSION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setVersion(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__ABSOLUTENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setAbsoluteName(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__DEFINEDIN:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::Container > (_t0);
        setDefinedIn(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getUnionMembers().clear();
        getUnionMembers().insert_all(*_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::IDLType > (_t0);
        setContainedDiscrim(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::TypedefDef > (_t0);
        setSharedDiscrim(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean UnionDef::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::UNIONDEF__TYPECODE:
        return ::ecorecpp::mapping::set_traits < ::idlmm::ETypeCode
                > ::is_set(getTypeCode());
    case ::idlmm::IdlmmPackage::UNIONDEF__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getIdentifier());
    case ::idlmm::IdlmmPackage::UNIONDEF__REPOSITORYID:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getRepositoryId());
    case ::idlmm::IdlmmPackage::UNIONDEF__VERSION:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getVersion());
    case ::idlmm::IdlmmPackage::UNIONDEF__ABSOLUTENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getAbsoluteName());
    case ::idlmm::IdlmmPackage::UNIONDEF__DEFINEDIN:
        return getDefinedIn().get() != nullptr;
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
        return getUnionMembers().size() > 0;
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
        return getContainedDiscrim().get() != nullptr;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
        return getSharedDiscrim().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void UnionDef::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr UnionDef::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::idlmm::IdlmmPackage::_instance()->getUnionDef();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void UnionDef::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::UNIONDEF__DEFINEDIN:
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
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void UnionDef::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::UNIONDEF__DEFINEDIN:
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
    case ::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM:
    {
    }
        return;
    case ::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

