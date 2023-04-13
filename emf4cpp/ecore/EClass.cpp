// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EClass.cpp
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

#include "EClass.hpp"
#include <ecore/EClassifier.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EClass.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EClass::EClass()
{
    /*PROTECTED REGION ID(EClassImpl__EClassImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EClass::~EClass()
{
}

// Attributes

::ecore::EBoolean EClass::isAbstract() const
{
    return m_abstract;
}

void EClass::setAbstract(::ecore::EBoolean _abstract)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_abstract = m_abstract;
#endif
    m_abstract = _abstract;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEClass__abstract(),
                _old_abstract,
                m_abstract
            );
        eNotify(&notification);
    }
#endif
}

::ecore::EBoolean EClass::isInterface() const
{
    return m_interface;
}

void EClass::setInterface(::ecore::EBoolean _interface)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_interface = m_interface;
#endif
    m_interface = _interface;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEClass__interface(),
                _old_interface,
                m_interface
            );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::ecore::EClass_ptr >& EClass::getESuperTypes() const
{
    if (!m_eSuperTypes)
        return const_cast< EClass* >(this)->getESuperTypes();

    return *m_eSuperTypes;
}

::ecorecpp::mapping::EList< ::ecore::EClass_ptr >& EClass::getESuperTypes()
{
    /*PROTECTED REGION ID(EClass__getESuperTypes) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eSuperTypes)
        m_eSuperTypes.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EClass_ptr, -1, false, false >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eSuperTypes()));
    /*PROTECTED REGION END*/
    return *m_eSuperTypes;
}

const ::ecorecpp::mapping::EList< ::ecore::EOperation_ptr >& EClass::getEOperations() const
{
    if (!m_eOperations)
        return const_cast< EClass* >(this)->getEOperations();

    return *m_eOperations;
}

::ecorecpp::mapping::EList< ::ecore::EOperation_ptr >& EClass::getEOperations()
{
    /*PROTECTED REGION ID(EClass__getEOperations) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eOperations)
        m_eOperations.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EOperation_ptr, -1, true, true >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eOperations(),
                        ::ecore::EcorePackage::_instance()->getEOperation__eContainingClass()));
    /*PROTECTED REGION END*/
    return *m_eOperations;
}

const ::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& EClass::getEAllAttributes() const
{
    if (!m_eAllAttributes)
        return const_cast< EClass* >(this)->getEAllAttributes();

    return *m_eAllAttributes;
}

::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& EClass::getEAllAttributes()
{
    /*PROTECTED REGION ID(EClass__getEAllAttributes) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eAllAttributes)
    {
        m_eAllAttributes.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EAttribute_ptr, -1, false, false >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eAllAttributes()));

        for (const auto &esf : getEAllStructuralFeatures())
        {
            if (auto at = ::ecore::as < ::ecore::EAttribute > (esf))
                m_eAllAttributes->push_back(at);
        }
    }
    /*PROTECTED REGION END*/
    return *m_eAllAttributes;
}

const ::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& EClass::getEAllReferences() const
{
    if (!m_eAllReferences)
        return const_cast< EClass* >(this)->getEAllReferences();

    return *m_eAllReferences;
}

::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& EClass::getEAllReferences()
{
    /*PROTECTED REGION ID(EClass__getEAllReferences) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eAllReferences)
    {
        m_eAllReferences.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EReference_ptr, -1, false, false >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eAllReferences()));

        for (const auto &esf : getEAllStructuralFeatures())
        {
            if (auto ref = ::ecore::as < ::ecore::EReference > (esf))
                m_eAllReferences->push_back(ref);
        }
    }
    /*PROTECTED REGION END*/
    return *m_eAllReferences;
}

const ::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& EClass::getEReferences() const
{
    if (!m_eReferences)
        return const_cast< EClass* >(this)->getEReferences();

    return *m_eReferences;
}

