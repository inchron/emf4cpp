// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EPackage.cpp
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

#include "EPackage.hpp"
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EFactory.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EPackage.cpp) ENABLED START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
using namespace ::ecore;

const std::shared_ptr< ::ecorecpp::ItemProvider >& EPackage::getItemProviderInstance() const
{
    return m_itemProviderInstance;
}

void EPackage::setItemProviderInstance(
        const std::shared_ptr< ::ecorecpp::ItemProvider > &provider)
{
    m_itemProviderInstance = provider;
}

/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EPackage::EPackage()
{
    /*PROTECTED REGION ID(EPackageImpl__EPackageImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EPackage::~EPackage()
{
}

// Attributes

::ecore::EString const& EPackage::getNsURI() const
{
    return m_nsURI;
}

void EPackage::setNsURI(::ecore::EString const &_nsURI)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_nsURI = m_nsURI;
#endif
    m_nsURI = _nsURI;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEPackage__nsURI(),
                _old_nsURI,
                m_nsURI
            );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& EPackage::getNsPrefix() const
{
    return m_nsPrefix;
}

void EPackage::setNsPrefix(::ecore::EString const &_nsPrefix)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_nsPrefix = m_nsPrefix;
#endif
    m_nsPrefix = _nsPrefix;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEPackage__nsPrefix(),
                _old_nsPrefix,
                m_nsPrefix
            );
        eNotify(&notification);
    }
#endif
}

// References

::ecore::EFactory_ptr EPackage::getEFactoryInstance() const
{
    return m_eFactoryInstance.lock();
}

::ecore::EFactory_ptr EPackage::basicgetEFactoryInstance()
{
    return m_eFactoryInstance.lock();
}

void EPackage::basicsetEFactoryInstance(::ecore::EFactory_ptr _eFactoryInstance)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EFactory_ptr _old_eFactoryInstance = m_eFactoryInstance.lock();
#endif
    m_eFactoryInstance = _eFactoryInstance;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEPackage__eFactoryInstance(),
                _old_eFactoryInstance,
                m_eFactoryInstance.lock()
            );
        eNotify(&notification);
    }
#endif
}

void EPackage::setEFactoryInstance(::ecore::EFactory_ptr _eFactoryInstance)
{
    ::ecore::EFactory_ptr _old_eFactoryInstance = m_eFactoryInstance.lock();
    if (_eFactoryInstance != _old_eFactoryInstance)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_eFactoryInstance)
        {
            _old_eFactoryInstance->::ecore::EObject::_inverseRemove(
                    ::ecore::EcorePackage::_instance()->getEFactory__ePackage(),
                    _this);
        }
        if (_eFactoryInstance && ::ecore::EcorePackage::_instance())
        {
            _eFactoryInstance->::ecore::EObject::_inverseAdd(
                    ::ecore::EcorePackage::_instance()->getEFactory__ePackage(),
                    _this);
        }
        basicsetEFactoryInstance(_eFactoryInstance);
    }
}

const ::ecorecpp::mapping::EList< ::ecore::EClassifier_ptr >& EPackage::getEClassifiers() const
{
    if (!m_eClassifiers)
        return const_cast< EPackage* >(this)->getEClassifiers();

    return *m_eClassifiers;
}

::ecorecpp::mapping::EList< ::ecore::EClassifier_ptr >& EPackage::getEClassifiers()
{
    /*PROTECTED REGION ID(EPackage__getEClassifiers) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eClassifiers)
        m_eClassifiers.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EClassifier_ptr, -1, true, true >(this,
                        ::ecore::EcorePackage::_instance()->getEPackage__eClassifiers(),
                        ::ecore::EcorePackage::_instance()->getEClassifier__ePackage()));
    /*PROTECTED REGION END*/
    return *m_eClassifiers;
}

const ::ecorecpp::mapping::EList< ::ecore::EPackage_ptr >& EPackage::getESubpackages() const
{
    if (!m_eSubpackages)
        return const_cast< EPackage* >(this)->getESubpackages();

    return *m_eSubpackages;
}

::ecorecpp::mapping::EList< ::ecore::EPackage_ptr >& EPackage::getESubpackages()
{
    /*PROTECTED REGION ID(EPackage__getESubpackages) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eSubpackages)
        m_eSubpackages.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EPackage_ptr, -1, true, true >(this,
                        ::ecore::EcorePackage::_instance()->getEPackage__eSubpackages(),
                        ::ecore::EcorePackage::_instance()->getEPackage__eSuperPackage()));
    /*PROTECTED REGION END*/
    return *m_eSubpackages;
}

::ecore::EPackage_ptr EPackage::getESuperPackage() const
{
    return m_eSuperPackage.lock();
}

::ecore::EPackage_ptr EPackage::basicgetESuperPackage()
{
    return m_eSuperPackage.lock();
}

void EPackage::basicsetESuperPackage(::ecore::EPackage_ptr _eSuperPackage)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EPackage_ptr _old_eSuperPackage = m_eSuperPackage.lock();
#endif
    m_eSuperPackage = _eSuperPackage;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEPackage__eSuperPackage(),
                _old_eSuperPackage,
                m_eSuperPackage.lock()
            );
        eNotify(&notification);
    }
#endif
}

void EPackage::setESuperPackage(::ecore::EPackage_ptr _eSuperPackage)
{
    ::ecore::EPackage_ptr _old_eSuperPackage = m_eSuperPackage.lock();
    if (_eSuperPackage != _old_eSuperPackage)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_eSuperPackage)
        {
            _old_eSuperPackage->::ecore::EObject::_inverseRemove(
                    ::ecore::EcorePackage::_instance()->getEPackage__eSubpackages(),
                    _this);
        }
        if (_eSuperPackage && ::ecore::EcorePackage::_instance())
        {
            _eSuperPackage->::ecore::EObject::_inverseAdd(
                    ::ecore::EcorePackage::_instance()->getEPackage__eSubpackages(),
                    _this);
        }
        basicsetESuperPackage(_eSuperPackage);
    }
}

