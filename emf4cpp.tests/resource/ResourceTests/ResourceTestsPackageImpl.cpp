// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests/ResourceTestsPackageImpl.cpp
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

#include <ResourceTests/ResourceTestsPackage.hpp>
#include <ResourceTests/ResourceTestsFactory.hpp>
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

using namespace ::ResourceTests;

ResourceTestsPackage::ResourceTestsPackage()
{
    m_ETypes__string = ::ecore::make< ::ecore::EAttribute >();
    m_ETypes__emptyString = ::ecore::make< ::ecore::EAttribute >();
    m_ETypes__date = ::ecore::make< ::ecore::EAttribute >();
    m_ETypes__char = ::ecore::make< ::ecore::EAttribute >();
    m_ETypes__bool = ::ecore::make< ::ecore::EAttribute >();
    m_ETypes__double = ::ecore::make< ::ecore::EAttribute >();
    m_ETypes__int = ::ecore::make< ::ecore::EAttribute >();
    m_ETypesEClass = ::ecore::make< ::ecore::EClass >();
    m_NamedObject__name = ::ecore::make< ::ecore::EAttribute >();
    m_NamedObjectEClass = ::ecore::make< ::ecore::EClass >();
    m_ReferenceTargetEClass = ::ecore::make< ::ecore::EClass >();
    m_Referrer__reference = ::ecore::make< ::ecore::EReference >();
    m_ReferrerEClass = ::ecore::make< ::ecore::EClass >();
    m_Root__target = ::ecore::make< ::ecore::EReference >();
    m_Root__referrers = ::ecore::make< ::ecore::EReference >();
    m_RootEClass = ::ecore::make< ::ecore::EClass >();
}

void ResourceTestsPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = ResourceTestsFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature string of class ETypes
        auto &&feature = m_ETypes__string;

        // ENamedElement
        feature->setName("string");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("Hallo Welt!");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ResourceTests::ResourceTestsPackage::ETYPES__STRING);
        feature->basicsetEContainingClass(m_ETypesEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature emptyString of class ETypes
        auto &&feature = m_ETypes__emptyString;

        // ENamedElement
        feature->setName("emptyString");

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
                ::ResourceTests::ResourceTestsPackage::ETYPES__EMPTYSTRING);
        feature->basicsetEContainingClass(m_ETypesEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature date of class ETypes
        auto &&feature = m_ETypes__date;

        // ENamedElement
        feature->setName("date");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("1976-05-27T12:13:14.123-0300");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEDate());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ResourceTests::ResourceTestsPackage::ETYPES__DATE);
        feature->basicsetEContainingClass(m_ETypesEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEDate());
        feature->setID(false);
    }();

    [this]()
    { // Feature char of class ETypes
        auto &&feature = m_ETypes__char;

        // ENamedElement
        feature->setName("char");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("98");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEChar());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ResourceTests::ResourceTestsPackage::ETYPES__CHAR);
        feature->basicsetEContainingClass(m_ETypesEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEChar());
        feature->setID(false);
    }();

    [this]()
    { // Feature bool of class ETypes
        auto &&feature = m_ETypes__bool;

        // ENamedElement
        feature->setName("bool");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("true");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ResourceTests::ResourceTestsPackage::ETYPES__BOOL);
        feature->basicsetEContainingClass(m_ETypesEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Feature double of class ETypes
        auto &&feature = m_ETypes__double;

        // ENamedElement
        feature->setName("double");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("3.14");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ResourceTests::ResourceTestsPackage::ETYPES__DOUBLE);
        feature->basicsetEContainingClass(m_ETypesEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature int of class ETypes
        auto &&feature = m_ETypes__int;

        // ENamedElement
        feature->setName("int");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("10");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEInt());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ResourceTests::ResourceTestsPackage::ETYPES__INT);
        feature->basicsetEContainingClass(m_ETypesEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Classifier ETypes
        auto &&classifier = m_ETypesEClass;

        // ENamedElement
        classifier->setName("ETypes");

        // EClassifier
        classifier->setClassifierID(ETYPES);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ETypesEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ETypes__string);
            eStructuralFeatures.basicAdd(m_ETypes__emptyString);
            eStructuralFeatures.basicAdd(m_ETypes__date);
            eStructuralFeatures.basicAdd(m_ETypes__char);
            eStructuralFeatures.basicAdd(m_ETypes__bool);
            eStructuralFeatures.basicAdd(m_ETypes__double);
            eStructuralFeatures.basicAdd(m_ETypes__int);
        }
    }();

    [this]()
    { // Feature name of class NamedObject
        auto &&feature = m_NamedObject__name;

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
                ::ResourceTests::ResourceTestsPackage::NAMEDOBJECT__NAME);
        feature->basicsetEContainingClass(m_NamedObjectEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier NamedObject
        auto &&classifier = m_NamedObjectEClass;

        // ENamedElement
        classifier->setName("NamedObject");

        // EClassifier
        classifier->setClassifierID(NAMEDOBJECT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_NamedObjectEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_NamedObject__name);
        }
    }();

    [this]()
    { // Classifier ReferenceTarget
        auto &&classifier = m_ReferenceTargetEClass;

        // ENamedElement
        classifier->setName("ReferenceTarget");

        // EClassifier
        classifier->setClassifierID(REFERENCETARGET);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature reference of class Referrer
        auto &&feature = m_Referrer__reference;

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
        feature->setEType(m_ReferenceTargetEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ResourceTests::ResourceTestsPackage::REFERRER__REFERENCE);
        feature->basicsetEContainingClass(m_ReferrerEClass);

        // EReference
        feature->setEReferenceType(m_ReferenceTargetEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Referrer
        auto &&classifier = m_ReferrerEClass;

        // ENamedElement
        classifier->setName("Referrer");

        // EClassifier
        classifier->setClassifierID(REFERRER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ReferrerEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Referrer__reference);
        }
    }();

    [this]()
    { // Feature target of class Root
        auto &&feature = m_Root__target;

        // ENamedElement
        feature->setName("target");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ReferenceTargetEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ResourceTests::ResourceTestsPackage::ROOT__TARGET);
        feature->basicsetEContainingClass(m_RootEClass);

        // EReference
        feature->setEReferenceType(m_ReferenceTargetEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature referrers of class Root
        auto &&feature = m_Root__referrers;

        // ENamedElement
        feature->setName("referrers");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ReferrerEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ResourceTests::ResourceTestsPackage::ROOT__REFERRERS);
        feature->basicsetEContainingClass(m_RootEClass);

        // EReference
        feature->setEReferenceType(m_ReferrerEClass);
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
            eStructuralFeatures.basicAdd(m_Root__target);
            eStructuralFeatures.basicAdd(m_Root__referrers);
        }
    }();

    // Initialize package
    setName("ResourceTests");
    setNsPrefix("ResourceTests");
    setNsURI("http://www.example.org/ResourceTests");

    // TODO: bounds for type parameters

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_ETypesEClass);
        classifiers.push_back(m_NamedObjectEClass);
        classifiers.push_back(m_ReferenceTargetEClass);
        classifiers.push_back(m_ReferrerEClass);
        classifiers.push_back(m_RootEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr ResourceTestsPackage::getRoot()
{
    return m_RootEClass;
}
::ecore::EClass_ptr ResourceTestsPackage::getReferenceTarget()
{
    return m_ReferenceTargetEClass;
}
::ecore::EClass_ptr ResourceTestsPackage::getReferrer()
{
    return m_ReferrerEClass;
}
::ecore::EClass_ptr ResourceTestsPackage::getETypes()
{
    return m_ETypesEClass;
}
::ecore::EClass_ptr ResourceTestsPackage::getNamedObject()
{
    return m_NamedObjectEClass;
}

::ecore::EReference_ptr ResourceTestsPackage::getRoot__target()
{
    return m_Root__target;
}
::ecore::EReference_ptr ResourceTestsPackage::getRoot__referrers()
{
    return m_Root__referrers;
}
::ecore::EReference_ptr ResourceTestsPackage::getReferrer__reference()
{
    return m_Referrer__reference;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__string()
{
    return m_ETypes__string;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__emptyString()
{
    return m_ETypes__emptyString;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__date()
{
    return m_ETypes__date;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__char()
{
    return m_ETypes__char;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__bool()
{
    return m_ETypes__bool;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__double()
{
    return m_ETypes__double;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getETypes__int()
{
    return m_ETypes__int;
}
::ecore::EAttribute_ptr ResourceTestsPackage::getNamedObject__name()
{
    return m_NamedObject__name;
}

