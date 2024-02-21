// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ReferenceSerialization/ReferenceSerializationPackageImpl.cpp
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

#include <ReferenceSerialization/ReferenceSerializationPackage.hpp>
#include <ReferenceSerialization/ReferenceSerializationFactory.hpp>
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

using namespace ::ReferenceSerialization;

ReferenceSerializationPackage::ReferenceSerializationPackage()
{
    m_ChildEClass = ::ecore::make< ::ecore::EClass >();
    m_Container__contents = ::ecore::make< ::ecore::EReference >();
    m_Container__references = ::ecore::make< ::ecore::EReference >();
    m_Container__child = ::ecore::make< ::ecore::EReference >();
    m_Container__childRef = ::ecore::make< ::ecore::EReference >();
    m_ContainerEClass = ::ecore::make< ::ecore::EClass >();
    m_Content__name = ::ecore::make< ::ecore::EAttribute >();
    m_ContentEClass = ::ecore::make< ::ecore::EClass >();
}

void ReferenceSerializationPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = ReferenceSerializationFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Classifier Child
        auto &&classifier = m_ChildEClass;

        // ENamedElement
        classifier->setName("Child");

        // EClassifier
        classifier->setClassifierID(CHILD);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature contents of class Container
        auto &&feature = m_Container__contents;

        // ENamedElement
        feature->setName("contents");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ContentEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CONTENTS);
        feature->basicsetEContainingClass(m_ContainerEClass);

        // EReference
        feature->setEReferenceType(m_ContentEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature references of class Container
        auto &&feature = m_Container__references;

        // ENamedElement
        feature->setName("references");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ContentEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__REFERENCES);
        feature->basicsetEContainingClass(m_ContainerEClass);

        // EReference
        feature->setEReferenceType(m_ContentEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature child of class Container
        auto &&feature = m_Container__child;

        // ENamedElement
        feature->setName("child");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ChildEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILD);
        feature->basicsetEContainingClass(m_ContainerEClass);

        // EReference
        feature->setEReferenceType(m_ChildEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature childRef of class Container
        auto &&feature = m_Container__childRef;

        // ENamedElement
        feature->setName("childRef");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ChildEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILDREF);
        feature->basicsetEContainingClass(m_ContainerEClass);

        // EReference
        feature->setEReferenceType(m_ChildEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Container
        auto &&classifier = m_ContainerEClass;

        // ENamedElement
        classifier->setName("Container");

        // EClassifier
        classifier->setClassifierID(CONTAINER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ContainerEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Container__contents);
            eStructuralFeatures.basicAdd(m_Container__references);
            eStructuralFeatures.basicAdd(m_Container__child);
            eStructuralFeatures.basicAdd(m_Container__childRef);
        }
    }();

    [this]()
    { // Feature name of class Content
        auto &&feature = m_Content__name;

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

        feature->setFeatureID(
                ::ReferenceSerialization::ReferenceSerializationPackage::CONTENT__NAME);
        feature->basicsetEContainingClass(m_ContentEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Content
        auto &&classifier = m_ContentEClass;

        // ENamedElement
        classifier->setName("Content");

        // EClassifier
        classifier->setClassifierID(CONTENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ContentEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Content__name);
        }
    }();

    // Initialize package
    setName("ReferenceSerialization");
    setNsPrefix("ReferenceSerialization");
    setNsURI("http://www.example.org/ReferenceSerialization");

    // TODO: bounds for type parameters

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_ChildEClass);
        classifiers.push_back(m_ContainerEClass);
        classifiers.push_back(m_ContentEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr ReferenceSerializationPackage::getContainer()
{
    return m_ContainerEClass;
}
::ecore::EClass_ptr ReferenceSerializationPackage::getContent()
{
    return m_ContentEClass;
}
::ecore::EClass_ptr ReferenceSerializationPackage::getChild()
{
    return m_ChildEClass;
}

::ecore::EReference_ptr ReferenceSerializationPackage::getContainer__contents()
{
    return m_Container__contents;
}
::ecore::EReference_ptr ReferenceSerializationPackage::getContainer__references()
{
    return m_Container__references;
}
::ecore::EReference_ptr ReferenceSerializationPackage::getContainer__child()
{
    return m_Container__child;
}
::ecore::EReference_ptr ReferenceSerializationPackage::getContainer__childRef()
{
    return m_Container__childRef;
}
::ecore::EAttribute_ptr ReferenceSerializationPackage::getContent__name()
{
    return m_Content__name;
}

