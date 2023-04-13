// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EParameter.cpp
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

#include "EParameter.hpp"
#include <ecore/ETypedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EParameter.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EParameter::EParameter()
{
    /*PROTECTED REGION ID(EParameterImpl__EParameterImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EParameter::~EParameter()
{
}

// Attributes

// References

::ecore::EOperation_ptr EParameter::getEOperation() const
{
    return m_eOperation.lock();
}

::ecore::EOperation_ptr EParameter::basicgetEOperation()
{
    return m_eOperation.lock();
}

void EParameter::basicsetEOperation(::ecore::EOperation_ptr _eOperation)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EOperation_ptr _old_eOperation = m_eOperation.lock();
#endif
    m_eOperation = _eOperation;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEParameter__eOperation(),
                _old_eOperation,
                m_eOperation.lock()
            );
        eNotify(&notification);
    }
#endif
}

void EParameter::setEOperation(::ecore::EOperation_ptr _eOperation)
{
    ::ecore::EOperation_ptr _old_eOperation = m_eOperation.lock();
    if (_eOperation != _old_eOperation)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_eOperation)
        {
            _old_eOperation->::ecore::EObject::_inverseRemove(
                    ::ecore::EcorePackage::_instance()->getEOperation__eParameters(),
                    _this);
        }
        if (_eOperation && ::ecore::EcorePackage::_instance())
        {
            _eOperation->::ecore::EObject::_inverseAdd(
                    ::ecore::EcorePackage::_instance()->getEOperation__eParameters(),
                    _this);
        }
        basicsetEOperation(_eOperation);
    }
}

