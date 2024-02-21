// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * nil/NilPackageImpl.cpp
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

#include <nil/NilPackage.hpp>
#include <nil/NilFactory.hpp>
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

using namespace ::nil;

NilPackage::NilPackage()
{
    m_Root__reference = ::ecore::make< ::ecore::EReference >();
    m_Root__manyReference = ::ecore::make< ::ecore::EReference >();
    m_Root__containmentReference = ::ecore::make< ::ecore::EReference >();
    m_Root__manyContainmentReference = ::ecore::make< ::ecore::EReference >();
    m_RootEClass = ::ecore::make< ::ecore::EClass >();
}

void NilPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = NilFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature reference of class Root
        auto &&feature = m_Root__reference;

        // ENamedElement
        feature->setName("reference");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_RootEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::nil::NilPackage::ROOT__REFERENCE);
        feature->basicsetEContainingClass(m_RootEClass);

        // EReference
        feature->setEReferenceType(m_RootEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature manyReference of class Root
        auto &&feature = m_Root__manyReference;

        // ENamedElement
        feature->setName("manyReference");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_RootEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::nil::NilPackage::ROOT__MANYREFERENCE);
        feature->basicsetEContainingClass(m_RootEClass);

        // EReference
        feature->setEReferenceType(m_RootEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature containmentReference of class Root
        auto &&feature = m_Root__containmentReference;

        // ENamedElement
        feature->setName("containmentReference");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_RootEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::nil::NilPackage::ROOT__CONTAINMENTREFERENCE);
        feature->basicsetEContainingClass(m_RootEClass);

        // EReference
        feature->setEReferenceType(m_RootEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature manyContainmentReference of class Root
        auto &&feature = m_Root__manyContainmentReference;

        // ENamedElement
        feature->setName("manyContainmentReference");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_RootEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::nil::NilPackage::ROOT__MANYCONTAINMENTREFERENCE);
        feature->basicsetEContainingClass(m_RootEClass);

        // EReference
        feature->setEReferenceType(m_RootEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Root
        auto &&classifier = m_RootEClass;

        // ENamedElement
        classifier->setName("Root");

        // EClassifier
        classifier->setClassifierID(ROOT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RootEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Root__reference);
            eStructuralFeatures.basicAdd(m_Root__manyReference);
            eStructuralFeatures.basicAdd(m_Root__containmentReference);
            eStructuralFeatures.basicAdd(m_Root__manyContainmentReference);
        }
    }();

    // Initialize package
    setName("nil");
    setNsPrefix("nil");
    setNsURI("http://example.com/nil");

    // TODO: bounds for type parameters

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_RootEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr NilPackage::getRoot()
{
    return m_RootEClass;
}

::ecore::EReference_ptr NilPackage::getRoot__reference()
{
    return m_Root__reference;
}
::ecore::EReference_ptr NilPackage::getRoot__manyReference()
{
    return m_Root__manyReference;
}
::ecore::EReference_ptr NilPackage::getRoot__containmentReference()
{
    return m_Root__containmentReference;
}
::ecore::EReference_ptr NilPackage::getRoot__manyContainmentReference()
{
    return m_Root__manyContainmentReference;
}

