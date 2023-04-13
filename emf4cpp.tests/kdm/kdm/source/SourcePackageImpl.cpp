// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourcePackageImpl.cpp
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

#include <kdm/source/SourcePackage.hpp>
#include <kdm/source/SourceFactory.hpp>
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
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/core/KDMEntity.hpp>

using namespace ::kdm::source;

SourcePackage::SourcePackage()
{
    m_AbstractInventoryElement__inventoryRelation = ::ecore::make<
            ::ecore::EReference >();
    m_AbstractInventoryElementEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractInventoryRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_BinaryFileEClass = ::ecore::make< ::ecore::EClass >();
    m_ConfigurationEClass = ::ecore::make< ::ecore::EClass >();
    m_DependsOn__to = ::ecore::make< ::ecore::EReference >();
    m_DependsOn__from = ::ecore::make< ::ecore::EReference >();
    m_DependsOnEClass = ::ecore::make< ::ecore::EClass >();
    m_Directory__path = ::ecore::make< ::ecore::EAttribute >();
    m_DirectoryEClass = ::ecore::make< ::ecore::EClass >();
    m_ExecutableFileEClass = ::ecore::make< ::ecore::EClass >();
    m_ImageEClass = ::ecore::make< ::ecore::EClass >();
    m_InventoryContainer__inventoryElement =
            ::ecore::make< ::ecore::EReference >();
    m_InventoryContainerEClass = ::ecore::make< ::ecore::EClass >();
    m_InventoryElementEClass = ::ecore::make< ::ecore::EClass >();
    m_InventoryItem__version = ::ecore::make< ::ecore::EAttribute >();
    m_InventoryItem__path = ::ecore::make< ::ecore::EAttribute >();
    m_InventoryItemEClass = ::ecore::make< ::ecore::EClass >();
    m_InventoryModel__inventoryElement = ::ecore::make< ::ecore::EReference >();
    m_InventoryModelEClass = ::ecore::make< ::ecore::EClass >();
    m_InventoryRelationship__to = ::ecore::make< ::ecore::EReference >();
    m_InventoryRelationship__from = ::ecore::make< ::ecore::EReference >();
    m_InventoryRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_ProjectEClass = ::ecore::make< ::ecore::EClass >();
    m_ResourceDescriptionEClass = ::ecore::make< ::ecore::EClass >();
    m_SourceFile__language = ::ecore::make< ::ecore::EAttribute >();
    m_SourceFile__encoding = ::ecore::make< ::ecore::EAttribute >();
    m_SourceFileEClass = ::ecore::make< ::ecore::EClass >();
    m_SourceRef__region = ::ecore::make< ::ecore::EReference >();
    m_SourceRef__language = ::ecore::make< ::ecore::EAttribute >();
    m_SourceRef__snippet = ::ecore::make< ::ecore::EAttribute >();
    m_SourceRefEClass = ::ecore::make< ::ecore::EClass >();
    m_SourceRegion__file = ::ecore::make< ::ecore::EReference >();
    m_SourceRegion__startLine = ::ecore::make< ::ecore::EAttribute >();
    m_SourceRegion__startPosition = ::ecore::make< ::ecore::EAttribute >();
    m_SourceRegion__endLine = ::ecore::make< ::ecore::EAttribute >();
    m_SourceRegion__endPosition = ::ecore::make< ::ecore::EAttribute >();
    m_SourceRegion__language = ::ecore::make< ::ecore::EAttribute >();
    m_SourceRegion__path = ::ecore::make< ::ecore::EAttribute >();
    m_SourceRegionEClass = ::ecore::make< ::ecore::EClass >();
}

void SourcePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = SourceFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature inventoryRelation of class AbstractInventoryElement
        auto &&feature = m_AbstractInventoryElement__inventoryRelation;

        // ENamedElement
        feature->setName("inventoryRelation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractInventoryRelationshipEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::source::SourcePackage::ABSTRACTINVENTORYELEMENT__INVENTORYRELATION);
        feature->basicsetEContainingClass(m_AbstractInventoryElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractInventoryRelationshipEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractInventoryElement
        auto &&classifier = m_AbstractInventoryElementEClass;

        // ENamedElement
        classifier->setName("AbstractInventoryElement");

        // EClassifier
        classifier->setClassifierID(ABSTRACTINVENTORYELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractInventoryElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(
                    m_AbstractInventoryElement__inventoryRelation);
        }
    }();

    [this]()
    { // Classifier AbstractInventoryRelationship
        auto &&classifier = m_AbstractInventoryRelationshipEClass;

        // ENamedElement
        classifier->setName("AbstractInventoryRelationship");

        // EClassifier
        classifier->setClassifierID(ABSTRACTINVENTORYRELATIONSHIP);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier BinaryFile
        auto &&classifier = m_BinaryFileEClass;

        // ENamedElement
        classifier->setName("BinaryFile");

        // EClassifier
        classifier->setClassifierID(BINARYFILE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Configuration
        auto &&classifier = m_ConfigurationEClass;

        // ENamedElement
        classifier->setName("Configuration");

        // EClassifier
        classifier->setClassifierID(CONFIGURATION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class DependsOn
        auto &&feature = m_DependsOn__to;

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
        feature->setEType(m_AbstractInventoryElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::source::SourcePackage::DEPENDSON__TO);
        feature->basicsetEContainingClass(m_DependsOnEClass);

        // EReference
        feature->setEReferenceType(m_AbstractInventoryElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class DependsOn
        auto &&feature = m_DependsOn__from;

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
        feature->setEType(m_AbstractInventoryElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::source::SourcePackage::DEPENDSON__FROM);
        feature->basicsetEContainingClass(m_DependsOnEClass);

        // EReference
        feature->setEReferenceType(m_AbstractInventoryElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DependsOn
        auto &&classifier = m_DependsOnEClass;

        // ENamedElement
        classifier->setName("DependsOn");

        // EClassifier
        classifier->setClassifierID(DEPENDSON);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DependsOnEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DependsOn__to);
            eStructuralFeatures.basicAdd(m_DependsOn__from);
        }
    }();

    [this]()
    { // Feature path of class Directory
        auto &&feature = m_Directory__path;

        // ENamedElement
        feature->setName("path");

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

        feature->setFeatureID(::kdm::source::SourcePackage::DIRECTORY__PATH);
        feature->basicsetEContainingClass(m_DirectoryEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Directory
        auto &&classifier = m_DirectoryEClass;

        // ENamedElement
        classifier->setName("Directory");

        // EClassifier
        classifier->setClassifierID(DIRECTORY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DirectoryEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Directory__path);
        }
    }();

    [this]()
    { // Classifier ExecutableFile
        auto &&classifier = m_ExecutableFileEClass;

        // ENamedElement
        classifier->setName("ExecutableFile");

        // EClassifier
        classifier->setClassifierID(EXECUTABLEFILE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Image
        auto &&classifier = m_ImageEClass;

        // ENamedElement
        classifier->setName("Image");

        // EClassifier
        classifier->setClassifierID(IMAGE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature inventoryElement of class InventoryContainer
        auto &&feature = m_InventoryContainer__inventoryElement;

        // ENamedElement
        feature->setName("inventoryElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractInventoryElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::source::SourcePackage::INVENTORYCONTAINER__INVENTORYELEMENT);
        feature->basicsetEContainingClass(m_InventoryContainerEClass);

        // EReference
        feature->setEReferenceType(m_AbstractInventoryElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier InventoryContainer
        auto &&classifier = m_InventoryContainerEClass;

        // ENamedElement
        classifier->setName("InventoryContainer");

        // EClassifier
        classifier->setClassifierID(INVENTORYCONTAINER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_InventoryContainerEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(
                    m_InventoryContainer__inventoryElement);
        }
    }();

    [this]()
    { // Classifier InventoryElement
        auto &&classifier = m_InventoryElementEClass;

        // ENamedElement
        classifier->setName("InventoryElement");

        // EClassifier
        classifier->setClassifierID(INVENTORYELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature version of class InventoryItem
        auto &&feature = m_InventoryItem__version;

        // ENamedElement
        feature->setName("version");

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
                ::kdm::source::SourcePackage::INVENTORYITEM__VERSION);
        feature->basicsetEContainingClass(m_InventoryItemEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature path of class InventoryItem
        auto &&feature = m_InventoryItem__path;

        // ENamedElement
        feature->setName("path");

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
                ::kdm::source::SourcePackage::INVENTORYITEM__PATH);
        feature->basicsetEContainingClass(m_InventoryItemEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier InventoryItem
        auto &&classifier = m_InventoryItemEClass;

        // ENamedElement
        classifier->setName("InventoryItem");

        // EClassifier
        classifier->setClassifierID(INVENTORYITEM);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_InventoryItemEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_InventoryItem__version);
            eStructuralFeatures.basicAdd(m_InventoryItem__path);
        }
    }();

    [this]()
    { // Feature inventoryElement of class InventoryModel
        auto &&feature = m_InventoryModel__inventoryElement;

        // ENamedElement
        feature->setName("inventoryElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractInventoryElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::source::SourcePackage::INVENTORYMODEL__INVENTORYELEMENT);
        feature->basicsetEContainingClass(m_InventoryModelEClass);

        // EReference
        feature->setEReferenceType(m_AbstractInventoryElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier InventoryModel
        auto &&classifier = m_InventoryModelEClass;

        // ENamedElement
        classifier->setName("InventoryModel");

        // EClassifier
        classifier->setClassifierID(INVENTORYMODEL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_InventoryModelEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_InventoryModel__inventoryElement);
        }
    }();

    [this]()
    { // Feature to of class InventoryRelationship
        auto &&feature = m_InventoryRelationship__to;

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
                ::kdm::source::SourcePackage::INVENTORYRELATIONSHIP__TO);
        feature->basicsetEContainingClass(m_InventoryRelationshipEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class InventoryRelationship
        auto &&feature = m_InventoryRelationship__from;

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
        feature->setEType(m_AbstractInventoryElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::source::SourcePackage::INVENTORYRELATIONSHIP__FROM);
        feature->basicsetEContainingClass(m_InventoryRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_AbstractInventoryElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier InventoryRelationship
        auto &&classifier = m_InventoryRelationshipEClass;

        // ENamedElement
        classifier->setName("InventoryRelationship");

        // EClassifier
        classifier->setClassifierID(INVENTORYRELATIONSHIP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_InventoryRelationshipEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_InventoryRelationship__to);
            eStructuralFeatures.basicAdd(m_InventoryRelationship__from);
        }
    }();

    [this]()
    { // Classifier Project
        auto &&classifier = m_ProjectEClass;

        // ENamedElement
        classifier->setName("Project");

        // EClassifier
        classifier->setClassifierID(PROJECT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier ResourceDescription
        auto &&classifier = m_ResourceDescriptionEClass;

        // ENamedElement
        classifier->setName("ResourceDescription");

        // EClassifier
        classifier->setClassifierID(RESOURCEDESCRIPTION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature language of class SourceFile
        auto &&feature = m_SourceFile__language;

        // ENamedElement
        feature->setName("language");

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
                ::kdm::source::SourcePackage::SOURCEFILE__LANGUAGE);
        feature->basicsetEContainingClass(m_SourceFileEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature encoding of class SourceFile
        auto &&feature = m_SourceFile__encoding;

        // ENamedElement
        feature->setName("encoding");

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
                ::kdm::source::SourcePackage::SOURCEFILE__ENCODING);
        feature->basicsetEContainingClass(m_SourceFileEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier SourceFile
        auto &&classifier = m_SourceFileEClass;

        // ENamedElement
        classifier->setName("SourceFile");

        // EClassifier
        classifier->setClassifierID(SOURCEFILE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SourceFileEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SourceFile__language);
            eStructuralFeatures.basicAdd(m_SourceFile__encoding);
        }
    }();

    [this]()
    { // Feature region of class SourceRef
        auto &&feature = m_SourceRef__region;

        // ENamedElement
        feature->setName("region");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_SourceRegionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::source::SourcePackage::SOURCEREF__REGION);
        feature->basicsetEContainingClass(m_SourceRefEClass);

        // EReference
        feature->setEReferenceType(m_SourceRegionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature language of class SourceRef
        auto &&feature = m_SourceRef__language;

        // ENamedElement
        feature->setName("language");

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
                ::kdm::source::SourcePackage::SOURCEREF__LANGUAGE);
        feature->basicsetEContainingClass(m_SourceRefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature snippet of class SourceRef
        auto &&feature = m_SourceRef__snippet;

        // ENamedElement
        feature->setName("snippet");

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

        feature->setFeatureID(::kdm::source::SourcePackage::SOURCEREF__SNIPPET);
        feature->basicsetEContainingClass(m_SourceRefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier SourceRef
        auto &&classifier = m_SourceRefEClass;

        // ENamedElement
        classifier->setName("SourceRef");

        // EClassifier
        classifier->setClassifierID(SOURCEREF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SourceRefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SourceRef__region);
            eStructuralFeatures.basicAdd(m_SourceRef__language);
            eStructuralFeatures.basicAdd(m_SourceRef__snippet);
        }
    }();

    [this]()
    { // Feature file of class SourceRegion
        auto &&feature = m_SourceRegion__file;

        // ENamedElement
        feature->setName("file");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_SourceFileEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::source::SourcePackage::SOURCEREGION__FILE);
        feature->basicsetEContainingClass(m_SourceRegionEClass);

        // EReference
        feature->setEReferenceType(m_SourceFileEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature startLine of class SourceRegion
        auto &&feature = m_SourceRegion__startLine;

        // ENamedElement
        feature->setName("startLine");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::source::SourcePackage::SOURCEREGION__STARTLINE);
        feature->basicsetEContainingClass(m_SourceRegionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Feature startPosition of class SourceRegion
        auto &&feature = m_SourceRegion__startPosition;

        // ENamedElement
        feature->setName("startPosition");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::source::SourcePackage::SOURCEREGION__STARTPOSITION);
        feature->basicsetEContainingClass(m_SourceRegionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Feature endLine of class SourceRegion
        auto &&feature = m_SourceRegion__endLine;

        // ENamedElement
        feature->setName("endLine");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::source::SourcePackage::SOURCEREGION__ENDLINE);
        feature->basicsetEContainingClass(m_SourceRegionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Feature endPosition of class SourceRegion
        auto &&feature = m_SourceRegion__endPosition;

        // ENamedElement
        feature->setName("endPosition");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::source::SourcePackage::SOURCEREGION__ENDPOSITION);
        feature->basicsetEContainingClass(m_SourceRegionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Feature language of class SourceRegion
        auto &&feature = m_SourceRegion__language;

        // ENamedElement
        feature->setName("language");

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
                ::kdm::source::SourcePackage::SOURCEREGION__LANGUAGE);
        feature->basicsetEContainingClass(m_SourceRegionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature path of class SourceRegion
        auto &&feature = m_SourceRegion__path;

        // ENamedElement
        feature->setName("path");

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

        feature->setFeatureID(::kdm::source::SourcePackage::SOURCEREGION__PATH);
        feature->basicsetEContainingClass(m_SourceRegionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier SourceRegion
        auto &&classifier = m_SourceRegionEClass;

        // ENamedElement
        classifier->setName("SourceRegion");

        // EClassifier
        classifier->setClassifierID(SOURCEREGION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SourceRegionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SourceRegion__file);
            eStructuralFeatures.basicAdd(m_SourceRegion__startLine);
            eStructuralFeatures.basicAdd(m_SourceRegion__startPosition);
            eStructuralFeatures.basicAdd(m_SourceRegion__endLine);
            eStructuralFeatures.basicAdd(m_SourceRegion__endPosition);
            eStructuralFeatures.basicAdd(m_SourceRegion__language);
            eStructuralFeatures.basicAdd(m_SourceRegion__path);
        }
    }();

    // Initialize package
    setName("source");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_SourceRefEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getElement());
        m_SourceRegionEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getElement());
        m_InventoryModelEClass->getESuperTypes().push_back(
                ::kdm::kdm::KdmPackage::_instance()->getKDMModel());
        m_AbstractInventoryElementEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        m_InventoryItemEClass->getESuperTypes().push_back(
                m_AbstractInventoryElementEClass);
        m_SourceFileEClass->getESuperTypes().push_back(m_InventoryItemEClass);
        m_ImageEClass->getESuperTypes().push_back(m_InventoryItemEClass);
        m_ResourceDescriptionEClass->getESuperTypes().push_back(
                m_InventoryItemEClass);
        m_ConfigurationEClass->getESuperTypes().push_back(
                m_InventoryItemEClass);
        m_InventoryContainerEClass->getESuperTypes().push_back(
                m_AbstractInventoryElementEClass);
        m_DirectoryEClass->getESuperTypes().push_back(
                m_InventoryContainerEClass);
        m_ProjectEClass->getESuperTypes().push_back(m_InventoryContainerEClass);
        m_AbstractInventoryRelationshipEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMRelationship());
        m_BinaryFileEClass->getESuperTypes().push_back(m_InventoryItemEClass);
        m_ExecutableFileEClass->getESuperTypes().push_back(
                m_InventoryItemEClass);
        m_DependsOnEClass->getESuperTypes().push_back(
                m_AbstractInventoryRelationshipEClass);
        m_InventoryElementEClass->getESuperTypes().push_back(
                m_AbstractInventoryElementEClass);
        m_InventoryRelationshipEClass->getESuperTypes().push_back(
                m_AbstractInventoryRelationshipEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractInventoryElementEClass);
        classifiers.push_back(m_AbstractInventoryRelationshipEClass);
        classifiers.push_back(m_BinaryFileEClass);
        classifiers.push_back(m_ConfigurationEClass);
        classifiers.push_back(m_DependsOnEClass);
        classifiers.push_back(m_DirectoryEClass);
        classifiers.push_back(m_ExecutableFileEClass);
        classifiers.push_back(m_ImageEClass);
        classifiers.push_back(m_InventoryContainerEClass);
        classifiers.push_back(m_InventoryElementEClass);
        classifiers.push_back(m_InventoryItemEClass);
        classifiers.push_back(m_InventoryModelEClass);
        classifiers.push_back(m_InventoryRelationshipEClass);
        classifiers.push_back(m_ProjectEClass);
        classifiers.push_back(m_ResourceDescriptionEClass);
        classifiers.push_back(m_SourceFileEClass);
        classifiers.push_back(m_SourceRefEClass);
        classifiers.push_back(m_SourceRegionEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr SourcePackage::getSourceRef()
{
    return m_SourceRefEClass;
}
::ecore::EClass_ptr SourcePackage::getSourceRegion()
{
    return m_SourceRegionEClass;
}
::ecore::EClass_ptr SourcePackage::getInventoryModel()
{
    return m_InventoryModelEClass;
}
::ecore::EClass_ptr SourcePackage::getAbstractInventoryElement()
{
    return m_AbstractInventoryElementEClass;
}
::ecore::EClass_ptr SourcePackage::getInventoryItem()
{
    return m_InventoryItemEClass;
}
::ecore::EClass_ptr SourcePackage::getSourceFile()
{
    return m_SourceFileEClass;
}
::ecore::EClass_ptr SourcePackage::getImage()
{
    return m_ImageEClass;
}
::ecore::EClass_ptr SourcePackage::getResourceDescription()
{
    return m_ResourceDescriptionEClass;
}
::ecore::EClass_ptr SourcePackage::getConfiguration()
{
    return m_ConfigurationEClass;
}
::ecore::EClass_ptr SourcePackage::getInventoryContainer()
{
    return m_InventoryContainerEClass;
}
::ecore::EClass_ptr SourcePackage::getDirectory()
{
    return m_DirectoryEClass;
}
::ecore::EClass_ptr SourcePackage::getProject()
{
    return m_ProjectEClass;
}
::ecore::EClass_ptr SourcePackage::getAbstractInventoryRelationship()
{
    return m_AbstractInventoryRelationshipEClass;
}
::ecore::EClass_ptr SourcePackage::getBinaryFile()
{
    return m_BinaryFileEClass;
}
::ecore::EClass_ptr SourcePackage::getExecutableFile()
{
    return m_ExecutableFileEClass;
}
::ecore::EClass_ptr SourcePackage::getDependsOn()
{
    return m_DependsOnEClass;
}
::ecore::EClass_ptr SourcePackage::getInventoryElement()
{
    return m_InventoryElementEClass;
}
::ecore::EClass_ptr SourcePackage::getInventoryRelationship()
{
    return m_InventoryRelationshipEClass;
}

::ecore::EReference_ptr SourcePackage::getSourceRef__region()
{
    return m_SourceRef__region;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRef__language()
{
    return m_SourceRef__language;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRef__snippet()
{
    return m_SourceRef__snippet;
}
::ecore::EReference_ptr SourcePackage::getSourceRegion__file()
{
    return m_SourceRegion__file;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__startLine()
{
    return m_SourceRegion__startLine;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__startPosition()
{
    return m_SourceRegion__startPosition;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__endLine()
{
    return m_SourceRegion__endLine;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__endPosition()
{
    return m_SourceRegion__endPosition;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__language()
{
    return m_SourceRegion__language;
}
::ecore::EAttribute_ptr SourcePackage::getSourceRegion__path()
{
    return m_SourceRegion__path;
}
::ecore::EReference_ptr SourcePackage::getInventoryModel__inventoryElement()
{
    return m_InventoryModel__inventoryElement;
}
::ecore::EReference_ptr SourcePackage::getAbstractInventoryElement__inventoryRelation()
{
    return m_AbstractInventoryElement__inventoryRelation;
}
::ecore::EAttribute_ptr SourcePackage::getInventoryItem__version()
{
    return m_InventoryItem__version;
}
::ecore::EAttribute_ptr SourcePackage::getInventoryItem__path()
{
    return m_InventoryItem__path;
}
::ecore::EAttribute_ptr SourcePackage::getSourceFile__language()
{
    return m_SourceFile__language;
}
::ecore::EAttribute_ptr SourcePackage::getSourceFile__encoding()
{
    return m_SourceFile__encoding;
}
::ecore::EReference_ptr SourcePackage::getInventoryContainer__inventoryElement()
{
    return m_InventoryContainer__inventoryElement;
}
::ecore::EAttribute_ptr SourcePackage::getDirectory__path()
{
    return m_Directory__path;
}
::ecore::EReference_ptr SourcePackage::getDependsOn__to()
{
    return m_DependsOn__to;
}
::ecore::EReference_ptr SourcePackage::getDependsOn__from()
{
    return m_DependsOn__from;
}
::ecore::EReference_ptr SourcePackage::getInventoryRelationship__to()
{
    return m_InventoryRelationship__to;
}
::ecore::EReference_ptr SourcePackage::getInventoryRelationship__from()
{
    return m_InventoryRelationship__from;
}

