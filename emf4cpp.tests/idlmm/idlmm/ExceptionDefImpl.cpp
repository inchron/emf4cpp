// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/ExceptionDefImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016-2018 <emf4cpp@inchron.com>
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

#include "ExceptionDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/Field.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ExceptionDefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

void ExceptionDef::_initialize()
{
    // Supertypes
    ::idlmm::Contained::_initialize();

    // References
    for (size_t i = 0; i < m_members->size(); i++)
    {
        (*m_members)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ExceptionDefImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ExceptionDef::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getIdentifier());
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getRepositoryId());
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getVersion());
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getAbsoluteName());
    }
        return _any;
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        _any = ::ecore::as < ::ecore::EObject > (getDefinedIn());
    }
        return _any;
    case ::idlmm::IdlmmPackage::EXCEPTIONDEF__TYPECODE:
    {
        ::ecorecpp::mapping::any_traits < ::idlmm::ETypeCode
                > ::toAny(_any, getTypeCode());
    }
        return _any;
    case ::idlmm::IdlmmPackage::EXCEPTIONDEF__MEMBERS:
    {
        _any = getMembers().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void ExceptionDef::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setIdentifier(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setRepositoryId(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setVersion(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setAbsoluteName(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::idlmm::Container > (_t0);
        setDefinedIn(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::EXCEPTIONDEF__TYPECODE:
    {
        ::idlmm::ETypeCode _t0;
        ::ecorecpp::mapping::any_traits < ::idlmm::ETypeCode
                > ::fromAny(_newValue, _t0);
        setTypeCode(_t0);
    }
        return;
    case ::idlmm::IdlmmPackage::EXCEPTIONDEF__MEMBERS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getMembers().clear();
        getMembers().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ExceptionDef::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getIdentifier());
    case ::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getRepositoryId());
    case ::idlmm::IdlmmPackage::CONTAINED__VERSION:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getVersion());
    case ::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getAbsoluteName());
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
        return getDefinedIn().get() != nullptr;
    case ::idlmm::IdlmmPackage::EXCEPTIONDEF__TYPECODE:
        return ::ecorecpp::mapping::set_traits < ::idlmm::ETypeCode
                > ::is_set(getTypeCode());
    case ::idlmm::IdlmmPackage::EXCEPTIONDEF__MEMBERS:
        return getMembers().size() > 0;

    }
    throw "Error";
}

void ExceptionDef::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ExceptionDef::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::idlmm::IdlmmPackage* >(::idlmm::IdlmmPackage::_instance().get())->getExceptionDef();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ExceptionDef::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::idlmm::Container_ptr _t1 = std::dynamic_pointer_cast
                < ::idlmm::Container > (_t0);

        // set reference
        basicsetDefinedIn(_t1);
    }
        return;
    case ::idlmm::IdlmmPackage::EXCEPTIONDEF__MEMBERS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ExceptionDef::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN:
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
    case ::idlmm::IdlmmPackage::EXCEPTIONDEF__MEMBERS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

