// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/JavaExtensionImpl.cpp
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

#include "JavaExtension.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/declaration/AbstractNamedDeclaration.hpp>
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

/*PROTECTED REGION ID(JavaExtensionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::declaration;

void JavaExtension::_initialize()
{
    // Supertypes
    ::xpand3::declaration::AbstractNamedDeclaration::_initialize();

    // References
    if (m_javaType)
    {
        m_javaType->_initialize();
    }
    if (m_javaMethod)
    {
        m_javaMethod->_initialize();
    }
    for (const auto &ref : getJavaParamTypes())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(JavaExtensionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject JavaExtension::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getLine());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__START:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getStart());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__END:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getEnd());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getFileName());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__OWNER:
    {
        _any = ::ecore::as < ::ecore::EObject > (getOwner());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__PARAMS:
    {
        _any = getParams().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__ISPRIVATE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isIsPrivate());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__GUARD:
    {
        _any = ::ecore::as < ::ecore::EObject > (getGuard());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__NAME:
    {
        _any = ::ecore::as < ::ecore::EObject > (getName());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVATYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getJavaType());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAMETHOD:
    {
        _any = ::ecore::as < ::ecore::EObject > (getJavaMethod());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAPARAMTYPES:
    {
        _any = getJavaParamTypes().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void JavaExtension::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__LINE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setLine(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__START:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setStart(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__END:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setEnd(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__FILENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setFileName(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__OWNER:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::File > (_t0);
        setOwner(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__PARAMS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getParams().clear();
        getParams().insert_all(*_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__ISPRIVATE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setIsPrivate(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__GUARD:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::expression::AbstractExpression
                > (_t0);
        setGuard(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__NAME:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::Identifier > (_t0);
        setName(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVATYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::Identifier > (_t0);
        setJavaType(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAMETHOD:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::Identifier > (_t0);
        setJavaMethod(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAPARAMTYPES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getJavaParamTypes().clear();
        getJavaParamTypes().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean JavaExtension::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__LINE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getLine());
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__START:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getStart());
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__END:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getEnd());
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__FILENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getFileName());
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__OWNER:
        return getOwner().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__PARAMS:
        return getParams().size() > 0;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__ISPRIVATE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isIsPrivate());
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__GUARD:
        return getGuard().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__NAME:
        return getName().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVATYPE:
        return getJavaType().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAMETHOD:
        return getJavaMethod().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAPARAMTYPES:
        return getJavaParamTypes().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void JavaExtension::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr JavaExtension::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::xpand3::declaration::DeclarationPackage::_instance()->getJavaExtension();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void JavaExtension::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__OWNER:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__PARAMS:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__GUARD:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__NAME:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVATYPE:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAMETHOD:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAPARAMTYPES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void JavaExtension::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__OWNER:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__PARAMS:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__GUARD:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__NAME:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVATYPE:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAMETHOD:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAPARAMTYPES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

