// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * derived/Derived01.cpp
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

#include "Derived01.hpp"
#include <base/base1/base2/Base20.hpp>
#include <derived/Derived02.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "derived/DerivedPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Derived01.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::derived;

// Default constructor
Derived01::Derived01()
{
    /*PROTECTED REGION ID(Derived01Impl__Derived01Impl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Derived01::~Derived01()
{
}

// Attributes

::ecore::EInt Derived01::getValDerived01() const
{
    return m_valDerived01;
}

void Derived01::setValDerived01(::ecore::EInt _valDerived01)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_valDerived01 = m_valDerived01;
#endif
    m_valDerived01 = _valDerived01;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::derived::DerivedPackage::_instance()->getDerived01__valDerived01(),
                _old_valDerived01,
                m_valDerived01
            );
        eNotify(&notification);
    }
#endif
}

// References

