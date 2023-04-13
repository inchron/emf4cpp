// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/EventPackageImpl.cpp
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

#include <kdm/event/EventPackage.hpp>
#include <kdm/event/EventFactory.hpp>
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
#include <kdm/code/CodePackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/core/KDMEntity.hpp>

using namespace ::kdm::event;

EventPackage::EventPackage()
{
    m_AbstractEventElement__source = ::ecore::make< ::ecore::EReference >();
    m_AbstractEventElement__eventRelation =
            ::ecore::make< ::ecore::EReference >();
    m_AbstractEventElement__abstraction =
            ::ecore::make< ::ecore::EReference >();
    m_AbstractEventElement__implementation =
            ::ecore::make< ::ecore::EReference >();
    m_AbstractEventElementEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractEventRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_ConsumesEvent__to = ::ecore::make< ::ecore::EReference >();
    m_ConsumesEvent__from = ::ecore::make< ::ecore::EReference >();
    m_ConsumesEventEClass = ::ecore::make< ::ecore::EClass >();
    m_Event__kind = ::ecore::make< ::ecore::EAttribute >();
    m_EventEClass = ::ecore::make< ::ecore::EClass >();
    m_EventAction__kind = ::ecore::make< ::ecore::EAttribute >();
    m_EventAction__eventElement = ::ecore::make< ::ecore::EReference >();
    m_EventActionEClass = ::ecore::make< ::ecore::EClass >();
    m_EventElementEClass = ::ecore::make< ::ecore::EClass >();
    m_EventModel__eventElement = ::ecore::make< ::ecore::EReference >();
    m_EventModelEClass = ::ecore::make< ::ecore::EClass >();
    m_EventRelationship__to = ::ecore::make< ::ecore::EReference >();
    m_EventRelationship__from = ::ecore::make< ::ecore::EReference >();
    m_EventRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_EventResource__eventElement = ::ecore::make< ::ecore::EReference >();
    m_EventResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_HasState__to = ::ecore::make< ::ecore::EReference >();
    m_HasState__from = ::ecore::make< ::ecore::EReference >();
    m_HasStateEClass = ::ecore::make< ::ecore::EClass >();
    m_InitialStateEClass = ::ecore::make< ::ecore::EClass >();
    m_NextState__to = ::ecore::make< ::ecore::EReference >();
    m_NextState__from = ::ecore::make< ::ecore::EReference >();
    m_NextStateEClass = ::ecore::make< ::ecore::EClass >();
    m_OnEntryEClass = ::ecore::make< ::ecore::EClass >();
    m_OnExitEClass = ::ecore::make< ::ecore::EClass >();
    m_ProducesEvent__to = ::ecore::make< ::ecore::EReference >();
    m_ProducesEvent__from = ::ecore::make< ::ecore::EReference >();
    m_ProducesEventEClass = ::ecore::make< ::ecore::EClass >();
    m_ReadsState__to = ::ecore::make< ::ecore::EReference >();
    m_ReadsState__from = ::ecore::make< ::ecore::EReference >();
    m_ReadsStateEClass = ::ecore::make< ::ecore::EClass >();
    m_StateEClass = ::ecore::make< ::ecore::EClass >();
    m_TransitionEClass = ::ecore::make< ::ecore::EClass >();
}

void EventPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = EventFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature source of class AbstractEventElement
        auto &&feature = m_AbstractEventElement__source;

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
                ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__SOURCE);
        feature->basicsetEContainingClass(m_AbstractEventElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::source::SourcePackage::_instance()->getSourceRef());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eventRelation of class AbstractEventElement
        auto &&feature = m_AbstractEventElement__eventRelation;

        // ENamedElement
        feature->setName("eventRelation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractEventRelationshipEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__EVENTRELATION);
        feature->basicsetEContainingClass(m_AbstractEventElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractEventRelationshipEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature abstraction of class AbstractEventElement
        auto &&feature = m_AbstractEventElement__abstraction;

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
                ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__ABSTRACTION);
        feature->basicsetEContainingClass(m_AbstractEventElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature implementation of class AbstractEventElement
        auto &&feature = m_AbstractEventElement__implementation;

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
                ::kdm::event::EventPackage::ABSTRACTEVENTELEMENT__IMPLEMENTATION);
        feature->basicsetEContainingClass(m_AbstractEventElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getAbstractCodeElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractEventElement
        auto &&classifier = m_AbstractEventElementEClass;

        // ENamedElement
        classifier->setName("AbstractEventElement");

        // EClassifier
        classifier->setClassifierID(ABSTRACTEVENTELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractEventElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AbstractEventElement__source);
            eStructuralFeatures.basicAdd(m_AbstractEventElement__eventRelation);
            eStructuralFeatures.basicAdd(m_AbstractEventElement__abstraction);
            eStructuralFeatures.basicAdd(
                    m_AbstractEventElement__implementation);
        }
    }();

    [this]()
    { // Classifier AbstractEventRelationship
        auto &&classifier = m_AbstractEventRelationshipEClass;

        // ENamedElement
        classifier->setName("AbstractEventRelationship");

        // EClassifier
        classifier->setClassifierID(ABSTRACTEVENTRELATIONSHIP);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class ConsumesEvent
        auto &&feature = m_ConsumesEvent__to;

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
        feature->setEType(m_EventEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::event::EventPackage::CONSUMESEVENT__TO);
        feature->basicsetEContainingClass(m_ConsumesEventEClass);

        // EReference
        feature->setEReferenceType(m_EventEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ConsumesEvent
        auto &&feature = m_ConsumesEvent__from;

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
        feature->setEType(m_TransitionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::event::EventPackage::CONSUMESEVENT__FROM);
        feature->basicsetEContainingClass(m_ConsumesEventEClass);

        // EReference
        feature->setEReferenceType(m_TransitionEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ConsumesEvent
        auto &&classifier = m_ConsumesEventEClass;

        // ENamedElement
        classifier->setName("ConsumesEvent");

        // EClassifier
        classifier->setClassifierID(CONSUMESEVENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ConsumesEventEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ConsumesEvent__to);
            eStructuralFeatures.basicAdd(m_ConsumesEvent__from);
        }
    }();

    [this]()
    { // Feature kind of class Event
        auto &&feature = m_Event__kind;

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

        feature->setFeatureID(::kdm::event::EventPackage::EVENT__KIND);
        feature->basicsetEContainingClass(m_EventEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Event
        auto &&classifier = m_EventEClass;

        // ENamedElement
        classifier->setName("Event");

        // EClassifier
        classifier->setClassifierID(EVENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EventEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Event__kind);
        }
    }();

    [this]()
    { // Feature kind of class EventAction
        auto &&feature = m_EventAction__kind;

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

        feature->setFeatureID(::kdm::event::EventPackage::EVENTACTION__KIND);
        feature->basicsetEContainingClass(m_EventActionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature eventElement of class EventAction
        auto &&feature = m_EventAction__eventElement;

        // ENamedElement
        feature->setName("eventElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EventEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::event::EventPackage::EVENTACTION__EVENTELEMENT);
        feature->basicsetEContainingClass(m_EventActionEClass);

        // EReference
        feature->setEReferenceType(m_EventEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EventAction
        auto &&classifier = m_EventActionEClass;

        // ENamedElement
        classifier->setName("EventAction");

        // EClassifier
        classifier->setClassifierID(EVENTACTION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EventActionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EventAction__kind);
            eStructuralFeatures.basicAdd(m_EventAction__eventElement);
        }
    }();

    [this]()
    { // Classifier EventElement
        auto &&classifier = m_EventElementEClass;

        // ENamedElement
        classifier->setName("EventElement");

        // EClassifier
        classifier->setClassifierID(EVENTELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature eventElement of class EventModel
        auto &&feature = m_EventModel__eventElement;

        // ENamedElement
        feature->setName("eventElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractEventElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::event::EventPackage::EVENTMODEL__EVENTELEMENT);
        feature->basicsetEContainingClass(m_EventModelEClass);

        // EReference
        feature->setEReferenceType(m_AbstractEventElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EventModel
        auto &&classifier = m_EventModelEClass;

        // ENamedElement
        classifier->setName("EventModel");

        // EClassifier
        classifier->setClassifierID(EVENTMODEL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EventModelEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EventModel__eventElement);
        }
    }();

    [this]()
    { // Feature to of class EventRelationship
        auto &&feature = m_EventRelationship__to;

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
                ::kdm::event::EventPackage::EVENTRELATIONSHIP__TO);
        feature->basicsetEContainingClass(m_EventRelationshipEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class EventRelationship
        auto &&feature = m_EventRelationship__from;

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
        feature->setEType(m_AbstractEventElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::event::EventPackage::EVENTRELATIONSHIP__FROM);
        feature->basicsetEContainingClass(m_EventRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_AbstractEventElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EventRelationship
        auto &&classifier = m_EventRelationshipEClass;

        // ENamedElement
        classifier->setName("EventRelationship");

        // EClassifier
        classifier->setClassifierID(EVENTRELATIONSHIP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EventRelationshipEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EventRelationship__to);
            eStructuralFeatures.basicAdd(m_EventRelationship__from);
        }
    }();

    [this]()
    { // Feature eventElement of class EventResource
        auto &&feature = m_EventResource__eventElement;

        // ENamedElement
        feature->setName("eventElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractEventElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::event::EventPackage::EVENTRESOURCE__EVENTELEMENT);
        feature->basicsetEContainingClass(m_EventResourceEClass);

        // EReference
        feature->setEReferenceType(m_AbstractEventElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EventResource
        auto &&classifier = m_EventResourceEClass;

        // ENamedElement
        classifier->setName("EventResource");

        // EClassifier
        classifier->setClassifierID(EVENTRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EventResourceEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EventResource__eventElement);
        }
    }();

    [this]()
    { // Feature to of class HasState
        auto &&feature = m_HasState__to;

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
        feature->setEType(m_AbstractEventElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::event::EventPackage::HASSTATE__TO);
        feature->basicsetEContainingClass(m_HasStateEClass);

        // EReference
        feature->setEReferenceType(m_AbstractEventElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class HasState
        auto &&feature = m_HasState__from;

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

        feature->setFeatureID(::kdm::event::EventPackage::HASSTATE__FROM);
        feature->basicsetEContainingClass(m_HasStateEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier HasState
        auto &&classifier = m_HasStateEClass;

        // ENamedElement
        classifier->setName("HasState");

        // EClassifier
        classifier->setClassifierID(HASSTATE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_HasStateEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_HasState__to);
            eStructuralFeatures.basicAdd(m_HasState__from);
        }
    }();

    [this]()
    { // Classifier InitialState
        auto &&classifier = m_InitialStateEClass;

        // ENamedElement
        classifier->setName("InitialState");

        // EClassifier
        classifier->setClassifierID(INITIALSTATE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class NextState
        auto &&feature = m_NextState__to;

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
        feature->setEType(m_StateEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::event::EventPackage::NEXTSTATE__TO);
        feature->basicsetEContainingClass(m_NextStateEClass);

        // EReference
        feature->setEReferenceType(m_StateEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class NextState
        auto &&feature = m_NextState__from;

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
        feature->setEType(m_TransitionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::event::EventPackage::NEXTSTATE__FROM);
        feature->basicsetEContainingClass(m_NextStateEClass);

        // EReference
        feature->setEReferenceType(m_TransitionEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier NextState
        auto &&classifier = m_NextStateEClass;

        // ENamedElement
        classifier->setName("NextState");

        // EClassifier
        classifier->setClassifierID(NEXTSTATE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_NextStateEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_NextState__to);
            eStructuralFeatures.basicAdd(m_NextState__from);
        }
    }();

    [this]()
    { // Classifier OnEntry
        auto &&classifier = m_OnEntryEClass;

        // ENamedElement
        classifier->setName("OnEntry");

        // EClassifier
        classifier->setClassifierID(ONENTRY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier OnExit
        auto &&classifier = m_OnExitEClass;

        // ENamedElement
        classifier->setName("OnExit");

        // EClassifier
        classifier->setClassifierID(ONEXIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class ProducesEvent
        auto &&feature = m_ProducesEvent__to;

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
        feature->setEType(m_EventEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::event::EventPackage::PRODUCESEVENT__TO);
        feature->basicsetEContainingClass(m_ProducesEventEClass);

        // EReference
        feature->setEReferenceType(m_EventEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ProducesEvent
        auto &&feature = m_ProducesEvent__from;

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

        feature->setFeatureID(::kdm::event::EventPackage::PRODUCESEVENT__FROM);
        feature->basicsetEContainingClass(m_ProducesEventEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ProducesEvent
        auto &&classifier = m_ProducesEventEClass;

        // ENamedElement
        classifier->setName("ProducesEvent");

        // EClassifier
        classifier->setClassifierID(PRODUCESEVENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ProducesEventEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ProducesEvent__to);
            eStructuralFeatures.basicAdd(m_ProducesEvent__from);
        }
    }();

    [this]()
    { // Feature to of class ReadsState
        auto &&feature = m_ReadsState__to;

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
        feature->setEType(m_StateEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::event::EventPackage::READSSTATE__TO);
        feature->basicsetEContainingClass(m_ReadsStateEClass);

        // EReference
        feature->setEReferenceType(m_StateEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ReadsState
        auto &&feature = m_ReadsState__from;

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

        feature->setFeatureID(::kdm::event::EventPackage::READSSTATE__FROM);
        feature->basicsetEContainingClass(m_ReadsStateEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ReadsState
        auto &&classifier = m_ReadsStateEClass;

        // ENamedElement
        classifier->setName("ReadsState");

        // EClassifier
        classifier->setClassifierID(READSSTATE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ReadsStateEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ReadsState__to);
            eStructuralFeatures.basicAdd(m_ReadsState__from);
        }
    }();

    [this]()
    { // Classifier State
        auto &&classifier = m_StateEClass;

        // ENamedElement
        classifier->setName("State");

        // EClassifier
        classifier->setClassifierID(STATE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Transition
        auto &&classifier = m_TransitionEClass;

        // ENamedElement
        classifier->setName("Transition");

        // EClassifier
        classifier->setClassifierID(TRANSITION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    // Initialize package
    setName("event");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_EventModelEClass->getESuperTypes().push_back(
                ::kdm::kdm::KdmPackage::_instance()->getKDMModel());
        m_AbstractEventElementEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        m_EventEClass->getESuperTypes().push_back(m_AbstractEventElementEClass);
        m_AbstractEventRelationshipEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMRelationship());
        m_EventRelationshipEClass->getESuperTypes().push_back(
                m_AbstractEventRelationshipEClass);
        m_EventResourceEClass->getESuperTypes().push_back(
                m_AbstractEventElementEClass);
        m_StateEClass->getESuperTypes().push_back(m_EventResourceEClass);
        m_TransitionEClass->getESuperTypes().push_back(m_EventResourceEClass);
        m_OnEntryEClass->getESuperTypes().push_back(m_TransitionEClass);
        m_OnExitEClass->getESuperTypes().push_back(m_TransitionEClass);
        m_EventActionEClass->getESuperTypes().push_back(
                m_AbstractEventElementEClass);
        m_ReadsStateEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_ProducesEventEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_ConsumesEventEClass->getESuperTypes().push_back(
                m_AbstractEventRelationshipEClass);
        m_NextStateEClass->getESuperTypes().push_back(
                m_AbstractEventRelationshipEClass);
        m_InitialStateEClass->getESuperTypes().push_back(m_StateEClass);
        m_EventElementEClass->getESuperTypes().push_back(
                m_AbstractEventElementEClass);
        m_HasStateEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractEventElementEClass);
        classifiers.push_back(m_AbstractEventRelationshipEClass);
        classifiers.push_back(m_ConsumesEventEClass);
        classifiers.push_back(m_EventEClass);
        classifiers.push_back(m_EventActionEClass);
        classifiers.push_back(m_EventElementEClass);
        classifiers.push_back(m_EventModelEClass);
        classifiers.push_back(m_EventRelationshipEClass);
        classifiers.push_back(m_EventResourceEClass);
        classifiers.push_back(m_HasStateEClass);
        classifiers.push_back(m_InitialStateEClass);
        classifiers.push_back(m_NextStateEClass);
        classifiers.push_back(m_OnEntryEClass);
        classifiers.push_back(m_OnExitEClass);
        classifiers.push_back(m_ProducesEventEClass);
        classifiers.push_back(m_ReadsStateEClass);
        classifiers.push_back(m_StateEClass);
        classifiers.push_back(m_TransitionEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr EventPackage::getEventModel()
{
    return m_EventModelEClass;
}
::ecore::EClass_ptr EventPackage::getAbstractEventElement()
{
    return m_AbstractEventElementEClass;
}
::ecore::EClass_ptr EventPackage::getEvent()
{
    return m_EventEClass;
}
::ecore::EClass_ptr EventPackage::getAbstractEventRelationship()
{
    return m_AbstractEventRelationshipEClass;
}
::ecore::EClass_ptr EventPackage::getEventRelationship()
{
    return m_EventRelationshipEClass;
}
::ecore::EClass_ptr EventPackage::getEventResource()
{
    return m_EventResourceEClass;
}
::ecore::EClass_ptr EventPackage::getState()
{
    return m_StateEClass;
}
::ecore::EClass_ptr EventPackage::getTransition()
{
    return m_TransitionEClass;
}
::ecore::EClass_ptr EventPackage::getOnEntry()
{
    return m_OnEntryEClass;
}
::ecore::EClass_ptr EventPackage::getOnExit()
{
    return m_OnExitEClass;
}
::ecore::EClass_ptr EventPackage::getEventAction()
{
    return m_EventActionEClass;
}
::ecore::EClass_ptr EventPackage::getReadsState()
{
    return m_ReadsStateEClass;
}
::ecore::EClass_ptr EventPackage::getProducesEvent()
{
    return m_ProducesEventEClass;
}
::ecore::EClass_ptr EventPackage::getConsumesEvent()
{
    return m_ConsumesEventEClass;
}
::ecore::EClass_ptr EventPackage::getNextState()
{
    return m_NextStateEClass;
}
::ecore::EClass_ptr EventPackage::getInitialState()
{
    return m_InitialStateEClass;
}
::ecore::EClass_ptr EventPackage::getEventElement()
{
    return m_EventElementEClass;
}
::ecore::EClass_ptr EventPackage::getHasState()
{
    return m_HasStateEClass;
}

::ecore::EReference_ptr EventPackage::getEventModel__eventElement()
{
    return m_EventModel__eventElement;
}
::ecore::EReference_ptr EventPackage::getAbstractEventElement__source()
{
    return m_AbstractEventElement__source;
}
::ecore::EReference_ptr EventPackage::getAbstractEventElement__eventRelation()
{
    return m_AbstractEventElement__eventRelation;
}
::ecore::EReference_ptr EventPackage::getAbstractEventElement__abstraction()
{
    return m_AbstractEventElement__abstraction;
}
::ecore::EReference_ptr EventPackage::getAbstractEventElement__implementation()
{
    return m_AbstractEventElement__implementation;
}
::ecore::EAttribute_ptr EventPackage::getEvent__kind()
{
    return m_Event__kind;
}
::ecore::EReference_ptr EventPackage::getEventRelationship__to()
{
    return m_EventRelationship__to;
}
::ecore::EReference_ptr EventPackage::getEventRelationship__from()
{
    return m_EventRelationship__from;
}
::ecore::EReference_ptr EventPackage::getEventResource__eventElement()
{
    return m_EventResource__eventElement;
}
::ecore::EAttribute_ptr EventPackage::getEventAction__kind()
{
    return m_EventAction__kind;
}
::ecore::EReference_ptr EventPackage::getEventAction__eventElement()
{
    return m_EventAction__eventElement;
}
::ecore::EReference_ptr EventPackage::getReadsState__to()
{
    return m_ReadsState__to;
}
::ecore::EReference_ptr EventPackage::getReadsState__from()
{
    return m_ReadsState__from;
}
::ecore::EReference_ptr EventPackage::getProducesEvent__to()
{
    return m_ProducesEvent__to;
}
::ecore::EReference_ptr EventPackage::getProducesEvent__from()
{
    return m_ProducesEvent__from;
}
::ecore::EReference_ptr EventPackage::getConsumesEvent__to()
{
    return m_ConsumesEvent__to;
}
::ecore::EReference_ptr EventPackage::getConsumesEvent__from()
{
    return m_ConsumesEvent__from;
}
::ecore::EReference_ptr EventPackage::getNextState__to()
{
    return m_NextState__to;
}
::ecore::EReference_ptr EventPackage::getNextState__from()
{
    return m_NextState__from;
}
::ecore::EReference_ptr EventPackage::getHasState__to()
{
    return m_HasState__to;
}
::ecore::EReference_ptr EventPackage::getHasState__from()
{
    return m_HasState__from;
}

