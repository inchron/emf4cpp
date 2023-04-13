// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/KdmPackageImpl.cpp
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

#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/KdmFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <kdm/core/CorePackage.hpp>
#include <kdm/core/ModelElement.hpp>

using namespace ::kdm::kdm;

KdmPackage::KdmPackage()
{
    m_Annotation__text = ::ecore::make< ::ecore::EAttribute >();
    m_AnnotationEClass = ::ecore::make< ::ecore::EClass >();
    m_Attribute__tag = ::ecore::make< ::ecore::EAttribute >();
    m_Attribute__value = ::ecore::make< ::ecore::EAttribute >();
    m_AttributeEClass = ::ecore::make< ::ecore::EClass >();
    m_Audit__description = ::ecore::make< ::ecore::EAttribute >();
    m_Audit__author = ::ecore::make< ::ecore::EAttribute >();
    m_Audit__date = ::ecore::make< ::ecore::EAttribute >();
    m_AuditEClass = ::ecore::make< ::ecore::EClass >();
    m_ExtendedValue__tag = ::ecore::make< ::ecore::EReference >();
    m_ExtendedValueEClass = ::ecore::make< ::ecore::EClass >();
    m_ExtensionFamily__stereotype = ::ecore::make< ::ecore::EReference >();
    m_ExtensionFamily__name = ::ecore::make< ::ecore::EAttribute >();
    m_ExtensionFamilyEClass = ::ecore::make< ::ecore::EClass >();
    m_KDMFramework__audit = ::ecore::make< ::ecore::EReference >();
    m_KDMFramework__extensionFamily = ::ecore::make< ::ecore::EReference >();
    m_KDMFramework__name = ::ecore::make< ::ecore::EAttribute >();
    m_KDMFrameworkEClass = ::ecore::make< ::ecore::EClass >();
    m_KDMModelEClass = ::ecore::make< ::ecore::EClass >();
    m_Segment__segment = ::ecore::make< ::ecore::EReference >();
    m_Segment__model = ::ecore::make< ::ecore::EReference >();
    m_SegmentEClass = ::ecore::make< ::ecore::EClass >();
    m_Stereotype__tag = ::ecore::make< ::ecore::EReference >();
    m_Stereotype__name = ::ecore::make< ::ecore::EAttribute >();
    m_Stereotype__type = ::ecore::make< ::ecore::EAttribute >();
    m_StereotypeEClass = ::ecore::make< ::ecore::EClass >();
    m_TagDefinition__tag = ::ecore::make< ::ecore::EAttribute >();
    m_TagDefinition__type = ::ecore::make< ::ecore::EAttribute >();
    m_TagDefinitionEClass = ::ecore::make< ::ecore::EClass >();
    m_TaggedRef__reference = ::ecore::make< ::ecore::EReference >();
    m_TaggedRefEClass = ::ecore::make< ::ecore::EClass >();
    m_TaggedValue__value = ::ecore::make< ::ecore::EAttribute >();
    m_TaggedValueEClass = ::ecore::make< ::ecore::EClass >();
}

void KdmPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = KdmFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature text of class Annotation
        auto &&feature = m_Annotation__text;

        // ENamedElement
        feature->setName("text");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::ANNOTATION__TEXT);
        feature->basicsetEContainingClass(m_AnnotationEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Annotation
        auto &&classifier = m_AnnotationEClass;

        // ENamedElement
        classifier->setName("Annotation");

        // EClassifier
        classifier->setClassifierID(ANNOTATION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AnnotationEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Annotation__text);
        }
    }();

    [this]()
    { // Feature tag of class Attribute
        auto &&feature = m_Attribute__tag;

        // ENamedElement
        feature->setName("tag");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::ATTRIBUTE__TAG);
        feature->basicsetEContainingClass(m_AttributeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature value of class Attribute
        auto &&feature = m_Attribute__value;

        // ENamedElement
        feature->setName("value");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::ATTRIBUTE__VALUE);
        feature->basicsetEContainingClass(m_AttributeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Attribute
        auto &&classifier = m_AttributeEClass;

        // ENamedElement
        classifier->setName("Attribute");

        // EClassifier
        classifier->setClassifierID(ATTRIBUTE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AttributeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Attribute__tag);
            eStructuralFeatures.basicAdd(m_Attribute__value);
        }
    }();

    [this]()
    { // Feature description of class Audit
        auto &&feature = m_Audit__description;

        // ENamedElement
        feature->setName("description");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::AUDIT__DESCRIPTION);
        feature->basicsetEContainingClass(m_AuditEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature author of class Audit
        auto &&feature = m_Audit__author;

        // ENamedElement
        feature->setName("author");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::AUDIT__AUTHOR);
        feature->basicsetEContainingClass(m_AuditEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature date of class Audit
        auto &&feature = m_Audit__date;

        // ENamedElement
        feature->setName("date");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::AUDIT__DATE);
        feature->basicsetEContainingClass(m_AuditEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Audit
        auto &&classifier = m_AuditEClass;

        // ENamedElement
        classifier->setName("Audit");

        // EClassifier
        classifier->setClassifierID(AUDIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AuditEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Audit__description);
            eStructuralFeatures.basicAdd(m_Audit__author);
            eStructuralFeatures.basicAdd(m_Audit__date);
        }
    }();

    [this]()
    { // Feature tag of class ExtendedValue
        auto &&feature = m_ExtendedValue__tag;

        // ENamedElement
        feature->setName("tag");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_TagDefinitionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::EXTENDEDVALUE__TAG);
        feature->basicsetEContainingClass(m_ExtendedValueEClass);

        // EReference
        feature->setEReferenceType(m_TagDefinitionEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ExtendedValue
        auto &&classifier = m_ExtendedValueEClass;

        // ENamedElement
        classifier->setName("ExtendedValue");

        // EClassifier
        classifier->setClassifierID(EXTENDEDVALUE);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExtendedValueEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ExtendedValue__tag);
        }
    }();

    [this]()
    { // Feature stereotype of class ExtensionFamily
        auto &&feature = m_ExtensionFamily__stereotype;

        // ENamedElement
        feature->setName("stereotype");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_StereotypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::kdm::KdmPackage::EXTENSIONFAMILY__STEREOTYPE);
        feature->basicsetEContainingClass(m_ExtensionFamilyEClass);

        // EReference
        feature->setEReferenceType(m_StereotypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature name of class ExtensionFamily
        auto &&feature = m_ExtensionFamily__name;

        // ENamedElement
        feature->setName("name");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::EXTENSIONFAMILY__NAME);
        feature->basicsetEContainingClass(m_ExtensionFamilyEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier ExtensionFamily
        auto &&classifier = m_ExtensionFamilyEClass;

        // ENamedElement
        classifier->setName("ExtensionFamily");

        // EClassifier
        classifier->setClassifierID(EXTENSIONFAMILY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExtensionFamilyEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ExtensionFamily__stereotype);
            eStructuralFeatures.basicAdd(m_ExtensionFamily__name);
        }
    }();

    [this]()
    { // Feature audit of class KDMFramework
        auto &&feature = m_KDMFramework__audit;

        // ENamedElement
        feature->setName("audit");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AuditEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT);
        feature->basicsetEContainingClass(m_KDMFrameworkEClass);

        // EReference
        feature->setEReferenceType(m_AuditEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature extensionFamily of class KDMFramework
        auto &&feature = m_KDMFramework__extensionFamily;

        // ENamedElement
        feature->setName("extensionFamily");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ExtensionFamilyEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY);
        feature->basicsetEContainingClass(m_KDMFrameworkEClass);

        // EReference
        feature->setEReferenceType(m_ExtensionFamilyEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature name of class KDMFramework
        auto &&feature = m_KDMFramework__name;

        // ENamedElement
        feature->setName("name");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME);
        feature->basicsetEContainingClass(m_KDMFrameworkEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier KDMFramework
        auto &&classifier = m_KDMFrameworkEClass;

        // ENamedElement
        classifier->setName("KDMFramework");

        // EClassifier
        classifier->setClassifierID(KDMFRAMEWORK);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_KDMFrameworkEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_KDMFramework__audit);
            eStructuralFeatures.basicAdd(m_KDMFramework__extensionFamily);
            eStructuralFeatures.basicAdd(m_KDMFramework__name);
        }
    }();

    [this]()
    { // Classifier KDMModel
        auto &&classifier = m_KDMModelEClass;

        // ENamedElement
        classifier->setName("KDMModel");

        // EClassifier
        classifier->setClassifierID(KDMMODEL);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature segment of class Segment
        auto &&feature = m_Segment__segment;

        // ENamedElement
        feature->setName("segment");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_SegmentEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::SEGMENT__SEGMENT);
        feature->basicsetEContainingClass(m_SegmentEClass);

        // EReference
        feature->setEReferenceType(m_SegmentEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature model of class Segment
        auto &&feature = m_Segment__model;

        // ENamedElement
        feature->setName("model");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_KDMModelEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::SEGMENT__MODEL);
        feature->basicsetEContainingClass(m_SegmentEClass);

        // EReference
        feature->setEReferenceType(m_KDMModelEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Segment
        auto &&classifier = m_SegmentEClass;

        // ENamedElement
        classifier->setName("Segment");

        // EClassifier
        classifier->setClassifierID(SEGMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SegmentEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Segment__segment);
            eStructuralFeatures.basicAdd(m_Segment__model);
        }
    }();

    [this]()
    { // Feature tag of class Stereotype
        auto &&feature = m_Stereotype__tag;

        // ENamedElement
        feature->setName("tag");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_TagDefinitionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::STEREOTYPE__TAG);
        feature->basicsetEContainingClass(m_StereotypeEClass);

        // EReference
        feature->setEReferenceType(m_TagDefinitionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature name of class Stereotype
        auto &&feature = m_Stereotype__name;

        // ENamedElement
        feature->setName("name");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::STEREOTYPE__NAME);
        feature->basicsetEContainingClass(m_StereotypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature type of class Stereotype
        auto &&feature = m_Stereotype__type;

        // ENamedElement
        feature->setName("type");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::STEREOTYPE__TYPE);
        feature->basicsetEContainingClass(m_StereotypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Stereotype
        auto &&classifier = m_StereotypeEClass;

        // ENamedElement
        classifier->setName("Stereotype");

        // EClassifier
        classifier->setClassifierID(STEREOTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_StereotypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Stereotype__tag);
            eStructuralFeatures.basicAdd(m_Stereotype__name);
            eStructuralFeatures.basicAdd(m_Stereotype__type);
        }
    }();

    [this]()
    { // Feature tag of class TagDefinition
        auto &&feature = m_TagDefinition__tag;

        // ENamedElement
        feature->setName("tag");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::TAGDEFINITION__TAG);
        feature->basicsetEContainingClass(m_TagDefinitionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature type of class TagDefinition
        auto &&feature = m_TagDefinition__type;

        // ENamedElement
        feature->setName("type");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::TAGDEFINITION__TYPE);
        feature->basicsetEContainingClass(m_TagDefinitionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier TagDefinition
        auto &&classifier = m_TagDefinitionEClass;

        // ENamedElement
        classifier->setName("TagDefinition");

        // EClassifier
        classifier->setClassifierID(TAGDEFINITION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TagDefinitionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TagDefinition__tag);
            eStructuralFeatures.basicAdd(m_TagDefinition__type);
        }
    }();

    [this]()
    { // Feature reference of class TaggedRef
        auto &&feature = m_TaggedRef__reference;

        // ENamedElement
        feature->setName("reference");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::kdm::core::CorePackage::_instance()->getModelElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE);
        feature->basicsetEContainingClass(m_TaggedRefEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getModelElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier TaggedRef
        auto &&classifier = m_TaggedRefEClass;

        // ENamedElement
        classifier->setName("TaggedRef");

        // EClassifier
        classifier->setClassifierID(TAGGEDREF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TaggedRefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TaggedRef__reference);
        }
    }();

    [this]()
    { // Feature value of class TaggedValue
        auto &&feature = m_TaggedValue__value;

        // ENamedElement
        feature->setName("value");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::kdm::KdmPackage::TAGGEDVALUE__VALUE);
        feature->basicsetEContainingClass(m_TaggedValueEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier TaggedValue
        auto &&classifier = m_TaggedValueEClass;

        // ENamedElement
        classifier->setName("TaggedValue");

        // EClassifier
        classifier->setClassifierID(TAGGEDVALUE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TaggedValueEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TaggedValue__value);
        }
    }();

    // Initialize package
    setName("kdm");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_KDMFrameworkEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getModelElement());
        m_KDMModelEClass->getESuperTypes().push_back(m_KDMFrameworkEClass);
        m_AuditEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getElement());
        m_SegmentEClass->getESuperTypes().push_back(m_KDMFrameworkEClass);
        m_AttributeEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getElement());
        m_AnnotationEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getElement());
        m_TagDefinitionEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getElement());
        m_ExtendedValueEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getElement());
        m_StereotypeEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getElement());
        m_ExtensionFamilyEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getElement());
        m_TaggedRefEClass->getESuperTypes().push_back(m_ExtendedValueEClass);
        m_TaggedValueEClass->getESuperTypes().push_back(m_ExtendedValueEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AnnotationEClass);
        classifiers.push_back(m_AttributeEClass);
        classifiers.push_back(m_AuditEClass);
        classifiers.push_back(m_ExtendedValueEClass);
        classifiers.push_back(m_ExtensionFamilyEClass);
        classifiers.push_back(m_KDMFrameworkEClass);
        classifiers.push_back(m_KDMModelEClass);
        classifiers.push_back(m_SegmentEClass);
        classifiers.push_back(m_StereotypeEClass);
        classifiers.push_back(m_TagDefinitionEClass);
        classifiers.push_back(m_TaggedRefEClass);
        classifiers.push_back(m_TaggedValueEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr KdmPackage::getKDMFramework()
{
    return m_KDMFrameworkEClass;
}
::ecore::EClass_ptr KdmPackage::getKDMModel()
{
    return m_KDMModelEClass;
}
::ecore::EClass_ptr KdmPackage::getAudit()
{
    return m_AuditEClass;
}
::ecore::EClass_ptr KdmPackage::getSegment()
{
    return m_SegmentEClass;
}
::ecore::EClass_ptr KdmPackage::getAttribute()
{
    return m_AttributeEClass;
}
::ecore::EClass_ptr KdmPackage::getAnnotation()
{
    return m_AnnotationEClass;
}
::ecore::EClass_ptr KdmPackage::getTagDefinition()
{
    return m_TagDefinitionEClass;
}
::ecore::EClass_ptr KdmPackage::getExtendedValue()
{
    return m_ExtendedValueEClass;
}
::ecore::EClass_ptr KdmPackage::getStereotype()
{
    return m_StereotypeEClass;
}
::ecore::EClass_ptr KdmPackage::getExtensionFamily()
{
    return m_ExtensionFamilyEClass;
}
::ecore::EClass_ptr KdmPackage::getTaggedRef()
{
    return m_TaggedRefEClass;
}
::ecore::EClass_ptr KdmPackage::getTaggedValue()
{
    return m_TaggedValueEClass;
}

::ecore::EReference_ptr KdmPackage::getKDMFramework__audit()
{
    return m_KDMFramework__audit;
}
::ecore::EReference_ptr KdmPackage::getKDMFramework__extensionFamily()
{
    return m_KDMFramework__extensionFamily;
}
::ecore::EAttribute_ptr KdmPackage::getKDMFramework__name()
{
    return m_KDMFramework__name;
}
::ecore::EAttribute_ptr KdmPackage::getAudit__description()
{
    return m_Audit__description;
}
::ecore::EAttribute_ptr KdmPackage::getAudit__author()
{
    return m_Audit__author;
}
::ecore::EAttribute_ptr KdmPackage::getAudit__date()
{
    return m_Audit__date;
}
::ecore::EReference_ptr KdmPackage::getSegment__segment()
{
    return m_Segment__segment;
}
::ecore::EReference_ptr KdmPackage::getSegment__model()
{
    return m_Segment__model;
}
::ecore::EAttribute_ptr KdmPackage::getAttribute__tag()
{
    return m_Attribute__tag;
}
::ecore::EAttribute_ptr KdmPackage::getAttribute__value()
{
    return m_Attribute__value;
}
::ecore::EAttribute_ptr KdmPackage::getAnnotation__text()
{
    return m_Annotation__text;
}
::ecore::EAttribute_ptr KdmPackage::getTagDefinition__tag()
{
    return m_TagDefinition__tag;
}
::ecore::EAttribute_ptr KdmPackage::getTagDefinition__type()
{
    return m_TagDefinition__type;
}
::ecore::EReference_ptr KdmPackage::getExtendedValue__tag()
{
    return m_ExtendedValue__tag;
}
::ecore::EReference_ptr KdmPackage::getStereotype__tag()
{
    return m_Stereotype__tag;
}
::ecore::EAttribute_ptr KdmPackage::getStereotype__name()
{
    return m_Stereotype__name;
}
::ecore::EAttribute_ptr KdmPackage::getStereotype__type()
{
    return m_Stereotype__type;
}
::ecore::EReference_ptr KdmPackage::getExtensionFamily__stereotype()
{
    return m_ExtensionFamily__stereotype;
}
::ecore::EAttribute_ptr KdmPackage::getExtensionFamily__name()
{
    return m_ExtensionFamily__name;
}
::ecore::EReference_ptr KdmPackage::getTaggedRef__reference()
{
    return m_TaggedRef__reference;
}
::ecore::EAttribute_ptr KdmPackage::getTaggedValue__value()
{
    return m_TaggedValue__value;
}

