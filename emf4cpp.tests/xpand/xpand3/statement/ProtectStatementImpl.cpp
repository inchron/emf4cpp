// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ProtectStatementImpl.cpp
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

#include "ProtectStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProtectStatementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::statement;

void ProtectStatement::_initialize()
{
    // Supertypes
    ::xpand3::statement::AbstractStatementWithBody::_initialize();

    // References
    if (m_commentStart)
    {
        m_commentStart->_initialize();
    }
    if (m_commentEnd)
    {
        m_commentEnd->_initialize();
    }
    if (m_id)
    {
        m_id->_initialize();
    }

    /*PROTECTED REGION ID(ProtectStatementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProtectStatement::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getLine());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__START:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getStart());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__END:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getEnd());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getFileName());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__BODY:
    {
        _any = getBody().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART:
    {
        _any = ::ecore::as < ::ecore::EObject > (getCommentStart());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND:
    {
        _any = ::ecore::as < ::ecore::EObject > (getCommentEnd());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID:
    {
        _any = ::ecore::as < ::ecore::EObject > (getId());
    }
        return _any;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__DISABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isDisable());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void ProtectStatement::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__LINE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setLine(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__START:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setStart(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__END:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setEnd(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__FILENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setFileName(_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__BODY:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getBody().clear();
        getBody().insert_all(*_t0);
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::expression::AbstractExpression
                > (_t0);
        setCommentStart(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::expression::AbstractExpression
                > (_t0);
        setCommentEnd(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::xpand3::expression::AbstractExpression
                > (_t0);
        setId(_t1);
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__DISABLE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setDisable(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean ProtectStatement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__LINE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getLine());
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__START:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getStart());
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__END:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getEnd());
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__FILENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getFileName());
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__BODY:
        return getBody().size() > 0;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART:
        return getCommentStart().get() != nullptr;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND:
        return getCommentEnd().get() != nullptr;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID:
        return getId().get() != nullptr;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__DISABLE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isDisable());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void ProtectStatement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr ProtectStatement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::xpand3::statement::StatementPackage::_instance()->getProtectStatement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProtectStatement::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__BODY:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProtectStatement::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__BODY:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND:
    {
    }
        return;
    case ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