::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& EClass::getEReferences()
{
    /*PROTECTED REGION ID(EClass__getEReferences) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eReferences)
    {
        m_eReferences.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EReference_ptr, -1, false, false >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eReferences()));

        for (const auto esf : getEStructuralFeatures())
        {
            if (auto ref = ::ecore::as < ::ecore::EReference > (esf))
                m_eReferences->push_back(ref);
        }
    }
    /*PROTECTED REGION END*/
    return *m_eReferences;
}

const ::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& EClass::getEAttributes() const
{
    if (!m_eAttributes)
        return const_cast< EClass* >(this)->getEAttributes();

    return *m_eAttributes;
}

::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& EClass::getEAttributes()
{
    /*PROTECTED REGION ID(EClass__getEAttributes) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eAttributes)
    {
        m_eAttributes.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EAttribute_ptr, -1, false, false >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eAttributes()));
        for (const auto &esf : getEStructuralFeatures())
        {
            if (auto at = ::ecore::as < ::ecore::EAttribute > (esf))
                m_eAttributes->push_back(at);
        }
    }
    /*PROTECTED REGION END*/
    return *m_eAttributes;
}

const ::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& EClass::getEAllContainments() const
{
    if (!m_eAllContainments)
        return const_cast< EClass* >(this)->getEAllContainments();

    return *m_eAllContainments;
}

::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& EClass::getEAllContainments()
{
    /*PROTECTED REGION ID(EClass__getEAllContainments) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eAllContainments)
    {
        m_eAllContainments.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EReference_ptr, -1, false, false >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eAllContainments()));

        for (const auto &ref : getEAllReferences())
        {
            if (ref->isContainment())
                m_eAllContainments->push_back(ref);
        }
    }
    /*PROTECTED REGION END*/
    return *m_eAllContainments;
}

const ::ecorecpp::mapping::EList< ::ecore::EOperation_ptr >& EClass::getEAllOperations() const
{
    if (!m_eAllOperations)
        return const_cast< EClass* >(this)->getEAllOperations();

    return *m_eAllOperations;
}

::ecorecpp::mapping::EList< ::ecore::EOperation_ptr >& EClass::getEAllOperations()
{
    /*PROTECTED REGION ID(EClass__getEAllOperations) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eAllOperations)
    {
        m_eAllOperations.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EOperation_ptr, -1, false, false >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eAllOperations()));

        for (const auto &superType : getEAllSuperTypes())
        {
            m_eAllOperations->insert_all(superType->getEAllOperations());
        }
        m_eAllOperations->insert_all(getEOperations());
    }
    /*PROTECTED REGION END*/
    return *m_eAllOperations;
}

const ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature_ptr >& EClass::getEAllStructuralFeatures() const
{
    if (!m_eAllStructuralFeatures)
        return const_cast< EClass* >(this)->getEAllStructuralFeatures();

    return *m_eAllStructuralFeatures;
}

::ecorecpp::mapping::EList< ::ecore::EStructuralFeature_ptr >& EClass::getEAllStructuralFeatures()
{
    /*PROTECTED REGION ID(EClass__getEAllStructuralFeatures) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eAllStructuralFeatures)
    {
        m_eAllStructuralFeatures.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EStructuralFeature_ptr, -1, false, false >(
                        this,
                        ::ecore::EcorePackage::_instance()->getEClass__eAllStructuralFeatures()));

        for (auto superType : getESuperTypes())
        {
            m_eAllStructuralFeatures->insert_all(
                    superType->getEAllStructuralFeatures());
        }

        m_eAllStructuralFeatures->insert_all(getEStructuralFeatures());

        for (size_t ind = 0; ind < m_eAllStructuralFeatures->size(); ++ind)
        {
            auto esf = m_eAllStructuralFeatures->get(ind);
            m_eAllStructuralFeaturesMap[esf->getName()] = esf;
            m_eAllStructuralFeaturesIDMap[esf] = ind;
        }
    }
    /*PROTECTED REGION END*/
    return *m_eAllStructuralFeatures;
}

