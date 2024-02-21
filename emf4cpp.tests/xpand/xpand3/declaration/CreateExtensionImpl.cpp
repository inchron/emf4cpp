// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/CreateExtensionImpl.cpp
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

#include "CreateExtension.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/declaration/Extension.hpp>
#include <xpand3/File.hpp>
#include <xpand3/DeclaredParameter.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CreateExtensionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::declaration;

void CreateExtension::_initialize()
{
    // Supertypes
    ::xpand3::declaration::Extension::_initialize();

    // References

    /*PROTECTED REGION ID(CreateExtensionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CreateExtension::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getLine());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__START:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getStart());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__END:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getEnd());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getFileName());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__OWNER:
    {
        _any = ::ecore::as < ::ecore::EObject > (getOwner());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__PARAMS:
    {
        _any = getParams().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__ISPRIVATE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isIsPrivate());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__GUARD:
    {
        _any = ::ecore::as < ::ecore::EObject > (getGuard());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__NAME:
    {
        _any = ::ecore::as < ::ecore::EObject > (getName());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__CACHED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isCached());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__BODY:
    {
        _any = ::ecore::as < ::ecore::EObject > (getBody());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__RETURNTYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getReturnType());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED:
    {
        _any = ::ecore::as < ::ecore::EObject > (getToBeCreated());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void CreateExtension::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__LINE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setLine(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__START:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setStart(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__END:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setEnd(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__FILENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setFileName(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__OWNER:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::File > (_t0);
        setOwner(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__PARAMS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getParams().clear();
        getParams().insert_all(*_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__ISPRIVATE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setIsPrivate(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__GUARD:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::expression::AbstractExpression
                > (_t0);
        setGuard(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__NAME:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::Identifier > (_t0);
        setName(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__CACHED:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setCached(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__BODY:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::expression::AbstractExpression
                > (_t0);
        setBody(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__RETURNTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::Identifier > (_t0);
        setReturnType(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::DeclaredParameter > (_t0);
        setToBeCreated(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean CreateExtension::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__LINE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getLine());
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__START:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getStart());
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__END:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getEnd());
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__FILENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getFileName());
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__OWNER:
        return getOwner().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__PARAMS:
        return getParams().size() > 0;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__ISPRIVATE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isIsPrivate());
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__GUARD:
        return getGuard().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__NAME:
        return getName().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__CACHED:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isCached());
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__BODY:
        return getBody().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__RETURNTYPE:
        return getReturnType().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED:
        return getToBeCreated().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void CreateExtension::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr CreateExtension::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::xpand3::declaration::DeclarationPackage::_instance()->getCreateExtension();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CreateExtension::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__OWNER:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__PARAMS:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__GUARD:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__NAME:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__BODY:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__RETURNTYPE:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CreateExtension::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__OWNER:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__PARAMS:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__GUARD:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__NAME:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__BODY:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__RETURNTYPE:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

