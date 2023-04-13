// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/PlatformPackageImpl.cpp
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

#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/PlatformFactory.hpp>
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
#include <kdm/source/SourceRef.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/code/Module.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace ::kdm::platform;

PlatformPackage::PlatformPackage()
{
    m_AbstractPlatformElement__source = ::ecore::make< ::ecore::EReference >();
    m_AbstractPlatformElement__relation =
            ::ecore::make< ::ecore::EReference >();
    m_AbstractPlatformElement__abstraction =
            ::ecore::make< ::ecore::EReference >();
    m_AbstractPlatformElement__implementation = ::ecore::make<
            ::ecore::EReference >();
    m_AbstractPlatformElementEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractPlatformRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_BindsTo__to = ::ecore::make< ::ecore::EReference >();
    m_BindsTo__from = ::ecore::make< ::ecore::EReference >();
    m_BindsToEClass = ::ecore::make< ::ecore::EClass >();
    m_DataManagerEClass = ::ecore::make< ::ecore::EClass >();
    m_DefinedBy__to = ::ecore::make< ::ecore::EReference >();
    m_DefinedBy__from = ::ecore::make< ::ecore::EReference >();
    m_DefinedByEClass = ::ecore::make< ::ecore::EClass >();
    m_DeployedComponent__groupedCode = ::ecore::make< ::ecore::EReference >();
    m_DeployedComponentEClass = ::ecore::make< ::ecore::EClass >();
    m_DeployedResource__platformElement =
            ::ecore::make< ::ecore::EReference >();
    m_DeployedResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_DeployedSoftwareSystem__groupedComponent = ::ecore::make<
            ::ecore::EReference >();
    m_DeployedSoftwareSystemEClass = ::ecore::make< ::ecore::EClass >();
    m_ExecutionResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_ExternalActorEClass = ::ecore::make< ::ecore::EClass >();
    m_FileResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_Loads__to = ::ecore::make< ::ecore::EReference >();
    m_Loads__from = ::ecore::make< ::ecore::EReference >();
    m_LoadsEClass = ::ecore::make< ::ecore::EClass >();
    m_LockResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_Machine__deployedComponent = ::ecore::make< ::ecore::EReference >();
    m_Machine__deployedResource = ::ecore::make< ::ecore::EReference >();
    m_MachineEClass = ::ecore::make< ::ecore::EClass >();
    m_ManagesResource__to = ::ecore::make< ::ecore::EReference >();
    m_ManagesResource__from = ::ecore::make< ::ecore::EReference >();
    m_ManagesResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_MarshalledResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_MessagingResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_NamingResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_PlatformAction__kind = ::ecore::make< ::ecore::EAttribute >();
    m_PlatformAction__platformElement = ::ecore::make< ::ecore::EReference >();
    m_PlatformActionEClass = ::ecore::make< ::ecore::EClass >();
    m_PlatformElementEClass = ::ecore::make< ::ecore::EClass >();
    m_PlatformEvent__kind = ::ecore::make< ::ecore::EAttribute >();
    m_PlatformEventEClass = ::ecore::make< ::ecore::EClass >();
    m_PlatformModel__platformElement = ::ecore::make< ::ecore::EReference >();
    m_PlatformModelEClass = ::ecore::make< ::ecore::EClass >();
    m_PlatformRelationship__to = ::ecore::make< ::ecore::EReference >();
    m_PlatformRelationship__from = ::ecore::make< ::ecore::EReference >();
    m_PlatformRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_ProcessEClass = ::ecore::make< ::ecore::EClass >();
    m_ReadsResource__to = ::ecore::make< ::ecore::EReference >();
    m_ReadsResource__from = ::ecore::make< ::ecore::EReference >();
    m_ReadsResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_Requires__to = ::ecore::make< ::ecore::EReference >();
    m_Requires__from = ::ecore::make< ::ecore::EReference >();
    m_RequiresEClass = ::ecore::make< ::ecore::EClass >();
    m_ResourceType__platformElement = ::ecore::make< ::ecore::EReference >();
    m_ResourceTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_RuntimeResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_Spawns__to = ::ecore::make< ::ecore::EReference >();
    m_Spawns__from = ::ecore::make< ::ecore::EReference >();
    m_SpawnsEClass = ::ecore::make< ::ecore::EClass >();
    m_StreamResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_ThreadEClass = ::ecore::make< ::ecore::EClass >();
    m_WritesResource__to = ::ecore::make< ::ecore::EReference >();
    m_WritesResource__from = ::ecore::make< ::ecore::EReference >();
    m_WritesResourceEClass = ::ecore::make< ::ecore::EClass >();
}

void PlatformPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = PlatformFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature source of class AbstractPlatformElement
        auto &&feature = m_AbstractPlatformElement__source;

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
                ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__SOURCE);
        feature->basicsetEContainingClass(m_AbstractPlatformElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::source::SourcePackage::_instance()->getSourceRef());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature relation of class AbstractPlatformElement
        auto &&feature = m_AbstractPlatformElement__relation;

        // ENamedElement
        feature->setName("relation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractPlatformRelationshipEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__RELATION);
        feature->basicsetEContainingClass(m_AbstractPlatformElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractPlatformRelationshipEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature abstraction of class AbstractPlatformElement
        auto &&feature = m_AbstractPlatformElement__abstraction;

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
                ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__ABSTRACTION);
        feature->basicsetEContainingClass(m_AbstractPlatformElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature implementation of class AbstractPlatformElement
        auto &&feature = m_AbstractPlatformElement__implementation;

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
                ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__IMPLEMENTATION);
        feature->basicsetEContainingClass(m_AbstractPlatformElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getAbstractCodeElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractPlatformElement
        auto &&classifier = m_AbstractPlatformElementEClass;

        // ENamedElement
        classifier->setName("AbstractPlatformElement");

        // EClassifier
        classifier->setClassifierID(ABSTRACTPLATFORMELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractPlatformElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AbstractPlatformElement__source);
            eStructuralFeatures.basicAdd(m_AbstractPlatformElement__relation);
            eStructuralFeatures.basicAdd(
                    m_AbstractPlatformElement__abstraction);
            eStructuralFeatures.basicAdd(
                    m_AbstractPlatformElement__implementation);
        }
    }();

    [this]()
    { // Classifier AbstractPlatformRelationship
        auto &&classifier = m_AbstractPlatformRelationshipEClass;

        // ENamedElement
        classifier->setName("AbstractPlatformRelationship");

        // EClassifier
        classifier->setClassifierID(ABSTRACTPLATFORMRELATIONSHIP);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class BindsTo
        auto &&feature = m_BindsTo__to;

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
        feature->setEType(m_ResourceTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::platform::PlatformPackage::BINDSTO__TO);
        feature->basicsetEContainingClass(m_BindsToEClass);

        // EReference
        feature->setEReferenceType(m_ResourceTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class BindsTo
        auto &&feature = m_BindsTo__from;

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
        feature->setEType(m_ResourceTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::platform::PlatformPackage::BINDSTO__FROM);
        feature->basicsetEContainingClass(m_BindsToEClass);

        // EReference
        feature->setEReferenceType(m_ResourceTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier BindsTo
        auto &&classifier = m_BindsToEClass;

        // ENamedElement
        classifier->setName("BindsTo");

        // EClassifier
        classifier->setClassifierID(BINDSTO);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BindsToEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_BindsTo__to);
            eStructuralFeatures.basicAdd(m_BindsTo__from);
        }
    }();

    [this]()
    { // Classifier DataManager
        auto &&classifier = m_DataManagerEClass;

        // ENamedElement
        classifier->setName("DataManager");

        // EClassifier
        classifier->setClassifierID(DATAMANAGER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class DefinedBy
        auto &&feature = m_DefinedBy__to;

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

        feature->setFeatureID(::kdm::platform::PlatformPackage::DEFINEDBY__TO);
        feature->basicsetEContainingClass(m_DefinedByEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getCodeItem());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class DefinedBy
        auto &&feature = m_DefinedBy__from;

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

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::DEFINEDBY__FROM);
        feature->basicsetEContainingClass(m_DefinedByEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DefinedBy
        auto &&classifier = m_DefinedByEClass;

        // ENamedElement
        classifier->setName("DefinedBy");

        // EClassifier
        classifier->setClassifierID(DEFINEDBY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DefinedByEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DefinedBy__to);
            eStructuralFeatures.basicAdd(m_DefinedBy__from);
        }
    }();

    [this]()
    { // Feature groupedCode of class DeployedComponent
        auto &&feature = m_DeployedComponent__groupedCode;

        // ENamedElement
        feature->setName("groupedCode");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::code::CodePackage::_instance()->getModule());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::DEPLOYEDCOMPONENT__GROUPEDCODE);
        feature->basicsetEContainingClass(m_DeployedComponentEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getModule());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DeployedComponent
        auto &&classifier = m_DeployedComponentEClass;

        // ENamedElement
        classifier->setName("DeployedComponent");

        // EClassifier
        classifier->setClassifierID(DEPLOYEDCOMPONENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DeployedComponentEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DeployedComponent__groupedCode);
        }
    }();

    [this]()
    { // Feature platformElement of class DeployedResource
        auto &&feature = m_DeployedResource__platformElement;

        // ENamedElement
        feature->setName("platformElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ResourceTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::DEPLOYEDRESOURCE__PLATFORMELEMENT);
        feature->basicsetEContainingClass(m_DeployedResourceEClass);

        // EReference
        feature->setEReferenceType(m_ResourceTypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DeployedResource
        auto &&classifier = m_DeployedResourceEClass;

        // ENamedElement
        classifier->setName("DeployedResource");

        // EClassifier
        classifier->setClassifierID(DEPLOYEDRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DeployedResourceEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DeployedResource__platformElement);
        }
    }();

    [this]()
    { // Feature groupedComponent of class DeployedSoftwareSystem
        auto &&feature = m_DeployedSoftwareSystem__groupedComponent;

        // ENamedElement
        feature->setName("groupedComponent");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DeployedComponentEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::DEPLOYEDSOFTWARESYSTEM__GROUPEDCOMPONENT);
        feature->basicsetEContainingClass(m_DeployedSoftwareSystemEClass);

        // EReference
        feature->setEReferenceType(m_DeployedComponentEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DeployedSoftwareSystem
        auto &&classifier = m_DeployedSoftwareSystemEClass;

        // ENamedElement
        classifier->setName("DeployedSoftwareSystem");

        // EClassifier
        classifier->setClassifierID(DEPLOYEDSOFTWARESYSTEM);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DeployedSoftwareSystemEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(
                    m_DeployedSoftwareSystem__groupedComponent);
        }
    }();

    [this]()
    { // Classifier ExecutionResource
        auto &&classifier = m_ExecutionResourceEClass;

        // ENamedElement
        classifier->setName("ExecutionResource");

        // EClassifier
        classifier->setClassifierID(EXECUTIONRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier ExternalActor
        auto &&classifier = m_ExternalActorEClass;

        // ENamedElement
        classifier->setName("ExternalActor");

        // EClassifier
        classifier->setClassifierID(EXTERNALACTOR);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier FileResource
        auto &&classifier = m_FileResourceEClass;

        // ENamedElement
        classifier->setName("FileResource");

        // EClassifier
        classifier->setClassifierID(FILERESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class Loads
        auto &&feature = m_Loads__to;

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
        feature->setEType(m_DeployedComponentEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::platform::PlatformPackage::LOADS__TO);
        feature->basicsetEContainingClass(m_LoadsEClass);

        // EReference
        feature->setEReferenceType(m_DeployedComponentEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Loads
        auto &&feature = m_Loads__from;

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

        feature->setFeatureID(::kdm::platform::PlatformPackage::LOADS__FROM);
        feature->basicsetEContainingClass(m_LoadsEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Loads
        auto &&classifier = m_LoadsEClass;

        // ENamedElement
        classifier->setName("Loads");

        // EClassifier
        classifier->setClassifierID(LOADS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LoadsEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Loads__to);
            eStructuralFeatures.basicAdd(m_Loads__from);
        }
    }();

    [this]()
    { // Classifier LockResource
        auto &&classifier = m_LockResourceEClass;

        // ENamedElement
        classifier->setName("LockResource");

        // EClassifier
        classifier->setClassifierID(LOCKRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature deployedComponent of class Machine
        auto &&feature = m_Machine__deployedComponent;

        // ENamedElement
        feature->setName("deployedComponent");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DeployedComponentEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::MACHINE__DEPLOYEDCOMPONENT);
        feature->basicsetEContainingClass(m_MachineEClass);

        // EReference
        feature->setEReferenceType(m_DeployedComponentEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature deployedResource of class Machine
        auto &&feature = m_Machine__deployedResource;

        // ENamedElement
        feature->setName("deployedResource");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DeployedResourceEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::MACHINE__DEPLOYEDRESOURCE);
        feature->basicsetEContainingClass(m_MachineEClass);

        // EReference
        feature->setEReferenceType(m_DeployedResourceEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Machine
        auto &&classifier = m_MachineEClass;

        // ENamedElement
        classifier->setName("Machine");

        // EClassifier
        classifier->setClassifierID(MACHINE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_MachineEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Machine__deployedComponent);
            eStructuralFeatures.basicAdd(m_Machine__deployedResource);
        }
    }();

    [this]()
    { // Feature to of class ManagesResource
        auto &&feature = m_ManagesResource__to;

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
        feature->setEType(m_ResourceTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::MANAGESRESOURCE__TO);
        feature->basicsetEContainingClass(m_ManagesResourceEClass);

        // EReference
        feature->setEReferenceType(m_ResourceTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ManagesResource
        auto &&feature = m_ManagesResource__from;

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

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::MANAGESRESOURCE__FROM);
        feature->basicsetEContainingClass(m_ManagesResourceEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ManagesResource
        auto &&classifier = m_ManagesResourceEClass;

        // ENamedElement
        classifier->setName("ManagesResource");

        // EClassifier
        classifier->setClassifierID(MANAGESRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ManagesResourceEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ManagesResource__to);
            eStructuralFeatures.basicAdd(m_ManagesResource__from);
        }
    }();

    [this]()
    { // Classifier MarshalledResource
        auto &&classifier = m_MarshalledResourceEClass;

        // ENamedElement
        classifier->setName("MarshalledResource");

        // EClassifier
        classifier->setClassifierID(MARSHALLEDRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier MessagingResource
        auto &&classifier = m_MessagingResourceEClass;

        // ENamedElement
        classifier->setName("MessagingResource");

        // EClassifier
        classifier->setClassifierID(MESSAGINGRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier NamingResource
        auto &&classifier = m_NamingResourceEClass;

        // ENamedElement
        classifier->setName("NamingResource");

        // EClassifier
        classifier->setClassifierID(NAMINGRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature kind of class PlatformAction
        auto &&feature = m_PlatformAction__kind;

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
                ::kdm::platform::PlatformPackage::PLATFORMACTION__KIND);
        feature->basicsetEContainingClass(m_PlatformActionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature platformElement of class PlatformAction
        auto &&feature = m_PlatformAction__platformElement;

        // ENamedElement
        feature->setName("platformElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PlatformEventEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::PLATFORMACTION__PLATFORMELEMENT);
        feature->basicsetEContainingClass(m_PlatformActionEClass);

        // EReference
        feature->setEReferenceType(m_PlatformEventEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier PlatformAction
        auto &&classifier = m_PlatformActionEClass;

        // ENamedElement
        classifier->setName("PlatformAction");

        // EClassifier
        classifier->setClassifierID(PLATFORMACTION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PlatformActionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_PlatformAction__kind);
            eStructuralFeatures.basicAdd(m_PlatformAction__platformElement);
        }
    }();

    [this]()
    { // Classifier PlatformElement
        auto &&classifier = m_PlatformElementEClass;

        // ENamedElement
        classifier->setName("PlatformElement");

        // EClassifier
        classifier->setClassifierID(PLATFORMELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature kind of class PlatformEvent
        auto &&feature = m_PlatformEvent__kind;

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
                ::kdm::platform::PlatformPackage::PLATFORMEVENT__KIND);
        feature->basicsetEContainingClass(m_PlatformEventEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier PlatformEvent
        auto &&classifier = m_PlatformEventEClass;

        // ENamedElement
        classifier->setName("PlatformEvent");

        // EClassifier
        classifier->setClassifierID(PLATFORMEVENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PlatformEventEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_PlatformEvent__kind);
        }
    }();

    [this]()
    { // Feature platformElement of class PlatformModel
        auto &&feature = m_PlatformModel__platformElement;

        // ENamedElement
        feature->setName("platformElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractPlatformElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::PLATFORMMODEL__PLATFORMELEMENT);
        feature->basicsetEContainingClass(m_PlatformModelEClass);

        // EReference
        feature->setEReferenceType(m_AbstractPlatformElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier PlatformModel
        auto &&classifier = m_PlatformModelEClass;

        // ENamedElement
        classifier->setName("PlatformModel");

        // EClassifier
        classifier->setClassifierID(PLATFORMMODEL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PlatformModelEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_PlatformModel__platformElement);
        }
    }();

    [this]()
    { // Feature to of class PlatformRelationship
        auto &&feature = m_PlatformRelationship__to;

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
                ::kdm::platform::PlatformPackage::PLATFORMRELATIONSHIP__TO);
        feature->basicsetEContainingClass(m_PlatformRelationshipEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class PlatformRelationship
        auto &&feature = m_PlatformRelationship__from;

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
        feature->setEType(m_AbstractPlatformElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::PLATFORMRELATIONSHIP__FROM);
        feature->basicsetEContainingClass(m_PlatformRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_AbstractPlatformElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier PlatformRelationship
        auto &&classifier = m_PlatformRelationshipEClass;

        // ENamedElement
        classifier->setName("PlatformRelationship");

        // EClassifier
        classifier->setClassifierID(PLATFORMRELATIONSHIP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PlatformRelationshipEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_PlatformRelationship__to);
            eStructuralFeatures.basicAdd(m_PlatformRelationship__from);
        }
    }();

    [this]()
    { // Classifier Process
        auto &&classifier = m_ProcessEClass;

        // ENamedElement
        classifier->setName("Process");

        // EClassifier
        classifier->setClassifierID(PROCESS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class ReadsResource
        auto &&feature = m_ReadsResource__to;

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
        feature->setEType(m_ResourceTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::READSRESOURCE__TO);
        feature->basicsetEContainingClass(m_ReadsResourceEClass);

        // EReference
        feature->setEReferenceType(m_ResourceTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ReadsResource
        auto &&feature = m_ReadsResource__from;

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

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::READSRESOURCE__FROM);
        feature->basicsetEContainingClass(m_ReadsResourceEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ReadsResource
        auto &&classifier = m_ReadsResourceEClass;

        // ENamedElement
        classifier->setName("ReadsResource");

        // EClassifier
        classifier->setClassifierID(READSRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ReadsResourceEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ReadsResource__to);
            eStructuralFeatures.basicAdd(m_ReadsResource__from);
        }
    }();

    [this]()
    { // Feature to of class Requires
        auto &&feature = m_Requires__to;

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
        feature->setEType(m_AbstractPlatformElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::platform::PlatformPackage::REQUIRES__TO);
        feature->basicsetEContainingClass(m_RequiresEClass);

        // EReference
        feature->setEReferenceType(m_AbstractPlatformElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Requires
        auto &&feature = m_Requires__from;

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
        feature->setEType(m_DeployedComponentEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::platform::PlatformPackage::REQUIRES__FROM);
        feature->basicsetEContainingClass(m_RequiresEClass);

        // EReference
        feature->setEReferenceType(m_DeployedComponentEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Requires
        auto &&classifier = m_RequiresEClass;

        // ENamedElement
        classifier->setName("Requires");

        // EClassifier
        classifier->setClassifierID(REQUIRES);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RequiresEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Requires__to);
            eStructuralFeatures.basicAdd(m_Requires__from);
        }
    }();

    [this]()
    { // Feature platformElement of class ResourceType
        auto &&feature = m_ResourceType__platformElement;

        // ENamedElement
        feature->setName("platformElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractPlatformElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::RESOURCETYPE__PLATFORMELEMENT);
        feature->basicsetEContainingClass(m_ResourceTypeEClass);

        // EReference
        feature->setEReferenceType(m_AbstractPlatformElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ResourceType
        auto &&classifier = m_ResourceTypeEClass;

        // ENamedElement
        classifier->setName("ResourceType");

        // EClassifier
        classifier->setClassifierID(RESOURCETYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ResourceTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ResourceType__platformElement);
        }
    }();

    [this]()
    { // Classifier RuntimeResource
        auto &&classifier = m_RuntimeResourceEClass;

        // ENamedElement
        classifier->setName("RuntimeResource");

        // EClassifier
        classifier->setClassifierID(RUNTIMERESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class Spawns
        auto &&feature = m_Spawns__to;

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
        feature->setEType(m_RuntimeResourceEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::platform::PlatformPackage::SPAWNS__TO);
        feature->basicsetEContainingClass(m_SpawnsEClass);

        // EReference
        feature->setEReferenceType(m_RuntimeResourceEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Spawns
        auto &&feature = m_Spawns__from;

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

        feature->setFeatureID(::kdm::platform::PlatformPackage::SPAWNS__FROM);
        feature->basicsetEContainingClass(m_SpawnsEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Spawns
        auto &&classifier = m_SpawnsEClass;

        // ENamedElement
        classifier->setName("Spawns");

        // EClassifier
        classifier->setClassifierID(SPAWNS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SpawnsEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Spawns__to);
            eStructuralFeatures.basicAdd(m_Spawns__from);
        }
    }();

    [this]()
    { // Classifier StreamResource
        auto &&classifier = m_StreamResourceEClass;

        // ENamedElement
        classifier->setName("StreamResource");

        // EClassifier
        classifier->setClassifierID(STREAMRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Thread
        auto &&classifier = m_ThreadEClass;

        // ENamedElement
        classifier->setName("Thread");

        // EClassifier
        classifier->setClassifierID(THREAD);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class WritesResource
        auto &&feature = m_WritesResource__to;

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
        feature->setEType(m_ResourceTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::WRITESRESOURCE__TO);
        feature->basicsetEContainingClass(m_WritesResourceEClass);

        // EReference
        feature->setEReferenceType(m_ResourceTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class WritesResource
        auto &&feature = m_WritesResource__from;

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

        feature->setFeatureID(
                ::kdm::platform::PlatformPackage::WRITESRESOURCE__FROM);
        feature->basicsetEContainingClass(m_WritesResourceEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier WritesResource
        auto &&classifier = m_WritesResourceEClass;

        // ENamedElement
        classifier->setName("WritesResource");

        // EClassifier
        classifier->setClassifierID(WRITESRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_WritesResourceEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_WritesResource__to);
            eStructuralFeatures.basicAdd(m_WritesResource__from);
        }
    }();

    // Initialize package
    setName("platform");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_AbstractPlatformElementEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        m_PlatformModelEClass->getESuperTypes().push_back(
                ::kdm::kdm::KdmPackage::_instance()->getKDMModel());
        m_AbstractPlatformRelationshipEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMRelationship());
        m_RequiresEClass->getESuperTypes().push_back(
                m_AbstractPlatformRelationshipEClass);
        m_ResourceTypeEClass->getESuperTypes().push_back(
                m_AbstractPlatformElementEClass);
        m_NamingResourceEClass->getESuperTypes().push_back(
                m_ResourceTypeEClass);
        m_MarshalledResourceEClass->getESuperTypes().push_back(
                m_ResourceTypeEClass);
        m_MessagingResourceEClass->getESuperTypes().push_back(
                m_ResourceTypeEClass);
        m_FileResourceEClass->getESuperTypes().push_back(m_ResourceTypeEClass);
        m_ExecutionResourceEClass->getESuperTypes().push_back(
                m_ResourceTypeEClass);
        m_PlatformActionEClass->getESuperTypes().push_back(
                m_AbstractPlatformElementEClass);
        m_ExternalActorEClass->getESuperTypes().push_back(
                m_PlatformActionEClass);
        m_DataManagerEClass->getESuperTypes().push_back(m_ResourceTypeEClass);
        m_BindsToEClass->getESuperTypes().push_back(
                m_AbstractPlatformRelationshipEClass);
        m_PlatformElementEClass->getESuperTypes().push_back(
                m_AbstractPlatformElementEClass);
        m_PlatformRelationshipEClass->getESuperTypes().push_back(
                m_AbstractPlatformRelationshipEClass);
        m_PlatformEventEClass->getESuperTypes().push_back(
                m_AbstractPlatformElementEClass);
        m_LockResourceEClass->getESuperTypes().push_back(m_ResourceTypeEClass);
        m_DeployedSoftwareSystemEClass->getESuperTypes().push_back(
                m_AbstractPlatformElementEClass);
        m_MachineEClass->getESuperTypes().push_back(
                m_AbstractPlatformElementEClass);
        m_DeployedComponentEClass->getESuperTypes().push_back(
                m_AbstractPlatformElementEClass);
        m_DeployedResourceEClass->getESuperTypes().push_back(
                m_AbstractPlatformElementEClass);
        m_LoadsEClass->getESuperTypes().push_back(
                m_AbstractPlatformRelationshipEClass);
        m_SpawnsEClass->getESuperTypes().push_back(
                m_AbstractPlatformRelationshipEClass);
        m_RuntimeResourceEClass->getESuperTypes().push_back(
                m_ResourceTypeEClass);
        m_ThreadEClass->getESuperTypes().push_back(m_RuntimeResourceEClass);
        m_ProcessEClass->getESuperTypes().push_back(m_RuntimeResourceEClass);
        m_ReadsResourceEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_WritesResourceEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_ManagesResourceEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_DefinedByEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_StreamResourceEClass->getESuperTypes().push_back(
                m_ResourceTypeEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractPlatformElementEClass);
        classifiers.push_back(m_AbstractPlatformRelationshipEClass);
        classifiers.push_back(m_BindsToEClass);
        classifiers.push_back(m_DataManagerEClass);
        classifiers.push_back(m_DefinedByEClass);
        classifiers.push_back(m_DeployedComponentEClass);
        classifiers.push_back(m_DeployedResourceEClass);
        classifiers.push_back(m_DeployedSoftwareSystemEClass);
        classifiers.push_back(m_ExecutionResourceEClass);
        classifiers.push_back(m_ExternalActorEClass);
        classifiers.push_back(m_FileResourceEClass);
        classifiers.push_back(m_LoadsEClass);
        classifiers.push_back(m_LockResourceEClass);
        classifiers.push_back(m_MachineEClass);
        classifiers.push_back(m_ManagesResourceEClass);
        classifiers.push_back(m_MarshalledResourceEClass);
        classifiers.push_back(m_MessagingResourceEClass);
        classifiers.push_back(m_NamingResourceEClass);
        classifiers.push_back(m_PlatformActionEClass);
        classifiers.push_back(m_PlatformElementEClass);
        classifiers.push_back(m_PlatformEventEClass);
        classifiers.push_back(m_PlatformModelEClass);
        classifiers.push_back(m_PlatformRelationshipEClass);
        classifiers.push_back(m_ProcessEClass);
        classifiers.push_back(m_ReadsResourceEClass);
        classifiers.push_back(m_RequiresEClass);
        classifiers.push_back(m_ResourceTypeEClass);
        classifiers.push_back(m_RuntimeResourceEClass);
        classifiers.push_back(m_SpawnsEClass);
        classifiers.push_back(m_StreamResourceEClass);
        classifiers.push_back(m_ThreadEClass);
        classifiers.push_back(m_WritesResourceEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr PlatformPackage::getAbstractPlatformElement()
{
    return m_AbstractPlatformElementEClass;
}
::ecore::EClass_ptr PlatformPackage::getPlatformModel()
{
    return m_PlatformModelEClass;
}
::ecore::EClass_ptr PlatformPackage::getAbstractPlatformRelationship()
{
    return m_AbstractPlatformRelationshipEClass;
}
::ecore::EClass_ptr PlatformPackage::getRequires()
{
    return m_RequiresEClass;
}
::ecore::EClass_ptr PlatformPackage::getResourceType()
{
    return m_ResourceTypeEClass;
}
::ecore::EClass_ptr PlatformPackage::getNamingResource()
{
    return m_NamingResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getMarshalledResource()
{
    return m_MarshalledResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getMessagingResource()
{
    return m_MessagingResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getFileResource()
{
    return m_FileResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getExecutionResource()
{
    return m_ExecutionResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getPlatformAction()
{
    return m_PlatformActionEClass;
}
::ecore::EClass_ptr PlatformPackage::getExternalActor()
{
    return m_ExternalActorEClass;
}
::ecore::EClass_ptr PlatformPackage::getDataManager()
{
    return m_DataManagerEClass;
}
::ecore::EClass_ptr PlatformPackage::getBindsTo()
{
    return m_BindsToEClass;
}
::ecore::EClass_ptr PlatformPackage::getPlatformElement()
{
    return m_PlatformElementEClass;
}
::ecore::EClass_ptr PlatformPackage::getPlatformRelationship()
{
    return m_PlatformRelationshipEClass;
}
::ecore::EClass_ptr PlatformPackage::getPlatformEvent()
{
    return m_PlatformEventEClass;
}
::ecore::EClass_ptr PlatformPackage::getLockResource()
{
    return m_LockResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getDeployedSoftwareSystem()
{
    return m_DeployedSoftwareSystemEClass;
}
::ecore::EClass_ptr PlatformPackage::getMachine()
{
    return m_MachineEClass;
}
::ecore::EClass_ptr PlatformPackage::getDeployedComponent()
{
    return m_DeployedComponentEClass;
}
::ecore::EClass_ptr PlatformPackage::getDeployedResource()
{
    return m_DeployedResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getLoads()
{
    return m_LoadsEClass;
}
::ecore::EClass_ptr PlatformPackage::getSpawns()
{
    return m_SpawnsEClass;
}
::ecore::EClass_ptr PlatformPackage::getRuntimeResource()
{
    return m_RuntimeResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getThread()
{
    return m_ThreadEClass;
}
::ecore::EClass_ptr PlatformPackage::getProcess()
{
    return m_ProcessEClass;
}
::ecore::EClass_ptr PlatformPackage::getReadsResource()
{
    return m_ReadsResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getWritesResource()
{
    return m_WritesResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getManagesResource()
{
    return m_ManagesResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getDefinedBy()
{
    return m_DefinedByEClass;
}
::ecore::EClass_ptr PlatformPackage::getStreamResource()
{
    return m_StreamResourceEClass;
}

::ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__source()
{
    return m_AbstractPlatformElement__source;
}
::ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__relation()
{
    return m_AbstractPlatformElement__relation;
}
::ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__abstraction()
{
    return m_AbstractPlatformElement__abstraction;
}
::ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__implementation()
{
    return m_AbstractPlatformElement__implementation;
}
::ecore::EReference_ptr PlatformPackage::getPlatformModel__platformElement()
{
    return m_PlatformModel__platformElement;
}
::ecore::EReference_ptr PlatformPackage::getRequires__to()
{
    return m_Requires__to;
}
::ecore::EReference_ptr PlatformPackage::getRequires__from()
{
    return m_Requires__from;
}
::ecore::EReference_ptr PlatformPackage::getResourceType__platformElement()
{
    return m_ResourceType__platformElement;
}
::ecore::EAttribute_ptr PlatformPackage::getPlatformAction__kind()
{
    return m_PlatformAction__kind;
}
::ecore::EReference_ptr PlatformPackage::getPlatformAction__platformElement()
{
    return m_PlatformAction__platformElement;
}
::ecore::EReference_ptr PlatformPackage::getBindsTo__to()
{
    return m_BindsTo__to;
}
::ecore::EReference_ptr PlatformPackage::getBindsTo__from()
{
    return m_BindsTo__from;
}
::ecore::EReference_ptr PlatformPackage::getPlatformRelationship__to()
{
    return m_PlatformRelationship__to;
}
::ecore::EReference_ptr PlatformPackage::getPlatformRelationship__from()
{
    return m_PlatformRelationship__from;
}
::ecore::EAttribute_ptr PlatformPackage::getPlatformEvent__kind()
{
    return m_PlatformEvent__kind;
}
::ecore::EReference_ptr PlatformPackage::getDeployedSoftwareSystem__groupedComponent()
{
    return m_DeployedSoftwareSystem__groupedComponent;
}
::ecore::EReference_ptr PlatformPackage::getMachine__deployedComponent()
{
    return m_Machine__deployedComponent;
}
::ecore::EReference_ptr PlatformPackage::getMachine__deployedResource()
{
    return m_Machine__deployedResource;
}
::ecore::EReference_ptr PlatformPackage::getDeployedComponent__groupedCode()
{
    return m_DeployedComponent__groupedCode;
}
::ecore::EReference_ptr PlatformPackage::getDeployedResource__platformElement()
{
    return m_DeployedResource__platformElement;
}
::ecore::EReference_ptr PlatformPackage::getLoads__to()
{
    return m_Loads__to;
}
::ecore::EReference_ptr PlatformPackage::getLoads__from()
{
    return m_Loads__from;
}
::ecore::EReference_ptr PlatformPackage::getSpawns__to()
{
    return m_Spawns__to;
}
::ecore::EReference_ptr PlatformPackage::getSpawns__from()
{
    return m_Spawns__from;
}
::ecore::EReference_ptr PlatformPackage::getReadsResource__to()
{
    return m_ReadsResource__to;
}
::ecore::EReference_ptr PlatformPackage::getReadsResource__from()
{
    return m_ReadsResource__from;
}
::ecore::EReference_ptr PlatformPackage::getWritesResource__to()
{
    return m_WritesResource__to;
}
::ecore::EReference_ptr PlatformPackage::getWritesResource__from()
{
    return m_WritesResource__from;
}
::ecore::EReference_ptr PlatformPackage::getManagesResource__to()
{
    return m_ManagesResource__to;
}
::ecore::EReference_ptr PlatformPackage::getManagesResource__from()
{
    return m_ManagesResource__from;
}
::ecore::EReference_ptr PlatformPackage::getDefinedBy__to()
{
    return m_DefinedBy__to;
}
::ecore::EReference_ptr PlatformPackage::getDefinedBy__from()
{
    return m_DefinedBy__from;
}

