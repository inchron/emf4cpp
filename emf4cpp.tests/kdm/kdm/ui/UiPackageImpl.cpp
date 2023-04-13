// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UiPackageImpl.cpp
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

#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/UiFactory.hpp>
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
#include <kdm/action/ActionPackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/source/Image.hpp>
#include <kdm/core/KDMEntity.hpp>

using namespace ::kdm::ui;

UiPackage::UiPackage()
{
    m_AbstractUIElement__source = ::ecore::make< ::ecore::EReference >();
    m_AbstractUIElement__UIRelation = ::ecore::make< ::ecore::EReference >();
    m_AbstractUIElement__implementation =
            ::ecore::make< ::ecore::EReference >();
    m_AbstractUIElement__abstraction = ::ecore::make< ::ecore::EReference >();
    m_AbstractUIElementEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractUIRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_Displays__to = ::ecore::make< ::ecore::EReference >();
    m_Displays__from = ::ecore::make< ::ecore::EReference >();
    m_DisplaysEClass = ::ecore::make< ::ecore::EClass >();
    m_DisplaysImage__to = ::ecore::make< ::ecore::EReference >();
    m_DisplaysImage__from = ::ecore::make< ::ecore::EReference >();
    m_DisplaysImageEClass = ::ecore::make< ::ecore::EClass >();
    m_ManagesUI__to = ::ecore::make< ::ecore::EReference >();
    m_ManagesUI__from = ::ecore::make< ::ecore::EReference >();
    m_ManagesUIEClass = ::ecore::make< ::ecore::EClass >();
    m_ReadsUI__to = ::ecore::make< ::ecore::EReference >();
    m_ReadsUI__from = ::ecore::make< ::ecore::EReference >();
    m_ReadsUIEClass = ::ecore::make< ::ecore::EClass >();
    m_ReportEClass = ::ecore::make< ::ecore::EClass >();
    m_ScreenEClass = ::ecore::make< ::ecore::EClass >();
    m_UIAction__kind = ::ecore::make< ::ecore::EAttribute >();
    m_UIAction__UIElement = ::ecore::make< ::ecore::EReference >();
    m_UIActionEClass = ::ecore::make< ::ecore::EClass >();
    m_UIDisplayEClass = ::ecore::make< ::ecore::EClass >();
    m_UIElementEClass = ::ecore::make< ::ecore::EClass >();
    m_UIEvent__kind = ::ecore::make< ::ecore::EAttribute >();
    m_UIEventEClass = ::ecore::make< ::ecore::EClass >();
    m_UIFieldEClass = ::ecore::make< ::ecore::EClass >();
    m_UIFlow__to = ::ecore::make< ::ecore::EReference >();
    m_UIFlow__from = ::ecore::make< ::ecore::EReference >();
    m_UIFlowEClass = ::ecore::make< ::ecore::EClass >();
    m_UILayout__to = ::ecore::make< ::ecore::EReference >();
    m_UILayout__from = ::ecore::make< ::ecore::EReference >();
    m_UILayoutEClass = ::ecore::make< ::ecore::EClass >();
    m_UIModel__UIElement = ::ecore::make< ::ecore::EReference >();
    m_UIModelEClass = ::ecore::make< ::ecore::EClass >();
    m_UIRelationship__to = ::ecore::make< ::ecore::EReference >();
    m_UIRelationship__from = ::ecore::make< ::ecore::EReference >();
    m_UIRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_UIResource__UIElement = ::ecore::make< ::ecore::EReference >();
    m_UIResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_WritesUI__to = ::ecore::make< ::ecore::EReference >();
    m_WritesUI__from = ::ecore::make< ::ecore::EReference >();
    m_WritesUIEClass = ::ecore::make< ::ecore::EClass >();
}

void UiPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = UiFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature source of class AbstractUIElement
        auto &&feature = m_AbstractUIElement__source;

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

        feature->setFeatureID(::kdm::ui::UiPackage::ABSTRACTUIELEMENT__SOURCE);
        feature->basicsetEContainingClass(m_AbstractUIElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::source::SourcePackage::_instance()->getSourceRef());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature UIRelation of class AbstractUIElement
        auto &&feature = m_AbstractUIElement__UIRelation;

        // ENamedElement
        feature->setName("UIRelation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractUIRelationshipEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::ui::UiPackage::ABSTRACTUIELEMENT__UIRELATION);
        feature->basicsetEContainingClass(m_AbstractUIElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractUIRelationshipEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature implementation of class AbstractUIElement
        auto &&feature = m_AbstractUIElement__implementation;

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
                ::kdm::code::CodePackage::_instance()->getAbstractCodeElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::ui::UiPackage::ABSTRACTUIELEMENT__IMPLEMENTATION);
        feature->basicsetEContainingClass(m_AbstractUIElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getAbstractCodeElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature abstraction of class AbstractUIElement
        auto &&feature = m_AbstractUIElement__abstraction;

        // ENamedElement
        feature->setName("abstraction");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
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
                ::kdm::ui::UiPackage::ABSTRACTUIELEMENT__ABSTRACTION);
        feature->basicsetEContainingClass(m_AbstractUIElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractUIElement
        auto &&classifier = m_AbstractUIElementEClass;

        // ENamedElement
        classifier->setName("AbstractUIElement");

        // EClassifier
        classifier->setClassifierID(ABSTRACTUIELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractUIElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AbstractUIElement__source);
            eStructuralFeatures.basicAdd(m_AbstractUIElement__UIRelation);
            eStructuralFeatures.basicAdd(m_AbstractUIElement__implementation);
            eStructuralFeatures.basicAdd(m_AbstractUIElement__abstraction);
        }
    }();

    [this]()
    { // Classifier AbstractUIRelationship
        auto &&classifier = m_AbstractUIRelationshipEClass;

        // ENamedElement
        classifier->setName("AbstractUIRelationship");

        // EClassifier
        classifier->setClassifierID(ABSTRACTUIRELATIONSHIP);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class Displays
        auto &&feature = m_Displays__to;

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
        feature->setEType(m_UIResourceEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::DISPLAYS__TO);
        feature->basicsetEContainingClass(m_DisplaysEClass);

        // EReference
        feature->setEReferenceType(m_UIResourceEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Displays
        auto &&feature = m_Displays__from;

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
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::DISPLAYS__FROM);
        feature->basicsetEContainingClass(m_DisplaysEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Displays
        auto &&classifier = m_DisplaysEClass;

        // ENamedElement
        classifier->setName("Displays");

        // EClassifier
        classifier->setClassifierID(DISPLAYS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DisplaysEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Displays__to);
            eStructuralFeatures.basicAdd(m_Displays__from);
        }
    }();

    [this]()
    { // Feature to of class DisplaysImage
        auto &&feature = m_DisplaysImage__to;

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
                ::kdm::source::SourcePackage::_instance()->getImage());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::DISPLAYSIMAGE__TO);
        feature->basicsetEContainingClass(m_DisplaysImageEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::source::SourcePackage::_instance()->getImage());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class DisplaysImage
        auto &&feature = m_DisplaysImage__from;

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
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::DISPLAYSIMAGE__FROM);
        feature->basicsetEContainingClass(m_DisplaysImageEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DisplaysImage
        auto &&classifier = m_DisplaysImageEClass;

        // ENamedElement
        classifier->setName("DisplaysImage");

        // EClassifier
        classifier->setClassifierID(DISPLAYSIMAGE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DisplaysImageEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DisplaysImage__to);
            eStructuralFeatures.basicAdd(m_DisplaysImage__from);
        }
    }();

    [this]()
    { // Feature to of class ManagesUI
        auto &&feature = m_ManagesUI__to;

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
        feature->setEType(m_UIResourceEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::MANAGESUI__TO);
        feature->basicsetEContainingClass(m_ManagesUIEClass);

        // EReference
        feature->setEReferenceType(m_UIResourceEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ManagesUI
        auto &&feature = m_ManagesUI__from;

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
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::MANAGESUI__FROM);
        feature->basicsetEContainingClass(m_ManagesUIEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ManagesUI
        auto &&classifier = m_ManagesUIEClass;

        // ENamedElement
        classifier->setName("ManagesUI");

        // EClassifier
        classifier->setClassifierID(MANAGESUI);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ManagesUIEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ManagesUI__to);
            eStructuralFeatures.basicAdd(m_ManagesUI__from);
        }
    }();

    [this]()
    { // Feature to of class ReadsUI
        auto &&feature = m_ReadsUI__to;

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
        feature->setEType(m_UIResourceEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::READSUI__TO);
        feature->basicsetEContainingClass(m_ReadsUIEClass);

        // EReference
        feature->setEReferenceType(m_UIResourceEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ReadsUI
        auto &&feature = m_ReadsUI__from;

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
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::READSUI__FROM);
        feature->basicsetEContainingClass(m_ReadsUIEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ReadsUI
        auto &&classifier = m_ReadsUIEClass;

        // ENamedElement
        classifier->setName("ReadsUI");

        // EClassifier
        classifier->setClassifierID(READSUI);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ReadsUIEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ReadsUI__to);
            eStructuralFeatures.basicAdd(m_ReadsUI__from);
        }
    }();

    [this]()
    { // Classifier Report
        auto &&classifier = m_ReportEClass;

        // ENamedElement
        classifier->setName("Report");

        // EClassifier
        classifier->setClassifierID(REPORT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Screen
        auto &&classifier = m_ScreenEClass;

        // ENamedElement
        classifier->setName("Screen");

        // EClassifier
        classifier->setClassifierID(SCREEN);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature kind of class UIAction
        auto &&feature = m_UIAction__kind;

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

        feature->setFeatureID(::kdm::ui::UiPackage::UIACTION__KIND);
        feature->basicsetEContainingClass(m_UIActionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature UIElement of class UIAction
        auto &&feature = m_UIAction__UIElement;

        // ENamedElement
        feature->setName("UIElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_UIEventEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::UIACTION__UIELEMENT);
        feature->basicsetEContainingClass(m_UIActionEClass);

        // EReference
        feature->setEReferenceType(m_UIEventEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier UIAction
        auto &&classifier = m_UIActionEClass;

        // ENamedElement
        classifier->setName("UIAction");

        // EClassifier
        classifier->setClassifierID(UIACTION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UIActionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_UIAction__kind);
            eStructuralFeatures.basicAdd(m_UIAction__UIElement);
        }
    }();

    [this]()
    { // Classifier UIDisplay
        auto &&classifier = m_UIDisplayEClass;

        // ENamedElement
        classifier->setName("UIDisplay");

        // EClassifier
        classifier->setClassifierID(UIDISPLAY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier UIElement
        auto &&classifier = m_UIElementEClass;

        // ENamedElement
        classifier->setName("UIElement");

        // EClassifier
        classifier->setClassifierID(UIELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature kind of class UIEvent
        auto &&feature = m_UIEvent__kind;

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

        feature->setFeatureID(::kdm::ui::UiPackage::UIEVENT__KIND);
        feature->basicsetEContainingClass(m_UIEventEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier UIEvent
        auto &&classifier = m_UIEventEClass;

        // ENamedElement
        classifier->setName("UIEvent");

        // EClassifier
        classifier->setClassifierID(UIEVENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UIEventEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_UIEvent__kind);
        }
    }();

    [this]()
    { // Classifier UIField
        auto &&classifier = m_UIFieldEClass;

        // ENamedElement
        classifier->setName("UIField");

        // EClassifier
        classifier->setClassifierID(UIFIELD);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class UIFlow
        auto &&feature = m_UIFlow__to;

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
        feature->setEType(m_AbstractUIElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::UIFLOW__TO);
        feature->basicsetEContainingClass(m_UIFlowEClass);

        // EReference
        feature->setEReferenceType(m_AbstractUIElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class UIFlow
        auto &&feature = m_UIFlow__from;

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
        feature->setEType(m_AbstractUIElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::UIFLOW__FROM);
        feature->basicsetEContainingClass(m_UIFlowEClass);

        // EReference
        feature->setEReferenceType(m_AbstractUIElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier UIFlow
        auto &&classifier = m_UIFlowEClass;

        // ENamedElement
        classifier->setName("UIFlow");

        // EClassifier
        classifier->setClassifierID(UIFLOW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UIFlowEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_UIFlow__to);
            eStructuralFeatures.basicAdd(m_UIFlow__from);
        }
    }();

    [this]()
    { // Feature to of class UILayout
        auto &&feature = m_UILayout__to;

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
        feature->setEType(m_UIResourceEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::UILAYOUT__TO);
        feature->basicsetEContainingClass(m_UILayoutEClass);

        // EReference
        feature->setEReferenceType(m_UIResourceEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class UILayout
        auto &&feature = m_UILayout__from;

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
        feature->setEType(m_UIResourceEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::UILAYOUT__FROM);
        feature->basicsetEContainingClass(m_UILayoutEClass);

        // EReference
        feature->setEReferenceType(m_UIResourceEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier UILayout
        auto &&classifier = m_UILayoutEClass;

        // ENamedElement
        classifier->setName("UILayout");

        // EClassifier
        classifier->setClassifierID(UILAYOUT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UILayoutEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_UILayout__to);
            eStructuralFeatures.basicAdd(m_UILayout__from);
        }
    }();

    [this]()
    { // Feature UIElement of class UIModel
        auto &&feature = m_UIModel__UIElement;

        // ENamedElement
        feature->setName("UIElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractUIElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::UIMODEL__UIELEMENT);
        feature->basicsetEContainingClass(m_UIModelEClass);

        // EReference
        feature->setEReferenceType(m_AbstractUIElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier UIModel
        auto &&classifier = m_UIModelEClass;

        // ENamedElement
        classifier->setName("UIModel");

        // EClassifier
        classifier->setClassifierID(UIMODEL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UIModelEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_UIModel__UIElement);
        }
    }();

    [this]()
    { // Feature to of class UIRelationship
        auto &&feature = m_UIRelationship__to;

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

        feature->setFeatureID(::kdm::ui::UiPackage::UIRELATIONSHIP__TO);
        feature->basicsetEContainingClass(m_UIRelationshipEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class UIRelationship
        auto &&feature = m_UIRelationship__from;

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
        feature->setEType(m_AbstractUIElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::UIRELATIONSHIP__FROM);
        feature->basicsetEContainingClass(m_UIRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_AbstractUIElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier UIRelationship
        auto &&classifier = m_UIRelationshipEClass;

        // ENamedElement
        classifier->setName("UIRelationship");

        // EClassifier
        classifier->setClassifierID(UIRELATIONSHIP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UIRelationshipEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_UIRelationship__to);
            eStructuralFeatures.basicAdd(m_UIRelationship__from);
        }
    }();

    [this]()
    { // Feature UIElement of class UIResource
        auto &&feature = m_UIResource__UIElement;

        // ENamedElement
        feature->setName("UIElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractUIElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::UIRESOURCE__UIELEMENT);
        feature->basicsetEContainingClass(m_UIResourceEClass);

        // EReference
        feature->setEReferenceType(m_AbstractUIElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier UIResource
        auto &&classifier = m_UIResourceEClass;

        // ENamedElement
        classifier->setName("UIResource");

        // EClassifier
        classifier->setClassifierID(UIRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UIResourceEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_UIResource__UIElement);
        }
    }();

    [this]()
    { // Feature to of class WritesUI
        auto &&feature = m_WritesUI__to;

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
        feature->setEType(m_UIResourceEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::WRITESUI__TO);
        feature->basicsetEContainingClass(m_WritesUIEClass);

        // EReference
        feature->setEReferenceType(m_UIResourceEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class WritesUI
        auto &&feature = m_WritesUI__from;

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
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::ui::UiPackage::WRITESUI__FROM);
        feature->basicsetEContainingClass(m_WritesUIEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier WritesUI
        auto &&classifier = m_WritesUIEClass;

        // ENamedElement
        classifier->setName("WritesUI");

        // EClassifier
        classifier->setClassifierID(WRITESUI);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_WritesUIEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_WritesUI__to);
            eStructuralFeatures.basicAdd(m_WritesUI__from);
        }
    }();

    // Initialize package
    setName("ui");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_AbstractUIElementEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        m_UIResourceEClass->getESuperTypes().push_back(
                m_AbstractUIElementEClass);
        m_UIDisplayEClass->getESuperTypes().push_back(m_UIResourceEClass);
        m_ScreenEClass->getESuperTypes().push_back(m_UIDisplayEClass);
        m_ReportEClass->getESuperTypes().push_back(m_UIDisplayEClass);
        m_UIModelEClass->getESuperTypes().push_back(
                ::kdm::kdm::KdmPackage::_instance()->getKDMModel());
        m_AbstractUIRelationshipEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMRelationship());
        m_UILayoutEClass->getESuperTypes().push_back(
                m_AbstractUIRelationshipEClass);
        m_UIFieldEClass->getESuperTypes().push_back(m_UIResourceEClass);
        m_DisplaysImageEClass->getESuperTypes().push_back(
                m_AbstractUIRelationshipEClass);
        m_DisplaysEClass->getESuperTypes().push_back(
                m_AbstractUIRelationshipEClass);
        m_UIFlowEClass->getESuperTypes().push_back(
                m_AbstractUIRelationshipEClass);
        m_UIElementEClass->getESuperTypes().push_back(
                m_AbstractUIElementEClass);
        m_UIRelationshipEClass->getESuperTypes().push_back(
                m_AbstractUIRelationshipEClass);
        m_UIActionEClass->getESuperTypes().push_back(m_AbstractUIElementEClass);
        m_UIEventEClass->getESuperTypes().push_back(m_AbstractUIElementEClass);
        m_ReadsUIEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_WritesUIEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_ManagesUIEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractUIElementEClass);
        classifiers.push_back(m_AbstractUIRelationshipEClass);
        classifiers.push_back(m_DisplaysEClass);
        classifiers.push_back(m_DisplaysImageEClass);
        classifiers.push_back(m_ManagesUIEClass);
        classifiers.push_back(m_ReadsUIEClass);
        classifiers.push_back(m_ReportEClass);
        classifiers.push_back(m_ScreenEClass);
        classifiers.push_back(m_UIActionEClass);
        classifiers.push_back(m_UIDisplayEClass);
        classifiers.push_back(m_UIElementEClass);
        classifiers.push_back(m_UIEventEClass);
        classifiers.push_back(m_UIFieldEClass);
        classifiers.push_back(m_UIFlowEClass);
        classifiers.push_back(m_UILayoutEClass);
        classifiers.push_back(m_UIModelEClass);
        classifiers.push_back(m_UIRelationshipEClass);
        classifiers.push_back(m_UIResourceEClass);
        classifiers.push_back(m_WritesUIEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr UiPackage::getAbstractUIElement()
{
    return m_AbstractUIElementEClass;
}
::ecore::EClass_ptr UiPackage::getUIResource()
{
    return m_UIResourceEClass;
}
::ecore::EClass_ptr UiPackage::getUIDisplay()
{
    return m_UIDisplayEClass;
}
::ecore::EClass_ptr UiPackage::getScreen()
{
    return m_ScreenEClass;
}
::ecore::EClass_ptr UiPackage::getReport()
{
    return m_ReportEClass;
}
::ecore::EClass_ptr UiPackage::getUIModel()
{
    return m_UIModelEClass;
}
::ecore::EClass_ptr UiPackage::getAbstractUIRelationship()
{
    return m_AbstractUIRelationshipEClass;
}
::ecore::EClass_ptr UiPackage::getUILayout()
{
    return m_UILayoutEClass;
}
::ecore::EClass_ptr UiPackage::getUIField()
{
    return m_UIFieldEClass;
}
::ecore::EClass_ptr UiPackage::getDisplaysImage()
{
    return m_DisplaysImageEClass;
}
::ecore::EClass_ptr UiPackage::getDisplays()
{
    return m_DisplaysEClass;
}
::ecore::EClass_ptr UiPackage::getUIFlow()
{
    return m_UIFlowEClass;
}
::ecore::EClass_ptr UiPackage::getUIElement()
{
    return m_UIElementEClass;
}
::ecore::EClass_ptr UiPackage::getUIRelationship()
{
    return m_UIRelationshipEClass;
}
::ecore::EClass_ptr UiPackage::getUIAction()
{
    return m_UIActionEClass;
}
::ecore::EClass_ptr UiPackage::getUIEvent()
{
    return m_UIEventEClass;
}
::ecore::EClass_ptr UiPackage::getReadsUI()
{
    return m_ReadsUIEClass;
}
::ecore::EClass_ptr UiPackage::getWritesUI()
{
    return m_WritesUIEClass;
}
::ecore::EClass_ptr UiPackage::getManagesUI()
{
    return m_ManagesUIEClass;
}

::ecore::EReference_ptr UiPackage::getAbstractUIElement__source()
{
    return m_AbstractUIElement__source;
}
::ecore::EReference_ptr UiPackage::getAbstractUIElement__UIRelation()
{
    return m_AbstractUIElement__UIRelation;
}
::ecore::EReference_ptr UiPackage::getAbstractUIElement__implementation()
{
    return m_AbstractUIElement__implementation;
}
::ecore::EReference_ptr UiPackage::getAbstractUIElement__abstraction()
{
    return m_AbstractUIElement__abstraction;
}
::ecore::EReference_ptr UiPackage::getUIResource__UIElement()
{
    return m_UIResource__UIElement;
}
::ecore::EReference_ptr UiPackage::getUIModel__UIElement()
{
    return m_UIModel__UIElement;
}
::ecore::EReference_ptr UiPackage::getUILayout__to()
{
    return m_UILayout__to;
}
::ecore::EReference_ptr UiPackage::getUILayout__from()
{
    return m_UILayout__from;
}
::ecore::EReference_ptr UiPackage::getDisplaysImage__to()
{
    return m_DisplaysImage__to;
}
::ecore::EReference_ptr UiPackage::getDisplaysImage__from()
{
    return m_DisplaysImage__from;
}
::ecore::EReference_ptr UiPackage::getDisplays__to()
{
    return m_Displays__to;
}
::ecore::EReference_ptr UiPackage::getDisplays__from()
{
    return m_Displays__from;
}
::ecore::EReference_ptr UiPackage::getUIFlow__to()
{
    return m_UIFlow__to;
}
::ecore::EReference_ptr UiPackage::getUIFlow__from()
{
    return m_UIFlow__from;
}
::ecore::EReference_ptr UiPackage::getUIRelationship__to()
{
    return m_UIRelationship__to;
}
::ecore::EReference_ptr UiPackage::getUIRelationship__from()
{
    return m_UIRelationship__from;
}
::ecore::EAttribute_ptr UiPackage::getUIAction__kind()
{
    return m_UIAction__kind;
}
::ecore::EReference_ptr UiPackage::getUIAction__UIElement()
{
    return m_UIAction__UIElement;
}
::ecore::EAttribute_ptr UiPackage::getUIEvent__kind()
{
    return m_UIEvent__kind;
}
::ecore::EReference_ptr UiPackage::getReadsUI__to()
{
    return m_ReadsUI__to;
}
::ecore::EReference_ptr UiPackage::getReadsUI__from()
{
    return m_ReadsUI__from;
}
::ecore::EReference_ptr UiPackage::getWritesUI__to()
{
    return m_WritesUI__to;
}
::ecore::EReference_ptr UiPackage::getWritesUI__from()
{
    return m_WritesUI__from;
}
::ecore::EReference_ptr UiPackage::getManagesUI__to()
{
    return m_ManagesUI__to;
}
::ecore::EReference_ptr UiPackage::getManagesUI__from()
{
    return m_ManagesUI__from;
}

