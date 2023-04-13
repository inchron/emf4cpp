// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/Base1PackageImpl.cpp
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

#include <base/base1/Base1Package.hpp>
#include <base/base1/Base1Factory.hpp>
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
#include <derived/DerivedPackage.hpp>
#include <derived/Derived02.hpp>

using namespace ::base::base1;

Base1Package::Base1Package()
{
    m_Base10__valBase10 = ::ecore::make< ::ecore::EAttribute >();
    m_Base10EClass = ::ecore::make< ::ecore::EClass >();
    m_Base11__valBase11 = ::ecore::make< ::ecore::EAttribute >();
    m_Base11EClass = ::ecore::make< ::ecore::EClass >();
}

void Base1Package::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = Base1Factory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature valBase10 of class Base10
        auto &&feature = m_Base10__valBase10;

        // ENamedElement
        feature->setName("valBase10");

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

        feature->setFeatureID(::base::base1::Base1Package::BASE10__VALBASE10);
        feature->basicsetEContainingClass(m_Base10EClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Base10
        auto &&classifier = m_Base10EClass;

        // ENamedElement
        classifier->setName("Base10");

        // EClassifier
        classifier->setClassifierID(BASE10);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_Base10EClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Base10__valBase10);
        }
    }();

    [this]()
    { // Feature valBase11 of class Base11
        auto &&feature = m_Base11__valBase11;

        // ENamedElement
        feature->setName("valBase11");

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

        feature->setFeatureID(::base::base1::Base1Package::BASE11__VALBASE11);
        feature->basicsetEContainingClass(m_Base11EClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Base11
        auto &&classifier = m_Base11EClass;

        // ENamedElement
        classifier->setName("Base11");

        // EClassifier
        classifier->setClassifierID(BASE11);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_Base11EClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Base11__valBase11);
        }
    }();

    [this]()
    { // Subpackages of this package
        auto &&eSubpackages = getESubpackages();
        eSubpackages.push_back(
                ::base::base1::base2::Base2Package::_getInstanceAndRemoveOwnership());
    }();

    // Initialize package
    setName("base1");
    setNsPrefix("base1");
    setNsURI("http:///com.example.base.ecore/base/base1");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_Base10EClass->getESuperTypes().push_back(
                ::base::BasePackage::_instance()->getBase01());
        m_Base11EClass->getESuperTypes().push_back(m_Base10EClass);
        m_Base11EClass->getESuperTypes().push_back(
                ::base::BasePackage::_instance()->getBase02());
        m_Base11EClass->getESuperTypes().push_back(
                ::base::BasePackage::_instance()->getBase03());
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_Base10EClass);
        classifiers.push_back(m_Base11EClass);
    }();

    _initialize();
}

::ecore::EClass_ptr Base1Package::getBase10()
{
    return m_Base10EClass;
}
::ecore::EClass_ptr Base1Package::getBase11()
{
    return m_Base11EClass;
}

::ecore::EAttribute_ptr Base1Package::getBase10__valBase10()
{
    return m_Base10__valBase10;
}
::ecore::EAttribute_ptr Base1Package::getBase11__valBase11()
{
    return m_Base11__valBase11;
}

