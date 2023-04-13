// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ForEachStatementImpl.cpp
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

#include "ForEachStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ForEachStatementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::statement;

void ForEachStatement::_initialize()
{
    // Supertypes
    ::xpand3::statement::AbstractStatementWithBody::_initialize();

    // References
    if (m_target)
    {
        m_target->_initialize();
    }
    if (m_separator)
    {
        m_separator->_initialize();
    }
    if (m_variable)
    {
        m_variable->_initialize();
    }
    if (m_iteratorName)
    {
        m_iteratorName->_initialize();
    }

    /*PROTECTED REGION ID(ForEachStatementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ForEachStatement::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getLine());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__START:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getStart());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__END:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getEnd());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getFileName());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__BODY:
    {
        _any = getBody().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__TARGET:
    {
        _any = ::ecore::as < ::ecore::EObject > (getTarget());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__SEPARATOR:
    {
        _any = ::ecore::as < ::ecore::EObject > (getSeparator());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__VARIABLE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getVariable());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__ITERATORNAME:
    {
        _any = ::ecore::as < ::ecore::EObject > (getIteratorName());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void ForEachStatement::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__LINE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setLine(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__START:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setStart(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__END:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setEnd(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__FILENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setFileName(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__BODY:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getBody().clear();
        getBody().insert_all(*_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__TARGET:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::expression::AbstractExpression
                > (_t0);
        setTarget(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__SEPARATOR:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::expression::AbstractExpression
                > (_t0);
        setSeparator(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__VARIABLE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::Identifier > (_t0);
        setVariable(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__ITERATORNAME:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::Identifier > (_t0);
        setIteratorName(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean ForEachStatement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__LINE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getLine());
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__START:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getStart());
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__END:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getEnd());
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__FILENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getFileName());
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__BODY:
        return getBody().size() > 0;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__TARGET:
        return getTarget().get() != nullptr;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__SEPARATOR:
        return getSeparator().get() != nullptr;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__VARIABLE:
        return getVariable().get() != nullptr;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__ITERATORNAME:
        return getIteratorName().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void ForEachStatement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr ForEachStatement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::xpand3::statement::StatementPackage::_instance()->getForEachStatement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ForEachStatement::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__BODY:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__TARGET:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__SEPARATOR:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__VARIABLE:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__ITERATORNAME:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ForEachStatement::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__BODY:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__TARGET:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__SEPARATOR:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__VARIABLE:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__ITERATORNAME:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

