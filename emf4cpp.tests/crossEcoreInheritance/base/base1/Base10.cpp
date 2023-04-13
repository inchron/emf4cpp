// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/Base10.cpp
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

#include "Base10.hpp"
#include <base/Base01.hpp>
#include <derived/Derived02.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "base/base1/Base1Package.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Base10.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::base::base1;

// Default constructor
Base10::Base10()
{
    /*PROTECTED REGION ID(Base10Impl__Base10Impl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Base10::~Base10()
{
}

// Attributes

::ecore::EInt Base10::getValBase10() const
{
    return m_valBase10;
}

void Base10::setValBase10(::ecore::EInt _valBase10)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_valBase10 = m_valBase10;
#endif
    m_valBase10 = _valBase10;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::base::base1::Base1Package::_instance()->getBase10__valBase10(),
                _old_valBase10,
                m_valBase10
            );
        eNotify(&notification);
    }
#endif
}

// References

