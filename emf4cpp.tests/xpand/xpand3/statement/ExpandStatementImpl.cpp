// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ExpandStatementImpl.cpp
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

#include "ExpandStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ExpandStatementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::statement;

void ExpandStatement::_initialize()
{
    // Supertypes
    ::xpand3::statement::AbstractStatement::_initialize();

    // References
    for (const auto &ref : getParameters())
    {
        ref->_initialize();
    }
    if (m_separator)
    {
        m_separator->_initialize();
    }
    if (m_target)
    {
        m_target->_initialize();
    }
    if (m_definition)
    {
        m_definition->_initialize();
    }

    /*PROTECTED REGION ID(ExpandStatementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ExpandStatement::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getLine());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__START:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getStart());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__END:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getEnd());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getFileName());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__FOREACH:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isForeach());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__PARAMETERS:
    {
        _any = getParameters().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__SEPARATOR:
    {
        _any = ::ecore::as < ::ecore::EObject > (getSeparator());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__TARGET:
    {
        _any = ::ecore::as < ::ecore::EObject > (getTarget());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__DEFINITION:
    {
        _any = ::ecore::as < ::ecore::EObject > (getDefinition());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void ExpandStatement::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__LINE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setLine(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__START:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setStart(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__END:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setEnd(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__FILENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setFileName(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__FOREACH:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setForeach(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__PARAMETERS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getParameters().clear();
        getParameters().insert_all(*_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__SEPARATOR:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::expression::AbstractExpression
                > (_t0);
        setSeparator(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__TARGET:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::expression::AbstractExpression
                > (_t0);
        setTarget(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__DEFINITION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::Identifier > (_t0);
        setDefinition(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean ExpandStatement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__LINE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getLine());
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__START:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getStart());
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__END:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getEnd());
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__FILENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getFileName());
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__FOREACH:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isForeach());
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__PARAMETERS:
        return getParameters().size() > 0;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__SEPARATOR:
        return getSeparator().get() != nullptr;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__TARGET:
        return getTarget().get() != nullptr;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__DEFINITION:
        return getDefinition().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void ExpandStatement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr ExpandStatement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::xpand3::statement::StatementPackage::_instance()->getExpandStatement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ExpandStatement::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__PARAMETERS:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__SEPARATOR:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__TARGET:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__DEFINITION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ExpandStatement::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__PARAMETERS:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__SEPARATOR:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__TARGET:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__DEFINITION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

