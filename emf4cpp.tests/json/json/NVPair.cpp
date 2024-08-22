// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/NVPair.cpp
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

#include "NVPair.hpp"
#include <json/Value.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "json/JsonPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(NVPair.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::json;

// Default constructor
NVPair::NVPair()
{
    /*PROTECTED REGION ID(NVPairImpl__NVPairImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

NVPair::~NVPair()
{
    if (m_value)
    {
        m_value.reset();
    }
}

// Attributes

::ecore::EString const& NVPair::getName() const
{
    return m_name;
}

void NVPair::setName(::ecore::EString const &_name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::json::JsonPackage::_instance()->getNVPair__name(),
                _old_name,
                m_name
            );
        eNotify(&notification);
    }
#endif
}

// References

::json::Value_ptr NVPair::getValue() const
{
    return m_value;
}

void NVPair::setValue(::json::Value_ptr _value)
{
    if (m_value)
        m_value->_setEContainer(NVPair_ptr(),
                ::json::JsonPackage::_instance()->getNVPair__value());
    if (_value)
        _value->_setEContainer(_this(),
                ::json::JsonPackage::_instance()->getNVPair__value());

#ifdef ECORECPP_NOTIFICATION_API
    ::json::Value_ptr _old_value = m_value;
#endif
    m_value = _value;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::json::JsonPackage::_instance()->getNVPair__value(),
                _old_value,
                m_value
            );
        eNotify(&notification);
    }
#endif
}

