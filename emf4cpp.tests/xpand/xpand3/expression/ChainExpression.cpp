// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/ChainExpression.cpp
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

#include "ChainExpression.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/expression/ExpressionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ChainExpression.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::expression;

// Default constructor
ChainExpression::ChainExpression()
{
    /*PROTECTED REGION ID(ChainExpressionImpl__ChainExpressionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ChainExpression::~ChainExpression()
{
    if (m_first)
    {
        m_first.reset();
    }
    if (m_next)
    {
        m_next.reset();
    }
}

// Attributes

// References

::xpand3::expression::AbstractExpression_ptr ChainExpression::getFirst() const
{
    return m_first;
}

void ChainExpression::setFirst(
        ::xpand3::expression::AbstractExpression_ptr _first)
{
    if (m_first)
        m_first->_setEContainer(ChainExpression_ptr(),
                ::xpand3::expression::ExpressionPackage::_instance()->getChainExpression__first());
    if (_first)
        _first->_setEContainer(_this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getChainExpression__first());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::expression::AbstractExpression_ptr _old_first = m_first;
#endif
    m_first = _first;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getChainExpression__first(),
                _old_first,
                m_first
            );
        eNotify(&notification);
    }
#endif
}

::xpand3::expression::AbstractExpression_ptr ChainExpression::getNext() const
{
    return m_next;
}

void ChainExpression::setNext(
        ::xpand3::expression::AbstractExpression_ptr _next)
{
    if (m_next)
        m_next->_setEContainer(ChainExpression_ptr(),
                ::xpand3::expression::ExpressionPackage::_instance()->getChainExpression__next());
    if (_next)
        _next->_setEContainer(_this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getChainExpression__next());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::expression::AbstractExpression_ptr _old_next = m_next;
#endif
    m_next = _next;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::expression::ExpressionPackage::_instance()->getChainExpression__next(),
                _old_next,
                m_next
            );
        eNotify(&notification);
    }
#endif
}

