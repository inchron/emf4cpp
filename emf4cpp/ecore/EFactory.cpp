// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EFactory.cpp
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

#include "EFactory.hpp"
#include <ecore/EModelElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EFactory.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EFactory::EFactory()
{
    /*PROTECTED REGION ID(EFactoryImpl__EFactoryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EFactory::~EFactory()
{
}

// Attributes

// References

::ecore::EPackage_ptr EFactory::getEPackage() const
{
    return m_ePackage.lock();
}

::ecore::EPackage_ptr EFactory::basicgetEPackage()
{
    return m_ePackage.lock();
}

void EFactory::basicsetEPackage(::ecore::EPackage_ptr _ePackage)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EPackage_ptr _old_ePackage = m_ePackage.lock();
#endif
    m_ePackage = _ePackage;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEFactory__ePackage(),
                _old_ePackage,
                m_ePackage.lock()
            );
        eNotify(&notification);
    }
#endif
}

void EFactory::setEPackage(::ecore::EPackage_ptr _ePackage)
{
    ::ecore::EPackage_ptr _old_ePackage = m_ePackage.lock();
    if (_ePackage != _old_ePackage)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_ePackage)
        {
            _old_ePackage->::ecore::EObject::_inverseRemove(
                    ::ecore::EcorePackage::_instance()->getEPackage__eFactoryInstance(),
                    _this);
        }
        if (_ePackage && ::ecore::EcorePackage::_instance())
        {
            _ePackage->::ecore::EObject::_inverseAdd(
                    ::ecore::EcorePackage::_instance()->getEPackage__eFactoryInstance(),
                    _this);
        }
        basicsetEPackage(_ePackage);
    }
}

