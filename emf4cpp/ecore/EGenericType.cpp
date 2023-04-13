// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EGenericType.cpp
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

#include "EGenericType.hpp"
#include <ecore/EGenericType.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EGenericType.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EGenericType::EGenericType()
{
    /*PROTECTED REGION ID(EGenericTypeImpl__EGenericTypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EGenericType::~EGenericType()
{
    if (m_eUpperBound)
    {
        m_eUpperBound.reset();
    }
    if (m_eLowerBound)
    {
        m_eLowerBound.reset();
    }
}

// Attributes

// References

::ecore::EGenericType_ptr EGenericType::getEUpperBound() const
{
    return m_eUpperBound;
}

void EGenericType::setEUpperBound(::ecore::EGenericType_ptr _eUpperBound)
{
    if (m_eUpperBound)
        m_eUpperBound->_setEContainer(EGenericType_ptr(),
                ::ecore::EcorePackage::_instance()->getEGenericType__eUpperBound());
    if (_eUpperBound)
        _eUpperBound->_setEContainer(_this(),
                ::ecore::EcorePackage::_instance()->getEGenericType__eUpperBound());

#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EGenericType_ptr _old_eUpperBound = m_eUpperBound;
#endif
    m_eUpperBound = _eUpperBound;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEGenericType__eUpperBound(),
                _old_eUpperBound,
                m_eUpperBound
            );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& EGenericType::getETypeArguments() const
{
    if (!m_eTypeArguments)
        return const_cast< EGenericType* >(this)->getETypeArguments();

    return *m_eTypeArguments;
}

::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& EGenericType::getETypeArguments()
{
    /*PROTECTED REGION ID(EGenericType__getETypeArguments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eTypeArguments)
        m_eTypeArguments.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EGenericType_ptr, -1, true, false >(this,
                        ::ecore::EcorePackage::_instance()->getEGenericType__eTypeArguments()));
    /*PROTECTED REGION END*/
    return *m_eTypeArguments;
}

::ecore::EClassifier_ptr EGenericType::getERawType() const
{
    return m_eRawType.lock();
}

void EGenericType::setERawType(::ecore::EClassifier_ptr _eRawType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EClassifier_ptr _old_eRawType = m_eRawType.lock();
#endif
    m_eRawType = _eRawType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEGenericType__eRawType(),
                _old_eRawType,
                m_eRawType.lock()
            );
        eNotify(&notification);
    }
#endif
}

::ecore::EGenericType_ptr EGenericType::getELowerBound() const
{
    return m_eLowerBound;
}

void EGenericType::setELowerBound(::ecore::EGenericType_ptr _eLowerBound)
{
    if (m_eLowerBound)
        m_eLowerBound->_setEContainer(EGenericType_ptr(),
                ::ecore::EcorePackage::_instance()->getEGenericType__eLowerBound());
    if (_eLowerBound)
        _eLowerBound->_setEContainer(_this(),
                ::ecore::EcorePackage::_instance()->getEGenericType__eLowerBound());

#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EGenericType_ptr _old_eLowerBound = m_eLowerBound;
#endif
    m_eLowerBound = _eLowerBound;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEGenericType__eLowerBound(),
                _old_eLowerBound,
                m_eLowerBound
            );
        eNotify(&notification);
    }
#endif
}

::ecore::ETypeParameter_ptr EGenericType::getETypeParameter() const
{
    return m_eTypeParameter.lock();
}

void EGenericType::setETypeParameter(
        ::ecore::ETypeParameter_ptr _eTypeParameter)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::ETypeParameter_ptr _old_eTypeParameter = m_eTypeParameter.lock();
#endif
    m_eTypeParameter = _eTypeParameter;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEGenericType__eTypeParameter(),
                _old_eTypeParameter,
                m_eTypeParameter.lock()
            );
        eNotify(&notification);
    }
#endif
}

::ecore::EClassifier_ptr EGenericType::getEClassifier() const
{
    return m_eClassifier.lock();
}

void EGenericType::setEClassifier(::ecore::EClassifier_ptr _eClassifier)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EClassifier_ptr _old_eClassifier = m_eClassifier.lock();
#endif
    m_eClassifier = _eClassifier;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEGenericType__eClassifier(),
                _old_eClassifier,
                m_eClassifier.lock()
            );
        eNotify(&notification);
    }
#endif
}

