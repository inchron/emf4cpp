// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * tree/TreePackageImpl.cpp
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

#include <tree/TreePackage.hpp>
#include <tree/TreeFactory.hpp>
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

using namespace ::tree;

TreePackage::TreePackage()
{
    m_LeafEClass = ::ecore::make< ::ecore::EClass >();
    m_NonTerminal__children = ::ecore::make< ::ecore::EReference >();
    m_NonTerminalEClass = ::ecore::make< ::ecore::EClass >();
    m_TreeNode__data = ::ecore::make< ::ecore::EAttribute >();
    m_TreeNode__parent = ::ecore::make< ::ecore::EReference >();
    m_TreeNodeEClass = ::ecore::make< ::ecore::EClass >();
}

void TreePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = TreeFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

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
    }();

    [this]()
    { // Feature children of class NonTerminal
        auto &&feature = m_NonTerminal__children;

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

        feature->setFeatureID(::tree::TreePackage::NONTERMINAL__CHILDREN);
        feature->basicsetEContainingClass(m_NonTerminalEClass);

        // EReference
        feature->setEReferenceType(m_TreeNodeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier NonTerminal
        auto &&classifier = m_NonTerminalEClass;

        // ENamedElement
        classifier->setName("NonTerminal");

        // EClassifier
        classifier->setClassifierID(NONTERMINAL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_NonTerminalEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_NonTerminal__children);
        }
    }();

    [this]()
    { // Feature data of class TreeNode
        auto &&feature = m_TreeNode__data;

        // ENamedElement
        feature->setName("data");

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

        feature->setFeatureID(::tree::TreePackage::TREENODE__DATA);
        feature->basicsetEContainingClass(m_TreeNodeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature parent of class TreeNode
        auto &&feature = m_TreeNode__parent;

        // ENamedElement
        feature->setName("parent");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_TreeNodeEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::tree::TreePackage::TREENODE__PARENT);
        feature->basicsetEContainingClass(m_TreeNodeEClass);

        // EReference
        feature->setEReferenceType(m_TreeNodeEClass);
        feature->setContainment(false);
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
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TreeNodeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TreeNode__data);
            eStructuralFeatures.basicAdd(m_TreeNode__parent);
        }
    }();

    // Initialize package
    setName("tree");
    setNsPrefix("tree");
    setNsURI("http://www.eclipse.org/emf/2002/Tree");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_LeafEClass->getESuperTypes().push_back(m_TreeNodeEClass);
        m_NonTerminalEClass->getESuperTypes().push_back(m_TreeNodeEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_LeafEClass);
        classifiers.push_back(m_NonTerminalEClass);
        classifiers.push_back(m_TreeNodeEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr TreePackage::getTreeNode()
{
    return m_TreeNodeEClass;
}
::ecore::EClass_ptr TreePackage::getLeaf()
{
    return m_LeafEClass;
}
::ecore::EClass_ptr TreePackage::getNonTerminal()
{
    return m_NonTerminalEClass;
}

::ecore::EAttribute_ptr TreePackage::getTreeNode__data()
{
    return m_TreeNode__data;
}
::ecore::EReference_ptr TreePackage::getTreeNode__parent()
{
    return m_TreeNode__parent;
}
::ecore::EReference_ptr TreePackage::getNonTerminal__children()
{
    return m_NonTerminal__children;
}

