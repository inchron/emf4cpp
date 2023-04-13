// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/LeftHand.cpp
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

#include "LeftHand.hpp"
#include <eopposite/NamedObject.hpp>
#include <eopposite/RightHand.hpp>
#include <eopposite/RightMultiple.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "eopposite/EoppositePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(LeftHand.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::eopposite;

// Default constructor
LeftHand::LeftHand()
{
    /*PROTECTED REGION ID(LeftHandImpl__LeftHandImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

LeftHand::~LeftHand()
{
}

// Attributes

// References

::eopposite::RightHand_ptr LeftHand::getRightee() const
{
    return m_rightee.lock();
}

::eopposite::RightHand_ptr LeftHand::basicgetRightee()
{
    return m_rightee.lock();
}

void LeftHand::basicsetRightee(::eopposite::RightHand_ptr _rightee)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::eopposite::RightHand_ptr _old_rightee = m_rightee.lock();
#endif
    m_rightee = _rightee;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::eopposite::EoppositePackage::_instance()->getLeftHand__rightee(),
                _old_rightee,
                m_rightee.lock()
            );
        eNotify(&notification);
    }
#endif
}

void LeftHand::setRightee(::eopposite::RightHand_ptr _rightee)
{
    ::eopposite::RightHand_ptr _old_rightee = m_rightee.lock();
    if (_rightee != _old_rightee)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_rightee)
        {
            _old_rightee->::ecore::EObject::_inverseRemove(
                    ::eopposite::EoppositePackage::_instance()->getRightHand__leftee(),
                    _this);
        }
        if (_rightee && ::eopposite::EoppositePackage::_instance())
        {
            _rightee->::ecore::EObject::_inverseAdd(
                    ::eopposite::EoppositePackage::_instance()->getRightHand__leftee(),
                    _this);
        }
        basicsetRightee(_rightee);
    }
}

::eopposite::RightMultiple_ptr LeftHand::getRightMultiple() const
{
    return m_rightMultiple.lock();
}

::eopposite::RightMultiple_ptr LeftHand::basicgetRightMultiple()
{
    return m_rightMultiple.lock();
}

void LeftHand::basicsetRightMultiple(
        ::eopposite::RightMultiple_ptr _rightMultiple)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::eopposite::RightMultiple_ptr _old_rightMultiple = m_rightMultiple.lock();
#endif
    m_rightMultiple = _rightMultiple;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::eopposite::EoppositePackage::_instance()->getLeftHand__rightMultiple(),
                _old_rightMultiple,
                m_rightMultiple.lock()
            );
        eNotify(&notification);
    }
#endif
}

void LeftHand::setRightMultiple(::eopposite::RightMultiple_ptr _rightMultiple)
{
    ::eopposite::RightMultiple_ptr _old_rightMultiple = m_rightMultiple.lock();
    if (_rightMultiple != _old_rightMultiple)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_rightMultiple)
        {
            _old_rightMultiple->::ecore::EObject::_inverseRemove(
                    ::eopposite::EoppositePackage::_instance()->getRightMultiple__leftees(),
                    _this);
        }
        if (_rightMultiple && ::eopposite::EoppositePackage::_instance())
        {
            _rightMultiple->::ecore::EObject::_inverseAdd(
                    ::eopposite::EoppositePackage::_instance()->getRightMultiple__leftees(),
                    _this);
        }
        basicsetRightMultiple(_rightMultiple);
    }
}

