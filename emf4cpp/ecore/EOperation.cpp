// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EOperation.cpp
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

#include "EOperation.hpp"
#include <ecore/ETypedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClass.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EOperation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EOperation::EOperation()
{
    /*PROTECTED REGION ID(EOperationImpl__EOperationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EOperation::~EOperation()
{
}

// Attributes

// References

::ecore::EClass_ptr EOperation::getEContainingClass() const
{
    return m_eContainingClass.lock();
}

::ecore::EClass_ptr EOperation::basicgetEContainingClass()
{
    return m_eContainingClass.lock();
}

void EOperation::basicsetEContainingClass(::ecore::EClass_ptr _eContainingClass)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EClass_ptr _old_eContainingClass = m_eContainingClass.lock();
#endif
    m_eContainingClass = _eContainingClass;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEOperation__eContainingClass(),
                _old_eContainingClass,
                m_eContainingClass.lock()
            );
        eNotify(&notification);
    }
#endif
}

void EOperation::setEContainingClass(::ecore::EClass_ptr _eContainingClass)
{
    ::ecore::EClass_ptr _old_eContainingClass = m_eContainingClass.lock();
    if (_eContainingClass != _old_eContainingClass)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_eContainingClass)
        {
            _old_eContainingClass->::ecore::EObject::_inverseRemove(
                    ::ecore::EcorePackage::_instance()->getEClass__eOperations(),
                    _this);
        }
        if (_eContainingClass && ::ecore::EcorePackage::_instance())
        {
            _eContainingClass->::ecore::EObject::_inverseAdd(
                    ::ecore::EcorePackage::_instance()->getEClass__eOperations(),
                    _this);
        }
        basicsetEContainingClass(_eContainingClass);
    }
}

const ::ecorecpp::mapping::EList< ::ecore::ETypeParameter_ptr >& EOperation::getETypeParameters() const
{
    if (!m_eTypeParameters)
        return const_cast< EOperation* >(this)->getETypeParameters();

    return *m_eTypeParameters;
}

::ecorecpp::mapping::EList< ::ecore::ETypeParameter_ptr >& EOperation::getETypeParameters()
{
    /*PROTECTED REGION ID(EOperation__getETypeParameters) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eTypeParameters)
        m_eTypeParameters.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::ETypeParameter_ptr, -1, true, false >(this,
                        ::ecore::EcorePackage::_instance()->getEOperation__eTypeParameters()));
    /*PROTECTED REGION END*/
    return *m_eTypeParameters;
}

const ::ecorecpp::mapping::EList< ::ecore::EParameter_ptr >& EOperation::getEParameters() const
{
    if (!m_eParameters)
        return const_cast< EOperation* >(this)->getEParameters();

    return *m_eParameters;
}

::ecorecpp::mapping::EList< ::ecore::EParameter_ptr >& EOperation::getEParameters()
{
    /*PROTECTED REGION ID(EOperation__getEParameters) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eParameters)
        m_eParameters.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EParameter_ptr, -1, true, true >(this,
                        ::ecore::EcorePackage::_instance()->getEOperation__eParameters(),
                        ::ecore::EcorePackage::_instance()->getEParameter__eOperation()));
    /*PROTECTED REGION END*/
    return *m_eParameters;
}

const ::ecorecpp::mapping::EList< ::ecore::EClassifier_ptr >& EOperation::getEExceptions() const
{
    if (!m_eExceptions)
        return const_cast< EOperation* >(this)->getEExceptions();

    return *m_eExceptions;
}

::ecorecpp::mapping::EList< ::ecore::EClassifier_ptr >& EOperation::getEExceptions()
{
    /*PROTECTED REGION ID(EOperation__getEExceptions) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eExceptions)
        m_eExceptions.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EClassifier_ptr, -1, false, false >(this,
                        ::ecore::EcorePackage::_instance()->getEOperation__eExceptions()));
    /*PROTECTED REGION END*/
    return *m_eExceptions;
}

const ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& EOperation::getEGenericExceptions() const
{
    if (!m_eGenericExceptions)
        return const_cast< EOperation* >(this)->getEGenericExceptions();

    return *m_eGenericExceptions;
}

::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& EOperation::getEGenericExceptions()
{
    /*PROTECTED REGION ID(EOperation__getEGenericExceptions) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eGenericExceptions)
        m_eGenericExceptions.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EGenericType_ptr, -1, true, false >(this,
                        ::ecore::EcorePackage::_instance()->getEOperation__eGenericExceptions()));
    /*PROTECTED REGION END*/
    return *m_eGenericExceptions;
}