const ::ecorecpp::mapping::EList< ::ecore::EClass_ptr >& EClass::getEAllSuperTypes() const
{
    if (!m_eAllSuperTypes)
        return const_cast< EClass* >(this)->getEAllSuperTypes();

    return *m_eAllSuperTypes;
}

::ecorecpp::mapping::EList< ::ecore::EClass_ptr >& EClass::getEAllSuperTypes()
{
    /*PROTECTED REGION ID(EClass__getEAllSuperTypes) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eAllSuperTypes)
    {
        m_eAllSuperTypes.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EClass_ptr, -1, false, false >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eAllSuperTypes()));

        for (auto superType : getESuperTypes())
        {
            m_eAllSuperTypes->insert_all(superType->getEAllSuperTypes());
            m_eAllSuperTypes->push_back(superType);
        }
    }
    /*PROTECTED REGION END*/
    return *m_eAllSuperTypes;
}

::ecore::EAttribute_ptr EClass::getEIDAttribute() const
{
    return m_eIDAttribute.lock();
}

void EClass::setEIDAttribute(::ecore::EAttribute_ptr _eIDAttribute)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EAttribute_ptr _old_eIDAttribute = m_eIDAttribute.lock();
#endif
    m_eIDAttribute = _eIDAttribute;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEClass__eIDAttribute(),
                _old_eIDAttribute,
                m_eIDAttribute.lock()
            );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature_ptr >& EClass::getEStructuralFeatures() const
{
    if (!m_eStructuralFeatures)
        return const_cast< EClass* >(this)->getEStructuralFeatures();

    return *m_eStructuralFeatures;
}

::ecorecpp::mapping::EList< ::ecore::EStructuralFeature_ptr >& EClass::getEStructuralFeatures()
{
    /*PROTECTED REGION ID(EClass__getEStructuralFeatures) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eStructuralFeatures)
        m_eStructuralFeatures.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EStructuralFeature_ptr, -1, true, true >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eStructuralFeatures(),
                        ::ecore::EcorePackage::_instance()->getEStructuralFeature__eContainingClass()));
    /*PROTECTED REGION END*/
    return *m_eStructuralFeatures;
}

const ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& EClass::getEGenericSuperTypes() const
{
    if (!m_eGenericSuperTypes)
        return const_cast< EClass* >(this)->getEGenericSuperTypes();

    return *m_eGenericSuperTypes;
}

::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& EClass::getEGenericSuperTypes()
{
    /*PROTECTED REGION ID(EClass__getEGenericSuperTypes) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eGenericSuperTypes)
        m_eGenericSuperTypes.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EGenericType_ptr, -1, true, false >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eGenericSuperTypes()));
    /*PROTECTED REGION END*/
    return *m_eGenericSuperTypes;
}

const ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& EClass::getEAllGenericSuperTypes() const
{
    if (!m_eAllGenericSuperTypes)
        return const_cast< EClass* >(this)->getEAllGenericSuperTypes();

    return *m_eAllGenericSuperTypes;
}

::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& EClass::getEAllGenericSuperTypes()
{
    /*PROTECTED REGION ID(EClass__getEAllGenericSuperTypes) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eAllGenericSuperTypes)
    {
        m_eAllGenericSuperTypes.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EGenericType_ptr, -1, false, false >(this,
                        ::ecore::EcorePackage::_instance()->getEClass__eAllGenericSuperTypes()));

        for (auto superType : getESuperTypes())
        {
            m_eAllGenericSuperTypes->insert_all(
                    superType->getEAllGenericSuperTypes());
        }

        m_eAllGenericSuperTypes->insert_all(getEGenericSuperTypes());
    }
    /*PROTECTED REGION END*/
    return *m_eAllGenericSuperTypes;
}

