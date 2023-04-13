// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/MyDslPackageImpl.cpp
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

#include <myDsl/MyDslPackage.hpp>
#include <myDsl/MyDslFactory.hpp>
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
#include <ecore/EcorePackage.hpp>

using namespace ::myDsl;

MyDslPackage::MyDslPackage()
{
    m_Entity__extends = ::ecore::make< ::ecore::EReference >();
    m_Entity__properties = ::ecore::make< ::ecore::EReference >();
    m_EntityEClass = ::ecore::make< ::ecore::EClass >();
    m_Import__importURI = ::ecore::make< ::ecore::EAttribute >();
    m_ImportEClass = ::ecore::make< ::ecore::EClass >();
    m_Model__imports = ::ecore::make< ::ecore::EReference >();
    m_Model__elements = ::ecore::make< ::ecore::EReference >();
    m_ModelEClass = ::ecore::make< ::ecore::EClass >();
    m_Property__name = ::ecore::make< ::ecore::EAttribute >();
    m_Property__type = ::ecore::make< ::ecore::EReference >();
    m_Property__many = ::ecore::make< ::ecore::EAttribute >();
    m_PropertyEClass = ::ecore::make< ::ecore::EClass >();
    m_SimpleTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_Type__name = ::ecore::make< ::ecore::EAttribute >();
    m_TypeEClass = ::ecore::make< ::ecore::EClass >();
}

void MyDslPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = MyDslFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature extends of class Entity
        auto &&feature = m_Entity__extends;

        // ENamedElement
        feature->setName("extends");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EntityEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::myDsl::MyDslPackage::ENTITY__EXTENDS);
        feature->basicsetEContainingClass(m_EntityEClass);

        // EReference
        feature->setEReferenceType(m_EntityEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature properties of class Entity
        auto &&feature = m_Entity__properties;

        // ENamedElement
        feature->setName("properties");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PropertyEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::myDsl::MyDslPackage::ENTITY__PROPERTIES);
        feature->basicsetEContainingClass(m_EntityEClass);

        // EReference
        feature->setEReferenceType(m_PropertyEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Entity
        auto &&classifier = m_EntityEClass;

        // ENamedElement
        classifier->setName("Entity");

        // EClassifier
        classifier->setClassifierID(ENTITY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EntityEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Entity__extends);
            eStructuralFeatures.basicAdd(m_Entity__properties);
        }
    }();

    [this]()
    { // Feature importURI of class Import
        auto &&feature = m_Import__importURI;

        // ENamedElement
        feature->setName("importURI");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::myDsl::MyDslPackage::IMPORT__IMPORTURI);
        feature->basicsetEContainingClass(m_ImportEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Import
        auto &&classifier = m_ImportEClass;

        // ENamedElement
        classifier->setName("Import");

        // EClassifier
        classifier->setClassifierID(IMPORT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ImportEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Import__importURI);
        }
    }();

    [this]()
    { // Feature imports of class Model
        auto &&feature = m_Model__imports;

        // ENamedElement
        feature->setName("imports");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ImportEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::myDsl::MyDslPackage::MODEL__IMPORTS);
        feature->basicsetEContainingClass(m_ModelEClass);

        // EReference
        feature->setEReferenceType(m_ImportEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature elements of class Model
        auto &&feature = m_Model__elements;

        // ENamedElement
        feature->setName("elements");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_TypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::myDsl::MyDslPackage::MODEL__ELEMENTS);
        feature->basicsetEContainingClass(m_ModelEClass);

        // EReference
        feature->setEReferenceType(m_TypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Model
        auto &&classifier = m_ModelEClass;

        // ENamedElement
        classifier->setName("Model");

        // EClassifier
        classifier->setClassifierID(MODEL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ModelEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Model__imports);
            eStructuralFeatures.basicAdd(m_Model__elements);
        }
    }();

    [this]()
    { // Feature name of class Property
        auto &&feature = m_Property__name;

        // ENamedElement
        feature->setName("name");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::myDsl::MyDslPackage::PROPERTY__NAME);
        feature->basicsetEContainingClass(m_PropertyEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature type of class Property
        auto &&feature = m_Property__type;

        // ENamedElement
        feature->setName("type");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_TypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::myDsl::MyDslPackage::PROPERTY__TYPE);
        feature->basicsetEContainingClass(m_PropertyEClass);

        // EReference
        feature->setEReferenceType(m_TypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature many of class Property
        auto &&feature = m_Property__many;

        // ENamedElement
        feature->setName("many");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::myDsl::MyDslPackage::PROPERTY__MANY);
        feature->basicsetEContainingClass(m_PropertyEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Property
        auto &&classifier = m_PropertyEClass;

        // ENamedElement
        classifier->setName("Property");

        // EClassifier
        classifier->setClassifierID(PROPERTY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PropertyEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Property__name);
            eStructuralFeatures.basicAdd(m_Property__type);
            eStructuralFeatures.basicAdd(m_Property__many);
        }
    }();

    [this]()
    { // Classifier SimpleType
        auto &&classifier = m_SimpleTypeEClass;

        // ENamedElement
        classifier->setName("SimpleType");

        // EClassifier
        classifier->setClassifierID(SIMPLETYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature name of class Type
        auto &&feature = m_Type__name;

        // ENamedElement
        feature->setName("name");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::myDsl::MyDslPackage::TYPE__NAME);
        feature->basicsetEContainingClass(m_TypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Type
        auto &&classifier = m_TypeEClass;

        // ENamedElement
        classifier->setName("Type");

        // EClassifier
        classifier->setClassifierID(TYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Type__name);
        }
    }();

    // Initialize package
    setName("myDsl");
    setNsPrefix("myDsl");
    setNsURI("http://www.xtext.org/example/MyDsl");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_SimpleTypeEClass->getESuperTypes().push_back(m_TypeEClass);
        m_EntityEClass->getESuperTypes().push_back(m_TypeEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_EntityEClass);
        classifiers.push_back(m_ImportEClass);
        classifiers.push_back(m_ModelEClass);
        classifiers.push_back(m_PropertyEClass);
        classifiers.push_back(m_SimpleTypeEClass);
        classifiers.push_back(m_TypeEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr MyDslPackage::getModel()
{
    return m_ModelEClass;
}
::ecore::EClass_ptr MyDslPackage::getImport()
{
    return m_ImportEClass;
}
::ecore::EClass_ptr MyDslPackage::getType()
{
    return m_TypeEClass;
}
::ecore::EClass_ptr MyDslPackage::getSimpleType()
{
    return m_SimpleTypeEClass;
}
::ecore::EClass_ptr MyDslPackage::getEntity()
{
    return m_EntityEClass;
}
::ecore::EClass_ptr MyDslPackage::getProperty()
{
    return m_PropertyEClass;
}

::ecore::EReference_ptr MyDslPackage::getModel__imports()
{
    return m_Model__imports;
}
::ecore::EReference_ptr MyDslPackage::getModel__elements()
{
    return m_Model__elements;
}
::ecore::EAttribute_ptr MyDslPackage::getImport__importURI()
{
    return m_Import__importURI;
}
::ecore::EAttribute_ptr MyDslPackage::getType__name()
{
    return m_Type__name;
}
::ecore::EReference_ptr MyDslPackage::getEntity__extends()
{
    return m_Entity__extends;
}
::ecore::EReference_ptr MyDslPackage::getEntity__properties()
{
    return m_Entity__properties;
}
::ecore::EAttribute_ptr MyDslPackage::getProperty__name()
{
    return m_Property__name;
}
::ecore::EReference_ptr MyDslPackage::getProperty__type()
{
    return m_Property__type;
}
::ecore::EAttribute_ptr MyDslPackage::getProperty__many()
{
    return m_Property__many;
}

