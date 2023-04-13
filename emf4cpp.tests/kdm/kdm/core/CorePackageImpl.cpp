// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/CorePackageImpl.cpp
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

#include <kdm/core/CorePackage.hpp>
#include <kdm/core/CoreFactory.hpp>
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
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>

using namespace ::kdm::core;

CorePackage::CorePackage()
{
    m_AggregatedRelationship__from = ::ecore::make< ::ecore::EReference >();
    m_AggregatedRelationship__to = ::ecore::make< ::ecore::EReference >();
    m_AggregatedRelationship__relation = ::ecore::make< ::ecore::EReference >();
    m_AggregatedRelationship__density = ::ecore::make< ::ecore::EAttribute >();
    m_AggregatedRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_BooleanEDataType = ::ecore::make< ::ecore::EDataType >();
    m_Element__attribute = ::ecore::make< ::ecore::EReference >();
    m_Element__annotation = ::ecore::make< ::ecore::EReference >();
    m_ElementEClass = ::ecore::make< ::ecore::EClass >();
    m_IntegerEDataType = ::ecore::make< ::ecore::EDataType >();
    m_KDMEntity__name = ::ecore::make< ::ecore::EAttribute >();
    m_KDMEntityEClass = ::ecore::make< ::ecore::EClass >();
    m_KDMRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_ModelElement__stereotype = ::ecore::make< ::ecore::EReference >();
    m_ModelElement__taggedValue = ::ecore::make< ::ecore::EReference >();
    m_ModelElementEClass = ::ecore::make< ::ecore::EClass >();
    m_StringEDataType = ::ecore::make< ::ecore::EDataType >();
}

void CorePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = CoreFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature from of class AggregatedRelationship
        auto &&feature = m_AggregatedRelationship__from;

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
        feature->setEType(m_KDMEntityEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__FROM);
        feature->basicsetEContainingClass(m_AggregatedRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_KDMEntityEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature to of class AggregatedRelationship
        auto &&feature = m_AggregatedRelationship__to;

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
        feature->setEType(m_KDMEntityEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TO);
        feature->basicsetEContainingClass(m_AggregatedRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_KDMEntityEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature relation of class AggregatedRelationship
        auto &&feature = m_AggregatedRelationship__relation;

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
        feature->setEType(m_KDMRelationshipEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__RELATION);
        feature->basicsetEContainingClass(m_AggregatedRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_KDMRelationshipEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature density of class AggregatedRelationship
        auto &&feature = m_AggregatedRelationship__density;

        // ENamedElement
        feature->setName("density");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_IntegerEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__DENSITY);
        feature->basicsetEContainingClass(m_AggregatedRelationshipEClass);

        // EAttribute
        feature->setEAttributeType(m_IntegerEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Classifier AggregatedRelationship
        auto &&classifier = m_AggregatedRelationshipEClass;

        // ENamedElement
        classifier->setName("AggregatedRelationship");

        // EClassifier
        classifier->setClassifierID(AGGREGATEDRELATIONSHIP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AggregatedRelationshipEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AggregatedRelationship__from);
            eStructuralFeatures.basicAdd(m_AggregatedRelationship__to);
            eStructuralFeatures.basicAdd(m_AggregatedRelationship__relation);
            eStructuralFeatures.basicAdd(m_AggregatedRelationship__density);
        }
    }();

    [this]()
    { // Classifier Boolean
        auto &&classifier = m_BooleanEDataType;

        // ENamedElement
        classifier->setName("Boolean");

        // EClassifier
        classifier->setClassifierID(BOOLEAN);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature attribute of class Element
        auto &&feature = m_Element__attribute;

        // ENamedElement
        feature->setName("attribute");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::kdm::KdmPackage::_instance()->getAttribute());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::core::CorePackage::ELEMENT__ATTRIBUTE);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::kdm::KdmPackage::_instance()->getAttribute());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature annotation of class Element
        auto &&feature = m_Element__annotation;

        // ENamedElement
        feature->setName("annotation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::kdm::KdmPackage::_instance()->getAnnotation());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::core::CorePackage::ELEMENT__ANNOTATION);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::kdm::KdmPackage::_instance()->getAnnotation());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Element
        auto &&classifier = m_ElementEClass;

        // ENamedElement
        classifier->setName("Element");

        // EClassifier
        classifier->setClassifierID(ELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Element__attribute);
            eStructuralFeatures.basicAdd(m_Element__annotation);
        }
    }();

    [this]()
    { // Classifier Integer
        auto &&classifier = m_IntegerEDataType;

        // ENamedElement
        classifier->setName("Integer");

        // EClassifier
        classifier->setClassifierID(INTEGER);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature name of class KDMEntity
        auto &&feature = m_KDMEntity__name;

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
        feature->setEType(m_StringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::core::CorePackage::KDMENTITY__NAME);
        feature->basicsetEContainingClass(m_KDMEntityEClass);

        // EAttribute
        feature->setEAttributeType(m_StringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Classifier KDMEntity
        auto &&classifier = m_KDMEntityEClass;

        // ENamedElement
        classifier->setName("KDMEntity");

        // EClassifier
        classifier->setClassifierID(KDMENTITY);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_KDMEntityEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_KDMEntity__name);
        }
    }();

    [this]()
    { // Classifier KDMRelationship
        auto &&classifier = m_KDMRelationshipEClass;

        // ENamedElement
        classifier->setName("KDMRelationship");

        // EClassifier
        classifier->setClassifierID(KDMRELATIONSHIP);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature stereotype of class ModelElement
        auto &&feature = m_ModelElement__stereotype;

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
        feature->setEType(::kdm::kdm::KdmPackage::_instance()->getStereotype());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE);
        feature->basicsetEContainingClass(m_ModelElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::kdm::KdmPackage::_instance()->getStereotype());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature taggedValue of class ModelElement
        auto &&feature = m_ModelElement__taggedValue;

        // ENamedElement
        feature->setName("taggedValue");

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
                ::kdm::kdm::KdmPackage::_instance()->getExtendedValue());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE);
        feature->basicsetEContainingClass(m_ModelElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::kdm::KdmPackage::_instance()->getExtendedValue());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ModelElement
        auto &&classifier = m_ModelElementEClass;

        // ENamedElement
        classifier->setName("ModelElement");

        // EClassifier
        classifier->setClassifierID(MODELELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ModelElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ModelElement__stereotype);
            eStructuralFeatures.basicAdd(m_ModelElement__taggedValue);
        }
    }();

    [this]()
    { // Classifier String
        auto &&classifier = m_StringEDataType;

        // ENamedElement
        classifier->setName("String");

        // EClassifier
        classifier->setClassifierID(STRING);

        // EDataType
        classifier->setSerializable(true);
    }();

    // Initialize package
    setName("core");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_ModelElementEClass->getESuperTypes().push_back(m_ElementEClass);
        m_KDMEntityEClass->getESuperTypes().push_back(m_ModelElementEClass);
        m_KDMRelationshipEClass->getESuperTypes().push_back(
                m_ModelElementEClass);
        m_AggregatedRelationshipEClass->getESuperTypes().push_back(
                m_ModelElementEClass);
    }();

    [this]()
    { // Class KDMEntity
        auto &&cls = m_KDMEntityEClass;

        auto &&eOperations = cls->getEOperations();
        { // Operation createAggregation()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setName("createAggregation");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // otherEntity
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_KDMEntityEClass);
                _pa->setName("otherEntity");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation deleteAggregation()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setName("deleteAggregation");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // aggregation
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_AggregatedRelationshipEClass);
                _pa->setName("aggregation");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation getInbound()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_KDMRelationshipEClass);
            _op->setName("getInbound");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getOutbound()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_KDMRelationshipEClass);
            _op->setName("getOutbound");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getOwnedRelation()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_KDMRelationshipEClass);
            _op->setName("getOwnedRelation");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getInAggregated()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_AggregatedRelationshipEClass);
            _op->setName("getInAggregated");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getOutAggregated()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_AggregatedRelationshipEClass);
            _op->setName("getOutAggregated");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getOwner()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_KDMEntityEClass);
            _op->setName("getOwner");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getOwnedElement()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_KDMEntityEClass);
            _op->setName("getOwnedElement");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getGroup()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_KDMEntityEClass);
            _op->setName("getGroup");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getGroupedElement()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_KDMEntityEClass);
            _op->setName("getGroupedElement");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getModel()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(::kdm::kdm::KdmPackage::_instance()->getKDMModel());
            _op->setName("getModel");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Class KDMRelationship
        auto &&cls = m_KDMRelationshipEClass;

        auto &&eOperations = cls->getEOperations();
        { // Operation getTo()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_KDMEntityEClass);
            _op->setName("getTo");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getFrom()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_KDMEntityEClass);
            _op->setName("getFrom");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AggregatedRelationshipEClass);
        classifiers.push_back(m_BooleanEDataType);
        classifiers.push_back(m_ElementEClass);
        classifiers.push_back(m_IntegerEDataType);
        classifiers.push_back(m_KDMEntityEClass);
        classifiers.push_back(m_KDMRelationshipEClass);
        classifiers.push_back(m_ModelElementEClass);
        classifiers.push_back(m_StringEDataType);
    }();

    _initialize();
}

