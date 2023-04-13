// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/EoppositePackageImpl.cpp
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

#include <eopposite/EoppositePackage.hpp>
#include <eopposite/EoppositeFactory.hpp>
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

using namespace ::eopposite;

EoppositePackage::EoppositePackage()
{
    m_LeftHand__rightee = ::ecore::make< ::ecore::EReference >();
    m_LeftHand__rightMultiple = ::ecore::make< ::ecore::EReference >();
    m_LeftHandEClass = ::ecore::make< ::ecore::EClass >();
    m_NamedObject__name = ::ecore::make< ::ecore::EAttribute >();
    m_NamedObjectEClass = ::ecore::make< ::ecore::EClass >();
    m_RightHand__leftee = ::ecore::make< ::ecore::EReference >();
    m_RightHandEClass = ::ecore::make< ::ecore::EClass >();
    m_RightMultiple__leftees = ::ecore::make< ::ecore::EReference >();
    m_RightMultipleEClass = ::ecore::make< ::ecore::EClass >();
    m_TopLevel__leftees = ::ecore::make< ::ecore::EReference >();
    m_TopLevel__rightees = ::ecore::make< ::ecore::EReference >();
    m_TopLevel__rightMultiples = ::ecore::make< ::ecore::EReference >();
    m_TopLevelEClass = ::ecore::make< ::ecore::EClass >();
}

void EoppositePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = EoppositeFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature rightee of class LeftHand
        auto &&feature = m_LeftHand__rightee;

        // ENamedElement
        feature->setName("rightee");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_RightHandEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::eopposite::EoppositePackage::LEFTHAND__RIGHTEE);
        feature->basicsetEContainingClass(m_LeftHandEClass);

        // EReference
        feature->setEReferenceType(m_RightHandEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_RightHand__leftee);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature rightMultiple of class LeftHand
        auto &&feature = m_LeftHand__rightMultiple;

        // ENamedElement
        feature->setName("rightMultiple");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_RightMultipleEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE);
        feature->basicsetEContainingClass(m_LeftHandEClass);

        // EReference
        feature->setEReferenceType(m_RightMultipleEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_RightMultiple__leftees);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier LeftHand
        auto &&classifier = m_LeftHandEClass;

        // ENamedElement
        classifier->setName("LeftHand");

        // EClassifier
        classifier->setClassifierID(LEFTHAND);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LeftHandEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_LeftHand__rightee);
            eStructuralFeatures.basicAdd(m_LeftHand__rightMultiple);
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

        feature->setFeatureID(::eopposite::EoppositePackage::NAMEDOBJECT__NAME);
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
    { // Feature leftee of class RightHand
        auto &&feature = m_RightHand__leftee;

        // ENamedElement
        feature->setName("leftee");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_LeftHandEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::eopposite::EoppositePackage::RIGHTHAND__LEFTEE);
        feature->basicsetEContainingClass(m_RightHandEClass);

        // EReference
        feature->setEReferenceType(m_LeftHandEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_LeftHand__rightee);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier RightHand
        auto &&classifier = m_RightHandEClass;

        // ENamedElement
        classifier->setName("RightHand");

        // EClassifier
        classifier->setClassifierID(RIGHTHAND);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RightHandEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_RightHand__leftee);
        }
    }();

    [this]()
    { // Feature leftees of class RightMultiple
        auto &&feature = m_RightMultiple__leftees;

        // ENamedElement
        feature->setName("leftees");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_LeftHandEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::eopposite::EoppositePackage::RIGHTMULTIPLE__LEFTEES);
        feature->basicsetEContainingClass(m_RightMultipleEClass);

        // EReference
        feature->setEReferenceType(m_LeftHandEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_LeftHand__rightMultiple);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier RightMultiple
        auto &&classifier = m_RightMultipleEClass;

        // ENamedElement
        classifier->setName("RightMultiple");

        // EClassifier
        classifier->setClassifierID(RIGHTMULTIPLE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RightMultipleEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_RightMultiple__leftees);
        }
    }();

    [this]()
    { // Feature leftees of class TopLevel
        auto &&feature = m_TopLevel__leftees;

        // ENamedElement
        feature->setName("leftees");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_LeftHandEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::eopposite::EoppositePackage::TOPLEVEL__LEFTEES);
        feature->basicsetEContainingClass(m_TopLevelEClass);

        // EReference
        feature->setEReferenceType(m_LeftHandEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature rightees of class TopLevel
        auto &&feature = m_TopLevel__rightees;

        // ENamedElement
        feature->setName("rightees");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_RightHandEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::eopposite::EoppositePackage::TOPLEVEL__RIGHTEES);
        feature->basicsetEContainingClass(m_TopLevelEClass);

        // EReference
        feature->setEReferenceType(m_RightHandEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature rightMultiples of class TopLevel
        auto &&feature = m_TopLevel__rightMultiples;

        // ENamedElement
        feature->setName("rightMultiples");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_RightMultipleEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::eopposite::EoppositePackage::TOPLEVEL__RIGHTMULTIPLES);
        feature->basicsetEContainingClass(m_TopLevelEClass);

        // EReference
        feature->setEReferenceType(m_RightMultipleEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier TopLevel
        auto &&classifier = m_TopLevelEClass;

        // ENamedElement
        classifier->setName("TopLevel");

        // EClassifier
        classifier->setClassifierID(TOPLEVEL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TopLevelEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TopLevel__leftees);
            eStructuralFeatures.basicAdd(m_TopLevel__rightees);
            eStructuralFeatures.basicAdd(m_TopLevel__rightMultiples);
        }
    }();

    // Initialize package
    setName("eopposite");
    setNsPrefix("eopposite");
    setNsURI("http:///com.example.eopposite.ecore");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_TopLevelEClass->getESuperTypes().push_back(m_NamedObjectEClass);
        m_LeftHandEClass->getESuperTypes().push_back(m_NamedObjectEClass);
        m_RightHandEClass->getESuperTypes().push_back(m_NamedObjectEClass);
        m_RightMultipleEClass->getESuperTypes().push_back(m_NamedObjectEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_LeftHandEClass);
        classifiers.push_back(m_NamedObjectEClass);
        classifiers.push_back(m_RightHandEClass);
        classifiers.push_back(m_RightMultipleEClass);
        classifiers.push_back(m_TopLevelEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr EoppositePackage::getTopLevel()
{
    return m_TopLevelEClass;
}
::ecore::EClass_ptr EoppositePackage::getNamedObject()
{
    return m_NamedObjectEClass;
}
::ecore::EClass_ptr EoppositePackage::getLeftHand()
{
    return m_LeftHandEClass;
}
::ecore::EClass_ptr EoppositePackage::getRightHand()
{
    return m_RightHandEClass;
}
::ecore::EClass_ptr EoppositePackage::getRightMultiple()
{
    return m_RightMultipleEClass;
}

::ecore::EReference_ptr EoppositePackage::getTopLevel__leftees()
{
    return m_TopLevel__leftees;
}
::ecore::EReference_ptr EoppositePackage::getTopLevel__rightees()
{
    return m_TopLevel__rightees;
}
::ecore::EReference_ptr EoppositePackage::getTopLevel__rightMultiples()
{
    return m_TopLevel__rightMultiples;
}
::ecore::EAttribute_ptr EoppositePackage::getNamedObject__name()
{
    return m_NamedObject__name;
}
::ecore::EReference_ptr EoppositePackage::getLeftHand__rightee()
{
    return m_LeftHand__rightee;
}
::ecore::EReference_ptr EoppositePackage::getLeftHand__rightMultiple()
{
    return m_LeftHand__rightMultiple;
}
::ecore::EReference_ptr EoppositePackage::getRightHand__leftee()
{
    return m_RightHand__leftee;
}
::ecore::EReference_ptr EoppositePackage::getRightMultiple__leftees()
{
    return m_RightMultiple__leftees;
}

