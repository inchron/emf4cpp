// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * derived/Derived02.cpp
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

#include "Derived02.hpp"
#include <derived/Derived01.hpp>
#include <derived/Derived02.hpp>
#include <base/Base01.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "derived/DerivedPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Derived02.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::derived;

// Default constructor
Derived02::Derived02()
{
    /*PROTECTED REGION ID(Derived02Impl__Derived02Impl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Derived02::~Derived02()
{
}

// Attributes

::ecore::EInt Derived02::getValDerived02() const
{
    return m_valDerived02;
}

void Derived02::setValDerived02(::ecore::EInt _valDerived02)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_valDerived02 = m_valDerived02;
#endif
    m_valDerived02 = _valDerived02;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::derived::DerivedPackage::_instance()->getDerived02__valDerived02(),
                _old_valDerived02,
                m_valDerived02
            );
        eNotify(&notification);
    }
#endif
}

// References

::base::Base01_ptr Derived02::getBase01ref() const
{
    return m_base01ref.lock();
}

::base::Base01_ptr Derived02::basicgetBase01ref()
{
    return m_base01ref.lock();
}

void Derived02::basicsetBase01ref(::base::Base01_ptr _base01ref)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::base::Base01_ptr _old_base01ref = m_base01ref.lock();
#endif
    m_base01ref = _base01ref;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::derived::DerivedPackage::_instance()->getDerived02__base01ref(),
                _old_base01ref,
                m_base01ref.lock()
            );
        eNotify(&notification);
    }
#endif
}

void Derived02::setBase01ref(::base::Base01_ptr _base01ref)
{
    ::base::Base01_ptr _old_base01ref = m_base01ref.lock();
    if (_base01ref != _old_base01ref)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_base01ref)
        {
            _old_base01ref->::ecore::EObject::_inverseRemove(
                    ::base::BasePackage::_instance()->getBase01__derived02ref(),
                    _this);
        }
        if (_base01ref && ::base::BasePackage::_instance())
        {
            _base01ref->::ecore::EObject::_inverseAdd(
                    ::base::BasePackage::_instance()->getBase01__derived02ref(),
                    _this);
        }
        basicsetBase01ref(_base01ref);
    }
}

