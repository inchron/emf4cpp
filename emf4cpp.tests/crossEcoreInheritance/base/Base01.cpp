// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/Base01.cpp
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

#include "Base01.hpp"
#include <derived/Derived02.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "base/BasePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Base01.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::base;

// Default constructor
Base01::Base01()
{
    /*PROTECTED REGION ID(Base01Impl__Base01Impl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Base01::~Base01()
{
}

// Attributes

::ecore::EInt Base01::getValBase01() const
{
    return m_valBase01;
}

void Base01::setValBase01(::ecore::EInt _valBase01)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_valBase01 = m_valBase01;
#endif
    m_valBase01 = _valBase01;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::base::BasePackage::_instance()->getBase01__valBase01(),
                _old_valBase01,
                m_valBase01
            );
        eNotify(&notification);
    }
#endif
}

// References

::derived::Derived02_ptr Base01::getDerived02ref() const
{
    return m_derived02ref.lock();
}

::derived::Derived02_ptr Base01::basicgetDerived02ref()
{
    return m_derived02ref.lock();
}

void Base01::basicsetDerived02ref(::derived::Derived02_ptr _derived02ref)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::derived::Derived02_ptr _old_derived02ref = m_derived02ref.lock();
#endif
    m_derived02ref = _derived02ref;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::base::BasePackage::_instance()->getBase01__derived02ref(),
                _old_derived02ref,
                m_derived02ref.lock()
            );
        eNotify(&notification);
    }
#endif
}

void Base01::setDerived02ref(::derived::Derived02_ptr _derived02ref)
{
    ::derived::Derived02_ptr _old_derived02ref = m_derived02ref.lock();
    if (_derived02ref != _old_derived02ref)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_derived02ref)
        {
            _old_derived02ref->::ecore::EObject::_inverseRemove(
                    ::derived::DerivedPackage::_instance()->getDerived02__base01ref(),
                    _this);
        }
        if (_derived02ref && ::derived::DerivedPackage::_instance())
        {
            _derived02ref->::ecore::EObject::_inverseAdd(
                    ::derived::DerivedPackage::_instance()->getDerived02__base01ref(),
                    _this);
        }
        basicsetDerived02ref(_derived02ref);
    }
}

