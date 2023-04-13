// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualPackageImpl.cpp
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

#include <kdm/conceptual/ConceptualPackage.hpp>
#include <kdm/conceptual/ConceptualFactory.hpp>
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
#include <kdm/source/SourcePackage.hpp>
#include <kdm/action/ActionPackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace ::kdm::conceptual;

ConceptualPackage::ConceptualPackage()
{
    m_AbstractConceptualElement__source =
            ::ecore::make< ::ecore::EReference >();
    m_AbstractConceptualElement__implementation = ::ecore::make<
            ::ecore::EReference >();
    m_AbstractConceptualElement__conceptualRelation = ::ecore::make<
            ::ecore::EReference >();
    m_AbstractConceptualElement__abstraction = ::ecore::make<
            ::ecore::EReference >();
    m_AbstractConceptualElementEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractConceptualRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_BehaviorUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_ConceptualContainer__conceptualElement = ::ecore::make<
            ::ecore::EReference >();
    m_ConceptualContainerEClass = ::ecore::make< ::ecore::EClass >();
    m_ConceptualElementEClass = ::ecore::make< ::ecore::EClass >();
    m_ConceptualFlow__to = ::ecore::make< ::ecore::EReference >();
    m_ConceptualFlow__from = ::ecore::make< ::ecore::EReference >();
    m_ConceptualFlowEClass = ::ecore::make< ::ecore::EClass >();
    m_ConceptualModel__conceptualElement =
            ::ecore::make< ::ecore::EReference >();
    m_ConceptualModelEClass = ::ecore::make< ::ecore::EClass >();
    m_ConceptualRelationship__to = ::ecore::make< ::ecore::EReference >();
    m_ConceptualRelationship__from = ::ecore::make< ::ecore::EReference >();
    m_ConceptualRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_ConceptualRole__conceptualElement =
            ::ecore::make< ::ecore::EReference >();
    m_ConceptualRoleEClass = ::ecore::make< ::ecore::EClass >();
    m_FactUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_RuleUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_ScenarioUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_TermUnitEClass = ::ecore::make< ::ecore::EClass >();
}

void ConceptualPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = ConceptualFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature source of class AbstractConceptualElement
        auto &&feature = m_AbstractConceptualElement__source;

        // ENamedElement
        feature->setName("source");

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
                ::kdm::source::SourcePackage::_instance()->getSourceRef());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__SOURCE);
        feature->basicsetEContainingClass(m_AbstractConceptualElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::source::SourcePackage::_instance()->getSourceRef());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature implementation of class AbstractConceptualElement
        auto &&feature = m_AbstractConceptualElement__implementation;

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
                ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION);
        feature->basicsetEContainingClass(m_AbstractConceptualElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature conceptualRelation of class AbstractConceptualElement
        auto &&feature = m_AbstractConceptualElement__conceptualRelation;

        // ENamedElement
        feature->setName("conceptualRelation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractConceptualRelationshipEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION);
        feature->basicsetEContainingClass(m_AbstractConceptualElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractConceptualRelationshipEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature abstraction of class AbstractConceptualElement
        auto &&feature = m_AbstractConceptualElement__abstraction;

        // ENamedElement
        feature->setName("abstraction");

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
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::conceptual::ConceptualPackage::ABSTRACTCONCEPTUALELEMENT__ABSTRACTION);
        feature->basicsetEContainingClass(m_AbstractConceptualElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractConceptualElement
        auto &&classifier = m_AbstractConceptualElementEClass;

        // ENamedElement
        classifier->setName("AbstractConceptualElement");

        // EClassifier
        classifier->setClassifierID(ABSTRACTCONCEPTUALELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractConceptualElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AbstractConceptualElement__source);
            eStructuralFeatures.basicAdd(
                    m_AbstractConceptualElement__implementation);
            eStructuralFeatures.basicAdd(
                    m_AbstractConceptualElement__conceptualRelation);
            eStructuralFeatures.basicAdd(
                    m_AbstractConceptualElement__abstraction);
        }
    }();

    [this]()
    { // Classifier AbstractConceptualRelationship
        auto &&classifier = m_AbstractConceptualRelationshipEClass;

        // ENamedElement
        classifier->setName("AbstractConceptualRelationship");

        // EClassifier
        classifier->setClassifierID(ABSTRACTCONCEPTUALRELATIONSHIP);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier BehaviorUnit
        auto &&classifier = m_BehaviorUnitEClass;

        // ENamedElement
        classifier->setName("BehaviorUnit");

        // EClassifier
        classifier->setClassifierID(BEHAVIORUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature conceptualElement of class ConceptualContainer
        auto &&feature = m_ConceptualContainer__conceptualElement;

        // ENamedElement
        feature->setName("conceptualElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractConceptualElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::conceptual::ConceptualPackage::CONCEPTUALCONTAINER__CONCEPTUALELEMENT);
        feature->basicsetEContainingClass(m_ConceptualContainerEClass);

        // EReference
        feature->setEReferenceType(m_AbstractConceptualElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ConceptualContainer
        auto &&classifier = m_ConceptualContainerEClass;

        // ENamedElement
        classifier->setName("ConceptualContainer");

        // EClassifier
        classifier->setClassifierID(CONCEPTUALCONTAINER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ConceptualContainerEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(
                    m_ConceptualContainer__conceptualElement);
        }
    }();

    [this]()
    { // Classifier ConceptualElement
        auto &&classifier = m_ConceptualElementEClass;

        // ENamedElement
        classifier->setName("ConceptualElement");

        // EClassifier
        classifier->setClassifierID(CONCEPTUALELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class ConceptualFlow
        auto &&feature = m_ConceptualFlow__to;

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
        feature->setEType(m_ConceptualContainerEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__TO);
        feature->basicsetEContainingClass(m_ConceptualFlowEClass);

        // EReference
        feature->setEReferenceType(m_ConceptualContainerEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ConceptualFlow
        auto &&feature = m_ConceptualFlow__from;

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
        feature->setEType(m_ConceptualContainerEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::conceptual::ConceptualPackage::CONCEPTUALFLOW__FROM);
        feature->basicsetEContainingClass(m_ConceptualFlowEClass);

        // EReference
        feature->setEReferenceType(m_ConceptualContainerEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ConceptualFlow
        auto &&classifier = m_ConceptualFlowEClass;

        // ENamedElement
        classifier->setName("ConceptualFlow");

        // EClassifier
        classifier->setClassifierID(CONCEPTUALFLOW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ConceptualFlowEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ConceptualFlow__to);
            eStructuralFeatures.basicAdd(m_ConceptualFlow__from);
        }
    }();

    [this]()
    { // Feature conceptualElement of class ConceptualModel
        auto &&feature = m_ConceptualModel__conceptualElement;

        // ENamedElement
        feature->setName("conceptualElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractConceptualElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::conceptual::ConceptualPackage::CONCEPTUALMODEL__CONCEPTUALELEMENT);
        feature->basicsetEContainingClass(m_ConceptualModelEClass);

        // EReference
        feature->setEReferenceType(m_AbstractConceptualElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ConceptualModel
        auto &&classifier = m_ConceptualModelEClass;

        // ENamedElement
        classifier->setName("ConceptualModel");

        // EClassifier
        classifier->setClassifierID(CONCEPTUALMODEL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ConceptualModelEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ConceptualModel__conceptualElement);
        }
    }();

    [this]()
    { // Feature to of class ConceptualRelationship
        auto &&feature = m_ConceptualRelationship__to;

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
                ::kdm::conceptual::ConceptualPackage::CONCEPTUALRELATIONSHIP__TO);
        feature->basicsetEContainingClass(m_ConceptualRelationshipEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ConceptualRelationship
        auto &&feature = m_ConceptualRelationship__from;

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
        feature->setEType(m_AbstractConceptualElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::conceptual::ConceptualPackage::CONCEPTUALRELATIONSHIP__FROM);
        feature->basicsetEContainingClass(m_ConceptualRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_AbstractConceptualElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ConceptualRelationship
        auto &&classifier = m_ConceptualRelationshipEClass;

        // ENamedElement
        classifier->setName("ConceptualRelationship");

        // EClassifier
        classifier->setClassifierID(CONCEPTUALRELATIONSHIP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ConceptualRelationshipEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ConceptualRelationship__to);
            eStructuralFeatures.basicAdd(m_ConceptualRelationship__from);
        }
    }();

    [this]()
    { // Feature conceptualElement of class ConceptualRole
        auto &&feature = m_ConceptualRole__conceptualElement;

        // ENamedElement
        feature->setName("conceptualElement");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractConceptualElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::conceptual::ConceptualPackage::CONCEPTUALROLE__CONCEPTUALELEMENT);
        feature->basicsetEContainingClass(m_ConceptualRoleEClass);

        // EReference
        feature->setEReferenceType(m_AbstractConceptualElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ConceptualRole
        auto &&classifier = m_ConceptualRoleEClass;

        // ENamedElement
        classifier->setName("ConceptualRole");

        // EClassifier
        classifier->setClassifierID(CONCEPTUALROLE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ConceptualRoleEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ConceptualRole__conceptualElement);
        }
    }();

    [this]()
    { // Classifier FactUnit
        auto &&classifier = m_FactUnitEClass;

        // ENamedElement
        classifier->setName("FactUnit");

        // EClassifier
        classifier->setClassifierID(FACTUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier RuleUnit
        auto &&classifier = m_RuleUnitEClass;

        // ENamedElement
        classifier->setName("RuleUnit");

        // EClassifier
        classifier->setClassifierID(RULEUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier ScenarioUnit
        auto &&classifier = m_ScenarioUnitEClass;

        // ENamedElement
        classifier->setName("ScenarioUnit");

        // EClassifier
        classifier->setClassifierID(SCENARIOUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier TermUnit
        auto &&classifier = m_TermUnitEClass;

        // ENamedElement
        classifier->setName("TermUnit");

        // EClassifier
        classifier->setClassifierID(TERMUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    // Initialize package
    setName("conceptual");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_ConceptualModelEClass->getESuperTypes().push_back(
                ::kdm::kdm::KdmPackage::_instance()->getKDMModel());
        m_AbstractConceptualElementEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        m_TermUnitEClass->getESuperTypes().push_back(
                m_AbstractConceptualElementEClass);
        m_ConceptualContainerEClass->getESuperTypes().push_back(
                m_AbstractConceptualElementEClass);
        m_FactUnitEClass->getESuperTypes().push_back(
                m_ConceptualContainerEClass);
        m_AbstractConceptualRelationshipEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMRelationship());
        m_ConceptualRelationshipEClass->getESuperTypes().push_back(
                m_AbstractConceptualRelationshipEClass);
        m_BehaviorUnitEClass->getESuperTypes().push_back(
                m_ConceptualContainerEClass);
        m_RuleUnitEClass->getESuperTypes().push_back(
                m_ConceptualContainerEClass);
        m_ScenarioUnitEClass->getESuperTypes().push_back(
                m_ConceptualContainerEClass);
        m_ConceptualFlowEClass->getESuperTypes().push_back(
                m_AbstractConceptualRelationshipEClass);
        m_ConceptualElementEClass->getESuperTypes().push_back(
                m_AbstractConceptualElementEClass);
        m_ConceptualRoleEClass->getESuperTypes().push_back(
                m_AbstractConceptualElementEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractConceptualElementEClass);
        classifiers.push_back(m_AbstractConceptualRelationshipEClass);
        classifiers.push_back(m_BehaviorUnitEClass);
        classifiers.push_back(m_ConceptualContainerEClass);
        classifiers.push_back(m_ConceptualElementEClass);
        classifiers.push_back(m_ConceptualFlowEClass);
        classifiers.push_back(m_ConceptualModelEClass);
        classifiers.push_back(m_ConceptualRelationshipEClass);
        classifiers.push_back(m_ConceptualRoleEClass);
        classifiers.push_back(m_FactUnitEClass);
        classifiers.push_back(m_RuleUnitEClass);
        classifiers.push_back(m_ScenarioUnitEClass);
        classifiers.push_back(m_TermUnitEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr ConceptualPackage::getConceptualModel()
{
    return m_ConceptualModelEClass;
}
::ecore::EClass_ptr ConceptualPackage::getAbstractConceptualElement()
{
    return m_AbstractConceptualElementEClass;
}
::ecore::EClass_ptr ConceptualPackage::getTermUnit()
{
    return m_TermUnitEClass;
}
::ecore::EClass_ptr ConceptualPackage::getConceptualContainer()
{
    return m_ConceptualContainerEClass;
}
::ecore::EClass_ptr ConceptualPackage::getFactUnit()
{
    return m_FactUnitEClass;
}
::ecore::EClass_ptr ConceptualPackage::getAbstractConceptualRelationship()
{
    return m_AbstractConceptualRelationshipEClass;
}
::ecore::EClass_ptr ConceptualPackage::getConceptualRelationship()
{
    return m_ConceptualRelationshipEClass;
}
::ecore::EClass_ptr ConceptualPackage::getBehaviorUnit()
{
    return m_BehaviorUnitEClass;
}
::ecore::EClass_ptr ConceptualPackage::getRuleUnit()
{
    return m_RuleUnitEClass;
}
::ecore::EClass_ptr ConceptualPackage::getScenarioUnit()
{
    return m_ScenarioUnitEClass;
}
::ecore::EClass_ptr ConceptualPackage::getConceptualFlow()
{
    return m_ConceptualFlowEClass;
}
::ecore::EClass_ptr ConceptualPackage::getConceptualElement()
{
    return m_ConceptualElementEClass;
}
::ecore::EClass_ptr ConceptualPackage::getConceptualRole()
{
    return m_ConceptualRoleEClass;
}

::ecore::EReference_ptr ConceptualPackage::getConceptualModel__conceptualElement()
{
    return m_ConceptualModel__conceptualElement;
}
::ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__source()
{
    return m_AbstractConceptualElement__source;
}
::ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__implementation()
{
    return m_AbstractConceptualElement__implementation;
}
::ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__conceptualRelation()
{
    return m_AbstractConceptualElement__conceptualRelation;
}
::ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__abstraction()
{
    return m_AbstractConceptualElement__abstraction;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualContainer__conceptualElement()
{
    return m_ConceptualContainer__conceptualElement;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualRelationship__to()
{
    return m_ConceptualRelationship__to;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualRelationship__from()
{
    return m_ConceptualRelationship__from;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualFlow__to()
{
    return m_ConceptualFlow__to;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualFlow__from()
{
    return m_ConceptualFlow__from;
}
::ecore::EReference_ptr ConceptualPackage::getConceptualRole__conceptualElement()
{
    return m_ConceptualRole__conceptualElement;
}

