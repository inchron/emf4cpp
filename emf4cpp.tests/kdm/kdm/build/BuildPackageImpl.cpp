// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildPackageImpl.cpp
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

#include <kdm/build/BuildPackage.hpp>
#include <kdm/build/BuildFactory.hpp>
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
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>

using namespace ::kdm::build;

BuildPackage::BuildPackage()
{
    m_AbstractBuildElement__buildRelation =
            ::ecore::make< ::ecore::EReference >();
    m_AbstractBuildElementEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractBuildRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_BuildComponentEClass = ::ecore::make< ::ecore::EClass >();
    m_BuildDescription__source = ::ecore::make< ::ecore::EReference >();
    m_BuildDescription__text = ::ecore::make< ::ecore::EAttribute >();
    m_BuildDescriptionEClass = ::ecore::make< ::ecore::EClass >();
    m_BuildElementEClass = ::ecore::make< ::ecore::EClass >();
    m_BuildModel__buildElement = ::ecore::make< ::ecore::EReference >();
    m_BuildModelEClass = ::ecore::make< ::ecore::EClass >();
    m_BuildProductEClass = ::ecore::make< ::ecore::EClass >();
    m_BuildRelationship__to = ::ecore::make< ::ecore::EReference >();
    m_BuildRelationship__from = ::ecore::make< ::ecore::EReference >();
    m_BuildRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_BuildResource__implementation = ::ecore::make< ::ecore::EReference >();
    m_BuildResource__groupedBuild = ::ecore::make< ::ecore::EReference >();
    m_BuildResource__buildElement = ::ecore::make< ::ecore::EReference >();
    m_BuildResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_BuildStepEClass = ::ecore::make< ::ecore::EClass >();
    m_Consumes__to = ::ecore::make< ::ecore::EReference >();
    m_Consumes__from = ::ecore::make< ::ecore::EReference >();
    m_ConsumesEClass = ::ecore::make< ::ecore::EClass >();
    m_DescribedBy__to = ::ecore::make< ::ecore::EReference >();
    m_DescribedBy__from = ::ecore::make< ::ecore::EReference >();
    m_DescribedByEClass = ::ecore::make< ::ecore::EClass >();
    m_LibraryEClass = ::ecore::make< ::ecore::EClass >();
    m_LinksTo__to = ::ecore::make< ::ecore::EReference >();
    m_LinksTo__from = ::ecore::make< ::ecore::EReference >();
    m_LinksToEClass = ::ecore::make< ::ecore::EClass >();
    m_Produces__to = ::ecore::make< ::ecore::EReference >();
    m_Produces__from = ::ecore::make< ::ecore::EReference >();
    m_ProducesEClass = ::ecore::make< ::ecore::EClass >();
    m_SuppliedBy__to = ::ecore::make< ::ecore::EReference >();
    m_SuppliedBy__from = ::ecore::make< ::ecore::EReference >();
    m_SuppliedByEClass = ::ecore::make< ::ecore::EClass >();
    m_SupplierEClass = ::ecore::make< ::ecore::EClass >();
    m_SupportedBy__to = ::ecore::make< ::ecore::EReference >();
    m_SupportedBy__from = ::ecore::make< ::ecore::EReference >();
    m_SupportedByEClass = ::ecore::make< ::ecore::EClass >();
    m_SymbolicLinkEClass = ::ecore::make< ::ecore::EClass >();
    m_ToolEClass = ::ecore::make< ::ecore::EClass >();
}

void BuildPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = BuildFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature buildRelation of class AbstractBuildElement
        auto &&feature = m_AbstractBuildElement__buildRelation;

        // ENamedElement
        feature->setName("buildRelation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractBuildRelationshipEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__BUILDRELATION);
        feature->basicsetEContainingClass(m_AbstractBuildElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractBuildRelationshipEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractBuildElement
        auto &&classifier = m_AbstractBuildElementEClass;

        // ENamedElement
        classifier->setName("AbstractBuildElement");

        // EClassifier
        classifier->setClassifierID(ABSTRACTBUILDELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractBuildElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AbstractBuildElement__buildRelation);
        }
    }();

    [this]()
    { // Classifier AbstractBuildRelationship
        auto &&classifier = m_AbstractBuildRelationshipEClass;

        // ENamedElement
        classifier->setName("AbstractBuildRelationship");

        // EClassifier
        classifier->setClassifierID(ABSTRACTBUILDRELATIONSHIP);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier BuildComponent
        auto &&classifier = m_BuildComponentEClass;

        // ENamedElement
        classifier->setName("BuildComponent");

        // EClassifier
        classifier->setClassifierID(BUILDCOMPONENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature source of class BuildDescription
        auto &&feature = m_BuildDescription__source;

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
                ::kdm::build::BuildPackage::BUILDDESCRIPTION__SOURCE);
        feature->basicsetEContainingClass(m_BuildDescriptionEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::source::SourcePackage::_instance()->getSourceRef());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature text of class BuildDescription
        auto &&feature = m_BuildDescription__text;

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

        feature->setFeatureID(
                ::kdm::build::BuildPackage::BUILDDESCRIPTION__TEXT);
        feature->basicsetEContainingClass(m_BuildDescriptionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier BuildDescription
        auto &&classifier = m_BuildDescriptionEClass;

        // ENamedElement
        classifier->setName("BuildDescription");

        // EClassifier
        classifier->setClassifierID(BUILDDESCRIPTION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BuildDescriptionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_BuildDescription__source);
            eStructuralFeatures.basicAdd(m_BuildDescription__text);
        }
    }();

    [this]()
    { // Classifier BuildElement
        auto &&classifier = m_BuildElementEClass;

        // ENamedElement
        classifier->setName("BuildElement");

        // EClassifier
        classifier->setClassifierID(BUILDELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature buildElement of class BuildModel
        auto &&feature = m_BuildModel__buildElement;

        // ENamedElement
        feature->setName("buildElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractBuildElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::build::BuildPackage::BUILDMODEL__BUILDELEMENT);
        feature->basicsetEContainingClass(m_BuildModelEClass);

        // EReference
        feature->setEReferenceType(m_AbstractBuildElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier BuildModel
        auto &&classifier = m_BuildModelEClass;

        // ENamedElement
        classifier->setName("BuildModel");

        // EClassifier
        classifier->setClassifierID(BUILDMODEL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BuildModelEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_BuildModel__buildElement);
        }
    }();

    [this]()
    { // Classifier BuildProduct
        auto &&classifier = m_BuildProductEClass;

        // ENamedElement
        classifier->setName("BuildProduct");

        // EClassifier
        classifier->setClassifierID(BUILDPRODUCT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class BuildRelationship
        auto &&feature = m_BuildRelationship__to;

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
                ::kdm::build::BuildPackage::BUILDRELATIONSHIP__TO);
        feature->basicsetEContainingClass(m_BuildRelationshipEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class BuildRelationship
        auto &&feature = m_BuildRelationship__from;

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
        feature->setEType(m_AbstractBuildElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::build::BuildPackage::BUILDRELATIONSHIP__FROM);
        feature->basicsetEContainingClass(m_BuildRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_AbstractBuildElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier BuildRelationship
        auto &&classifier = m_BuildRelationshipEClass;

        // ENamedElement
        classifier->setName("BuildRelationship");

        // EClassifier
        classifier->setClassifierID(BUILDRELATIONSHIP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BuildRelationshipEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_BuildRelationship__to);
            eStructuralFeatures.basicAdd(m_BuildRelationship__from);
        }
    }();

    [this]()
    { // Feature implementation of class BuildResource
        auto &&feature = m_BuildResource__implementation;

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
                ::kdm::build::BuildPackage::BUILDRESOURCE__IMPLEMENTATION);
        feature->basicsetEContainingClass(m_BuildResourceEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature groupedBuild of class BuildResource
        auto &&feature = m_BuildResource__groupedBuild;

        // ENamedElement
        feature->setName("groupedBuild");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractBuildElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::build::BuildPackage::BUILDRESOURCE__GROUPEDBUILD);
        feature->basicsetEContainingClass(m_BuildResourceEClass);

        // EReference
        feature->setEReferenceType(m_AbstractBuildElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature buildElement of class BuildResource
        auto &&feature = m_BuildResource__buildElement;

        // ENamedElement
        feature->setName("buildElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractBuildElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::build::BuildPackage::BUILDRESOURCE__BUILDELEMENT);
        feature->basicsetEContainingClass(m_BuildResourceEClass);

        // EReference
        feature->setEReferenceType(m_AbstractBuildElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier BuildResource
        auto &&classifier = m_BuildResourceEClass;

        // ENamedElement
        classifier->setName("BuildResource");

        // EClassifier
        classifier->setClassifierID(BUILDRESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BuildResourceEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_BuildResource__implementation);
            eStructuralFeatures.basicAdd(m_BuildResource__groupedBuild);
            eStructuralFeatures.basicAdd(m_BuildResource__buildElement);
        }
    }();

    [this]()
    { // Classifier BuildStep
        auto &&classifier = m_BuildStepEClass;

        // ENamedElement
        classifier->setName("BuildStep");

        // EClassifier
        classifier->setClassifierID(BUILDSTEP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class Consumes
        auto &&feature = m_Consumes__to;

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
        feature->setEType(m_AbstractBuildElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::CONSUMES__TO);
        feature->basicsetEContainingClass(m_ConsumesEClass);

        // EReference
        feature->setEReferenceType(m_AbstractBuildElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Consumes
        auto &&feature = m_Consumes__from;

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
        feature->setEType(m_BuildStepEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::CONSUMES__FROM);
        feature->basicsetEContainingClass(m_ConsumesEClass);

        // EReference
        feature->setEReferenceType(m_BuildStepEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Consumes
        auto &&classifier = m_ConsumesEClass;

        // ENamedElement
        classifier->setName("Consumes");

        // EClassifier
        classifier->setClassifierID(CONSUMES);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ConsumesEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Consumes__to);
            eStructuralFeatures.basicAdd(m_Consumes__from);
        }
    }();

    [this]()
    { // Feature to of class DescribedBy
        auto &&feature = m_DescribedBy__to;

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
        feature->setEType(m_BuildDescriptionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::DESCRIBEDBY__TO);
        feature->basicsetEContainingClass(m_DescribedByEClass);

        // EReference
        feature->setEReferenceType(m_BuildDescriptionEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class DescribedBy
        auto &&feature = m_DescribedBy__from;

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
        feature->setEType(m_BuildStepEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::DESCRIBEDBY__FROM);
        feature->basicsetEContainingClass(m_DescribedByEClass);

        // EReference
        feature->setEReferenceType(m_BuildStepEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DescribedBy
        auto &&classifier = m_DescribedByEClass;

        // ENamedElement
        classifier->setName("DescribedBy");

        // EClassifier
        classifier->setClassifierID(DESCRIBEDBY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DescribedByEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DescribedBy__to);
            eStructuralFeatures.basicAdd(m_DescribedBy__from);
        }
    }();

    [this]()
    { // Classifier Library
        auto &&classifier = m_LibraryEClass;

        // ENamedElement
        classifier->setName("Library");

        // EClassifier
        classifier->setClassifierID(LIBRARY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class LinksTo
        auto &&feature = m_LinksTo__to;

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
        feature->setEType(m_AbstractBuildElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::LINKSTO__TO);
        feature->basicsetEContainingClass(m_LinksToEClass);

        // EReference
        feature->setEReferenceType(m_AbstractBuildElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class LinksTo
        auto &&feature = m_LinksTo__from;

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
        feature->setEType(m_SymbolicLinkEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::LINKSTO__FROM);
        feature->basicsetEContainingClass(m_LinksToEClass);

        // EReference
        feature->setEReferenceType(m_SymbolicLinkEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier LinksTo
        auto &&classifier = m_LinksToEClass;

        // ENamedElement
        classifier->setName("LinksTo");

        // EClassifier
        classifier->setClassifierID(LINKSTO);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LinksToEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_LinksTo__to);
            eStructuralFeatures.basicAdd(m_LinksTo__from);
        }
    }();

    [this]()
    { // Feature to of class Produces
        auto &&feature = m_Produces__to;

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
        feature->setEType(m_AbstractBuildElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::PRODUCES__TO);
        feature->basicsetEContainingClass(m_ProducesEClass);

        // EReference
        feature->setEReferenceType(m_AbstractBuildElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Produces
        auto &&feature = m_Produces__from;

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
        feature->setEType(m_BuildStepEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::PRODUCES__FROM);
        feature->basicsetEContainingClass(m_ProducesEClass);

        // EReference
        feature->setEReferenceType(m_BuildStepEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Produces
        auto &&classifier = m_ProducesEClass;

        // ENamedElement
        classifier->setName("Produces");

        // EClassifier
        classifier->setClassifierID(PRODUCES);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ProducesEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Produces__to);
            eStructuralFeatures.basicAdd(m_Produces__from);
        }
    }();

    [this]()
    { // Feature to of class SuppliedBy
        auto &&feature = m_SuppliedBy__to;

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
        feature->setEType(m_SupplierEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::SUPPLIEDBY__TO);
        feature->basicsetEContainingClass(m_SuppliedByEClass);

        // EReference
        feature->setEReferenceType(m_SupplierEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class SuppliedBy
        auto &&feature = m_SuppliedBy__from;

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
        feature->setEType(m_AbstractBuildElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::SUPPLIEDBY__FROM);
        feature->basicsetEContainingClass(m_SuppliedByEClass);

        // EReference
        feature->setEReferenceType(m_AbstractBuildElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier SuppliedBy
        auto &&classifier = m_SuppliedByEClass;

        // ENamedElement
        classifier->setName("SuppliedBy");

        // EClassifier
        classifier->setClassifierID(SUPPLIEDBY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SuppliedByEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SuppliedBy__to);
            eStructuralFeatures.basicAdd(m_SuppliedBy__from);
        }
    }();

    [this]()
    { // Classifier Supplier
        auto &&classifier = m_SupplierEClass;

        // ENamedElement
        classifier->setName("Supplier");

        // EClassifier
        classifier->setClassifierID(SUPPLIER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class SupportedBy
        auto &&feature = m_SupportedBy__to;

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
        feature->setEType(m_ToolEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::SUPPORTEDBY__TO);
        feature->basicsetEContainingClass(m_SupportedByEClass);

        // EReference
        feature->setEReferenceType(m_ToolEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class SupportedBy
        auto &&feature = m_SupportedBy__from;

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
        feature->setEType(m_BuildStepEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::build::BuildPackage::SUPPORTEDBY__FROM);
        feature->basicsetEContainingClass(m_SupportedByEClass);

        // EReference
        feature->setEReferenceType(m_BuildStepEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier SupportedBy
        auto &&classifier = m_SupportedByEClass;

        // ENamedElement
        classifier->setName("SupportedBy");

        // EClassifier
        classifier->setClassifierID(SUPPORTEDBY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SupportedByEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SupportedBy__to);
            eStructuralFeatures.basicAdd(m_SupportedBy__from);
        }
    }();

    [this]()
    { // Classifier SymbolicLink
        auto &&classifier = m_SymbolicLinkEClass;

        // ENamedElement
        classifier->setName("SymbolicLink");

        // EClassifier
        classifier->setClassifierID(SYMBOLICLINK);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Tool
        auto &&classifier = m_ToolEClass;

        // ENamedElement
        classifier->setName("Tool");

        // EClassifier
        classifier->setClassifierID(TOOL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    // Initialize package
    setName("build");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_AbstractBuildElementEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        m_BuildResourceEClass->getESuperTypes().push_back(
                m_AbstractBuildElementEClass);
        m_BuildDescriptionEClass->getESuperTypes().push_back(
                m_BuildResourceEClass);
        m_SymbolicLinkEClass->getESuperTypes().push_back(
                m_AbstractBuildElementEClass);
        m_AbstractBuildRelationshipEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMRelationship());
        m_LinksToEClass->getESuperTypes().push_back(
                m_AbstractBuildRelationshipEClass);
        m_ConsumesEClass->getESuperTypes().push_back(
                m_AbstractBuildRelationshipEClass);
        m_BuildModelEClass->getESuperTypes().push_back(
                ::kdm::kdm::KdmPackage::_instance()->getKDMModel());
        m_BuildComponentEClass->getESuperTypes().push_back(
                m_BuildResourceEClass);
        m_SupplierEClass->getESuperTypes().push_back(
                m_AbstractBuildElementEClass);
        m_ToolEClass->getESuperTypes().push_back(m_AbstractBuildElementEClass);
        m_BuildElementEClass->getESuperTypes().push_back(
                m_AbstractBuildElementEClass);
        m_BuildRelationshipEClass->getESuperTypes().push_back(
                m_AbstractBuildRelationshipEClass);
        m_SuppliedByEClass->getESuperTypes().push_back(
                m_AbstractBuildRelationshipEClass);
        m_LibraryEClass->getESuperTypes().push_back(m_BuildResourceEClass);
        m_BuildStepEClass->getESuperTypes().push_back(m_BuildResourceEClass);
        m_ProducesEClass->getESuperTypes().push_back(
                m_AbstractBuildRelationshipEClass);
        m_SupportedByEClass->getESuperTypes().push_back(
                m_AbstractBuildRelationshipEClass);
        m_BuildProductEClass->getESuperTypes().push_back(m_BuildResourceEClass);
        m_DescribedByEClass->getESuperTypes().push_back(
                m_AbstractBuildRelationshipEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractBuildElementEClass);
        classifiers.push_back(m_AbstractBuildRelationshipEClass);
        classifiers.push_back(m_BuildComponentEClass);
        classifiers.push_back(m_BuildDescriptionEClass);
        classifiers.push_back(m_BuildElementEClass);
        classifiers.push_back(m_BuildModelEClass);
        classifiers.push_back(m_BuildProductEClass);
        classifiers.push_back(m_BuildRelationshipEClass);
        classifiers.push_back(m_BuildResourceEClass);
        classifiers.push_back(m_BuildStepEClass);
        classifiers.push_back(m_ConsumesEClass);
        classifiers.push_back(m_DescribedByEClass);
        classifiers.push_back(m_LibraryEClass);
        classifiers.push_back(m_LinksToEClass);
        classifiers.push_back(m_ProducesEClass);
        classifiers.push_back(m_SuppliedByEClass);
        classifiers.push_back(m_SupplierEClass);
        classifiers.push_back(m_SupportedByEClass);
        classifiers.push_back(m_SymbolicLinkEClass);
        classifiers.push_back(m_ToolEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr BuildPackage::getAbstractBuildElement()
{
    return m_AbstractBuildElementEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildResource()
{
    return m_BuildResourceEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildDescription()
{
    return m_BuildDescriptionEClass;
}
::ecore::EClass_ptr BuildPackage::getSymbolicLink()
{
    return m_SymbolicLinkEClass;
}
::ecore::EClass_ptr BuildPackage::getAbstractBuildRelationship()
{
    return m_AbstractBuildRelationshipEClass;
}
::ecore::EClass_ptr BuildPackage::getLinksTo()
{
    return m_LinksToEClass;
}
::ecore::EClass_ptr BuildPackage::getConsumes()
{
    return m_ConsumesEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildModel()
{
    return m_BuildModelEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildComponent()
{
    return m_BuildComponentEClass;
}
::ecore::EClass_ptr BuildPackage::getSupplier()
{
    return m_SupplierEClass;
}
::ecore::EClass_ptr BuildPackage::getTool()
{
    return m_ToolEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildElement()
{
    return m_BuildElementEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildRelationship()
{
    return m_BuildRelationshipEClass;
}
::ecore::EClass_ptr BuildPackage::getSuppliedBy()
{
    return m_SuppliedByEClass;
}
::ecore::EClass_ptr BuildPackage::getLibrary()
{
    return m_LibraryEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildStep()
{
    return m_BuildStepEClass;
}
::ecore::EClass_ptr BuildPackage::getProduces()
{
    return m_ProducesEClass;
}
::ecore::EClass_ptr BuildPackage::getSupportedBy()
{
    return m_SupportedByEClass;
}
::ecore::EClass_ptr BuildPackage::getBuildProduct()
{
    return m_BuildProductEClass;
}
::ecore::EClass_ptr BuildPackage::getDescribedBy()
{
    return m_DescribedByEClass;
}

::ecore::EReference_ptr BuildPackage::getAbstractBuildElement__buildRelation()
{
    return m_AbstractBuildElement__buildRelation;
}
::ecore::EReference_ptr BuildPackage::getBuildResource__implementation()
{
    return m_BuildResource__implementation;
}
::ecore::EReference_ptr BuildPackage::getBuildResource__groupedBuild()
{
    return m_BuildResource__groupedBuild;
}
::ecore::EReference_ptr BuildPackage::getBuildResource__buildElement()
{
    return m_BuildResource__buildElement;
}
::ecore::EReference_ptr BuildPackage::getBuildDescription__source()
{
    return m_BuildDescription__source;
}
::ecore::EAttribute_ptr BuildPackage::getBuildDescription__text()
{
    return m_BuildDescription__text;
}
::ecore::EReference_ptr BuildPackage::getLinksTo__to()
{
    return m_LinksTo__to;
}
::ecore::EReference_ptr BuildPackage::getLinksTo__from()
{
    return m_LinksTo__from;
}
::ecore::EReference_ptr BuildPackage::getConsumes__to()
{
    return m_Consumes__to;
}
::ecore::EReference_ptr BuildPackage::getConsumes__from()
{
    return m_Consumes__from;
}
::ecore::EReference_ptr BuildPackage::getBuildModel__buildElement()
{
    return m_BuildModel__buildElement;
}
::ecore::EReference_ptr BuildPackage::getBuildRelationship__to()
{
    return m_BuildRelationship__to;
}
::ecore::EReference_ptr BuildPackage::getBuildRelationship__from()
{
    return m_BuildRelationship__from;
}
::ecore::EReference_ptr BuildPackage::getSuppliedBy__to()
{
    return m_SuppliedBy__to;
}
::ecore::EReference_ptr BuildPackage::getSuppliedBy__from()
{
    return m_SuppliedBy__from;
}
::ecore::EReference_ptr BuildPackage::getProduces__to()
{
    return m_Produces__to;
}
::ecore::EReference_ptr BuildPackage::getProduces__from()
{
    return m_Produces__from;
}
::ecore::EReference_ptr BuildPackage::getSupportedBy__to()
{
    return m_SupportedBy__to;
}
::ecore::EReference_ptr BuildPackage::getSupportedBy__from()
{
    return m_SupportedBy__from;
}
::ecore::EReference_ptr BuildPackage::getDescribedBy__to()
{
    return m_DescribedBy__to;
}
::ecore::EReference_ptr BuildPackage::getDescribedBy__from()
{
    return m_DescribedBy__from;
}

