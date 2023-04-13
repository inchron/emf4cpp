// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * CST/CSTPackageImpl.cpp
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

#include <CST/CSTPackage.hpp>
#include <CST/CSTFactory.hpp>
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

using namespace ::CST;

CSTPackage::CSTPackage()
{
    m_Element__kind = ::ecore::make< ::ecore::EAttribute >();
    m_ElementEClass = ::ecore::make< ::ecore::EClass >();
    m_Leaf__value = ::ecore::make< ::ecore::EAttribute >();
    m_Leaf__pos = ::ecore::make< ::ecore::EAttribute >();
    m_Leaf__line = ::ecore::make< ::ecore::EAttribute >();
    m_LeafEClass = ::ecore::make< ::ecore::EClass >();
    m_Node__children = ::ecore::make< ::ecore::EReference >();
    m_NodeEClass = ::ecore::make< ::ecore::EClass >();
    m_TreeEClass = ::ecore::make< ::ecore::EClass >();
}

void CSTPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = CSTFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature kind of class Element
        auto &&feature = m_Element__kind;

        // ENamedElement
        feature->setName("kind");

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

        feature->setFeatureID(::CST::CSTPackage::ELEMENT__KIND);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Element
        auto &&classifier = m_ElementEClass;

        // ENamedElement
        classifier->setName("Element");

        // EClassifier
        classifier->setClassifierID(ELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Element__kind);
        }
    }();

    [this]()
    { // Feature value of class Leaf
        auto &&feature = m_Leaf__value;

        // ENamedElement
        feature->setName("value");

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

        feature->setFeatureID(::CST::CSTPackage::LEAF__VALUE);
        feature->basicsetEContainingClass(m_LeafEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature pos of class Leaf
        auto &&feature = m_Leaf__pos;

        // ENamedElement
        feature->setName("pos");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEInt());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::CST::CSTPackage::LEAF__POS);
        feature->basicsetEContainingClass(m_LeafEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Feature line of class Leaf
        auto &&feature = m_Leaf__line;

        // ENamedElement
        feature->setName("line");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEInt());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::CST::CSTPackage::LEAF__LINE);
        feature->basicsetEContainingClass(m_LeafEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Leaf
        auto &&classifier = m_LeafEClass;

        // ENamedElement
        classifier->setName("Leaf");

        // EClassifier
        classifier->setClassifierID(LEAF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LeafEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Leaf__value);
            eStructuralFeatures.basicAdd(m_Leaf__pos);
            eStructuralFeatures.basicAdd(m_Leaf__line);
        }
    }();

    [this]()
    { // Feature children of class Node
        auto &&feature = m_Node__children;

        // ENamedElement
        feature->setName("children");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::CST::CSTPackage::NODE__CHILDREN);
        feature->basicsetEContainingClass(m_NodeEClass);

        // EReference
        feature->setEReferenceType(m_ElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Node
        auto &&classifier = m_NodeEClass;

        // ENamedElement
        classifier->setName("Node");

        // EClassifier
        classifier->setClassifierID(NODE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_NodeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Node__children);
        }
    }();

    [this]()
    { // Classifier Tree
        auto &&classifier = m_TreeEClass;

        // ENamedElement
        classifier->setName("Tree");

        // EClassifier
        classifier->setClassifierID(TREE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    // Initialize package
    setName("CST");
    setNsPrefix("CST");
    setNsURI("http://gts.inf.um.es/modernization/cst");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_TreeEClass->getESuperTypes().push_back(m_NodeEClass);
        m_NodeEClass->getESuperTypes().push_back(m_ElementEClass);
        m_LeafEClass->getESuperTypes().push_back(m_ElementEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_ElementEClass);
        classifiers.push_back(m_LeafEClass);
        classifiers.push_back(m_NodeEClass);
        classifiers.push_back(m_TreeEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr CSTPackage::getTree()
{
    return m_TreeEClass;
}
::ecore::EClass_ptr CSTPackage::getElement()
{
    return m_ElementEClass;
}
::ecore::EClass_ptr CSTPackage::getNode()
{
    return m_NodeEClass;
}
::ecore::EClass_ptr CSTPackage::getLeaf()
{
    return m_LeafEClass;
}

::ecore::EAttribute_ptr CSTPackage::getElement__kind()
{
    return m_Element__kind;
}
::ecore::EReference_ptr CSTPackage::getNode__children()
{
    return m_Node__children;
}
::ecore::EAttribute_ptr CSTPackage::getLeaf__value()
{
    return m_Leaf__value;
}
::ecore::EAttribute_ptr CSTPackage::getLeaf__pos()
{
    return m_Leaf__pos;
}
::ecore::EAttribute_ptr CSTPackage::getLeaf__line()
{
    return m_Leaf__line;
}

