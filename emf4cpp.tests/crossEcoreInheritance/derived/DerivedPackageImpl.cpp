// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * derived/DerivedPackageImpl.cpp
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

#include <derived/DerivedPackage.hpp>
#include <derived/DerivedFactory.hpp>
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
#include <base/BasePackage.hpp>
#include <base/Base01.hpp>

using namespace ::derived;

DerivedPackage::DerivedPackage()
{
    m_Derived01__valDerived01 = ::ecore::make< ::ecore::EAttribute >();
    m_Derived01EClass = ::ecore::make< ::ecore::EClass >();
    m_Derived02__valDerived02 = ::ecore::make< ::ecore::EAttribute >();
    m_Derived02__base01ref = ::ecore::make< ::ecore::EReference >();
    m_Derived02EClass = ::ecore::make< ::ecore::EClass >();
}

void DerivedPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = DerivedFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature valDerived01 of class Derived01
        auto &&feature = m_Derived01__valDerived01;

        // ENamedElement
        feature->setName("valDerived01");

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

        feature->setFeatureID(
                ::derived::DerivedPackage::DERIVED01__VALDERIVED01);
        feature->basicsetEContainingClass(m_Derived01EClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Derived01
        auto &&classifier = m_Derived01EClass;

        // ENamedElement
        classifier->setName("Derived01");

        // EClassifier
        classifier->setClassifierID(DERIVED01);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_Derived01EClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Derived01__valDerived01);
        }
    }();

    [this]()
    { // Feature valDerived02 of class Derived02
        auto &&feature = m_Derived02__valDerived02;

        // ENamedElement
        feature->setName("valDerived02");

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

        feature->setFeatureID(
                ::derived::DerivedPackage::DERIVED02__VALDERIVED02);
        feature->basicsetEContainingClass(m_Derived02EClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Feature base01ref of class Derived02
        auto &&feature = m_Derived02__base01ref;

        // ENamedElement
        feature->setName("base01ref");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::base::BasePackage::_instance()->getBase01());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::derived::DerivedPackage::DERIVED02__BASE01REF);
        feature->basicsetEContainingClass(m_Derived02EClass);

        // EReference
        feature->setEReferenceType(
                ::base::BasePackage::_instance()->getBase01());
        feature->setContainment(false);
        feature->setEOpposite(
                ::base::BasePackage::_instance()->getBase01__derived02ref());
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Derived02
        auto &&classifier = m_Derived02EClass;

        // ENamedElement
        classifier->setName("Derived02");

        // EClassifier
        classifier->setClassifierID(DERIVED02);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_Derived02EClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Derived02__valDerived02);
            eStructuralFeatures.basicAdd(m_Derived02__base01ref);
        }
    }();

    // Initialize package
    setName("derived");
    setNsPrefix("derived");
    setNsURI("http:///com.example.derived.ecore");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_Derived01EClass->getESuperTypes().push_back(
                ::base::base1::base2::Base2Package::_instance()->getBase20());
        m_Derived02EClass->getESuperTypes().push_back(m_Derived01EClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_Derived01EClass);
        classifiers.push_back(m_Derived02EClass);
    }();

    _initialize();
}

::ecore::EClass_ptr DerivedPackage::getDerived01()
{
    return m_Derived01EClass;
}
::ecore::EClass_ptr DerivedPackage::getDerived02()
{
    return m_Derived02EClass;
}

::ecore::EAttribute_ptr DerivedPackage::getDerived01__valDerived01()
{
    return m_Derived01__valDerived01;
}
::ecore::EAttribute_ptr DerivedPackage::getDerived02__valDerived02()
{
    return m_Derived02__valDerived02;
}
::ecore::EReference_ptr DerivedPackage::getDerived02__base01ref()
{
    return m_Derived02__base01ref;
}

