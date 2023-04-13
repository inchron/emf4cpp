// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/DataPackageImpl.cpp
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

#include <kdm/data/DataPackage.hpp>
#include <kdm/data/DataFactory.hpp>
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
#include <kdm/code/ItemUnit.hpp>
#include <kdm/code/CodeItem.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/code/Datatype.hpp>

using namespace ::kdm::data;

DataPackage::DataPackage()
{
    m_AbstractContentElementEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractDataElement__source = ::ecore::make< ::ecore::EReference >();
    m_AbstractDataElement__dataRelation =
            ::ecore::make< ::ecore::EReference >();
    m_AbstractDataElement__abstraction = ::ecore::make< ::ecore::EReference >();
    m_AbstractDataElementEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractDataRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_AllContentEClass = ::ecore::make< ::ecore::EClass >();
    m_CatalogEClass = ::ecore::make< ::ecore::EClass >();
    m_ChoiceContentEClass = ::ecore::make< ::ecore::EClass >();
    m_ColumnSet__itemUnit = ::ecore::make< ::ecore::EReference >();
    m_ColumnSetEClass = ::ecore::make< ::ecore::EClass >();
    m_ComplexContentType__contentElement =
            ::ecore::make< ::ecore::EReference >();
    m_ComplexContentTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_ContentAttributeEClass = ::ecore::make< ::ecore::EClass >();
    m_ContentElementEClass = ::ecore::make< ::ecore::EClass >();
    m_ContentItem__type = ::ecore::make< ::ecore::EReference >();
    m_ContentItem__contentElement = ::ecore::make< ::ecore::EReference >();
    m_ContentItemEClass = ::ecore::make< ::ecore::EClass >();
    m_ContentReferenceEClass = ::ecore::make< ::ecore::EClass >();
    m_ContentRestriction__kind = ::ecore::make< ::ecore::EAttribute >();
    m_ContentRestriction__value = ::ecore::make< ::ecore::EAttribute >();
    m_ContentRestrictionEClass = ::ecore::make< ::ecore::EClass >();
    m_DataAction__kind = ::ecore::make< ::ecore::EAttribute >();
    m_DataAction__implementation = ::ecore::make< ::ecore::EReference >();
    m_DataAction__dataElement = ::ecore::make< ::ecore::EReference >();
    m_DataActionEClass = ::ecore::make< ::ecore::EClass >();
    m_DataContainer__dataElement = ::ecore::make< ::ecore::EReference >();
    m_DataContainerEClass = ::ecore::make< ::ecore::EClass >();
    m_DataEvent__kind = ::ecore::make< ::ecore::EAttribute >();
    m_DataEventEClass = ::ecore::make< ::ecore::EClass >();
    m_DataModel__dataElement = ::ecore::make< ::ecore::EReference >();
    m_DataModelEClass = ::ecore::make< ::ecore::EClass >();
    m_DataRelationship__to = ::ecore::make< ::ecore::EReference >();
    m_DataRelationship__from = ::ecore::make< ::ecore::EReference >();
    m_DataRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_DataResourceEClass = ::ecore::make< ::ecore::EClass >();
    m_DataSegmentEClass = ::ecore::make< ::ecore::EClass >();
    m_DatatypeOf__to = ::ecore::make< ::ecore::EReference >();
    m_DatatypeOf__from = ::ecore::make< ::ecore::EReference >();
    m_DatatypeOfEClass = ::ecore::make< ::ecore::EClass >();
    m_ExtendedDataElementEClass = ::ecore::make< ::ecore::EClass >();
    m_ExtensionTo__to = ::ecore::make< ::ecore::EReference >();
    m_ExtensionTo__from = ::ecore::make< ::ecore::EReference >();
    m_ExtensionToEClass = ::ecore::make< ::ecore::EClass >();
    m_GroupContentEClass = ::ecore::make< ::ecore::EClass >();
    m_HasContent__to = ::ecore::make< ::ecore::EReference >();
    m_HasContent__from = ::ecore::make< ::ecore::EReference >();
    m_HasContentEClass = ::ecore::make< ::ecore::EClass >();
    m_IndexEClass = ::ecore::make< ::ecore::EClass >();
    m_IndexElement__implementation = ::ecore::make< ::ecore::EReference >();
    m_IndexElementEClass = ::ecore::make< ::ecore::EClass >();
    m_KeyRelation__to = ::ecore::make< ::ecore::EReference >();
    m_KeyRelation__from = ::ecore::make< ::ecore::EReference >();
    m_KeyRelationEClass = ::ecore::make< ::ecore::EClass >();
    m_ManagesData__to = ::ecore::make< ::ecore::EReference >();
    m_ManagesData__from = ::ecore::make< ::ecore::EReference >();
    m_ManagesDataEClass = ::ecore::make< ::ecore::EClass >();
    m_MixedContentEClass = ::ecore::make< ::ecore::EClass >();
    m_ProducesDataEvent__to = ::ecore::make< ::ecore::EReference >();
    m_ProducesDataEvent__from = ::ecore::make< ::ecore::EReference >();
    m_ProducesDataEventEClass = ::ecore::make< ::ecore::EClass >();
    m_ReadsColumnSet__to = ::ecore::make< ::ecore::EReference >();
    m_ReadsColumnSet__from = ::ecore::make< ::ecore::EReference >();
    m_ReadsColumnSetEClass = ::ecore::make< ::ecore::EClass >();
    m_RecordFileEClass = ::ecore::make< ::ecore::EClass >();
    m_ReferenceKeyEClass = ::ecore::make< ::ecore::EClass >();
    m_ReferenceTo__to = ::ecore::make< ::ecore::EReference >();
    m_ReferenceTo__from = ::ecore::make< ::ecore::EReference >();
    m_ReferenceToEClass = ::ecore::make< ::ecore::EClass >();
    m_RelationalSchema__codeElement = ::ecore::make< ::ecore::EReference >();
    m_RelationalSchemaEClass = ::ecore::make< ::ecore::EClass >();
    m_RelationalTableEClass = ::ecore::make< ::ecore::EClass >();
    m_RelationalViewEClass = ::ecore::make< ::ecore::EClass >();
    m_RestrictionOf__to = ::ecore::make< ::ecore::EReference >();
    m_RestrictionOf__from = ::ecore::make< ::ecore::EReference >();
    m_RestrictionOfEClass = ::ecore::make< ::ecore::EClass >();
    m_SeqContentEClass = ::ecore::make< ::ecore::EClass >();
    m_SimpleContentType__type = ::ecore::make< ::ecore::EReference >();
    m_SimpleContentType__kind = ::ecore::make< ::ecore::EAttribute >();
    m_SimpleContentTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_TypedBy__to = ::ecore::make< ::ecore::EReference >();
    m_TypedBy__from = ::ecore::make< ::ecore::EReference >();
    m_TypedByEClass = ::ecore::make< ::ecore::EClass >();
    m_UniqueKeyEClass = ::ecore::make< ::ecore::EClass >();
    m_WritesColumnSet__to = ::ecore::make< ::ecore::EReference >();
    m_WritesColumnSet__from = ::ecore::make< ::ecore::EReference >();
    m_WritesColumnSetEClass = ::ecore::make< ::ecore::EClass >();
    m_XMLSchema__contentElement = ::ecore::make< ::ecore::EReference >();
    m_XMLSchemaEClass = ::ecore::make< ::ecore::EClass >();
}

void DataPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = DataFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Classifier AbstractContentElement
        auto &&classifier = m_AbstractContentElementEClass;

        // ENamedElement
        classifier->setName("AbstractContentElement");

        // EClassifier
        classifier->setClassifierID(ABSTRACTCONTENTELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature source of class AbstractDataElement
        auto &&feature = m_AbstractDataElement__source;

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
                ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__SOURCE);
        feature->basicsetEContainingClass(m_AbstractDataElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::source::SourcePackage::_instance()->getSourceRef());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature dataRelation of class AbstractDataElement
        auto &&feature = m_AbstractDataElement__dataRelation;

        // ENamedElement
        feature->setName("dataRelation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractDataRelationshipEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__DATARELATION);
        feature->basicsetEContainingClass(m_AbstractDataElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractDataRelationshipEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature abstraction of class AbstractDataElement
        auto &&feature = m_AbstractDataElement__abstraction;

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
                ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__ABSTRACTION);
        feature->basicsetEContainingClass(m_AbstractDataElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractDataElement
        auto &&classifier = m_AbstractDataElementEClass;

        // ENamedElement
        classifier->setName("AbstractDataElement");

        // EClassifier
        classifier->setClassifierID(ABSTRACTDATAELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractDataElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AbstractDataElement__source);
            eStructuralFeatures.basicAdd(m_AbstractDataElement__dataRelation);
            eStructuralFeatures.basicAdd(m_AbstractDataElement__abstraction);
        }
    }();

    [this]()
    { // Classifier AbstractDataRelationship
        auto &&classifier = m_AbstractDataRelationshipEClass;

        // ENamedElement
        classifier->setName("AbstractDataRelationship");

        // EClassifier
        classifier->setClassifierID(ABSTRACTDATARELATIONSHIP);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier AllContent
        auto &&classifier = m_AllContentEClass;

        // ENamedElement
        classifier->setName("AllContent");

        // EClassifier
        classifier->setClassifierID(ALLCONTENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Catalog
        auto &&classifier = m_CatalogEClass;

        // ENamedElement
        classifier->setName("Catalog");

        // EClassifier
        classifier->setClassifierID(CATALOG);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier ChoiceContent
        auto &&classifier = m_ChoiceContentEClass;

        // ENamedElement
        classifier->setName("ChoiceContent");

        // EClassifier
        classifier->setClassifierID(CHOICECONTENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature itemUnit of class ColumnSet
        auto &&feature = m_ColumnSet__itemUnit;

        // ENamedElement
        feature->setName("itemUnit");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::code::CodePackage::_instance()->getItemUnit());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::COLUMNSET__ITEMUNIT);
        feature->basicsetEContainingClass(m_ColumnSetEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getItemUnit());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ColumnSet
        auto &&classifier = m_ColumnSetEClass;

        // ENamedElement
        classifier->setName("ColumnSet");

        // EClassifier
        classifier->setClassifierID(COLUMNSET);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ColumnSetEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ColumnSet__itemUnit);
        }
    }();

    [this]()
    { // Feature contentElement of class ComplexContentType
        auto &&feature = m_ComplexContentType__contentElement;

        // ENamedElement
        feature->setName("contentElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractContentElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::data::DataPackage::COMPLEXCONTENTTYPE__CONTENTELEMENT);
        feature->basicsetEContainingClass(m_ComplexContentTypeEClass);

        // EReference
        feature->setEReferenceType(m_AbstractContentElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ComplexContentType
        auto &&classifier = m_ComplexContentTypeEClass;

        // ENamedElement
        classifier->setName("ComplexContentType");

        // EClassifier
        classifier->setClassifierID(COMPLEXCONTENTTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ComplexContentTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ComplexContentType__contentElement);
        }
    }();

    [this]()
    { // Classifier ContentAttribute
        auto &&classifier = m_ContentAttributeEClass;

        // ENamedElement
        classifier->setName("ContentAttribute");

        // EClassifier
        classifier->setClassifierID(CONTENTATTRIBUTE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier ContentElement
        auto &&classifier = m_ContentElementEClass;

        // ENamedElement
        classifier->setName("ContentElement");

        // EClassifier
        classifier->setClassifierID(CONTENTELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature type of class ContentItem
        auto &&feature = m_ContentItem__type;

        // ENamedElement
        feature->setName("type");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ComplexContentTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::CONTENTITEM__TYPE);
        feature->basicsetEContainingClass(m_ContentItemEClass);

        // EReference
        feature->setEReferenceType(m_ComplexContentTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature contentElement of class ContentItem
        auto &&feature = m_ContentItem__contentElement;

        // ENamedElement
        feature->setName("contentElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractContentElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::data::DataPackage::CONTENTITEM__CONTENTELEMENT);
        feature->basicsetEContainingClass(m_ContentItemEClass);

        // EReference
        feature->setEReferenceType(m_AbstractContentElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ContentItem
        auto &&classifier = m_ContentItemEClass;

        // ENamedElement
        classifier->setName("ContentItem");

        // EClassifier
        classifier->setClassifierID(CONTENTITEM);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ContentItemEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ContentItem__type);
            eStructuralFeatures.basicAdd(m_ContentItem__contentElement);
        }
    }();

    [this]()
    { // Classifier ContentReference
        auto &&classifier = m_ContentReferenceEClass;

        // ENamedElement
        classifier->setName("ContentReference");

        // EClassifier
        classifier->setClassifierID(CONTENTREFERENCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature kind of class ContentRestriction
        auto &&feature = m_ContentRestriction__kind;

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
                ::kdm::data::DataPackage::CONTENTRESTRICTION__KIND);
        feature->basicsetEContainingClass(m_ContentRestrictionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature value of class ContentRestriction
        auto &&feature = m_ContentRestriction__value;

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

        feature->setFeatureID(
                ::kdm::data::DataPackage::CONTENTRESTRICTION__VALUE);
        feature->basicsetEContainingClass(m_ContentRestrictionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier ContentRestriction
        auto &&classifier = m_ContentRestrictionEClass;

        // ENamedElement
        classifier->setName("ContentRestriction");

        // EClassifier
        classifier->setClassifierID(CONTENTRESTRICTION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ContentRestrictionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ContentRestriction__kind);
            eStructuralFeatures.basicAdd(m_ContentRestriction__value);
        }
    }();

    [this]()
    { // Feature kind of class DataAction
        auto &&feature = m_DataAction__kind;

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

        feature->setFeatureID(::kdm::data::DataPackage::DATAACTION__KIND);
        feature->basicsetEContainingClass(m_DataActionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature implementation of class DataAction
        auto &&feature = m_DataAction__implementation;

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
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::data::DataPackage::DATAACTION__IMPLEMENTATION);
        feature->basicsetEContainingClass(m_DataActionEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature dataElement of class DataAction
        auto &&feature = m_DataAction__dataElement;

        // ENamedElement
        feature->setName("dataElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DataEventEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::data::DataPackage::DATAACTION__DATAELEMENT);
        feature->basicsetEContainingClass(m_DataActionEClass);

        // EReference
        feature->setEReferenceType(m_DataEventEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DataAction
        auto &&classifier = m_DataActionEClass;

        // ENamedElement
        classifier->setName("DataAction");

        // EClassifier
        classifier->setClassifierID(DATAACTION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DataActionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DataAction__kind);
            eStructuralFeatures.basicAdd(m_DataAction__implementation);
            eStructuralFeatures.basicAdd(m_DataAction__dataElement);
        }
    }();

    [this]()
    { // Feature dataElement of class DataContainer
        auto &&feature = m_DataContainer__dataElement;

        // ENamedElement
        feature->setName("dataElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DataResourceEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::data::DataPackage::DATACONTAINER__DATAELEMENT);
        feature->basicsetEContainingClass(m_DataContainerEClass);

        // EReference
        feature->setEReferenceType(m_DataResourceEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DataContainer
        auto &&classifier = m_DataContainerEClass;

        // ENamedElement
        classifier->setName("DataContainer");

        // EClassifier
        classifier->setClassifierID(DATACONTAINER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DataContainerEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DataContainer__dataElement);
        }
    }();

    [this]()
    { // Feature kind of class DataEvent
        auto &&feature = m_DataEvent__kind;

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

        feature->setFeatureID(::kdm::data::DataPackage::DATAEVENT__KIND);
        feature->basicsetEContainingClass(m_DataEventEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier DataEvent
        auto &&classifier = m_DataEventEClass;

        // ENamedElement
        classifier->setName("DataEvent");

        // EClassifier
        classifier->setClassifierID(DATAEVENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DataEventEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DataEvent__kind);
        }
    }();

    [this]()
    { // Feature dataElement of class DataModel
        auto &&feature = m_DataModel__dataElement;

        // ENamedElement
        feature->setName("dataElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractDataElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::DATAMODEL__DATAELEMENT);
        feature->basicsetEContainingClass(m_DataModelEClass);

        // EReference
        feature->setEReferenceType(m_AbstractDataElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DataModel
        auto &&classifier = m_DataModelEClass;

        // ENamedElement
        classifier->setName("DataModel");

        // EClassifier
        classifier->setClassifierID(DATAMODEL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DataModelEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DataModel__dataElement);
        }
    }();

    [this]()
    { // Feature to of class DataRelationship
        auto &&feature = m_DataRelationship__to;

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

        feature->setFeatureID(::kdm::data::DataPackage::DATARELATIONSHIP__TO);
        feature->basicsetEContainingClass(m_DataRelationshipEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class DataRelationship
        auto &&feature = m_DataRelationship__from;

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
        feature->setEType(m_AbstractDataElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::DATARELATIONSHIP__FROM);
        feature->basicsetEContainingClass(m_DataRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_AbstractDataElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DataRelationship
        auto &&classifier = m_DataRelationshipEClass;

        // ENamedElement
        classifier->setName("DataRelationship");

        // EClassifier
        classifier->setClassifierID(DATARELATIONSHIP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DataRelationshipEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DataRelationship__to);
            eStructuralFeatures.basicAdd(m_DataRelationship__from);
        }
    }();

    [this]()
    { // Classifier DataResource
        auto &&classifier = m_DataResourceEClass;

        // ENamedElement
        classifier->setName("DataResource");

        // EClassifier
        classifier->setClassifierID(DATARESOURCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier DataSegment
        auto &&classifier = m_DataSegmentEClass;

        // ENamedElement
        classifier->setName("DataSegment");

        // EClassifier
        classifier->setClassifierID(DATASEGMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class DatatypeOf
        auto &&feature = m_DatatypeOf__to;

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

        feature->setFeatureID(::kdm::data::DataPackage::DATATYPEOF__TO);
        feature->basicsetEContainingClass(m_DatatypeOfEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getDatatype());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class DatatypeOf
        auto &&feature = m_DatatypeOf__from;

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
        feature->setEType(m_ComplexContentTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::DATATYPEOF__FROM);
        feature->basicsetEContainingClass(m_DatatypeOfEClass);

        // EReference
        feature->setEReferenceType(m_ComplexContentTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DatatypeOf
        auto &&classifier = m_DatatypeOfEClass;

        // ENamedElement
        classifier->setName("DatatypeOf");

        // EClassifier
        classifier->setClassifierID(DATATYPEOF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DatatypeOfEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DatatypeOf__to);
            eStructuralFeatures.basicAdd(m_DatatypeOf__from);
        }
    }();

    [this]()
    { // Classifier ExtendedDataElement
        auto &&classifier = m_ExtendedDataElementEClass;

        // ENamedElement
        classifier->setName("ExtendedDataElement");

        // EClassifier
        classifier->setClassifierID(EXTENDEDDATAELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class ExtensionTo
        auto &&feature = m_ExtensionTo__to;

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
        feature->setEType(m_ComplexContentTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::EXTENSIONTO__TO);
        feature->basicsetEContainingClass(m_ExtensionToEClass);

        // EReference
        feature->setEReferenceType(m_ComplexContentTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ExtensionTo
        auto &&feature = m_ExtensionTo__from;

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
        feature->setEType(m_ComplexContentTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::EXTENSIONTO__FROM);
        feature->basicsetEContainingClass(m_ExtensionToEClass);

        // EReference
        feature->setEReferenceType(m_ComplexContentTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ExtensionTo
        auto &&classifier = m_ExtensionToEClass;

        // ENamedElement
        classifier->setName("ExtensionTo");

        // EClassifier
        classifier->setClassifierID(EXTENSIONTO);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExtensionToEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ExtensionTo__to);
            eStructuralFeatures.basicAdd(m_ExtensionTo__from);
        }
    }();

    [this]()
    { // Classifier GroupContent
        auto &&classifier = m_GroupContentEClass;

        // ENamedElement
        classifier->setName("GroupContent");

        // EClassifier
        classifier->setClassifierID(GROUPCONTENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class HasContent
        auto &&feature = m_HasContent__to;

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
        feature->setEType(m_AbstractDataElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::HASCONTENT__TO);
        feature->basicsetEContainingClass(m_HasContentEClass);

        // EReference
        feature->setEReferenceType(m_AbstractDataElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class HasContent
        auto &&feature = m_HasContent__from;

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

        feature->setFeatureID(::kdm::data::DataPackage::HASCONTENT__FROM);
        feature->basicsetEContainingClass(m_HasContentEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier HasContent
        auto &&classifier = m_HasContentEClass;

        // ENamedElement
        classifier->setName("HasContent");

        // EClassifier
        classifier->setClassifierID(HASCONTENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_HasContentEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_HasContent__to);
            eStructuralFeatures.basicAdd(m_HasContent__from);
        }
    }();

    [this]()
    { // Classifier Index
        auto &&classifier = m_IndexEClass;

        // ENamedElement
        classifier->setName("Index");

        // EClassifier
        classifier->setClassifierID(INDEX);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature implementation of class IndexElement
        auto &&feature = m_IndexElement__implementation;

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
        feature->setEType(::kdm::code::CodePackage::_instance()->getItemUnit());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::data::DataPackage::INDEXELEMENT__IMPLEMENTATION);
        feature->basicsetEContainingClass(m_IndexElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getItemUnit());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier IndexElement
        auto &&classifier = m_IndexElementEClass;

        // ENamedElement
        classifier->setName("IndexElement");

        // EClassifier
        classifier->setClassifierID(INDEXELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_IndexElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_IndexElement__implementation);
        }
    }();

    [this]()
    { // Feature to of class KeyRelation
        auto &&feature = m_KeyRelation__to;

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
        feature->setEType(m_UniqueKeyEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::KEYRELATION__TO);
        feature->basicsetEContainingClass(m_KeyRelationEClass);

        // EReference
        feature->setEReferenceType(m_UniqueKeyEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class KeyRelation
        auto &&feature = m_KeyRelation__from;

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
        feature->setEType(m_ReferenceKeyEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::KEYRELATION__FROM);
        feature->basicsetEContainingClass(m_KeyRelationEClass);

        // EReference
        feature->setEReferenceType(m_ReferenceKeyEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier KeyRelation
        auto &&classifier = m_KeyRelationEClass;

        // ENamedElement
        classifier->setName("KeyRelation");

        // EClassifier
        classifier->setClassifierID(KEYRELATION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_KeyRelationEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_KeyRelation__to);
            eStructuralFeatures.basicAdd(m_KeyRelation__from);
        }
    }();

    [this]()
    { // Feature to of class ManagesData
        auto &&feature = m_ManagesData__to;

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
        feature->setEType(m_AbstractDataElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::MANAGESDATA__TO);
        feature->basicsetEContainingClass(m_ManagesDataEClass);

        // EReference
        feature->setEReferenceType(m_AbstractDataElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ManagesData
        auto &&feature = m_ManagesData__from;

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

        feature->setFeatureID(::kdm::data::DataPackage::MANAGESDATA__FROM);
        feature->basicsetEContainingClass(m_ManagesDataEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ManagesData
        auto &&classifier = m_ManagesDataEClass;

        // ENamedElement
        classifier->setName("ManagesData");

        // EClassifier
        classifier->setClassifierID(MANAGESDATA);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ManagesDataEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ManagesData__to);
            eStructuralFeatures.basicAdd(m_ManagesData__from);
        }
    }();

    [this]()
    { // Classifier MixedContent
        auto &&classifier = m_MixedContentEClass;

        // ENamedElement
        classifier->setName("MixedContent");

        // EClassifier
        classifier->setClassifierID(MIXEDCONTENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class ProducesDataEvent
        auto &&feature = m_ProducesDataEvent__to;

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
        feature->setEType(m_DataEventEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::PRODUCESDATAEVENT__TO);
        feature->basicsetEContainingClass(m_ProducesDataEventEClass);

        // EReference
        feature->setEReferenceType(m_DataEventEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ProducesDataEvent
        auto &&feature = m_ProducesDataEvent__from;

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
                ::kdm::data::DataPackage::PRODUCESDATAEVENT__FROM);
        feature->basicsetEContainingClass(m_ProducesDataEventEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ProducesDataEvent
        auto &&classifier = m_ProducesDataEventEClass;

        // ENamedElement
        classifier->setName("ProducesDataEvent");

        // EClassifier
        classifier->setClassifierID(PRODUCESDATAEVENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ProducesDataEventEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ProducesDataEvent__to);
            eStructuralFeatures.basicAdd(m_ProducesDataEvent__from);
        }
    }();

    [this]()
    { // Feature to of class ReadsColumnSet
        auto &&feature = m_ReadsColumnSet__to;

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
        feature->setEType(m_ColumnSetEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::READSCOLUMNSET__TO);
        feature->basicsetEContainingClass(m_ReadsColumnSetEClass);

        // EReference
        feature->setEReferenceType(m_ColumnSetEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ReadsColumnSet
        auto &&feature = m_ReadsColumnSet__from;

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

        feature->setFeatureID(::kdm::data::DataPackage::READSCOLUMNSET__FROM);
        feature->basicsetEContainingClass(m_ReadsColumnSetEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ReadsColumnSet
        auto &&classifier = m_ReadsColumnSetEClass;

        // ENamedElement
        classifier->setName("ReadsColumnSet");

        // EClassifier
        classifier->setClassifierID(READSCOLUMNSET);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ReadsColumnSetEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ReadsColumnSet__to);
            eStructuralFeatures.basicAdd(m_ReadsColumnSet__from);
        }
    }();

    [this]()
    { // Classifier RecordFile
        auto &&classifier = m_RecordFileEClass;

        // ENamedElement
        classifier->setName("RecordFile");

        // EClassifier
        classifier->setClassifierID(RECORDFILE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier ReferenceKey
        auto &&classifier = m_ReferenceKeyEClass;

        // ENamedElement
        classifier->setName("ReferenceKey");

        // EClassifier
        classifier->setClassifierID(REFERENCEKEY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class ReferenceTo
        auto &&feature = m_ReferenceTo__to;

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
        feature->setEType(m_ContentItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::REFERENCETO__TO);
        feature->basicsetEContainingClass(m_ReferenceToEClass);

        // EReference
        feature->setEReferenceType(m_ContentItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ReferenceTo
        auto &&feature = m_ReferenceTo__from;

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
        feature->setEType(m_ContentItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::REFERENCETO__FROM);
        feature->basicsetEContainingClass(m_ReferenceToEClass);

        // EReference
        feature->setEReferenceType(m_ContentItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ReferenceTo
        auto &&classifier = m_ReferenceToEClass;

        // ENamedElement
        classifier->setName("ReferenceTo");

        // EClassifier
        classifier->setClassifierID(REFERENCETO);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ReferenceToEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ReferenceTo__to);
            eStructuralFeatures.basicAdd(m_ReferenceTo__from);
        }
    }();

    [this]()
    { // Feature codeElement of class RelationalSchema
        auto &&feature = m_RelationalSchema__codeElement;

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
        feature->setEType(::kdm::code::CodePackage::_instance()->getCodeItem());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::data::DataPackage::RELATIONALSCHEMA__CODEELEMENT);
        feature->basicsetEContainingClass(m_RelationalSchemaEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::code::CodePackage::_instance()->getCodeItem());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier RelationalSchema
        auto &&classifier = m_RelationalSchemaEClass;

        // ENamedElement
        classifier->setName("RelationalSchema");

        // EClassifier
        classifier->setClassifierID(RELATIONALSCHEMA);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RelationalSchemaEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_RelationalSchema__codeElement);
        }
    }();

    [this]()
    { // Classifier RelationalTable
        auto &&classifier = m_RelationalTableEClass;

        // ENamedElement
        classifier->setName("RelationalTable");

        // EClassifier
        classifier->setClassifierID(RELATIONALTABLE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier RelationalView
        auto &&classifier = m_RelationalViewEClass;

        // ENamedElement
        classifier->setName("RelationalView");

        // EClassifier
        classifier->setClassifierID(RELATIONALVIEW);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class RestrictionOf
        auto &&feature = m_RestrictionOf__to;

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
        feature->setEType(m_ComplexContentTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::RESTRICTIONOF__TO);
        feature->basicsetEContainingClass(m_RestrictionOfEClass);

        // EReference
        feature->setEReferenceType(m_ComplexContentTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class RestrictionOf
        auto &&feature = m_RestrictionOf__from;

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
        feature->setEType(m_ComplexContentTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::RESTRICTIONOF__FROM);
        feature->basicsetEContainingClass(m_RestrictionOfEClass);

        // EReference
        feature->setEReferenceType(m_ComplexContentTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier RestrictionOf
        auto &&classifier = m_RestrictionOfEClass;

        // ENamedElement
        classifier->setName("RestrictionOf");

        // EClassifier
        classifier->setClassifierID(RESTRICTIONOF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RestrictionOfEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_RestrictionOf__to);
            eStructuralFeatures.basicAdd(m_RestrictionOf__from);
        }
    }();

    [this]()
    { // Classifier SeqContent
        auto &&classifier = m_SeqContentEClass;

        // ENamedElement
        classifier->setName("SeqContent");

        // EClassifier
        classifier->setClassifierID(SEQCONTENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature type of class SimpleContentType
        auto &&feature = m_SimpleContentType__type;

        // ENamedElement
        feature->setName("type");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ComplexContentTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::data::DataPackage::SIMPLECONTENTTYPE__TYPE);
        feature->basicsetEContainingClass(m_SimpleContentTypeEClass);

        // EReference
        feature->setEReferenceType(m_ComplexContentTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature kind of class SimpleContentType
        auto &&feature = m_SimpleContentType__kind;

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
                ::kdm::data::DataPackage::SIMPLECONTENTTYPE__KIND);
        feature->basicsetEContainingClass(m_SimpleContentTypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier SimpleContentType
        auto &&classifier = m_SimpleContentTypeEClass;

        // ENamedElement
        classifier->setName("SimpleContentType");

        // EClassifier
        classifier->setClassifierID(SIMPLECONTENTTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SimpleContentTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SimpleContentType__type);
            eStructuralFeatures.basicAdd(m_SimpleContentType__kind);
        }
    }();

    [this]()
    { // Feature to of class TypedBy
        auto &&feature = m_TypedBy__to;

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
        feature->setEType(m_ComplexContentTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::TYPEDBY__TO);
        feature->basicsetEContainingClass(m_TypedByEClass);

        // EReference
        feature->setEReferenceType(m_ComplexContentTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class TypedBy
        auto &&feature = m_TypedBy__from;

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
        feature->setEType(m_ContentItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::TYPEDBY__FROM);
        feature->basicsetEContainingClass(m_TypedByEClass);

        // EReference
        feature->setEReferenceType(m_ContentItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier TypedBy
        auto &&classifier = m_TypedByEClass;

        // ENamedElement
        classifier->setName("TypedBy");

        // EClassifier
        classifier->setClassifierID(TYPEDBY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TypedByEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TypedBy__to);
            eStructuralFeatures.basicAdd(m_TypedBy__from);
        }
    }();

    [this]()
    { // Classifier UniqueKey
        auto &&classifier = m_UniqueKeyEClass;

        // ENamedElement
        classifier->setName("UniqueKey");

        // EClassifier
        classifier->setClassifierID(UNIQUEKEY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class WritesColumnSet
        auto &&feature = m_WritesColumnSet__to;

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
        feature->setEType(m_ColumnSetEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::data::DataPackage::WRITESCOLUMNSET__TO);
        feature->basicsetEContainingClass(m_WritesColumnSetEClass);

        // EReference
        feature->setEReferenceType(m_ColumnSetEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class WritesColumnSet
        auto &&feature = m_WritesColumnSet__from;

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

        feature->setFeatureID(::kdm::data::DataPackage::WRITESCOLUMNSET__FROM);
        feature->basicsetEContainingClass(m_WritesColumnSetEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getActionElement());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier WritesColumnSet
        auto &&classifier = m_WritesColumnSetEClass;

        // ENamedElement
        classifier->setName("WritesColumnSet");

        // EClassifier
        classifier->setClassifierID(WRITESCOLUMNSET);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_WritesColumnSetEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_WritesColumnSet__to);
            eStructuralFeatures.basicAdd(m_WritesColumnSet__from);
        }
    }();

    [this]()
    { // Feature contentElement of class XMLSchema
        auto &&feature = m_XMLSchema__contentElement;

        // ENamedElement
        feature->setName("contentElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractContentElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::data::DataPackage::XMLSCHEMA__CONTENTELEMENT);
        feature->basicsetEContainingClass(m_XMLSchemaEClass);

        // EReference
        feature->setEReferenceType(m_AbstractContentElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier XMLSchema
        auto &&classifier = m_XMLSchemaEClass;

        // ENamedElement
        classifier->setName("XMLSchema");

        // EClassifier
        classifier->setClassifierID(XMLSCHEMA);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_XMLSchemaEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_XMLSchema__contentElement);
        }
    }();

    // Initialize package
    setName("data");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_DataModelEClass->getESuperTypes().push_back(
                ::kdm::kdm::KdmPackage::_instance()->getKDMModel());
        m_AbstractDataElementEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        m_DataResourceEClass->getESuperTypes().push_back(
                m_AbstractDataElementEClass);
        m_IndexElementEClass->getESuperTypes().push_back(m_DataResourceEClass);
        m_UniqueKeyEClass->getESuperTypes().push_back(m_IndexElementEClass);
        m_IndexEClass->getESuperTypes().push_back(m_IndexElementEClass);
        m_AbstractDataRelationshipEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMRelationship());
        m_KeyRelationEClass->getESuperTypes().push_back(
                m_AbstractDataRelationshipEClass);
        m_ReferenceKeyEClass->getESuperTypes().push_back(m_IndexElementEClass);
        m_DataContainerEClass->getESuperTypes().push_back(m_DataResourceEClass);
        m_CatalogEClass->getESuperTypes().push_back(m_DataContainerEClass);
        m_RelationalSchemaEClass->getESuperTypes().push_back(
                m_DataContainerEClass);
        m_ColumnSetEClass->getESuperTypes().push_back(m_DataContainerEClass);
        m_RelationalTableEClass->getESuperTypes().push_back(m_ColumnSetEClass);
        m_RelationalViewEClass->getESuperTypes().push_back(m_ColumnSetEClass);
        m_RecordFileEClass->getESuperTypes().push_back(m_ColumnSetEClass);
        m_DataEventEClass->getESuperTypes().push_back(m_DataResourceEClass);
        m_XMLSchemaEClass->getESuperTypes().push_back(
                m_AbstractDataElementEClass);
        m_AbstractContentElementEClass->getESuperTypes().push_back(
                m_AbstractDataElementEClass);
        m_ComplexContentTypeEClass->getESuperTypes().push_back(
                m_AbstractContentElementEClass);
        m_AllContentEClass->getESuperTypes().push_back(
                m_ComplexContentTypeEClass);
        m_SeqContentEClass->getESuperTypes().push_back(
                m_ComplexContentTypeEClass);
        m_ChoiceContentEClass->getESuperTypes().push_back(
                m_ComplexContentTypeEClass);
        m_ContentItemEClass->getESuperTypes().push_back(
                m_AbstractContentElementEClass);
        m_GroupContentEClass->getESuperTypes().push_back(m_ContentItemEClass);
        m_ContentRestrictionEClass->getESuperTypes().push_back(
                m_AbstractContentElementEClass);
        m_SimpleContentTypeEClass->getESuperTypes().push_back(
                m_ComplexContentTypeEClass);
        m_ExtendedDataElementEClass->getESuperTypes().push_back(
                m_AbstractDataElementEClass);
        m_DataRelationshipEClass->getESuperTypes().push_back(
                m_AbstractDataRelationshipEClass);
        m_MixedContentEClass->getESuperTypes().push_back(
                m_ComplexContentTypeEClass);
        m_ContentReferenceEClass->getESuperTypes().push_back(
                m_ContentItemEClass);
        m_DataActionEClass->getESuperTypes().push_back(
                m_AbstractDataElementEClass);
        m_ReadsColumnSetEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_ContentAttributeEClass->getESuperTypes().push_back(
                m_ContentItemEClass);
        m_TypedByEClass->getESuperTypes().push_back(
                m_AbstractDataRelationshipEClass);
        m_ReferenceToEClass->getESuperTypes().push_back(
                m_AbstractDataRelationshipEClass);
        m_RestrictionOfEClass->getESuperTypes().push_back(
                m_AbstractDataRelationshipEClass);
        m_ExtensionToEClass->getESuperTypes().push_back(
                m_AbstractDataRelationshipEClass);
        m_DatatypeOfEClass->getESuperTypes().push_back(
                m_AbstractDataRelationshipEClass);
        m_HasContentEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_WritesColumnSetEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_ProducesDataEventEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
        m_DataSegmentEClass->getESuperTypes().push_back(m_ColumnSetEClass);
        m_ContentElementEClass->getESuperTypes().push_back(m_ContentItemEClass);
        m_ManagesDataEClass->getESuperTypes().push_back(
                ::kdm::action::ActionPackage::_instance()->getAbstractActionRelationship());
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractContentElementEClass);
        classifiers.push_back(m_AbstractDataElementEClass);
        classifiers.push_back(m_AbstractDataRelationshipEClass);
        classifiers.push_back(m_AllContentEClass);
        classifiers.push_back(m_CatalogEClass);
        classifiers.push_back(m_ChoiceContentEClass);
        classifiers.push_back(m_ColumnSetEClass);
        classifiers.push_back(m_ComplexContentTypeEClass);
        classifiers.push_back(m_ContentAttributeEClass);
        classifiers.push_back(m_ContentElementEClass);
        classifiers.push_back(m_ContentItemEClass);
        classifiers.push_back(m_ContentReferenceEClass);
        classifiers.push_back(m_ContentRestrictionEClass);
        classifiers.push_back(m_DataActionEClass);
        classifiers.push_back(m_DataContainerEClass);
        classifiers.push_back(m_DataEventEClass);
        classifiers.push_back(m_DataModelEClass);
        classifiers.push_back(m_DataRelationshipEClass);
        classifiers.push_back(m_DataResourceEClass);
        classifiers.push_back(m_DataSegmentEClass);
        classifiers.push_back(m_DatatypeOfEClass);
        classifiers.push_back(m_ExtendedDataElementEClass);
        classifiers.push_back(m_ExtensionToEClass);
        classifiers.push_back(m_GroupContentEClass);
        classifiers.push_back(m_HasContentEClass);
        classifiers.push_back(m_IndexEClass);
        classifiers.push_back(m_IndexElementEClass);
        classifiers.push_back(m_KeyRelationEClass);
        classifiers.push_back(m_ManagesDataEClass);
        classifiers.push_back(m_MixedContentEClass);
        classifiers.push_back(m_ProducesDataEventEClass);
        classifiers.push_back(m_ReadsColumnSetEClass);
        classifiers.push_back(m_RecordFileEClass);
        classifiers.push_back(m_ReferenceKeyEClass);
        classifiers.push_back(m_ReferenceToEClass);
        classifiers.push_back(m_RelationalSchemaEClass);
        classifiers.push_back(m_RelationalTableEClass);
        classifiers.push_back(m_RelationalViewEClass);
        classifiers.push_back(m_RestrictionOfEClass);
        classifiers.push_back(m_SeqContentEClass);
        classifiers.push_back(m_SimpleContentTypeEClass);
        classifiers.push_back(m_TypedByEClass);
        classifiers.push_back(m_UniqueKeyEClass);
        classifiers.push_back(m_WritesColumnSetEClass);
        classifiers.push_back(m_XMLSchemaEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr DataPackage::getDataModel()
{
    return m_DataModelEClass;
}
::ecore::EClass_ptr DataPackage::getAbstractDataElement()
{
    return m_AbstractDataElementEClass;
}
::ecore::EClass_ptr DataPackage::getDataResource()
{
    return m_DataResourceEClass;
}
::ecore::EClass_ptr DataPackage::getIndexElement()
{
    return m_IndexElementEClass;
}
::ecore::EClass_ptr DataPackage::getUniqueKey()
{
    return m_UniqueKeyEClass;
}
::ecore::EClass_ptr DataPackage::getIndex()
{
    return m_IndexEClass;
}
::ecore::EClass_ptr DataPackage::getAbstractDataRelationship()
{
    return m_AbstractDataRelationshipEClass;
}
::ecore::EClass_ptr DataPackage::getKeyRelation()
{
    return m_KeyRelationEClass;
}
::ecore::EClass_ptr DataPackage::getReferenceKey()
{
    return m_ReferenceKeyEClass;
}
::ecore::EClass_ptr DataPackage::getDataContainer()
{
    return m_DataContainerEClass;
}
::ecore::EClass_ptr DataPackage::getCatalog()
{
    return m_CatalogEClass;
}
::ecore::EClass_ptr DataPackage::getRelationalSchema()
{
    return m_RelationalSchemaEClass;
}
::ecore::EClass_ptr DataPackage::getColumnSet()
{
    return m_ColumnSetEClass;
}
::ecore::EClass_ptr DataPackage::getRelationalTable()
{
    return m_RelationalTableEClass;
}
::ecore::EClass_ptr DataPackage::getRelationalView()
{
    return m_RelationalViewEClass;
}
::ecore::EClass_ptr DataPackage::getRecordFile()
{
    return m_RecordFileEClass;
}
::ecore::EClass_ptr DataPackage::getDataEvent()
{
    return m_DataEventEClass;
}
::ecore::EClass_ptr DataPackage::getXMLSchema()
{
    return m_XMLSchemaEClass;
}
::ecore::EClass_ptr DataPackage::getAbstractContentElement()
{
    return m_AbstractContentElementEClass;
}
::ecore::EClass_ptr DataPackage::getComplexContentType()
{
    return m_ComplexContentTypeEClass;
}
::ecore::EClass_ptr DataPackage::getAllContent()
{
    return m_AllContentEClass;
}
::ecore::EClass_ptr DataPackage::getSeqContent()
{
    return m_SeqContentEClass;
}
::ecore::EClass_ptr DataPackage::getChoiceContent()
{
    return m_ChoiceContentEClass;
}
::ecore::EClass_ptr DataPackage::getContentItem()
{
    return m_ContentItemEClass;
}
::ecore::EClass_ptr DataPackage::getGroupContent()
{
    return m_GroupContentEClass;
}
::ecore::EClass_ptr DataPackage::getContentRestriction()
{
    return m_ContentRestrictionEClass;
}
::ecore::EClass_ptr DataPackage::getSimpleContentType()
{
    return m_SimpleContentTypeEClass;
}
::ecore::EClass_ptr DataPackage::getExtendedDataElement()
{
    return m_ExtendedDataElementEClass;
}
::ecore::EClass_ptr DataPackage::getDataRelationship()
{
    return m_DataRelationshipEClass;
}
::ecore::EClass_ptr DataPackage::getMixedContent()
{
    return m_MixedContentEClass;
}
::ecore::EClass_ptr DataPackage::getContentReference()
{
    return m_ContentReferenceEClass;
}
::ecore::EClass_ptr DataPackage::getDataAction()
{
    return m_DataActionEClass;
}
::ecore::EClass_ptr DataPackage::getReadsColumnSet()
{
    return m_ReadsColumnSetEClass;
}
::ecore::EClass_ptr DataPackage::getContentAttribute()
{
    return m_ContentAttributeEClass;
}
::ecore::EClass_ptr DataPackage::getTypedBy()
{
    return m_TypedByEClass;
}
::ecore::EClass_ptr DataPackage::getReferenceTo()
{
    return m_ReferenceToEClass;
}
::ecore::EClass_ptr DataPackage::getRestrictionOf()
{
    return m_RestrictionOfEClass;
}
::ecore::EClass_ptr DataPackage::getExtensionTo()
{
    return m_ExtensionToEClass;
}
::ecore::EClass_ptr DataPackage::getDatatypeOf()
{
    return m_DatatypeOfEClass;
}
::ecore::EClass_ptr DataPackage::getHasContent()
{
    return m_HasContentEClass;
}
::ecore::EClass_ptr DataPackage::getWritesColumnSet()
{
    return m_WritesColumnSetEClass;
}
::ecore::EClass_ptr DataPackage::getProducesDataEvent()
{
    return m_ProducesDataEventEClass;
}
::ecore::EClass_ptr DataPackage::getDataSegment()
{
    return m_DataSegmentEClass;
}
::ecore::EClass_ptr DataPackage::getContentElement()
{
    return m_ContentElementEClass;
}
::ecore::EClass_ptr DataPackage::getManagesData()
{
    return m_ManagesDataEClass;
}

::ecore::EReference_ptr DataPackage::getDataModel__dataElement()
{
    return m_DataModel__dataElement;
}
::ecore::EReference_ptr DataPackage::getAbstractDataElement__source()
{
    return m_AbstractDataElement__source;
}
::ecore::EReference_ptr DataPackage::getAbstractDataElement__dataRelation()
{
    return m_AbstractDataElement__dataRelation;
}
::ecore::EReference_ptr DataPackage::getAbstractDataElement__abstraction()
{
    return m_AbstractDataElement__abstraction;
}
::ecore::EReference_ptr DataPackage::getIndexElement__implementation()
{
    return m_IndexElement__implementation;
}
::ecore::EReference_ptr DataPackage::getKeyRelation__to()
{
    return m_KeyRelation__to;
}
::ecore::EReference_ptr DataPackage::getKeyRelation__from()
{
    return m_KeyRelation__from;
}
::ecore::EReference_ptr DataPackage::getDataContainer__dataElement()
{
    return m_DataContainer__dataElement;
}
::ecore::EReference_ptr DataPackage::getRelationalSchema__codeElement()
{
    return m_RelationalSchema__codeElement;
}
::ecore::EReference_ptr DataPackage::getColumnSet__itemUnit()
{
    return m_ColumnSet__itemUnit;
}
::ecore::EAttribute_ptr DataPackage::getDataEvent__kind()
{
    return m_DataEvent__kind;
}
::ecore::EReference_ptr DataPackage::getXMLSchema__contentElement()
{
    return m_XMLSchema__contentElement;
}
::ecore::EReference_ptr DataPackage::getComplexContentType__contentElement()
{
    return m_ComplexContentType__contentElement;
}
::ecore::EReference_ptr DataPackage::getContentItem__type()
{
    return m_ContentItem__type;
}
::ecore::EReference_ptr DataPackage::getContentItem__contentElement()
{
    return m_ContentItem__contentElement;
}
::ecore::EAttribute_ptr DataPackage::getContentRestriction__kind()
{
    return m_ContentRestriction__kind;
}
::ecore::EAttribute_ptr DataPackage::getContentRestriction__value()
{
    return m_ContentRestriction__value;
}
::ecore::EReference_ptr DataPackage::getSimpleContentType__type()
{
    return m_SimpleContentType__type;
}
::ecore::EAttribute_ptr DataPackage::getSimpleContentType__kind()
{
    return m_SimpleContentType__kind;
}
::ecore::EReference_ptr DataPackage::getDataRelationship__to()
{
    return m_DataRelationship__to;
}
::ecore::EReference_ptr DataPackage::getDataRelationship__from()
{
    return m_DataRelationship__from;
}
::ecore::EAttribute_ptr DataPackage::getDataAction__kind()
{
    return m_DataAction__kind;
}
::ecore::EReference_ptr DataPackage::getDataAction__implementation()
{
    return m_DataAction__implementation;
}
::ecore::EReference_ptr DataPackage::getDataAction__dataElement()
{
    return m_DataAction__dataElement;
}
::ecore::EReference_ptr DataPackage::getReadsColumnSet__to()
{
    return m_ReadsColumnSet__to;
}
::ecore::EReference_ptr DataPackage::getReadsColumnSet__from()
{
    return m_ReadsColumnSet__from;
}
::ecore::EReference_ptr DataPackage::getTypedBy__to()
{
    return m_TypedBy__to;
}
::ecore::EReference_ptr DataPackage::getTypedBy__from()
{
    return m_TypedBy__from;
}
::ecore::EReference_ptr DataPackage::getReferenceTo__to()
{
    return m_ReferenceTo__to;
}
::ecore::EReference_ptr DataPackage::getReferenceTo__from()
{
    return m_ReferenceTo__from;
}
::ecore::EReference_ptr DataPackage::getRestrictionOf__to()
{
    return m_RestrictionOf__to;
}
::ecore::EReference_ptr DataPackage::getRestrictionOf__from()
{
    return m_RestrictionOf__from;
}
::ecore::EReference_ptr DataPackage::getExtensionTo__to()
{
    return m_ExtensionTo__to;
}
::ecore::EReference_ptr DataPackage::getExtensionTo__from()
{
    return m_ExtensionTo__from;
}
::ecore::EReference_ptr DataPackage::getDatatypeOf__to()
{
    return m_DatatypeOf__to;
}
::ecore::EReference_ptr DataPackage::getDatatypeOf__from()
{
    return m_DatatypeOf__from;
}
::ecore::EReference_ptr DataPackage::getHasContent__to()
{
    return m_HasContent__to;
}
::ecore::EReference_ptr DataPackage::getHasContent__from()
{
    return m_HasContent__from;
}
::ecore::EReference_ptr DataPackage::getWritesColumnSet__to()
{
    return m_WritesColumnSet__to;
}
::ecore::EReference_ptr DataPackage::getWritesColumnSet__from()
{
    return m_WritesColumnSet__from;
}
::ecore::EReference_ptr DataPackage::getProducesDataEvent__to()
{
    return m_ProducesDataEvent__to;
}
::ecore::EReference_ptr DataPackage::getProducesDataEvent__from()
{
    return m_ProducesDataEvent__from;
}
::ecore::EReference_ptr DataPackage::getManagesData__to()
{
    return m_ManagesData__to;
}
::ecore::EReference_ptr DataPackage::getManagesData__from()
{
    return m_ManagesData__from;
}

