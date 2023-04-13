// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * bintree/BintreePackageImpl.cpp
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

#include <bintree/BintreePackage.hpp>
#include <bintree/BintreeFactory.hpp>
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

using namespace ::bintree;

BintreePackage::BintreePackage()
{
    m_BinTreeNode__parent = ::ecore::make< ::ecore::EReference >();
    m_BinTreeNode__left = ::ecore::make< ::ecore::EReference >();
    m_BinTreeNode__right = ::ecore::make< ::ecore::EReference >();
    m_BinTreeNode__data = ::ecore::make< ::ecore::EAttribute >();
    m_BinTreeNodeEClass = ::ecore::make< ::ecore::EClass >();
}

void BintreePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = BintreeFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature parent of class BinTreeNode
        auto &&feature = m_BinTreeNode__parent;

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
        feature->setEType(m_BinTreeNodeEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::bintree::BintreePackage::BINTREENODE__PARENT);
        feature->basicsetEContainingClass(m_BinTreeNodeEClass);

        // EReference
        feature->setEReferenceType(m_BinTreeNodeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature left of class BinTreeNode
        auto &&feature = m_BinTreeNode__left;

        // ENamedElement
        feature->setName("left");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_BinTreeNodeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::bintree::BintreePackage::BINTREENODE__LEFT);
        feature->basicsetEContainingClass(m_BinTreeNodeEClass);

        // EReference
        feature->setEReferenceType(m_BinTreeNodeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature right of class BinTreeNode
        auto &&feature = m_BinTreeNode__right;

        // ENamedElement
        feature->setName("right");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_BinTreeNodeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::bintree::BintreePackage::BINTREENODE__RIGHT);
        feature->basicsetEContainingClass(m_BinTreeNodeEClass);

        // EReference
        feature->setEReferenceType(m_BinTreeNodeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature data of class BinTreeNode
        auto &&feature = m_BinTreeNode__data;

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

        feature->setFeatureID(::bintree::BintreePackage::BINTREENODE__DATA);
        feature->basicsetEContainingClass(m_BinTreeNodeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier BinTreeNode
        auto &&classifier = m_BinTreeNodeEClass;

        // ENamedElement
        classifier->setName("BinTreeNode");

        // EClassifier
        classifier->setClassifierID(BINTREENODE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BinTreeNodeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_BinTreeNode__parent);
            eStructuralFeatures.basicAdd(m_BinTreeNode__left);
            eStructuralFeatures.basicAdd(m_BinTreeNode__right);
            eStructuralFeatures.basicAdd(m_BinTreeNode__data);
        }
    }();

    // Initialize package
    setName("bintree");
    setNsPrefix("bintree");
    setNsURI("http://bintree/1.0");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_BinTreeNodeEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr BintreePackage::getBinTreeNode()
{
    return m_BinTreeNodeEClass;
}

::ecore::EReference_ptr BintreePackage::getBinTreeNode__parent()
{
    return m_BinTreeNode__parent;
}
::ecore::EReference_ptr BintreePackage::getBinTreeNode__left()
{
    return m_BinTreeNode__left;
}
::ecore::EReference_ptr BintreePackage::getBinTreeNode__right()
{
    return m_BinTreeNode__right;
}
::ecore::EAttribute_ptr BintreePackage::getBinTreeNode__data()
{
    return m_BinTreeNode__data;
}

