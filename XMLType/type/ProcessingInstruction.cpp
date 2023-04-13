// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/ProcessingInstruction.cpp
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

#include "ProcessingInstruction.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "type/TypePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ProcessingInstruction.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::type;

// Default constructor
ProcessingInstruction::ProcessingInstruction()
{
    /*PROTECTED REGION ID(ProcessingInstructionImpl__ProcessingInstructionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ProcessingInstruction::~ProcessingInstruction()
{
}

// Attributes

::type::String ProcessingInstruction::getData() const
{
    return m_data;
}

void ProcessingInstruction::setData(::type::String _data)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_data = m_data;
#endif
    m_data = _data;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::type::TypePackage::_instance()->getProcessingInstruction__data(),
                _old_data,
                m_data
            );
        eNotify(&notification);
    }
#endif
}

::type::String ProcessingInstruction::getTarget() const
{
    return m_target;
}

void ProcessingInstruction::setTarget(::type::String _target)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_target = m_target;
#endif
    m_target = _target;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::type::TypePackage::_instance()->getProcessingInstruction__target(),
                _old_target,
                m_target
            );
        eNotify(&notification);
    }
#endif
}

// References

