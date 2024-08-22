// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/IfExpression.cpp
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

#include "IfExpression.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/expression/ExpressionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(IfExpression.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::expression;

// Default constructor
IfExpression::IfExpression()
{
    /*PROTECTED REGION ID(IfExpressionImpl__IfExpressionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

IfExpression::~IfExpression()
{
    if (m_condition)
    {
        m_condition.reset();
    }
    if (m_thenPart)
    {
        m_thenPart.reset();
    }
    if (m_elsePart)
    {
        m_elsePart.reset();
    }
}

// Attributes

// References

::xpand3::expression::AbstractExpression_ptr IfExpression::getCondition() const
{
    return m_condition;
}

void IfExpression::setCondition(
        ::xpand3::expression::AbstractExpression_ptr _condition)
{
    if (m_condition)
        m_condition->_setEContainer(IfExpression_ptr(),
                ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__condition());
    if (_condition)
        _condition->_setEContainer(_this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__condition());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::expression::AbstractExpression_ptr _old_condition = m_condition;
#endif
    m_condition = _condition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__condition(),
                _old_condition,
                m_condition
            );
        eNotify(&notification);
    }
#endif
}

::xpand3::expression::AbstractExpression_ptr IfExpression::getThenPart() const
{
    return m_thenPart;
}

void IfExpression::setThenPart(
        ::xpand3::expression::AbstractExpression_ptr _thenPart)
{
    if (m_thenPart)
        m_thenPart->_setEContainer(IfExpression_ptr(),
                ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__thenPart());
    if (_thenPart)
        _thenPart->_setEContainer(_this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__thenPart());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::expression::AbstractExpression_ptr _old_thenPart = m_thenPart;
#endif
    m_thenPart = _thenPart;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__thenPart(),
                _old_thenPart,
                m_thenPart
            );
        eNotify(&notification);
    }
#endif
}

::xpand3::expression::AbstractExpression_ptr IfExpression::getElsePart() const
{
    return m_elsePart;
}

void IfExpression::setElsePart(
        ::xpand3::expression::AbstractExpression_ptr _elsePart)
{
    if (m_elsePart)
        m_elsePart->_setEContainer(IfExpression_ptr(),
                ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__elsePart());
    if (_elsePart)
        _elsePart->_setEContainer(_this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__elsePart());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::expression::AbstractExpression_ptr _old_elsePart = m_elsePart;
#endif
    m_elsePart = _elsePart;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getIfExpression__elsePart(),
                _old_elsePart,
                m_elsePart
            );
        eNotify(&notification);
    }
#endif
}

