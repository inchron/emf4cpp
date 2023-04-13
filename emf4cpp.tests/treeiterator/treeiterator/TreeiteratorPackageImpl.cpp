// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/TreeiteratorPackageImpl.cpp
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

#include <treeiterator/TreeiteratorPackage.hpp>
#include <treeiterator/TreeiteratorFactory.hpp>
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

using namespace ::treeiterator;

TreeiteratorPackage::TreeiteratorPackage()
{
    m_Leaf__name = ::ecore::make< ::ecore::EAttribute >();
    m_LeafEClass = ::ecore::make< ::ecore::EClass >();
    m_TreeNode__name = ::ecore::make< ::ecore::EAttribute >();
    m_TreeNode__children = ::ecore::make< ::ecore::EReference >();
    m_TreeNode__leaf = ::ecore::make< ::ecore::EReference >();
    m_TreeNodeEClass = ::ecore::make< ::ecore::EClass >();
}

void TreeiteratorPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = TreeiteratorFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature name of class Leaf
        auto &&feature = m_Leaf__name;

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

        feature->setFeatureID(::treeiterator::TreeiteratorPackage::LEAF__NAME);
        feature->basicsetEContainingClass(m_LeafEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
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
            eStructuralFeatures.basicAdd(m_Leaf__name);
        }
    }();

    [this]()
    { // Feature name of class TreeNode
        auto &&feature = m_TreeNode__name;

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
                ::treeiterator::TreeiteratorPackage::TREENODE__NAME);
        feature->basicsetEContainingClass(m_TreeNodeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature children of class TreeNode
        auto &&feature = m_TreeNode__children;

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
        feature->setEType(m_TreeNodeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::treeiterator::TreeiteratorPackage::TREENODE__CHILDREN);
        feature->basicsetEContainingClass(m_TreeNodeEClass);

        // EReference
        feature->setEReferenceType(m_TreeNodeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature leaf of class TreeNode
        auto &&feature = m_TreeNode__leaf;

        // ENamedElement
        feature->setName("leaf");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_LeafEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::treeiterator::TreeiteratorPackage::TREENODE__LEAF);
        feature->basicsetEContainingClass(m_TreeNodeEClass);

        // EReference
        feature->setEReferenceType(m_LeafEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier TreeNode
        auto &&classifier = m_TreeNodeEClass;

        // ENamedElement
        classifier->setName("TreeNode");

        // EClassifier
        classifier->setClassifierID(TREENODE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TreeNodeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TreeNode__name);
            eStructuralFeatures.basicAdd(m_TreeNode__children);
            eStructuralFeatures.basicAdd(m_TreeNode__leaf);
        }
    }();

    // Initialize package
    setName("treeiterator");
    setNsPrefix("treeiterator");
    setNsURI("http://inchron.com/tests/treeiterator");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_LeafEClass);
        classifiers.push_back(m_TreeNodeEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr TreeiteratorPackage::getTreeNode()
{
    return m_TreeNodeEClass;
}
::ecore::EClass_ptr TreeiteratorPackage::getLeaf()
{
    return m_LeafEClass;
}

::ecore::EAttribute_ptr TreeiteratorPackage::getTreeNode__name()
{
    return m_TreeNode__name;
}
::ecore::EReference_ptr TreeiteratorPackage::getTreeNode__children()
{
    return m_TreeNode__children;
}
::ecore::EReference_ptr TreeiteratorPackage::getTreeNode__leaf()
{
    return m_TreeNode__leaf;
}
::ecore::EAttribute_ptr TreeiteratorPackage::getLeaf__name()
{
    return m_Leaf__name;
}

