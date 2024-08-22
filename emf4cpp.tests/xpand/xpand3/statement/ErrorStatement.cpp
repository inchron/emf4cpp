// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/ErrorStatement.cpp
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

#include "ErrorStatement.hpp"
#include <xpand3/statement/AbstractStatement.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/statement/StatementPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ErrorStatement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::statement;

// Default constructor
ErrorStatement::ErrorStatement()
{
    /*PROTECTED REGION ID(ErrorStatementImpl__ErrorStatementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ErrorStatement::~ErrorStatement()
{
    if (m_message)
    {
        m_message.reset();
    }
}

// Attributes

// References

::xpand3::expression::AbstractExpression_ptr ErrorStatement::getMessage() const
{
    return m_message;
}

void ErrorStatement::setMessage(
        ::xpand3::expression::AbstractExpression_ptr _message)
{
    if (m_message)
        m_message->_setEContainer(ErrorStatement_ptr(),
                ::xpand3::statement::StatementPackage::_instance()->getErrorStatement__message());
    if (_message)
        _message->_setEContainer(_this(),
                ::xpand3::statement::StatementPackage::_instance()->getErrorStatement__message());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::expression::AbstractExpression_ptr _old_message = m_message;
#endif
    m_message = _message;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::statement::StatementPackage::_instance()->getErrorStatement__message(),
                _old_message,
                m_message
            );
        eNotify(&notification);
    }
#endif
}

