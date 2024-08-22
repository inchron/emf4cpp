// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/IfStatement.cpp
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

#include "IfStatement.hpp"
#include <xpand3/statement/AbstractStatementWithBody.hpp>
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/statement/IfStatement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/statement/StatementPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(IfStatement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::statement;

// Default constructor
IfStatement::IfStatement()
{
    /*PROTECTED REGION ID(IfStatementImpl__IfStatementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

IfStatement::~IfStatement()
{
    if (m_condition)
    {
        m_condition.reset();
    }
    if (m_elseIf)
    {
        m_elseIf.reset();
    }
}

// Attributes

// References

::xpand3::expression::AbstractExpression_ptr IfStatement::getCondition() const
{
    return m_condition;
}

void IfStatement::setCondition(
        ::xpand3::expression::AbstractExpression_ptr _condition)
{
    if (m_condition)
        m_condition->_setEContainer(IfStatement_ptr(),
                ::xpand3::statement::StatementPackage::_instance()->getIfStatement__condition());
    if (_condition)
        _condition->_setEContainer(_this(),
                ::xpand3::statement::StatementPackage::_instance()->getIfStatement__condition());

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
                ::xpand3::statement::StatementPackage::_instance()->getIfStatement__condition(),
                _old_condition,
                m_condition
            );
        eNotify(&notification);
    }
#endif
}

::xpand3::statement::IfStatement_ptr IfStatement::getElseIf() const
{
    return m_elseIf;
}

void IfStatement::setElseIf(::xpand3::statement::IfStatement_ptr _elseIf)
{
    if (m_elseIf)
        m_elseIf->_setEContainer(IfStatement_ptr(),
                ::xpand3::statement::StatementPackage::_instance()->getIfStatement__elseIf());
    if (_elseIf)
        _elseIf->_setEContainer(_this(),
                ::xpand3::statement::StatementPackage::_instance()->getIfStatement__elseIf());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::statement::IfStatement_ptr _old_elseIf = m_elseIf;
#endif
    m_elseIf = _elseIf;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::statement::StatementPackage::_instance()->getIfStatement__elseIf(),
                _old_elseIf,
                m_elseIf
            );
        eNotify(&notification);
    }
#endif
}

