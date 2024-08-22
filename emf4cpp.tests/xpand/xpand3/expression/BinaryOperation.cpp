// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/BinaryOperation.cpp
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

#include "BinaryOperation.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/expression/ExpressionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(BinaryOperation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::expression;

// Default constructor
BinaryOperation::BinaryOperation()
{
    /*PROTECTED REGION ID(BinaryOperationImpl__BinaryOperationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

BinaryOperation::~BinaryOperation()
{
    if (m_left)
    {
        m_left.reset();
    }
    if (m_right)
    {
        m_right.reset();
    }
    if (m_operator)
    {
        m_operator.reset();
    }
}

// Attributes

// References

::xpand3::expression::AbstractExpression_ptr BinaryOperation::getLeft() const
{
    return m_left;
}

void BinaryOperation::setLeft(
        ::xpand3::expression::AbstractExpression_ptr _left)
{
    if (m_left)
        m_left->_setEContainer(BinaryOperation_ptr(),
                ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__left());
    if (_left)
        _left->_setEContainer(_this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__left());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::expression::AbstractExpression_ptr _old_left = m_left;
#endif
    m_left = _left;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__left(),
                _old_left,
                m_left
            );
        eNotify(&notification);
    }
#endif
}

::xpand3::expression::AbstractExpression_ptr BinaryOperation::getRight() const
{
    return m_right;
}

void BinaryOperation::setRight(
        ::xpand3::expression::AbstractExpression_ptr _right)
{
    if (m_right)
        m_right->_setEContainer(BinaryOperation_ptr(),
                ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__right());
    if (_right)
        _right->_setEContainer(_this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__right());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::expression::AbstractExpression_ptr _old_right = m_right;
#endif
    m_right = _right;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__right(),
                _old_right,
                m_right
            );
        eNotify(&notification);
    }
#endif
}

::xpand3::Identifier_ptr BinaryOperation::getOperator() const
{
    return m_operator;
}

void BinaryOperation::setOperator(::xpand3::Identifier_ptr _operator)
{
    if (m_operator)
        m_operator->_setEContainer(BinaryOperation_ptr(),
                ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__operator());
    if (_operator)
        _operator->_setEContainer(_this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__operator());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::Identifier_ptr _old_operator = m_operator;
#endif
    m_operator = _operator;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getBinaryOperation__operator(),
                _old_operator,
                m_operator
            );
        eNotify(&notification);
    }
#endif
}

