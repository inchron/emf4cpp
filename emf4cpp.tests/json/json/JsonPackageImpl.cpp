// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/JsonPackageImpl.cpp
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

#include <json/JsonPackage.hpp>
#include <json/JsonFactory.hpp>
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

using namespace ::json;

JsonPackage::JsonPackage()
{
    m_ArrayValue__values = ::ecore::make< ::ecore::EReference >();
    m_ArrayValueEClass = ::ecore::make< ::ecore::EClass >();
    m_BooleanValue__value = ::ecore::make< ::ecore::EAttribute >();
    m_BooleanValueEClass = ::ecore::make< ::ecore::EClass >();
    m_NullValueEClass = ::ecore::make< ::ecore::EClass >();
    m_NumberValue__value = ::ecore::make< ::ecore::EAttribute >();
    m_NumberValueEClass = ::ecore::make< ::ecore::EClass >();
    m_NVPair__name = ::ecore::make< ::ecore::EAttribute >();
    m_NVPair__value = ::ecore::make< ::ecore::EReference >();
    m_NVPairEClass = ::ecore::make< ::ecore::EClass >();
    m_ObjectValue__members = ::ecore::make< ::ecore::EReference >();
    m_ObjectValueEClass = ::ecore::make< ::ecore::EClass >();
    m_StringValue__value = ::ecore::make< ::ecore::EAttribute >();
    m_StringValueEClass = ::ecore::make< ::ecore::EClass >();
    m_ValueEClass = ::ecore::make< ::ecore::EClass >();
}

void JsonPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = JsonFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature values of class ArrayValue
        auto &&feature = m_ArrayValue__values;

        // ENamedElement
        feature->setName("values");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ValueEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::json::JsonPackage::ARRAYVALUE__VALUES);
        feature->basicsetEContainingClass(m_ArrayValueEClass);

        // EReference
        feature->setEReferenceType(m_ValueEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ArrayValue
        auto &&classifier = m_ArrayValueEClass;

        // ENamedElement
        classifier->setName("ArrayValue");

        // EClassifier
        classifier->setClassifierID(ARRAYVALUE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ArrayValueEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ArrayValue__values);
        }
    }();

    [this]()
    { // Feature value of class BooleanValue
        auto &&feature = m_BooleanValue__value;

        // ENamedElement
        feature->setName("value");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::json::JsonPackage::BOOLEANVALUE__VALUE);
        feature->basicsetEContainingClass(m_BooleanValueEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Classifier BooleanValue
        auto &&classifier = m_BooleanValueEClass;

        // ENamedElement
        classifier->setName("BooleanValue");

        // EClassifier
        classifier->setClassifierID(BOOLEANVALUE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BooleanValueEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_BooleanValue__value);
        }
    }();

    [this]()
    { // Classifier NullValue
        auto &&classifier = m_NullValueEClass;

        // ENamedElement
        classifier->setName("NullValue");

        // EClassifier
        classifier->setClassifierID(NULLVALUE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature value of class NumberValue
        auto &&feature = m_NumberValue__value;

        // ENamedElement
        feature->setName("value");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::json::JsonPackage::NUMBERVALUE__VALUE);
        feature->basicsetEContainingClass(m_NumberValueEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEDouble());
        feature->setID(false);
    }();

    [this]()
    { // Classifier NumberValue
        auto &&classifier = m_NumberValueEClass;

        // ENamedElement
        classifier->setName("NumberValue");

        // EClassifier
        classifier->setClassifierID(NUMBERVALUE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_NumberValueEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_NumberValue__value);
        }
    }();

    [this]()
    { // Feature name of class NVPair
        auto &&feature = m_NVPair__name;

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

        feature->setFeatureID(::json::JsonPackage::NVPAIR__NAME);
        feature->basicsetEContainingClass(m_NVPairEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature value of class NVPair
        auto &&feature = m_NVPair__value;

        // ENamedElement
        feature->setName("value");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ValueEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::json::JsonPackage::NVPAIR__VALUE);
        feature->basicsetEContainingClass(m_NVPairEClass);

        // EReference
        feature->setEReferenceType(m_ValueEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier NVPair
        auto &&classifier = m_NVPairEClass;

        // ENamedElement
        classifier->setName("NVPair");

        // EClassifier
        classifier->setClassifierID(NVPAIR);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_NVPairEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_NVPair__name);
            eStructuralFeatures.basicAdd(m_NVPair__value);
        }
    }();

    [this]()
    { // Feature members of class ObjectValue
        auto &&feature = m_ObjectValue__members;

        // ENamedElement
        feature->setName("members");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_NVPairEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::json::JsonPackage::OBJECTVALUE__MEMBERS);
        feature->basicsetEContainingClass(m_ObjectValueEClass);

        // EReference
        feature->setEReferenceType(m_NVPairEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ObjectValue
        auto &&classifier = m_ObjectValueEClass;

        // ENamedElement
        classifier->setName("ObjectValue");

        // EClassifier
        classifier->setClassifierID(OBJECTVALUE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ObjectValueEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ObjectValue__members);
        }
    }();

    [this]()
    { // Feature value of class StringValue
        auto &&feature = m_StringValue__value;

        // ENamedElement
        feature->setName("value");

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

        feature->setFeatureID(::json::JsonPackage::STRINGVALUE__VALUE);
        feature->basicsetEContainingClass(m_StringValueEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier StringValue
        auto &&classifier = m_StringValueEClass;

        // ENamedElement
        classifier->setName("StringValue");

        // EClassifier
        classifier->setClassifierID(STRINGVALUE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_StringValueEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_StringValue__value);
        }
    }();

    [this]()
    { // Classifier Value
        auto &&classifier = m_ValueEClass;

        // ENamedElement
        classifier->setName("Value");

        // EClassifier
        classifier->setClassifierID(VALUE);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    // Initialize package
    setName("json");
    setNsPrefix("json");
    setNsURI("http://json/1.0");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_ObjectValueEClass->getESuperTypes().push_back(m_ValueEClass);
        m_StringValueEClass->getESuperTypes().push_back(m_ValueEClass);
        m_NumberValueEClass->getESuperTypes().push_back(m_ValueEClass);
        m_BooleanValueEClass->getESuperTypes().push_back(m_ValueEClass);
        m_ArrayValueEClass->getESuperTypes().push_back(m_ValueEClass);
        m_NullValueEClass->getESuperTypes().push_back(m_ValueEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_ArrayValueEClass);
        classifiers.push_back(m_BooleanValueEClass);
        classifiers.push_back(m_NullValueEClass);
        classifiers.push_back(m_NumberValueEClass);
        classifiers.push_back(m_NVPairEClass);
        classifiers.push_back(m_ObjectValueEClass);
        classifiers.push_back(m_StringValueEClass);
        classifiers.push_back(m_ValueEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr JsonPackage::getObjectValue()
{
    return m_ObjectValueEClass;
}
::ecore::EClass_ptr JsonPackage::getNVPair()
{
    return m_NVPairEClass;
}
::ecore::EClass_ptr JsonPackage::getValue()
{
    return m_ValueEClass;
}
::ecore::EClass_ptr JsonPackage::getStringValue()
{
    return m_StringValueEClass;
}
::ecore::EClass_ptr JsonPackage::getNumberValue()
{
    return m_NumberValueEClass;
}
::ecore::EClass_ptr JsonPackage::getBooleanValue()
{
    return m_BooleanValueEClass;
}
::ecore::EClass_ptr JsonPackage::getArrayValue()
{
    return m_ArrayValueEClass;
}
::ecore::EClass_ptr JsonPackage::getNullValue()
{
    return m_NullValueEClass;
}

::ecore::EReference_ptr JsonPackage::getObjectValue__members()
{
    return m_ObjectValue__members;
}
::ecore::EAttribute_ptr JsonPackage::getNVPair__name()
{
    return m_NVPair__name;
}
::ecore::EReference_ptr JsonPackage::getNVPair__value()
{
    return m_NVPair__value;
}
::ecore::EAttribute_ptr JsonPackage::getStringValue__value()
{
    return m_StringValue__value;
}
::ecore::EAttribute_ptr JsonPackage::getNumberValue__value()
{
    return m_NumberValue__value;
}
::ecore::EAttribute_ptr JsonPackage::getBooleanValue__value()
{
    return m_BooleanValue__value;
}
::ecore::EReference_ptr JsonPackage::getArrayValue__values()
{
    return m_ArrayValue__values;
}

