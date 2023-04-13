// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * edate/EdatePackageImpl.cpp
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

#include <edate/EdatePackage.hpp>
#include <edate/EdateFactory.hpp>
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

using namespace ::edate;

EdatePackage::EdatePackage()
{
    m_Apollo11__FirstManOnMoonDate = ::ecore::make< ::ecore::EAttribute >();
    m_Apollo11__Member = ::ecore::make< ::ecore::EReference >();
    m_Apollo11EClass = ::ecore::make< ::ecore::EClass >();
    m_Person__Birthday = ::ecore::make< ::ecore::EAttribute >();
    m_Person__Name = ::ecore::make< ::ecore::EAttribute >();
    m_PersonEClass = ::ecore::make< ::ecore::EClass >();
}

void EdatePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = EdateFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature FirstManOnMoonDate of class Apollo11
        auto &&feature = m_Apollo11__FirstManOnMoonDate;

        // ENamedElement
        feature->setName("FirstManOnMoonDate");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("1969-07-20T20:18:00.000+0000");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEDate());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::edate::EdatePackage::APOLLO11__FIRSTMANONMOONDATE);
        feature->basicsetEContainingClass(m_Apollo11EClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEDate());
        feature->setID(false);
    }();

    [this]()
    { // Feature Member of class Apollo11
        auto &&feature = m_Apollo11__Member;

        // ENamedElement
        feature->setName("Member");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PersonEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::edate::EdatePackage::APOLLO11__MEMBER);
        feature->basicsetEContainingClass(m_Apollo11EClass);

        // EReference
        feature->setEReferenceType(m_PersonEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Apollo11
        auto &&classifier = m_Apollo11EClass;

        // ENamedElement
        classifier->setName("Apollo11");

        // EClassifier
        classifier->setClassifierID(APOLLO11);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_Apollo11EClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Apollo11__FirstManOnMoonDate);
            eStructuralFeatures.basicAdd(m_Apollo11__Member);
        }
    }();

    [this]()
    { // Feature Birthday of class Person
        auto &&feature = m_Person__Birthday;

        // ENamedElement
        feature->setName("Birthday");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEDate());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::edate::EdatePackage::PERSON__BIRTHDAY);
        feature->basicsetEContainingClass(m_PersonEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEDate());
        feature->setID(false);
    }();

    [this]()
    { // Feature Name of class Person
        auto &&feature = m_Person__Name;

        // ENamedElement
        feature->setName("Name");

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

        feature->setFeatureID(::edate::EdatePackage::PERSON__NAME);
        feature->basicsetEContainingClass(m_PersonEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Person
        auto &&classifier = m_PersonEClass;

        // ENamedElement
        classifier->setName("Person");

        // EClassifier
        classifier->setClassifierID(PERSON);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PersonEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Person__Birthday);
            eStructuralFeatures.basicAdd(m_Person__Name);
        }
    }();

    // Initialize package
    setName("edate");
    setNsPrefix("edate");
    setNsURI("http://www.example.org/edate");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_Apollo11EClass);
        classifiers.push_back(m_PersonEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr EdatePackage::getPerson()
{
    return m_PersonEClass;
}
::ecore::EClass_ptr EdatePackage::getApollo11()
{
    return m_Apollo11EClass;
}

::ecore::EAttribute_ptr EdatePackage::getPerson__Birthday()
{
    return m_Person__Birthday;
}
::ecore::EAttribute_ptr EdatePackage::getPerson__Name()
{
    return m_Person__Name;
}
::ecore::EAttribute_ptr EdatePackage::getApollo11__FirstManOnMoonDate()
{
    return m_Apollo11__FirstManOnMoonDate;
}
::ecore::EReference_ptr EdatePackage::getApollo11__Member()
{
    return m_Apollo11__Member;
}

