// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/StructurePackageImpl.cpp
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

#include <kdm/structure/StructurePackage.hpp>
#include <kdm/structure/StructureFactory.hpp>
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
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>

using namespace ::kdm::structure;

StructurePackage::StructurePackage()
{
    m_AbstractStructureElement__aggregated =
            ::ecore::make< ::ecore::EReference >();
    m_AbstractStructureElement__implementation = ::ecore::make<
            ::ecore::EReference >();
    m_AbstractStructureElement__structureElement = ::ecore::make<
            ::ecore::EReference >();
    m_AbstractStructureElement__structureRelationship = ::ecore::make<
            ::ecore::EReference >();
    m_AbstractStructureElementEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractStructureRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_ArchitectureViewEClass = ::ecore::make< ::ecore::EClass >();
    m_ComponentEClass = ::ecore::make< ::ecore::EClass >();
    m_LayerEClass = ::ecore::make< ::ecore::EClass >();
    m_SoftwareSystemEClass = ::ecore::make< ::ecore::EClass >();
    m_StructureElementEClass = ::ecore::make< ::ecore::EClass >();
    m_StructureModel__structureElement = ::ecore::make< ::ecore::EReference >();
    m_StructureModelEClass = ::ecore::make< ::ecore::EClass >();
    m_StructureRelationship__to = ::ecore::make< ::ecore::EReference >();
    m_StructureRelationship__from = ::ecore::make< ::ecore::EReference >();
    m_StructureRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_SubsystemEClass = ::ecore::make< ::ecore::EClass >();
}

void StructurePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = StructureFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature aggregated of class AbstractStructureElement
        auto &&feature = m_AbstractStructureElement__aggregated;

        // ENamedElement
        feature->setName("aggregated");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::kdm::core::CorePackage::_instance()->getAggregatedRelationship());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__AGGREGATED);
        feature->basicsetEContainingClass(m_AbstractStructureElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getAggregatedRelationship());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature implementation of class AbstractStructureElement
        auto &&feature = m_AbstractStructureElement__implementation;

        // ENamedElement
        feature->setName("implementation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION);
        feature->basicsetEContainingClass(m_AbstractStructureElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature structureElement of class AbstractStructureElement
        auto &&feature = m_AbstractStructureElement__structureElement;

        // ENamedElement
        feature->setName("structureElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractStructureElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT);
        feature->basicsetEContainingClass(m_AbstractStructureElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractStructureElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature structureRelationship of class AbstractStructureElement
        auto &&feature = m_AbstractStructureElement__structureRelationship;

        // ENamedElement
        feature->setName("structureRelationship");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractStructureRelationshipEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::structure::StructurePackage::ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP);
        feature->basicsetEContainingClass(m_AbstractStructureElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractStructureRelationshipEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractStructureElement
        auto &&classifier = m_AbstractStructureElementEClass;

        // ENamedElement
        classifier->setName("AbstractStructureElement");

        // EClassifier
        classifier->setClassifierID(ABSTRACTSTRUCTUREELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractStructureElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(
                    m_AbstractStructureElement__aggregated);
            eStructuralFeatures.basicAdd(
                    m_AbstractStructureElement__implementation);
            eStructuralFeatures.basicAdd(
                    m_AbstractStructureElement__structureElement);
            eStructuralFeatures.basicAdd(
                    m_AbstractStructureElement__structureRelationship);
        }
    }();

    [this]()
    { // Classifier AbstractStructureRelationship
        auto &&classifier = m_AbstractStructureRelationshipEClass;

        // ENamedElement
        classifier->setName("AbstractStructureRelationship");

        // EClassifier
        classifier->setClassifierID(ABSTRACTSTRUCTURERELATIONSHIP);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier ArchitectureView
        auto &&classifier = m_ArchitectureViewEClass;

        // ENamedElement
        classifier->setName("ArchitectureView");

        // EClassifier
        classifier->setClassifierID(ARCHITECTUREVIEW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Component
        auto &&classifier = m_ComponentEClass;

        // ENamedElement
        classifier->setName("Component");

        // EClassifier
        classifier->setClassifierID(COMPONENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Layer
        auto &&classifier = m_LayerEClass;

        // ENamedElement
        classifier->setName("Layer");

        // EClassifier
        classifier->setClassifierID(LAYER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier SoftwareSystem
        auto &&classifier = m_SoftwareSystemEClass;

        // ENamedElement
        classifier->setName("SoftwareSystem");

        // EClassifier
        classifier->setClassifierID(SOFTWARESYSTEM);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier StructureElement
        auto &&classifier = m_StructureElementEClass;

        // ENamedElement
        classifier->setName("StructureElement");

        // EClassifier
        classifier->setClassifierID(STRUCTUREELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature structureElement of class StructureModel
        auto &&feature = m_StructureModel__structureElement;

        // ENamedElement
        feature->setName("structureElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractStructureElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::structure::StructurePackage::STRUCTUREMODEL__STRUCTUREELEMENT);
        feature->basicsetEContainingClass(m_StructureModelEClass);

        // EReference
        feature->setEReferenceType(m_AbstractStructureElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier StructureModel
        auto &&classifier = m_StructureModelEClass;

        // ENamedElement
        classifier->setName("StructureModel");

        // EClassifier
        classifier->setClassifierID(STRUCTUREMODEL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_StructureModelEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_StructureModel__structureElement);
        }
    }();

    [this]()
    { // Feature to of class StructureRelationship
        auto &&feature = m_StructureRelationship__to;

        // ENamedElement
        feature->setName("to");

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
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::structure::StructurePackage::STRUCTURERELATIONSHIP__TO);
        feature->basicsetEContainingClass(m_StructureRelationshipEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class StructureRelationship
        auto &&feature = m_StructureRelationship__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractStructureElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::structure::StructurePackage::STRUCTURERELATIONSHIP__FROM);
        feature->basicsetEContainingClass(m_StructureRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_AbstractStructureElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier StructureRelationship
        auto &&classifier = m_StructureRelationshipEClass;

        // ENamedElement
        classifier->setName("StructureRelationship");

        // EClassifier
        classifier->setClassifierID(STRUCTURERELATIONSHIP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_StructureRelationshipEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_StructureRelationship__to);
            eStructuralFeatures.basicAdd(m_StructureRelationship__from);
        }
    }();

    [this]()
    { // Classifier Subsystem
        auto &&classifier = m_SubsystemEClass;

        // ENamedElement
        classifier->setName("Subsystem");

        // EClassifier
        classifier->setClassifierID(SUBSYSTEM);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    // Initialize package
    setName("structure");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_AbstractStructureElementEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        m_SubsystemEClass->getESuperTypes().push_back(
                m_AbstractStructureElementEClass);
        m_LayerEClass->getESuperTypes().push_back(
                m_AbstractStructureElementEClass);
        m_StructureModelEClass->getESuperTypes().push_back(
                ::kdm::kdm::KdmPackage::_instance()->getKDMModel());
        m_ComponentEClass->getESuperTypes().push_back(
                m_AbstractStructureElementEClass);
        m_SoftwareSystemEClass->getESuperTypes().push_back(
                m_AbstractStructureElementEClass);
        m_AbstractStructureRelationshipEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMRelationship());
        m_StructureRelationshipEClass->getESuperTypes().push_back(
                m_AbstractStructureRelationshipEClass);
        m_ArchitectureViewEClass->getESuperTypes().push_back(
                m_AbstractStructureElementEClass);
        m_StructureElementEClass->getESuperTypes().push_back(
                m_AbstractStructureElementEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractStructureElementEClass);
        classifiers.push_back(m_AbstractStructureRelationshipEClass);
        classifiers.push_back(m_ArchitectureViewEClass);
        classifiers.push_back(m_ComponentEClass);
        classifiers.push_back(m_LayerEClass);
        classifiers.push_back(m_SoftwareSystemEClass);
        classifiers.push_back(m_StructureElementEClass);
        classifiers.push_back(m_StructureModelEClass);
        classifiers.push_back(m_StructureRelationshipEClass);
        classifiers.push_back(m_SubsystemEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr StructurePackage::getAbstractStructureElement()
{
    return m_AbstractStructureElementEClass;
}
::ecore::EClass_ptr StructurePackage::getSubsystem()
{
    return m_SubsystemEClass;
}
::ecore::EClass_ptr StructurePackage::getLayer()
{
    return m_LayerEClass;
}
::ecore::EClass_ptr StructurePackage::getStructureModel()
{
    return m_StructureModelEClass;
}
::ecore::EClass_ptr StructurePackage::getComponent()
{
    return m_ComponentEClass;
}
::ecore::EClass_ptr StructurePackage::getSoftwareSystem()
{
    return m_SoftwareSystemEClass;
}
::ecore::EClass_ptr StructurePackage::getAbstractStructureRelationship()
{
    return m_AbstractStructureRelationshipEClass;
}
::ecore::EClass_ptr StructurePackage::getStructureRelationship()
{
    return m_StructureRelationshipEClass;
}
::ecore::EClass_ptr StructurePackage::getArchitectureView()
{
    return m_ArchitectureViewEClass;
}
::ecore::EClass_ptr StructurePackage::getStructureElement()
{
    return m_StructureElementEClass;
}

::ecore::EReference_ptr StructurePackage::getAbstractStructureElement__aggregated()
{
    return m_AbstractStructureElement__aggregated;
}
::ecore::EReference_ptr StructurePackage::getAbstractStructureElement__implementation()
{
    return m_AbstractStructureElement__implementation;
}
::ecore::EReference_ptr StructurePackage::getAbstractStructureElement__structureElement()
{
    return m_AbstractStructureElement__structureElement;
}
::ecore::EReference_ptr StructurePackage::getAbstractStructureElement__structureRelationship()
{
    return m_AbstractStructureElement__structureRelationship;
}
::ecore::EReference_ptr StructurePackage::getStructureModel__structureElement()
{
    return m_StructureModel__structureElement;
}
::ecore::EReference_ptr StructurePackage::getStructureRelationship__to()
{
    return m_StructureRelationship__to;
}
::ecore::EReference_ptr StructurePackage::getStructureRelationship__from()
{
    return m_StructureRelationship__from;
}

