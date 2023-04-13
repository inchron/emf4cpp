// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/base2/Base20.cpp
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

#include "Base20.hpp"
#include <base/base1/Base10.hpp>
#include <base/base1/Base11.hpp>
#include <derived/Derived02.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "base/base1/base2/Base2Package.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Base20.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::base::base1::base2;

// Default constructor
Base20::Base20()
{
    /*PROTECTED REGION ID(Base20Impl__Base20Impl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Base20::~Base20()
{
}

// Attributes

::ecore::EInt Base20::getValBase20() const
{
    return m_valBase20;
}

void Base20::setValBase20(::ecore::EInt _valBase20)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_valBase20 = m_valBase20;
#endif
    m_valBase20 = _valBase20;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::base::base1::base2::Base2Package::_instance()->getBase20__valBase20(),
                _old_valBase20,
                m_valBase20
            );
        eNotify(&notification);
    }
#endif
}

// References

