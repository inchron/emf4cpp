// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/BasePackageImpl.cpp
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

#include <base/BasePackage.hpp>
#include <base/BaseFactory.hpp>
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

using namespace ::base;

BasePackage::BasePackage()
{
    m_Base01__valBase01 = ::ecore::make< ::ecore::EAttribute >();
    m_Base01__derived02ref = ::ecore::make< ::ecore::EReference >();
    m_Base01EClass = ::ecore::make< ::ecore::EClass >();
    m_Base02__valBase02 = ::ecore::make< ::ecore::EAttribute >();
    m_Base02EClass = ::ecore::make< ::ecore::EClass >();
    m_Base03__valBase03 = ::ecore::make< ::ecore::EAttribute >();
    m_Base03EClass = ::ecore::make< ::ecore::EClass >();
}

void BasePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = BaseFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature valBase01 of class Base01
        auto &&feature = m_Base01__valBase01;

        // ENamedElement
        feature->setName("valBase01");

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

        feature->setFeatureID(::base::BasePackage::BASE01__VALBASE01);
        feature->basicsetEContainingClass(m_Base01EClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Feature derived02ref of class Base01
        auto &&feature = m_Base01__derived02ref;

        // ENamedElement
        feature->setName("derived02ref");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::derived::DerivedPackage::_instance()->getDerived02());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::base::BasePackage::BASE01__DERIVED02REF);
        feature->basicsetEContainingClass(m_Base01EClass);

        // EReference
        feature->setEReferenceType(
                ::derived::DerivedPackage::_instance()->getDerived02());
        feature->setContainment(false);
        feature->setEOpposite(
                ::derived::DerivedPackage::_instance()->getDerived02__base01ref());
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Base01
        auto &&classifier = m_Base01EClass;

        // ENamedElement
        classifier->setName("Base01");

        // EClassifier
        classifier->setClassifierID(BASE01);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_Base01EClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Base01__valBase01);
            eStructuralFeatures.basicAdd(m_Base01__derived02ref);
        }
    }();

    [this]()
    { // Feature valBase02 of class Base02
        auto &&feature = m_Base02__valBase02;

        // ENamedElement
        feature->setName("valBase02");

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

        feature->setFeatureID(::base::BasePackage::BASE02__VALBASE02);
        feature->basicsetEContainingClass(m_Base02EClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Base02
        auto &&classifier = m_Base02EClass;

        // ENamedElement
        classifier->setName("Base02");

        // EClassifier
        classifier->setClassifierID(BASE02);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_Base02EClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Base02__valBase02);
        }
    }();

    [this]()
    { // Feature valBase03 of class Base03
        auto &&feature = m_Base03__valBase03;

        // ENamedElement
        feature->setName("valBase03");

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

        feature->setFeatureID(::base::BasePackage::BASE03__VALBASE03);
        feature->basicsetEContainingClass(m_Base03EClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Base03
        auto &&classifier = m_Base03EClass;

        // ENamedElement
        classifier->setName("Base03");

        // EClassifier
        classifier->setClassifierID(BASE03);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_Base03EClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Base03__valBase03);
        }
    }();

    [this]()
    { // Subpackages of this package
        auto &&eSubpackages = getESubpackages();
        eSubpackages.push_back(
                ::base::base1::Base1Package::_getInstanceAndRemoveOwnership());
    }();

    // Initialize package
    setName("base");
    setNsPrefix("base");
    setNsURI("http:///com.example.base.ecore/base");

    // TODO: bounds for type parameters

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_Base01EClass);
        classifiers.push_back(m_Base02EClass);
        classifiers.push_back(m_Base03EClass);
    }();

    _initialize();
}

::ecore::EClass_ptr BasePackage::getBase01()
{
    return m_Base01EClass;
}
::ecore::EClass_ptr BasePackage::getBase02()
{
    return m_Base02EClass;
}
::ecore::EClass_ptr BasePackage::getBase03()
{
    return m_Base03EClass;
}

::ecore::EAttribute_ptr BasePackage::getBase01__valBase01()
{
    return m_Base01__valBase01;
}
::ecore::EReference_ptr BasePackage::getBase01__derived02ref()
{
    return m_Base01__derived02ref;
}
::ecore::EAttribute_ptr BasePackage::getBase02__valBase02()
{
    return m_Base02__valBase02;
}
::ecore::EAttribute_ptr BasePackage::getBase03__valBase03()
{
    return m_Base03__valBase03;
}

