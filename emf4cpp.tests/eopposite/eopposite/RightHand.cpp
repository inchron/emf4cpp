// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/RightHand.cpp
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

#include "RightHand.hpp"
#include <eopposite/NamedObject.hpp>
#include <eopposite/LeftHand.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "eopposite/EoppositePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RightHand.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::eopposite;

// Default constructor
RightHand::RightHand()
{
    /*PROTECTED REGION ID(RightHandImpl__RightHandImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

RightHand::~RightHand()
{
}

// Attributes

// References

::eopposite::LeftHand_ptr RightHand::getLeftee() const
{
    return m_leftee.lock();
}

::eopposite::LeftHand_ptr RightHand::basicgetLeftee()
{
    return m_leftee.lock();
}

void RightHand::basicsetLeftee(::eopposite::LeftHand_ptr _leftee)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::eopposite::LeftHand_ptr _old_leftee = m_leftee.lock();
#endif
    m_leftee = _leftee;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::eopposite::EoppositePackage::_instance()->getRightHand__leftee(),
                _old_leftee,
                m_leftee.lock()
            );
        eNotify(&notification);
    }
#endif
}

void RightHand::setLeftee(::eopposite::LeftHand_ptr _leftee)
{
    ::eopposite::LeftHand_ptr _old_leftee = m_leftee.lock();
    if (_leftee != _old_leftee)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_leftee)
        {
            _old_leftee->::ecore::EObject::_inverseRemove(
                    ::eopposite::EoppositePackage::_instance()->getLeftHand__rightee(),
                    _this);
        }
        if (_leftee && ::eopposite::EoppositePackage::_instance())
        {
            _leftee->::ecore::EObject::_inverseAdd(
                    ::eopposite::EoppositePackage::_instance()->getLeftHand__rightee(),
                    _this);
        }
        basicsetLeftee(_leftee);
    }
}

