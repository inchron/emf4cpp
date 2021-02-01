// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/DefinitionAspectImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016-2019 <emf4cpp@inchron.com>
 * Copyright (C) INCHRON AG 2019-2021 <emf4cpp@inchron.com>
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

#include "DefinitionAspect.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/declaration/AbstractAspect.hpp>
#include <xpand3/File.hpp>
#include <xpand3/DeclaredParameter.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DefinitionAspectImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::declaration;

void DefinitionAspect::_initialize()
{
    // Supertypes
    ::xpand3::declaration::AbstractAspect::_initialize();

    // References
    for (const auto &ref : getBody())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(DefinitionAspectImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DefinitionAspect::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getLine());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__START:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getStart());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__END:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getEnd());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getFileName());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__OWNER:
    {
        _any = ::ecore::as < ::ecore::EObject > (getOwner());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__PARAMS:
    {
        _any = getParams().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__ISPRIVATE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isIsPrivate());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__GUARD:
    {
        _any = ::ecore::as < ::ecore::EObject > (getGuard());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__POINTCUT:
    {
        _any = ::ecore::as < ::ecore::EObject > (getPointcut());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__WILDPARAMS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isWildparams());
    }
        return _any;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__BODY:
    {
        _any = getBody().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void DefinitionAspect::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__LINE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setLine(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__START:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setStart(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__END:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setEnd(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__FILENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setFileName(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__OWNER:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::File > (_t0);
        setOwner(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__PARAMS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getParams().clear();
        getParams().insert_all(*_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__ISPRIVATE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setIsPrivate(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__GUARD:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::expression::AbstractExpression
                > (_t0);
        setGuard(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__POINTCUT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::Identifier > (_t0);
        setPointcut(_t1);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__WILDPARAMS:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setWildparams(_t0);
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__BODY:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getBody().clear();
        getBody().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean DefinitionAspect::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__LINE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getLine());
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__START:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getStart());
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__END:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getEnd());
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__FILENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getFileName());
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__OWNER:
        return getOwner().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__PARAMS:
        return getParams().size() > 0;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__ISPRIVATE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isIsPrivate());
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__GUARD:
        return getGuard().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__POINTCUT:
        return getPointcut().get() != nullptr;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__WILDPARAMS:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isWildparams());
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__BODY:
        return getBody().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void DefinitionAspect::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr DefinitionAspect::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::xpand3::declaration::DeclarationPackage::_instance()->getDefinitionAspect();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DefinitionAspect::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__OWNER:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__PARAMS:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__GUARD:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__POINTCUT:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__BODY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DefinitionAspect::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__OWNER:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__PARAMS:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__GUARD:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__POINTCUT:
    {
    }
        return;
    case ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__BODY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