::ecore::EClass_ptr CorePackage::getElement()
{
    return m_ElementEClass;
}
::ecore::EClass_ptr CorePackage::getModelElement()
{
    return m_ModelElementEClass;
}
::ecore::EClass_ptr CorePackage::getKDMEntity()
{
    return m_KDMEntityEClass;
}
::ecore::EClass_ptr CorePackage::getKDMRelationship()
{
    return m_KDMRelationshipEClass;
}
::ecore::EClass_ptr CorePackage::getAggregatedRelationship()
{
    return m_AggregatedRelationshipEClass;
}
::ecore::EDataType_ptr CorePackage::getString()
{
    return m_StringEDataType;
}
::ecore::EDataType_ptr CorePackage::getInteger()
{
    return m_IntegerEDataType;
}
::ecore::EDataType_ptr CorePackage::getBoolean()
{
    return m_BooleanEDataType;
}

::ecore::EReference_ptr CorePackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr CorePackage::getElement__annotation()
{
    return m_Element__annotation;
}
::ecore::EReference_ptr CorePackage::getModelElement__stereotype()
{
    return m_ModelElement__stereotype;
}
::ecore::EReference_ptr CorePackage::getModelElement__taggedValue()
{
    return m_ModelElement__taggedValue;
}
::ecore::EAttribute_ptr CorePackage::getKDMEntity__name()
{
    return m_KDMEntity__name;
}
::ecore::EReference_ptr CorePackage::getAggregatedRelationship__from()
{
    return m_AggregatedRelationship__from;
}
::ecore::EReference_ptr CorePackage::getAggregatedRelationship__to()
{
    return m_AggregatedRelationship__to;
}
::ecore::EReference_ptr CorePackage::getAggregatedRelationship__relation()
{
    return m_AggregatedRelationship__relation;
}
::ecore::EAttribute_ptr CorePackage::getAggregatedRelationship__density()
{
    return m_AggregatedRelationship__density;
}

