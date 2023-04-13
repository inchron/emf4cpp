// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ActionPackageImpl.cpp
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

#include <kdm/action/ActionPackage.hpp>
#include <kdm/action/ActionFactory.hpp>
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
#include <kdm/code/CodePackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/code/ControlElement.hpp>
#include <kdm/code/Datatype.hpp>
#include <kdm/code/DataElement.hpp>
#include <kdm/code/CodeItem.hpp>
#include <kdm/code/ComputationalObject.hpp>
#include <kdm/core/KDMEntity.hpp>

using namespace ::kdm::action;

ActionPackage::ActionPackage()
{
    m_AbstractActionRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_ActionElement__kind = ::ecore::make< ::ecore::EAttribute >();
    m_ActionElement__codeElement = ::ecore::make< ::ecore::EReference >();
    m_ActionElement__actionRelation = ::ecore::make< ::ecore::EReference >();
    m_ActionElementEClass = ::ecore::make< ::ecore::EClass >();
    m_ActionRelationship__to = ::ecore::make< ::ecore::EReference >();
    m_ActionRelationship__from = ::ecore::make< ::ecore::EReference >();
    m_ActionRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_Addresses__to = ::ecore::make< ::ecore::EReference >();
    m_Addresses__from = ::ecore::make< ::ecore::EReference >();
    m_AddressesEClass = ::ecore::make< ::ecore::EClass >();
    m_BlockUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_Calls__to = ::ecore::make< ::ecore::EReference >();
    m_Calls__from = ::ecore::make< ::ecore::EReference >();
    m_CallsEClass = ::ecore::make< ::ecore::EClass >();
    m_CatchUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_CompliesTo__to = ::ecore::make< ::ecore::EReference >();
    m_CompliesTo__from = ::ecore::make< ::ecore::EReference >();
    m_CompliesToEClass = ::ecore::make< ::ecore::EClass >();
    m_ControlFlow__to = ::ecore::make< ::ecore::EReference >();
    m_ControlFlow__from = ::ecore::make< ::ecore::EReference >();
    m_ControlFlowEClass = ::ecore::make< ::ecore::EClass >();
    m_Creates__to = ::ecore::make< ::ecore::EReference >();
    m_Creates__from = ::ecore::make< ::ecore::EReference >();
    m_CreatesEClass = ::ecore::make< ::ecore::EClass >();
    m_Dispatches__to = ::ecore::make< ::ecore::EReference >();
    m_Dispatches__from = ::ecore::make< ::ecore::EReference >();
    m_DispatchesEClass = ::ecore::make< ::ecore::EClass >();
    m_EntryFlow__to = ::ecore::make< ::ecore::EReference >();
    m_EntryFlow__from = ::ecore::make< ::ecore::EReference >();
    m_EntryFlowEClass = ::ecore::make< ::ecore::EClass >();
    m_ExceptionFlow__to = ::ecore::make< ::ecore::EReference >();
    m_ExceptionFlow__from = ::ecore::make< ::ecore::EReference >();
    m_ExceptionFlowEClass = ::ecore::make< ::ecore::EClass >();
    m_ExceptionUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_ExitFlow__to = ::ecore::make< ::ecore::EReference >();
    m_ExitFlow__from = ::ecore::make< ::ecore::EReference >();
    m_ExitFlowEClass = ::ecore::make< ::ecore::EClass >();
    m_FalseFlowEClass = ::ecore::make< ::ecore::EClass >();
    m_FinallyUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_FlowEClass = ::ecore::make< ::ecore::EClass >();
    m_GuardedFlowEClass = ::ecore::make< ::ecore::EClass >();
    m_Reads__to = ::ecore::make< ::ecore::EReference >();
    m_Reads__from = ::ecore::make< ::ecore::EReference >();
    m_ReadsEClass = ::ecore::make< ::ecore::EClass >();
    m_Throws__to = ::ecore::make< ::ecore::EReference >();
    m_Throws__from = ::ecore::make< ::ecore::EReference >();
    m_ThrowsEClass = ::ecore::make< ::ecore::EClass >();
    m_TrueFlowEClass = ::ecore::make< ::ecore::EClass >();
    m_TryUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_UsesType__to = ::ecore::make< ::ecore::EReference >();
    m_UsesType__from = ::ecore::make< ::ecore::EReference >();
    m_UsesTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_Writes__to = ::ecore::make< ::ecore::EReference >();
    m_Writes__from = ::ecore::make< ::ecore::EReference >();
    m_WritesEClass = ::ecore::make< ::ecore::EClass >();
}

void ActionPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = ActionFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Classifier AbstractActionRelationship
        auto &&classifier = m_AbstractActionRelationshipEClass;

        // ENamedElement
        classifier->setName("AbstractActionRelationship");

        // EClassifier
        classifier->setClassifierID(ABSTRACTACTIONRELATIONSHIP);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature kind of class ActionElement
        auto &&feature = m_ActionElement__kind;

        // ENamedElement
        feature->setName("kind");

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

        feature->setFeatureID(
                ::kdm::action::ActionPackage::ACTIONELEMENT__KIND);
        feature->basicsetEContainingClass(m_ActionElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature codeElement of class ActionElement
        auto &&feature = m_ActionElement__codeElement;

        // ENamedElement
        feature->setName("codeElement");

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
                ::kdm::code::CodePackage::_instance()->getAbstractCodeElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::action::ActionPackage::ACTIONELEMENT__CODEELEMENT);
        feature->basicsetEContainingClass(m_ActionElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getAbstractCodeElement());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature actionRelation of class ActionElement
        auto &&feature = m_ActionElement__actionRelation;

        // ENamedElement
        feature->setName("actionRelation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractActionRelationshipEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::action::ActionPackage::ACTIONELEMENT__ACTIONRELATION);
        feature->basicsetEContainingClass(m_ActionElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractActionRelationshipEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ActionElement
        auto &&classifier = m_ActionElementEClass;

        // ENamedElement
        classifier->setName("ActionElement");

        // EClassifier
        classifier->setClassifierID(ACTIONELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ActionElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ActionElement__kind);
            eStructuralFeatures.basicAdd(m_ActionElement__codeElement);
            eStructuralFeatures.basicAdd(m_ActionElement__actionRelation);
        }
    }();

    [this]()
    { // Feature to of class ActionRelationship
        auto &&feature = m_ActionRelationship__to;

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
                ::kdm::action::ActionPackage::ACTIONRELATIONSHIP__TO);
        feature->basicsetEContainingClass(m_ActionRelationshipEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ActionRelationship
        auto &&feature = m_ActionRelationship__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::action::ActionPackage::ACTIONRELATIONSHIP__FROM);
        feature->basicsetEContainingClass(m_ActionRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ActionRelationship
        auto &&classifier = m_ActionRelationshipEClass;

        // ENamedElement
        classifier->setName("ActionRelationship");

        // EClassifier
        classifier->setClassifierID(ACTIONRELATIONSHIP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ActionRelationshipEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ActionRelationship__to);
            eStructuralFeatures.basicAdd(m_ActionRelationship__from);
        }
    }();

    [this]()
    { // Feature to of class Addresses
        auto &&feature = m_Addresses__to;

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
                ::kdm::code::CodePackage::_instance()->getComputationalObject());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::ADDRESSES__TO);
        feature->basicsetEContainingClass(m_AddressesEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getComputationalObject());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Addresses
        auto &&feature = m_Addresses__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::ADDRESSES__FROM);
        feature->basicsetEContainingClass(m_AddressesEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Addresses
        auto &&classifier = m_AddressesEClass;

        // ENamedElement
        classifier->setName("Addresses");

        // EClassifier
        classifier->setClassifierID(ADDRESSES);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AddressesEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Addresses__to);
            eStructuralFeatures.basicAdd(m_Addresses__from);
        }
    }();

    [this]()
    { // Classifier BlockUnit
        auto &&classifier = m_BlockUnitEClass;

        // ENamedElement
        classifier->setName("BlockUnit");

        // EClassifier
        classifier->setClassifierID(BLOCKUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class Calls
        auto &&feature = m_Calls__to;

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
                ::kdm::code::CodePackage::_instance()->getControlElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::CALLS__TO);
        feature->basicsetEContainingClass(m_CallsEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getControlElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Calls
        auto &&feature = m_Calls__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::CALLS__FROM);
        feature->basicsetEContainingClass(m_CallsEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Calls
        auto &&classifier = m_CallsEClass;

        // ENamedElement
        classifier->setName("Calls");

        // EClassifier
        classifier->setClassifierID(CALLS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CallsEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Calls__to);
            eStructuralFeatures.basicAdd(m_Calls__from);
        }
    }();

    [this]()
    { // Classifier CatchUnit
        auto &&classifier = m_CatchUnitEClass;

        // ENamedElement
        classifier->setName("CatchUnit");

        // EClassifier
        classifier->setClassifierID(CATCHUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class CompliesTo
        auto &&feature = m_CompliesTo__to;

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
        feature->setEType(::kdm::code::CodePackage::_instance()->getCodeItem());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::COMPLIESTO__TO);
        feature->basicsetEContainingClass(m_CompliesToEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getCodeItem());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class CompliesTo
        auto &&feature = m_CompliesTo__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::COMPLIESTO__FROM);
        feature->basicsetEContainingClass(m_CompliesToEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier CompliesTo
        auto &&classifier = m_CompliesToEClass;

        // ENamedElement
        classifier->setName("CompliesTo");

        // EClassifier
        classifier->setClassifierID(COMPLIESTO);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CompliesToEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_CompliesTo__to);
            eStructuralFeatures.basicAdd(m_CompliesTo__from);
        }
    }();

    [this]()
    { // Feature to of class ControlFlow
        auto &&feature = m_ControlFlow__to;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::CONTROLFLOW__TO);
        feature->basicsetEContainingClass(m_ControlFlowEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ControlFlow
        auto &&feature = m_ControlFlow__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::CONTROLFLOW__FROM);
        feature->basicsetEContainingClass(m_ControlFlowEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ControlFlow
        auto &&classifier = m_ControlFlowEClass;

        // ENamedElement
        classifier->setName("ControlFlow");

        // EClassifier
        classifier->setClassifierID(CONTROLFLOW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ControlFlowEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ControlFlow__to);
            eStructuralFeatures.basicAdd(m_ControlFlow__from);
        }
    }();

    [this]()
    { // Feature to of class Creates
        auto &&feature = m_Creates__to;

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
        feature->setEType(::kdm::code::CodePackage::_instance()->getDatatype());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::CREATES__TO);
        feature->basicsetEContainingClass(m_CreatesEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getDatatype());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Creates
        auto &&feature = m_Creates__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::CREATES__FROM);
        feature->basicsetEContainingClass(m_CreatesEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Creates
        auto &&classifier = m_CreatesEClass;

        // ENamedElement
        classifier->setName("Creates");

        // EClassifier
        classifier->setClassifierID(CREATES);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CreatesEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Creates__to);
            eStructuralFeatures.basicAdd(m_Creates__from);
        }
    }();

    [this]()
    { // Feature to of class Dispatches
        auto &&feature = m_Dispatches__to;

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
                ::kdm::code::CodePackage::_instance()->getDataElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::DISPATCHES__TO);
        feature->basicsetEContainingClass(m_DispatchesEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getDataElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Dispatches
        auto &&feature = m_Dispatches__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::DISPATCHES__FROM);
        feature->basicsetEContainingClass(m_DispatchesEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Dispatches
        auto &&classifier = m_DispatchesEClass;

        // ENamedElement
        classifier->setName("Dispatches");

        // EClassifier
        classifier->setClassifierID(DISPATCHES);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DispatchesEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Dispatches__to);
            eStructuralFeatures.basicAdd(m_Dispatches__from);
        }
    }();

    [this]()
    { // Feature to of class EntryFlow
        auto &&feature = m_EntryFlow__to;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::ENTRYFLOW__TO);
        feature->basicsetEContainingClass(m_EntryFlowEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class EntryFlow
        auto &&feature = m_EntryFlow__from;

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
        feature->setEType(
                ::kdm::code::CodePackage::_instance()->getControlElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::ENTRYFLOW__FROM);
        feature->basicsetEContainingClass(m_EntryFlowEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getControlElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EntryFlow
        auto &&classifier = m_EntryFlowEClass;

        // ENamedElement
        classifier->setName("EntryFlow");

        // EClassifier
        classifier->setClassifierID(ENTRYFLOW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EntryFlowEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EntryFlow__to);
            eStructuralFeatures.basicAdd(m_EntryFlow__from);
        }
    }();

    [this]()
    { // Feature to of class ExceptionFlow
        auto &&feature = m_ExceptionFlow__to;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::EXCEPTIONFLOW__TO);
        feature->basicsetEContainingClass(m_ExceptionFlowEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ExceptionFlow
        auto &&feature = m_ExceptionFlow__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::action::ActionPackage::EXCEPTIONFLOW__FROM);
        feature->basicsetEContainingClass(m_ExceptionFlowEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ExceptionFlow
        auto &&classifier = m_ExceptionFlowEClass;

        // ENamedElement
        classifier->setName("ExceptionFlow");

        // EClassifier
        classifier->setClassifierID(EXCEPTIONFLOW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExceptionFlowEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ExceptionFlow__to);
            eStructuralFeatures.basicAdd(m_ExceptionFlow__from);
        }
    }();

    [this]()
    { // Classifier ExceptionUnit
        auto &&classifier = m_ExceptionUnitEClass;

        // ENamedElement
        classifier->setName("ExceptionUnit");

        // EClassifier
        classifier->setClassifierID(EXCEPTIONUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class ExitFlow
        auto &&feature = m_ExitFlow__to;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::EXITFLOW__TO);
        feature->basicsetEContainingClass(m_ExitFlowEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ExitFlow
        auto &&feature = m_ExitFlow__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::EXITFLOW__FROM);
        feature->basicsetEContainingClass(m_ExitFlowEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ExitFlow
        auto &&classifier = m_ExitFlowEClass;

        // ENamedElement
        classifier->setName("ExitFlow");

        // EClassifier
        classifier->setClassifierID(EXITFLOW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExitFlowEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ExitFlow__to);
            eStructuralFeatures.basicAdd(m_ExitFlow__from);
        }
    }();

    [this]()
    { // Classifier FalseFlow
        auto &&classifier = m_FalseFlowEClass;

        // ENamedElement
        classifier->setName("FalseFlow");

        // EClassifier
        classifier->setClassifierID(FALSEFLOW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier FinallyUnit
        auto &&classifier = m_FinallyUnitEClass;

        // ENamedElement
        classifier->setName("FinallyUnit");

        // EClassifier
        classifier->setClassifierID(FINALLYUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Flow
        auto &&classifier = m_FlowEClass;

        // ENamedElement
        classifier->setName("Flow");

        // EClassifier
        classifier->setClassifierID(FLOW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier GuardedFlow
        auto &&classifier = m_GuardedFlowEClass;

        // ENamedElement
        classifier->setName("GuardedFlow");

        // EClassifier
        classifier->setClassifierID(GUARDEDFLOW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class Reads
        auto &&feature = m_Reads__to;

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
                ::kdm::code::CodePackage::_instance()->getDataElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::READS__TO);
        feature->basicsetEContainingClass(m_ReadsEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getDataElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Reads
        auto &&feature = m_Reads__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::READS__FROM);
        feature->basicsetEContainingClass(m_ReadsEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Reads
        auto &&classifier = m_ReadsEClass;

        // ENamedElement
        classifier->setName("Reads");

        // EClassifier
        classifier->setClassifierID(READS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ReadsEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Reads__to);
            eStructuralFeatures.basicAdd(m_Reads__from);
        }
    }();

    [this]()
    { // Feature to of class Throws
        auto &&feature = m_Throws__to;

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
                ::kdm::code::CodePackage::_instance()->getDataElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::THROWS__TO);
        feature->basicsetEContainingClass(m_ThrowsEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getDataElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Throws
        auto &&feature = m_Throws__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::THROWS__FROM);
        feature->basicsetEContainingClass(m_ThrowsEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Throws
        auto &&classifier = m_ThrowsEClass;

        // ENamedElement
        classifier->setName("Throws");

        // EClassifier
        classifier->setClassifierID(THROWS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ThrowsEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Throws__to);
            eStructuralFeatures.basicAdd(m_Throws__from);
        }
    }();

    [this]()
    { // Classifier TrueFlow
        auto &&classifier = m_TrueFlowEClass;

        // ENamedElement
        classifier->setName("TrueFlow");

        // EClassifier
        classifier->setClassifierID(TRUEFLOW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier TryUnit
        auto &&classifier = m_TryUnitEClass;

        // ENamedElement
        classifier->setName("TryUnit");

        // EClassifier
        classifier->setClassifierID(TRYUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class UsesType
        auto &&feature = m_UsesType__to;

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
        feature->setEType(::kdm::code::CodePackage::_instance()->getDatatype());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::USESTYPE__TO);
        feature->basicsetEContainingClass(m_UsesTypeEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getDatatype());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class UsesType
        auto &&feature = m_UsesType__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::USESTYPE__FROM);
        feature->basicsetEContainingClass(m_UsesTypeEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier UsesType
        auto &&classifier = m_UsesTypeEClass;

        // ENamedElement
        classifier->setName("UsesType");

        // EClassifier
        classifier->setClassifierID(USESTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UsesTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_UsesType__to);
            eStructuralFeatures.basicAdd(m_UsesType__from);
        }
    }();

    [this]()
    { // Feature to of class Writes
        auto &&feature = m_Writes__to;

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
                ::kdm::code::CodePackage::_instance()->getDataElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::WRITES__TO);
        feature->basicsetEContainingClass(m_WritesEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getDataElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Writes
        auto &&feature = m_Writes__from;

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
        feature->setEType(m_ActionElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::action::ActionPackage::WRITES__FROM);
        feature->basicsetEContainingClass(m_WritesEClass);

        // EReference
        feature->setEReferenceType(m_ActionElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Writes
        auto &&classifier = m_WritesEClass;

        // ENamedElement
        classifier->setName("Writes");

        // EClassifier
        classifier->setClassifierID(WRITES);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_WritesEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Writes__to);
            eStructuralFeatures.basicAdd(m_Writes__from);
        }
    }();

    // Initialize package
    setName("action");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_ActionElementEClass->getESuperTypes().push_back(
                ::kdm::code::CodePackage::_instance()->getAbstractCodeElement());
        m_AbstractActionRelationshipEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMRelationship());
        m_ControlFlowEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_CallsEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_CreatesEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_ReadsEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_WritesEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_CompliesToEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_FlowEClass->getESuperTypes().push_back(m_ControlFlowEClass);
        m_TrueFlowEClass->getESuperTypes().push_back(m_ControlFlowEClass);
        m_FalseFlowEClass->getESuperTypes().push_back(m_ControlFlowEClass);
        m_GuardedFlowEClass->getESuperTypes().push_back(m_ControlFlowEClass);
        m_UsesTypeEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_AddressesEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_ActionRelationshipEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_ThrowsEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_DispatchesEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_EntryFlowEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_BlockUnitEClass->getESuperTypes().push_back(m_ActionElementEClass);
        m_ExceptionUnitEClass->getESuperTypes().push_back(m_BlockUnitEClass);
        m_TryUnitEClass->getESuperTypes().push_back(m_ExceptionUnitEClass);
        m_FinallyUnitEClass->getESuperTypes().push_back(m_ExceptionUnitEClass);
        m_CatchUnitEClass->getESuperTypes().push_back(m_ExceptionUnitEClass);
        m_ExitFlowEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
        m_ExceptionFlowEClass->getESuperTypes().push_back(
                m_AbstractActionRelationshipEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractActionRelationshipEClass);
        classifiers.push_back(m_ActionElementEClass);
        classifiers.push_back(m_ActionRelationshipEClass);
        classifiers.push_back(m_AddressesEClass);
        classifiers.push_back(m_BlockUnitEClass);
        classifiers.push_back(m_CallsEClass);
        classifiers.push_back(m_CatchUnitEClass);
        classifiers.push_back(m_CompliesToEClass);
        classifiers.push_back(m_ControlFlowEClass);
        classifiers.push_back(m_CreatesEClass);
        classifiers.push_back(m_DispatchesEClass);
        classifiers.push_back(m_EntryFlowEClass);
        classifiers.push_back(m_ExceptionFlowEClass);
        classifiers.push_back(m_ExceptionUnitEClass);
        classifiers.push_back(m_ExitFlowEClass);
        classifiers.push_back(m_FalseFlowEClass);
        classifiers.push_back(m_FinallyUnitEClass);
        classifiers.push_back(m_FlowEClass);
        classifiers.push_back(m_GuardedFlowEClass);
        classifiers.push_back(m_ReadsEClass);
        classifiers.push_back(m_ThrowsEClass);
        classifiers.push_back(m_TrueFlowEClass);
        classifiers.push_back(m_TryUnitEClass);
        classifiers.push_back(m_UsesTypeEClass);
        classifiers.push_back(m_WritesEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr ActionPackage::getActionElement()
{
    return m_ActionElementEClass;
}
::ecore::EClass_ptr ActionPackage::getAbstractActionRelationship()
{
    return m_AbstractActionRelationshipEClass;
}
::ecore::EClass_ptr ActionPackage::getControlFlow()
{
    return m_ControlFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getCalls()
{
    return m_CallsEClass;
}
::ecore::EClass_ptr ActionPackage::getCreates()
{
    return m_CreatesEClass;
}
::ecore::EClass_ptr ActionPackage::getReads()
{
    return m_ReadsEClass;
}
::ecore::EClass_ptr ActionPackage::getWrites()
{
    return m_WritesEClass;
}
::ecore::EClass_ptr ActionPackage::getCompliesTo()
{
    return m_CompliesToEClass;
}
::ecore::EClass_ptr ActionPackage::getFlow()
{
    return m_FlowEClass;
}
::ecore::EClass_ptr ActionPackage::getTrueFlow()
{
    return m_TrueFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getFalseFlow()
{
    return m_FalseFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getGuardedFlow()
{
    return m_GuardedFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getUsesType()
{
    return m_UsesTypeEClass;
}
::ecore::EClass_ptr ActionPackage::getAddresses()
{
    return m_AddressesEClass;
}
::ecore::EClass_ptr ActionPackage::getActionRelationship()
{
    return m_ActionRelationshipEClass;
}
::ecore::EClass_ptr ActionPackage::getThrows()
{
    return m_ThrowsEClass;
}
::ecore::EClass_ptr ActionPackage::getDispatches()
{
    return m_DispatchesEClass;
}
::ecore::EClass_ptr ActionPackage::getEntryFlow()
{
    return m_EntryFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getBlockUnit()
{
    return m_BlockUnitEClass;
}
::ecore::EClass_ptr ActionPackage::getExceptionUnit()
{
    return m_ExceptionUnitEClass;
}
::ecore::EClass_ptr ActionPackage::getTryUnit()
{
    return m_TryUnitEClass;
}
::ecore::EClass_ptr ActionPackage::getFinallyUnit()
{
    return m_FinallyUnitEClass;
}
::ecore::EClass_ptr ActionPackage::getCatchUnit()
{
    return m_CatchUnitEClass;
}
::ecore::EClass_ptr ActionPackage::getExitFlow()
{
    return m_ExitFlowEClass;
}
::ecore::EClass_ptr ActionPackage::getExceptionFlow()
{
    return m_ExceptionFlowEClass;
}

::ecore::EAttribute_ptr ActionPackage::getActionElement__kind()
{
    return m_ActionElement__kind;
}
::ecore::EReference_ptr ActionPackage::getActionElement__codeElement()
{
    return m_ActionElement__codeElement;
}
::ecore::EReference_ptr ActionPackage::getActionElement__actionRelation()
{
    return m_ActionElement__actionRelation;
}
::ecore::EReference_ptr ActionPackage::getControlFlow__to()
{
    return m_ControlFlow__to;
}
::ecore::EReference_ptr ActionPackage::getControlFlow__from()
{
    return m_ControlFlow__from;
}
::ecore::EReference_ptr ActionPackage::getCalls__to()
{
    return m_Calls__to;
}
::ecore::EReference_ptr ActionPackage::getCalls__from()
{
    return m_Calls__from;
}
::ecore::EReference_ptr ActionPackage::getCreates__to()
{
    return m_Creates__to;
}
::ecore::EReference_ptr ActionPackage::getCreates__from()
{
    return m_Creates__from;
}
::ecore::EReference_ptr ActionPackage::getReads__to()
{
    return m_Reads__to;
}
::ecore::EReference_ptr ActionPackage::getReads__from()
{
    return m_Reads__from;
}
::ecore::EReference_ptr ActionPackage::getWrites__to()
{
    return m_Writes__to;
}
::ecore::EReference_ptr ActionPackage::getWrites__from()
{
    return m_Writes__from;
}
::ecore::EReference_ptr ActionPackage::getCompliesTo__to()
{
    return m_CompliesTo__to;
}
::ecore::EReference_ptr ActionPackage::getCompliesTo__from()
{
    return m_CompliesTo__from;
}
::ecore::EReference_ptr ActionPackage::getUsesType__to()
{
    return m_UsesType__to;
}
::ecore::EReference_ptr ActionPackage::getUsesType__from()
{
    return m_UsesType__from;
}
::ecore::EReference_ptr ActionPackage::getAddresses__to()
{
    return m_Addresses__to;
}
::ecore::EReference_ptr ActionPackage::getAddresses__from()
{
    return m_Addresses__from;
}
::ecore::EReference_ptr ActionPackage::getActionRelationship__to()
{
    return m_ActionRelationship__to;
}
::ecore::EReference_ptr ActionPackage::getActionRelationship__from()
{
    return m_ActionRelationship__from;
}
::ecore::EReference_ptr ActionPackage::getThrows__to()
{
    return m_Throws__to;
}
::ecore::EReference_ptr ActionPackage::getThrows__from()
{
    return m_Throws__from;
}
::ecore::EReference_ptr ActionPackage::getDispatches__to()
{
    return m_Dispatches__to;
}
::ecore::EReference_ptr ActionPackage::getDispatches__from()
{
    return m_Dispatches__from;
}
::ecore::EReference_ptr ActionPackage::getEntryFlow__to()
{
    return m_EntryFlow__to;
}
::ecore::EReference_ptr ActionPackage::getEntryFlow__from()
{
    return m_EntryFlow__from;
}
::ecore::EReference_ptr ActionPackage::getExitFlow__to()
{
    return m_ExitFlow__to;
}
::ecore::EReference_ptr ActionPackage::getExitFlow__from()
{
    return m_ExitFlow__from;
}
::ecore::EReference_ptr ActionPackage::getExceptionFlow__to()
{
    return m_ExceptionFlow__to;
}
::ecore::EReference_ptr ActionPackage::getExceptionFlow__from()
{
    return m_ExceptionFlow__from;
}

