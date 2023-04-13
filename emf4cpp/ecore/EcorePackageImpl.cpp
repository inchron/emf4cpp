// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EcorePackageImpl.cpp
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

#include <ecore/EcorePackage.hpp>
#include <ecore/EcoreFactory.hpp>
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

using namespace ::ecore;

EcorePackage::EcorePackage()
{
    m_EAnnotation__source = ::ecore::make< ::ecore::EAttribute >();
    m_EAnnotation__details = ::ecore::make< ::ecore::EReference >();
    m_EAnnotation__eModelElement = ::ecore::make< ::ecore::EReference >();
    m_EAnnotation__contents = ::ecore::make< ::ecore::EReference >();
    m_EAnnotation__references = ::ecore::make< ::ecore::EReference >();
    m_EAnnotationEClass = ::ecore::make< ::ecore::EClass >();
    m_EAttribute__iD = ::ecore::make< ::ecore::EAttribute >();
    m_EAttribute__eAttributeType = ::ecore::make< ::ecore::EReference >();
    m_EAttributeEClass = ::ecore::make< ::ecore::EClass >();
    m_EBigDecimalEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EBigIntegerEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EBooleanEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EBooleanObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EByteEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EByteArrayEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EByteObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ECharEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ECharacterObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EClass__abstract = ::ecore::make< ::ecore::EAttribute >();
    m_EClass__interface = ::ecore::make< ::ecore::EAttribute >();
    m_EClass__eSuperTypes = ::ecore::make< ::ecore::EReference >();
    m_EClass__eOperations = ::ecore::make< ::ecore::EReference >();
    m_EClass__eAllAttributes = ::ecore::make< ::ecore::EReference >();
    m_EClass__eAllReferences = ::ecore::make< ::ecore::EReference >();
    m_EClass__eReferences = ::ecore::make< ::ecore::EReference >();
    m_EClass__eAttributes = ::ecore::make< ::ecore::EReference >();
    m_EClass__eAllContainments = ::ecore::make< ::ecore::EReference >();
    m_EClass__eAllOperations = ::ecore::make< ::ecore::EReference >();
    m_EClass__eAllStructuralFeatures = ::ecore::make< ::ecore::EReference >();
    m_EClass__eAllSuperTypes = ::ecore::make< ::ecore::EReference >();
    m_EClass__eIDAttribute = ::ecore::make< ::ecore::EReference >();
    m_EClass__eStructuralFeatures = ::ecore::make< ::ecore::EReference >();
    m_EClass__eGenericSuperTypes = ::ecore::make< ::ecore::EReference >();
    m_EClass__eAllGenericSuperTypes = ::ecore::make< ::ecore::EReference >();
    m_EClassEClass = ::ecore::make< ::ecore::EClass >();
    m_EClassifier__instanceClassName = ::ecore::make< ::ecore::EAttribute >();
    m_EClassifier__instanceClass = ::ecore::make< ::ecore::EAttribute >();
    m_EClassifier__defaultValue = ::ecore::make< ::ecore::EAttribute >();
    m_EClassifier__instanceTypeName = ::ecore::make< ::ecore::EAttribute >();
    m_EClassifier__ePackage = ::ecore::make< ::ecore::EReference >();
    m_EClassifier__eTypeParameters = ::ecore::make< ::ecore::EReference >();
    m_EClassifierEClass = ::ecore::make< ::ecore::EClass >();
    m_EDataType__serializable = ::ecore::make< ::ecore::EAttribute >();
    m_EDataTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_EDateEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EDiagnosticChainEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EDoubleEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EDoubleObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EEListEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EEnum__eLiterals = ::ecore::make< ::ecore::EReference >();
    m_EEnumEClass = ::ecore::make< ::ecore::EClass >();
    m_EEnumeratorEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EEnumLiteral__value = ::ecore::make< ::ecore::EAttribute >();
    m_EEnumLiteral__instance = ::ecore::make< ::ecore::EAttribute >();
    m_EEnumLiteral__literal = ::ecore::make< ::ecore::EAttribute >();
    m_EEnumLiteral__eEnum = ::ecore::make< ::ecore::EReference >();
    m_EEnumLiteralEClass = ::ecore::make< ::ecore::EClass >();
    m_EFactory__ePackage = ::ecore::make< ::ecore::EReference >();
    m_EFactoryEClass = ::ecore::make< ::ecore::EClass >();
    m_EFeatureMapEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EFeatureMapEntryEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EFloatEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EFloatObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EGenericType__eUpperBound = ::ecore::make< ::ecore::EReference >();
    m_EGenericType__eTypeArguments = ::ecore::make< ::ecore::EReference >();
    m_EGenericType__eRawType = ::ecore::make< ::ecore::EReference >();
    m_EGenericType__eLowerBound = ::ecore::make< ::ecore::EReference >();
    m_EGenericType__eTypeParameter = ::ecore::make< ::ecore::EReference >();
    m_EGenericType__eClassifier = ::ecore::make< ::ecore::EReference >();
    m_EGenericTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_EIntEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EIntegerObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EInvocationTargetExceptionEDataType =
            ::ecore::make< ::ecore::EDataType >();
    m_EJavaClassEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EJavaObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ELongEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ELongObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EMapEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EModelElement__eAnnotations = ::ecore::make< ::ecore::EReference >();
    m_EModelElementEClass = ::ecore::make< ::ecore::EClass >();
    m_ENamedElement__name = ::ecore::make< ::ecore::EAttribute >();
    m_ENamedElementEClass = ::ecore::make< ::ecore::EClass >();
    m_EObjectEClass = ::ecore::make< ::ecore::EClass >();
    m_EOperation__eContainingClass = ::ecore::make< ::ecore::EReference >();
    m_EOperation__eTypeParameters = ::ecore::make< ::ecore::EReference >();
    m_EOperation__eParameters = ::ecore::make< ::ecore::EReference >();
    m_EOperation__eExceptions = ::ecore::make< ::ecore::EReference >();
    m_EOperation__eGenericExceptions = ::ecore::make< ::ecore::EReference >();
    m_EOperationEClass = ::ecore::make< ::ecore::EClass >();
    m_EPackage__nsURI = ::ecore::make< ::ecore::EAttribute >();
    m_EPackage__nsPrefix = ::ecore::make< ::ecore::EAttribute >();
    m_EPackage__eFactoryInstance = ::ecore::make< ::ecore::EReference >();
    m_EPackage__eClassifiers = ::ecore::make< ::ecore::EReference >();
    m_EPackage__eSubpackages = ::ecore::make< ::ecore::EReference >();
    m_EPackage__eSuperPackage = ::ecore::make< ::ecore::EReference >();
    m_EPackageEClass = ::ecore::make< ::ecore::EClass >();
    m_EParameter__eOperation = ::ecore::make< ::ecore::EReference >();
    m_EParameterEClass = ::ecore::make< ::ecore::EClass >();
    m_EReference__containment = ::ecore::make< ::ecore::EAttribute >();
    m_EReference__container = ::ecore::make< ::ecore::EAttribute >();
    m_EReference__resolveProxies = ::ecore::make< ::ecore::EAttribute >();
    m_EReference__eOpposite = ::ecore::make< ::ecore::EReference >();
    m_EReference__eReferenceType = ::ecore::make< ::ecore::EReference >();
    m_EReference__eKeys = ::ecore::make< ::ecore::EReference >();
    m_EReferenceEClass = ::ecore::make< ::ecore::EClass >();
    m_EResourceEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EResourceSetEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EShortEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EShortObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EStringEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EStringToStringMapEntry__key = ::ecore::make< ::ecore::EAttribute >();
    m_EStringToStringMapEntry__value = ::ecore::make< ::ecore::EAttribute >();
    m_EStringToStringMapEntryEClass = ::ecore::make< ::ecore::EClass >();
    m_EStructuralFeature__changeable = ::ecore::make< ::ecore::EAttribute >();
    m_EStructuralFeature__volatile = ::ecore::make< ::ecore::EAttribute >();
    m_EStructuralFeature__transient = ::ecore::make< ::ecore::EAttribute >();
    m_EStructuralFeature__defaultValueLiteral = ::ecore::make<
            ::ecore::EAttribute >();
    m_EStructuralFeature__defaultValue = ::ecore::make< ::ecore::EAttribute >();
    m_EStructuralFeature__unsettable = ::ecore::make< ::ecore::EAttribute >();
    m_EStructuralFeature__derived = ::ecore::make< ::ecore::EAttribute >();
    m_EStructuralFeature__eContainingClass =
            ::ecore::make< ::ecore::EReference >();
    m_EStructuralFeatureEClass = ::ecore::make< ::ecore::EClass >();
    m_ETreeIteratorEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ETypedElement__ordered = ::ecore::make< ::ecore::EAttribute >();
    m_ETypedElement__unique = ::ecore::make< ::ecore::EAttribute >();
    m_ETypedElement__lowerBound = ::ecore::make< ::ecore::EAttribute >();
    m_ETypedElement__upperBound = ::ecore::make< ::ecore::EAttribute >();
    m_ETypedElement__many = ::ecore::make< ::ecore::EAttribute >();
    m_ETypedElement__required = ::ecore::make< ::ecore::EAttribute >();
    m_ETypedElement__eType = ::ecore::make< ::ecore::EReference >();
    m_ETypedElement__eGenericType = ::ecore::make< ::ecore::EReference >();
    m_ETypedElementEClass = ::ecore::make< ::ecore::EClass >();
    m_ETypeParameter__eBounds = ::ecore::make< ::ecore::EReference >();
    m_ETypeParameterEClass = ::ecore::make< ::ecore::EClass >();
}

void EcorePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = EcoreFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature source of class EAnnotation
        auto &&feature = m_EAnnotation__source;

        // ENamedElement
        feature->setName("source");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EStringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EANNOTATION__SOURCE);
        feature->basicsetEContainingClass(m_EAnnotationEClass);

        // EAttribute
        feature->setEAttributeType(m_EStringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature details of class EAnnotation
        auto &&feature = m_EAnnotation__details;

        // ENamedElement
        feature->setName("details");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EStringToStringMapEntryEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EANNOTATION__DETAILS);
        feature->basicsetEContainingClass(m_EAnnotationEClass);

        // EReference
        feature->setEReferenceType(m_EStringToStringMapEntryEClass);
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eModelElement of class EAnnotation
        auto &&feature = m_EAnnotation__eModelElement;

        // ENamedElement
        feature->setName("eModelElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EModelElementEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT);
        feature->basicsetEContainingClass(m_EAnnotationEClass);

        // EReference
        feature->setEReferenceType(m_EModelElementEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_EModelElement__eAnnotations);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature contents of class EAnnotation
        auto &&feature = m_EAnnotation__contents;

        // ENamedElement
        feature->setName("contents");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EObjectEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EANNOTATION__CONTENTS);
        feature->basicsetEContainingClass(m_EAnnotationEClass);

        // EReference
        feature->setEReferenceType(m_EObjectEClass);
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature references of class EAnnotation
        auto &&feature = m_EAnnotation__references;

        // ENamedElement
        feature->setName("references");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EObjectEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EANNOTATION__REFERENCES);
        feature->basicsetEContainingClass(m_EAnnotationEClass);

        // EReference
        feature->setEReferenceType(m_EObjectEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EAnnotation
        auto &&classifier = m_EAnnotationEClass;

        // ENamedElement
        classifier->setName("EAnnotation");

        // EClassifier
        classifier->setClassifierID(EANNOTATION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EAnnotationEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EAnnotation__source);
            eStructuralFeatures.basicAdd(m_EAnnotation__details);
            eStructuralFeatures.basicAdd(m_EAnnotation__eModelElement);
            eStructuralFeatures.basicAdd(m_EAnnotation__contents);
            eStructuralFeatures.basicAdd(m_EAnnotation__references);
        }
    }();

    [this]()
    { // Feature iD of class EAttribute
        auto &&feature = m_EAttribute__iD;

        // ENamedElement
        feature->setName("iD");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EATTRIBUTE__ID);
        feature->basicsetEContainingClass(m_EAttributeEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature eAttributeType of class EAttribute
        auto &&feature = m_EAttribute__eAttributeType;

        // ENamedElement
        feature->setName("eAttributeType");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EDataTypeEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(
                ::ecore::EcorePackage::EATTRIBUTE__EATTRIBUTETYPE);
        feature->basicsetEContainingClass(m_EAttributeEClass);

        // EReference
        feature->setEReferenceType(m_EDataTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EAttribute
        auto &&classifier = m_EAttributeEClass;

        // ENamedElement
        classifier->setName("EAttribute");

        // EClassifier
        classifier->setClassifierID(EATTRIBUTE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EAttributeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EAttribute__iD);
            eStructuralFeatures.basicAdd(m_EAttribute__eAttributeType);
        }
    }();

    [this]()
    { // Classifier EBigDecimal
        auto &&classifier = m_EBigDecimalEDataType;

        // ENamedElement
        classifier->setName("EBigDecimal");

        // EClassifier
        classifier->setClassifierID(EBIGDECIMAL);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EBigInteger
        auto &&classifier = m_EBigIntegerEDataType;

        // ENamedElement
        classifier->setName("EBigInteger");

        // EClassifier
        classifier->setClassifierID(EBIGINTEGER);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EBoolean
        auto &&classifier = m_EBooleanEDataType;

        // ENamedElement
        classifier->setName("EBoolean");

        // EClassifier
        classifier->setClassifierID(EBOOLEAN);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EBooleanObject
        auto &&classifier = m_EBooleanObjectEDataType;

        // ENamedElement
        classifier->setName("EBooleanObject");

        // EClassifier
        classifier->setClassifierID(EBOOLEANOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EByte
        auto &&classifier = m_EByteEDataType;

        // ENamedElement
        classifier->setName("EByte");

        // EClassifier
        classifier->setClassifierID(EBYTE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EByteArray
        auto &&classifier = m_EByteArrayEDataType;

        // ENamedElement
        classifier->setName("EByteArray");

        // EClassifier
        classifier->setClassifierID(EBYTEARRAY);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EByteObject
        auto &&classifier = m_EByteObjectEDataType;

        // ENamedElement
        classifier->setName("EByteObject");

        // EClassifier
        classifier->setClassifierID(EBYTEOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EChar
        auto &&classifier = m_ECharEDataType;

        // ENamedElement
        classifier->setName("EChar");

        // EClassifier
        classifier->setClassifierID(ECHAR);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier ECharacterObject
        auto &&classifier = m_ECharacterObjectEDataType;

        // ENamedElement
        classifier->setName("ECharacterObject");

        // EClassifier
        classifier->setClassifierID(ECHARACTEROBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature abstract of class EClass
        auto &&feature = m_EClass__abstract;

        // ENamedElement
        feature->setName("abstract");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__ABSTRACT);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature interface of class EClass
        auto &&feature = m_EClass__interface;

        // ENamedElement
        feature->setName("interface");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__INTERFACE);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature eSuperTypes of class EClass
        auto &&feature = m_EClass__eSuperTypes;

        // ENamedElement
        feature->setName("eSuperTypes");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EClassEClass);
        feature->setTransient(false);
        feature->setUnsettable(true);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__ESUPERTYPES);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EClassEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eOperations of class EClass
        auto &&feature = m_EClass__eOperations;

        // ENamedElement
        feature->setName("eOperations");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EOperationEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__EOPERATIONS);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EOperationEClass);
        feature->setContainment(true);
        feature->setEOpposite(m_EOperation__eContainingClass);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eAllAttributes of class EClass
        auto &&feature = m_EClass__eAllAttributes;

        // ENamedElement
        feature->setName("eAllAttributes");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EAttributeEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__EALLATTRIBUTES);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EAttributeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eAllReferences of class EClass
        auto &&feature = m_EClass__eAllReferences;

        // ENamedElement
        feature->setName("eAllReferences");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EReferenceEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__EALLREFERENCES);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EReferenceEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eReferences of class EClass
        auto &&feature = m_EClass__eReferences;

        // ENamedElement
        feature->setName("eReferences");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EReferenceEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__EREFERENCES);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EReferenceEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eAttributes of class EClass
        auto &&feature = m_EClass__eAttributes;

        // ENamedElement
        feature->setName("eAttributes");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EAttributeEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__EATTRIBUTES);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EAttributeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eAllContainments of class EClass
        auto &&feature = m_EClass__eAllContainments;

        // ENamedElement
        feature->setName("eAllContainments");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EReferenceEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__EALLCONTAINMENTS);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EReferenceEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eAllOperations of class EClass
        auto &&feature = m_EClass__eAllOperations;

        // ENamedElement
        feature->setName("eAllOperations");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EOperationEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__EALLOPERATIONS);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EOperationEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eAllStructuralFeatures of class EClass
        auto &&feature = m_EClass__eAllStructuralFeatures;

        // ENamedElement
        feature->setName("eAllStructuralFeatures");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EStructuralFeatureEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(
                ::ecore::EcorePackage::ECLASS__EALLSTRUCTURALFEATURES);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EStructuralFeatureEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eAllSuperTypes of class EClass
        auto &&feature = m_EClass__eAllSuperTypes;

        // ENamedElement
        feature->setName("eAllSuperTypes");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EClassEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__EALLSUPERTYPES);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EClassEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eIDAttribute of class EClass
        auto &&feature = m_EClass__eIDAttribute;

        // ENamedElement
        feature->setName("eIDAttribute");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EAttributeEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ECLASS__EIDATTRIBUTE);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EAttributeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eStructuralFeatures of class EClass
        auto &&feature = m_EClass__eStructuralFeatures;

        // ENamedElement
        feature->setName("eStructuralFeatures");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EStructuralFeatureEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EStructuralFeatureEClass);
        feature->setContainment(true);
        feature->setEOpposite(m_EStructuralFeature__eContainingClass);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eGenericSuperTypes of class EClass
        auto &&feature = m_EClass__eGenericSuperTypes;

        // ENamedElement
        feature->setName("eGenericSuperTypes");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EGenericTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(true);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ECLASS__EGENERICSUPERTYPES);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EGenericTypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eAllGenericSuperTypes of class EClass
        auto &&feature = m_EClass__eAllGenericSuperTypes;

        // ENamedElement
        feature->setName("eAllGenericSuperTypes");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EGenericTypeEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(
                ::ecore::EcorePackage::ECLASS__EALLGENERICSUPERTYPES);
        feature->basicsetEContainingClass(m_EClassEClass);

        // EReference
        feature->setEReferenceType(m_EGenericTypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EClass
        auto &&classifier = m_EClassEClass;

        // ENamedElement
        classifier->setName("EClass");

        // EClassifier
        classifier->setClassifierID(ECLASS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EClassEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EClass__abstract);
            eStructuralFeatures.basicAdd(m_EClass__interface);
            eStructuralFeatures.basicAdd(m_EClass__eSuperTypes);
            eStructuralFeatures.basicAdd(m_EClass__eOperations);
            eStructuralFeatures.basicAdd(m_EClass__eAllAttributes);
            eStructuralFeatures.basicAdd(m_EClass__eAllReferences);
            eStructuralFeatures.basicAdd(m_EClass__eReferences);
            eStructuralFeatures.basicAdd(m_EClass__eAttributes);
            eStructuralFeatures.basicAdd(m_EClass__eAllContainments);
            eStructuralFeatures.basicAdd(m_EClass__eAllOperations);
            eStructuralFeatures.basicAdd(m_EClass__eAllStructuralFeatures);
            eStructuralFeatures.basicAdd(m_EClass__eAllSuperTypes);
            eStructuralFeatures.basicAdd(m_EClass__eIDAttribute);
            eStructuralFeatures.basicAdd(m_EClass__eStructuralFeatures);
            eStructuralFeatures.basicAdd(m_EClass__eGenericSuperTypes);
            eStructuralFeatures.basicAdd(m_EClass__eAllGenericSuperTypes);
        }
    }();

    [this]()
    { // Feature instanceClassName of class EClassifier
        auto &&feature = m_EClassifier__instanceClassName;

        // ENamedElement
        feature->setName("instanceClassName");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EStringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(true);
        feature->setVolatile(true);

        feature->setFeatureID(
                ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME);
        feature->basicsetEContainingClass(m_EClassifierEClass);

        // EAttribute
        feature->setEAttributeType(m_EStringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature instanceClass of class EClassifier
        auto &&feature = m_EClassifier__instanceClass;

        // ENamedElement
        feature->setName("instanceClass");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EJavaClassEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(
                ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASS);
        feature->basicsetEContainingClass(m_EClassifierEClass);

        // EAttribute
        feature->setEAttributeType(m_EJavaClassEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature defaultValue of class EClassifier
        auto &&feature = m_EClassifier__defaultValue;

        // ENamedElement
        feature->setName("defaultValue");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EJavaObjectEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ECLASSIFIER__DEFAULTVALUE);
        feature->basicsetEContainingClass(m_EClassifierEClass);

        // EAttribute
        feature->setEAttributeType(m_EJavaObjectEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature instanceTypeName of class EClassifier
        auto &&feature = m_EClassifier__instanceTypeName;

        // ENamedElement
        feature->setName("instanceTypeName");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EStringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(true);
        feature->setVolatile(true);

        feature->setFeatureID(
                ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME);
        feature->basicsetEContainingClass(m_EClassifierEClass);

        // EAttribute
        feature->setEAttributeType(m_EStringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature ePackage of class EClassifier
        auto &&feature = m_EClassifier__ePackage;

        // ENamedElement
        feature->setName("ePackage");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EPackageEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::ECLASSIFIER__EPACKAGE);
        feature->basicsetEContainingClass(m_EClassifierEClass);

        // EReference
        feature->setEReferenceType(m_EPackageEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_EPackage__eClassifiers);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eTypeParameters of class EClassifier
        auto &&feature = m_EClassifier__eTypeParameters;

        // ENamedElement
        feature->setName("eTypeParameters");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ETypeParameterEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS);
        feature->basicsetEContainingClass(m_EClassifierEClass);

        // EReference
        feature->setEReferenceType(m_ETypeParameterEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EClassifier
        auto &&classifier = m_EClassifierEClass;

        // ENamedElement
        classifier->setName("EClassifier");

        // EClassifier
        classifier->setClassifierID(ECLASSIFIER);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EClassifierEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EClassifier__instanceClassName);
            eStructuralFeatures.basicAdd(m_EClassifier__instanceClass);
            eStructuralFeatures.basicAdd(m_EClassifier__defaultValue);
            eStructuralFeatures.basicAdd(m_EClassifier__instanceTypeName);
            eStructuralFeatures.basicAdd(m_EClassifier__ePackage);
            eStructuralFeatures.basicAdd(m_EClassifier__eTypeParameters);
        }
    }();

    [this]()
    { // Feature serializable of class EDataType
        auto &&feature = m_EDataType__serializable;

        // ENamedElement
        feature->setName("serializable");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("true");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EDATATYPE__SERIALIZABLE);
        feature->basicsetEContainingClass(m_EDataTypeEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Classifier EDataType
        auto &&classifier = m_EDataTypeEClass;

        // ENamedElement
        classifier->setName("EDataType");

        // EClassifier
        classifier->setClassifierID(EDATATYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EDataTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EDataType__serializable);
        }
    }();

    [this]()
    { // Classifier EDate
        auto &&classifier = m_EDateEDataType;

        // ENamedElement
        classifier->setName("EDate");

        // EClassifier
        classifier->setClassifierID(EDATE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EDiagnosticChain
        auto &&classifier = m_EDiagnosticChainEDataType;

        // ENamedElement
        classifier->setName("EDiagnosticChain");

        // EClassifier
        classifier->setClassifierID(EDIAGNOSTICCHAIN);

        // EDataType
        classifier->setSerializable(false);
    }();

    [this]()
    { // Classifier EDouble
        auto &&classifier = m_EDoubleEDataType;

        // ENamedElement
        classifier->setName("EDouble");

        // EClassifier
        classifier->setClassifierID(EDOUBLE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EDoubleObject
        auto &&classifier = m_EDoubleObjectEDataType;

        // ENamedElement
        classifier->setName("EDoubleObject");

        // EClassifier
        classifier->setClassifierID(EDOUBLEOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EEList
        auto &&classifier = m_EEListEDataType;

        // ENamedElement
        classifier->setName("EEList");

        // EClassifier
        classifier->setClassifierID(EELIST);

        // EDataType
        classifier->setSerializable(false);
    }();

    [this]()
    { // Feature eLiterals of class EEnum
        auto &&feature = m_EEnum__eLiterals;

        // ENamedElement
        feature->setName("eLiterals");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EEnumLiteralEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EENUM__ELITERALS);
        feature->basicsetEContainingClass(m_EEnumEClass);

        // EReference
        feature->setEReferenceType(m_EEnumLiteralEClass);
        feature->setContainment(true);
        feature->setEOpposite(m_EEnumLiteral__eEnum);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Classifier EEnum
        auto &&classifier = m_EEnumEClass;

        // ENamedElement
        classifier->setName("EEnum");

        // EClassifier
        classifier->setClassifierID(EENUM);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EEnumEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EEnum__eLiterals);
        }
    }();

    [this]()
    { // Classifier EEnumerator
        auto &&classifier = m_EEnumeratorEDataType;

        // ENamedElement
        classifier->setName("EEnumerator");

        // EClassifier
        classifier->setClassifierID(EENUMERATOR);

        // EDataType
        classifier->setSerializable(false);
    }();

    [this]()
    { // Feature value of class EEnumLiteral
        auto &&feature = m_EEnumLiteral__value;

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
        feature->setEType(m_EIntEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EENUMLITERAL__VALUE);
        feature->basicsetEContainingClass(m_EEnumLiteralEClass);

        // EAttribute
        feature->setEAttributeType(m_EIntEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature instance of class EEnumLiteral
        auto &&feature = m_EEnumLiteral__instance;

        // ENamedElement
        feature->setName("instance");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EEnumeratorEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EENUMLITERAL__INSTANCE);
        feature->basicsetEContainingClass(m_EEnumLiteralEClass);

        // EAttribute
        feature->setEAttributeType(m_EEnumeratorEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature literal of class EEnumLiteral
        auto &&feature = m_EEnumLiteral__literal;

        // ENamedElement
        feature->setName("literal");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EStringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EENUMLITERAL__LITERAL);
        feature->basicsetEContainingClass(m_EEnumLiteralEClass);

        // EAttribute
        feature->setEAttributeType(m_EStringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature eEnum of class EEnumLiteral
        auto &&feature = m_EEnumLiteral__eEnum;

        // ENamedElement
        feature->setName("eEnum");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EEnumEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EENUMLITERAL__EENUM);
        feature->basicsetEContainingClass(m_EEnumLiteralEClass);

        // EReference
        feature->setEReferenceType(m_EEnumEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_EEnum__eLiterals);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Classifier EEnumLiteral
        auto &&classifier = m_EEnumLiteralEClass;

        // ENamedElement
        classifier->setName("EEnumLiteral");

        // EClassifier
        classifier->setClassifierID(EENUMLITERAL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EEnumLiteralEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EEnumLiteral__value);
            eStructuralFeatures.basicAdd(m_EEnumLiteral__instance);
            eStructuralFeatures.basicAdd(m_EEnumLiteral__literal);
            eStructuralFeatures.basicAdd(m_EEnumLiteral__eEnum);
        }
    }();

    [this]()
    { // Feature ePackage of class EFactory
        auto &&feature = m_EFactory__ePackage;

        // ENamedElement
        feature->setName("ePackage");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EPackageEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EFACTORY__EPACKAGE);
        feature->basicsetEContainingClass(m_EFactoryEClass);

        // EReference
        feature->setEReferenceType(m_EPackageEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_EPackage__eFactoryInstance);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Classifier EFactory
        auto &&classifier = m_EFactoryEClass;

        // ENamedElement
        classifier->setName("EFactory");

        // EClassifier
        classifier->setClassifierID(EFACTORY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EFactoryEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EFactory__ePackage);
        }
    }();

    [this]()
    { // Classifier EFeatureMap
        auto &&classifier = m_EFeatureMapEDataType;

        // ENamedElement
        classifier->setName("EFeatureMap");

        // EClassifier
        classifier->setClassifierID(EFEATUREMAP);

        // EDataType
        classifier->setSerializable(false);
    }();

    [this]()
    { // Classifier EFeatureMapEntry
        auto &&classifier = m_EFeatureMapEntryEDataType;

        // ENamedElement
        classifier->setName("EFeatureMapEntry");

        // EClassifier
        classifier->setClassifierID(EFEATUREMAPENTRY);

        // EDataType
        classifier->setSerializable(false);
    }();

    [this]()
    { // Classifier EFloat
        auto &&classifier = m_EFloatEDataType;

        // ENamedElement
        classifier->setName("EFloat");

        // EClassifier
        classifier->setClassifierID(EFLOAT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EFloatObject
        auto &&classifier = m_EFloatObjectEDataType;

        // ENamedElement
        classifier->setName("EFloatObject");

        // EClassifier
        classifier->setClassifierID(EFLOATOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature eUpperBound of class EGenericType
        auto &&feature = m_EGenericType__eUpperBound;

        // ENamedElement
        feature->setName("eUpperBound");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EGenericTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND);
        feature->basicsetEContainingClass(m_EGenericTypeEClass);

        // EReference
        feature->setEReferenceType(m_EGenericTypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eTypeArguments of class EGenericType
        auto &&feature = m_EGenericType__eTypeArguments;

        // ENamedElement
        feature->setName("eTypeArguments");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EGenericTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS);
        feature->basicsetEContainingClass(m_EGenericTypeEClass);

        // EReference
        feature->setEReferenceType(m_EGenericTypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eRawType of class EGenericType
        auto &&feature = m_EGenericType__eRawType;

        // ENamedElement
        feature->setName("eRawType");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EClassifierEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EGENERICTYPE__ERAWTYPE);
        feature->basicsetEContainingClass(m_EGenericTypeEClass);

        // EReference
        feature->setEReferenceType(m_EClassifierEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eLowerBound of class EGenericType
        auto &&feature = m_EGenericType__eLowerBound;

        // ENamedElement
        feature->setName("eLowerBound");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EGenericTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND);
        feature->basicsetEContainingClass(m_EGenericTypeEClass);

        // EReference
        feature->setEReferenceType(m_EGenericTypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eTypeParameter of class EGenericType
        auto &&feature = m_EGenericType__eTypeParameter;

        // ENamedElement
        feature->setName("eTypeParameter");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ETypeParameterEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER);
        feature->basicsetEContainingClass(m_EGenericTypeEClass);

        // EReference
        feature->setEReferenceType(m_ETypeParameterEClass);
        feature->setContainment(false);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eClassifier of class EGenericType
        auto &&feature = m_EGenericType__eClassifier;

        // ENamedElement
        feature->setName("eClassifier");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EClassifierEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER);
        feature->basicsetEContainingClass(m_EGenericTypeEClass);

        // EReference
        feature->setEReferenceType(m_EClassifierEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EGenericType
        auto &&classifier = m_EGenericTypeEClass;

        // ENamedElement
        classifier->setName("EGenericType");

        // EClassifier
        classifier->setClassifierID(EGENERICTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EGenericTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EGenericType__eUpperBound);
            eStructuralFeatures.basicAdd(m_EGenericType__eTypeArguments);
            eStructuralFeatures.basicAdd(m_EGenericType__eRawType);
            eStructuralFeatures.basicAdd(m_EGenericType__eLowerBound);
            eStructuralFeatures.basicAdd(m_EGenericType__eTypeParameter);
            eStructuralFeatures.basicAdd(m_EGenericType__eClassifier);
        }
    }();

    [this]()
    { // Classifier EInt
        auto &&classifier = m_EIntEDataType;

        // ENamedElement
        classifier->setName("EInt");

        // EClassifier
        classifier->setClassifierID(EINT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EIntegerObject
        auto &&classifier = m_EIntegerObjectEDataType;

        // ENamedElement
        classifier->setName("EIntegerObject");

        // EClassifier
        classifier->setClassifierID(EINTEGEROBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EInvocationTargetException
        auto &&classifier = m_EInvocationTargetExceptionEDataType;

        // ENamedElement
        classifier->setName("EInvocationTargetException");

        // EClassifier
        classifier->setClassifierID(EINVOCATIONTARGETEXCEPTION);

        // EDataType
        classifier->setSerializable(false);
    }();

    [this]()
    { // Classifier EJavaClass
        auto &&classifier = m_EJavaClassEDataType;

        // ENamedElement
        classifier->setName("EJavaClass");

        // EClassifier
        classifier->setClassifierID(EJAVACLASS);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EJavaObject
        auto &&classifier = m_EJavaObjectEDataType;

        // ENamedElement
        classifier->setName("EJavaObject");

        // EClassifier
        classifier->setClassifierID(EJAVAOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier ELong
        auto &&classifier = m_ELongEDataType;

        // ENamedElement
        classifier->setName("ELong");

        // EClassifier
        classifier->setClassifierID(ELONG);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier ELongObject
        auto &&classifier = m_ELongObjectEDataType;

        // ENamedElement
        classifier->setName("ELongObject");

        // EClassifier
        classifier->setClassifierID(ELONGOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EMap
        auto &&classifier = m_EMapEDataType;

        // ENamedElement
        classifier->setName("EMap");

        // EClassifier
        classifier->setClassifierID(EMAP);

        // EDataType
        classifier->setSerializable(false);
    }();

    [this]()
    { // Feature eAnnotations of class EModelElement
        auto &&feature = m_EModelElement__eAnnotations;

        // ENamedElement
        feature->setName("eAnnotations");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EAnnotationEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS);
        feature->basicsetEContainingClass(m_EModelElementEClass);

        // EReference
        feature->setEReferenceType(m_EAnnotationEClass);
        feature->setContainment(true);
        feature->setEOpposite(m_EAnnotation__eModelElement);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Classifier EModelElement
        auto &&classifier = m_EModelElementEClass;

        // ENamedElement
        classifier->setName("EModelElement");

        // EClassifier
        classifier->setClassifierID(EMODELELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EModelElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EModelElement__eAnnotations);
        }
    }();

    [this]()
    { // Feature name of class ENamedElement
        auto &&feature = m_ENamedElement__name;

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
        feature->setEType(m_EStringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::ENAMEDELEMENT__NAME);
        feature->basicsetEContainingClass(m_ENamedElementEClass);

        // EAttribute
        feature->setEAttributeType(m_EStringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Classifier ENamedElement
        auto &&classifier = m_ENamedElementEClass;

        // ENamedElement
        classifier->setName("ENamedElement");

        // EClassifier
        classifier->setClassifierID(ENAMEDELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ENamedElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ENamedElement__name);
        }
    }();

    [this]()
    { // Classifier EObject
        auto &&classifier = m_EObjectEClass;

        // ENamedElement
        classifier->setName("EObject");

        // EClassifier
        classifier->setClassifierID(EOBJECT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature eContainingClass of class EOperation
        auto &&feature = m_EOperation__eContainingClass;

        // ENamedElement
        feature->setName("eContainingClass");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EClassEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS);
        feature->basicsetEContainingClass(m_EOperationEClass);

        // EReference
        feature->setEReferenceType(m_EClassEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_EClass__eOperations);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eTypeParameters of class EOperation
        auto &&feature = m_EOperation__eTypeParameters;

        // ENamedElement
        feature->setName("eTypeParameters");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ETypeParameterEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS);
        feature->basicsetEContainingClass(m_EOperationEClass);

        // EReference
        feature->setEReferenceType(m_ETypeParameterEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eParameters of class EOperation
        auto &&feature = m_EOperation__eParameters;

        // ENamedElement
        feature->setName("eParameters");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EParameterEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EOPERATION__EPARAMETERS);
        feature->basicsetEContainingClass(m_EOperationEClass);

        // EReference
        feature->setEReferenceType(m_EParameterEClass);
        feature->setContainment(true);
        feature->setEOpposite(m_EParameter__eOperation);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eExceptions of class EOperation
        auto &&feature = m_EOperation__eExceptions;

        // ENamedElement
        feature->setName("eExceptions");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EClassifierEClass);
        feature->setTransient(false);
        feature->setUnsettable(true);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EOPERATION__EEXCEPTIONS);
        feature->basicsetEContainingClass(m_EOperationEClass);

        // EReference
        feature->setEReferenceType(m_EClassifierEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eGenericExceptions of class EOperation
        auto &&feature = m_EOperation__eGenericExceptions;

        // ENamedElement
        feature->setName("eGenericExceptions");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EGenericTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(true);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS);
        feature->basicsetEContainingClass(m_EOperationEClass);

        // EReference
        feature->setEReferenceType(m_EGenericTypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Classifier EOperation
        auto &&classifier = m_EOperationEClass;

        // ENamedElement
        classifier->setName("EOperation");

        // EClassifier
        classifier->setClassifierID(EOPERATION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EOperationEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EOperation__eContainingClass);
            eStructuralFeatures.basicAdd(m_EOperation__eTypeParameters);
            eStructuralFeatures.basicAdd(m_EOperation__eParameters);
            eStructuralFeatures.basicAdd(m_EOperation__eExceptions);
            eStructuralFeatures.basicAdd(m_EOperation__eGenericExceptions);
        }
    }();

    [this]()
    { // Feature nsURI of class EPackage
        auto &&feature = m_EPackage__nsURI;

        // ENamedElement
        feature->setName("nsURI");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EStringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EPACKAGE__NSURI);
        feature->basicsetEContainingClass(m_EPackageEClass);

        // EAttribute
        feature->setEAttributeType(m_EStringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature nsPrefix of class EPackage
        auto &&feature = m_EPackage__nsPrefix;

        // ENamedElement
        feature->setName("nsPrefix");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EStringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EPACKAGE__NSPREFIX);
        feature->basicsetEContainingClass(m_EPackageEClass);

        // EAttribute
        feature->setEAttributeType(m_EStringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature eFactoryInstance of class EPackage
        auto &&feature = m_EPackage__eFactoryInstance;

        // ENamedElement
        feature->setName("eFactoryInstance");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EFactoryEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE);
        feature->basicsetEContainingClass(m_EPackageEClass);

        // EReference
        feature->setEReferenceType(m_EFactoryEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_EFactory__ePackage);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature eClassifiers of class EPackage
        auto &&feature = m_EPackage__eClassifiers;

        // ENamedElement
        feature->setName("eClassifiers");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EClassifierEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS);
        feature->basicsetEContainingClass(m_EPackageEClass);

        // EReference
        feature->setEReferenceType(m_EClassifierEClass);
        feature->setContainment(true);
        feature->setEOpposite(m_EClassifier__ePackage);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eSubpackages of class EPackage
        auto &&feature = m_EPackage__eSubpackages;

        // ENamedElement
        feature->setName("eSubpackages");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EPackageEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES);
        feature->basicsetEContainingClass(m_EPackageEClass);

        // EReference
        feature->setEReferenceType(m_EPackageEClass);
        feature->setContainment(true);
        feature->setEOpposite(m_EPackage__eSuperPackage);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eSuperPackage of class EPackage
        auto &&feature = m_EPackage__eSuperPackage;

        // ENamedElement
        feature->setName("eSuperPackage");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EPackageEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE);
        feature->basicsetEContainingClass(m_EPackageEClass);

        // EReference
        feature->setEReferenceType(m_EPackageEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_EPackage__eSubpackages);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EPackage
        auto &&classifier = m_EPackageEClass;

        // ENamedElement
        classifier->setName("EPackage");

        // EClassifier
        classifier->setClassifierID(EPACKAGE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EPackageEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EPackage__nsURI);
            eStructuralFeatures.basicAdd(m_EPackage__nsPrefix);
            eStructuralFeatures.basicAdd(m_EPackage__eFactoryInstance);
            eStructuralFeatures.basicAdd(m_EPackage__eClassifiers);
            eStructuralFeatures.basicAdd(m_EPackage__eSubpackages);
            eStructuralFeatures.basicAdd(m_EPackage__eSuperPackage);
        }
    }();

    [this]()
    { // Feature eOperation of class EParameter
        auto &&feature = m_EParameter__eOperation;

        // ENamedElement
        feature->setName("eOperation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EOperationEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EPARAMETER__EOPERATION);
        feature->basicsetEContainingClass(m_EParameterEClass);

        // EReference
        feature->setEReferenceType(m_EOperationEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_EOperation__eParameters);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Classifier EParameter
        auto &&classifier = m_EParameterEClass;

        // ENamedElement
        classifier->setName("EParameter");

        // EClassifier
        classifier->setClassifierID(EPARAMETER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EParameterEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EParameter__eOperation);
        }
    }();

    [this]()
    { // Feature containment of class EReference
        auto &&feature = m_EReference__containment;

        // ENamedElement
        feature->setName("containment");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EREFERENCE__CONTAINMENT);
        feature->basicsetEContainingClass(m_EReferenceEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature container of class EReference
        auto &&feature = m_EReference__container;

        // ENamedElement
        feature->setName("container");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::EREFERENCE__CONTAINER);
        feature->basicsetEContainingClass(m_EReferenceEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature resolveProxies of class EReference
        auto &&feature = m_EReference__resolveProxies;

        // ENamedElement
        feature->setName("resolveProxies");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("true");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::EREFERENCE__RESOLVEPROXIES);
        feature->basicsetEContainingClass(m_EReferenceEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature eOpposite of class EReference
        auto &&feature = m_EReference__eOpposite;

        // ENamedElement
        feature->setName("eOpposite");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EReferenceEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EREFERENCE__EOPPOSITE);
        feature->basicsetEContainingClass(m_EReferenceEClass);

        // EReference
        feature->setEReferenceType(m_EReferenceEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eReferenceType of class EReference
        auto &&feature = m_EReference__eReferenceType;

        // ENamedElement
        feature->setName("eReferenceType");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EClassEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(
                ::ecore::EcorePackage::EREFERENCE__EREFERENCETYPE);
        feature->basicsetEContainingClass(m_EReferenceEClass);

        // EReference
        feature->setEReferenceType(m_EClassEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eKeys of class EReference
        auto &&feature = m_EReference__eKeys;

        // ENamedElement
        feature->setName("eKeys");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EAttributeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::EREFERENCE__EKEYS);
        feature->basicsetEContainingClass(m_EReferenceEClass);

        // EReference
        feature->setEReferenceType(m_EAttributeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EReference
        auto &&classifier = m_EReferenceEClass;

        // ENamedElement
        classifier->setName("EReference");

        // EClassifier
        classifier->setClassifierID(EREFERENCE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EReferenceEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EReference__containment);
            eStructuralFeatures.basicAdd(m_EReference__container);
            eStructuralFeatures.basicAdd(m_EReference__resolveProxies);
            eStructuralFeatures.basicAdd(m_EReference__eOpposite);
            eStructuralFeatures.basicAdd(m_EReference__eReferenceType);
            eStructuralFeatures.basicAdd(m_EReference__eKeys);
        }
    }();

    [this]()
    { // Classifier EResource
        auto &&classifier = m_EResourceEDataType;

        // ENamedElement
        classifier->setName("EResource");

        // EClassifier
        classifier->setClassifierID(ERESOURCE);

        // EDataType
        classifier->setSerializable(false);
    }();

    [this]()
    { // Classifier EResourceSet
        auto &&classifier = m_EResourceSetEDataType;

        // ENamedElement
        classifier->setName("EResourceSet");

        // EClassifier
        classifier->setClassifierID(ERESOURCESET);

        // EDataType
        classifier->setSerializable(false);
    }();

    [this]()
    { // Classifier EShort
        auto &&classifier = m_EShortEDataType;

        // ENamedElement
        classifier->setName("EShort");

        // EClassifier
        classifier->setClassifierID(ESHORT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EShortObject
        auto &&classifier = m_EShortObjectEDataType;

        // ENamedElement
        classifier->setName("EShortObject");

        // EClassifier
        classifier->setClassifierID(ESHORTOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier EString
        auto &&classifier = m_EStringEDataType;

        // ENamedElement
        classifier->setName("EString");

        // EClassifier
        classifier->setClassifierID(ESTRING);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature key of class EStringToStringMapEntry
        auto &&feature = m_EStringToStringMapEntry__key;

        // ENamedElement
        feature->setName("key");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EStringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__KEY);
        feature->basicsetEContainingClass(m_EStringToStringMapEntryEClass);

        // EAttribute
        feature->setEAttributeType(m_EStringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature value of class EStringToStringMapEntry
        auto &&feature = m_EStringToStringMapEntry__value;

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
        feature->setEType(m_EStringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__VALUE);
        feature->basicsetEContainingClass(m_EStringToStringMapEntryEClass);

        // EAttribute
        feature->setEAttributeType(m_EStringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Classifier EStringToStringMapEntry
        auto &&classifier = m_EStringToStringMapEntryEClass;

        // ENamedElement
        classifier->setName("EStringToStringMapEntry");

        // EClassifier
        classifier->setClassifierID(ESTRINGTOSTRINGMAPENTRY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EStringToStringMapEntryEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EStringToStringMapEntry__key);
            eStructuralFeatures.basicAdd(m_EStringToStringMapEntry__value);
        }
    }();

    [this]()
    { // Feature changeable of class EStructuralFeature
        auto &&feature = m_EStructuralFeature__changeable;

        // ENamedElement
        feature->setName("changeable");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("true");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ESTRUCTURALFEATURE__CHANGEABLE);
        feature->basicsetEContainingClass(m_EStructuralFeatureEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature volatile of class EStructuralFeature
        auto &&feature = m_EStructuralFeature__volatile;

        // ENamedElement
        feature->setName("volatile");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE);
        feature->basicsetEContainingClass(m_EStructuralFeatureEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature transient of class EStructuralFeature
        auto &&feature = m_EStructuralFeature__transient;

        // ENamedElement
        feature->setName("transient");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT);
        feature->basicsetEContainingClass(m_EStructuralFeatureEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature defaultValueLiteral of class EStructuralFeature
        auto &&feature = m_EStructuralFeature__defaultValueLiteral;

        // ENamedElement
        feature->setName("defaultValueLiteral");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EStringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL);
        feature->basicsetEContainingClass(m_EStructuralFeatureEClass);

        // EAttribute
        feature->setEAttributeType(m_EStringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature defaultValue of class EStructuralFeature
        auto &&feature = m_EStructuralFeature__defaultValue;

        // ENamedElement
        feature->setName("defaultValue");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EJavaObjectEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(
                ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUE);
        feature->basicsetEContainingClass(m_EStructuralFeatureEClass);

        // EAttribute
        feature->setEAttributeType(m_EJavaObjectEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature unsettable of class EStructuralFeature
        auto &&feature = m_EStructuralFeature__unsettable;

        // ENamedElement
        feature->setName("unsettable");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE);
        feature->basicsetEContainingClass(m_EStructuralFeatureEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature derived of class EStructuralFeature
        auto &&feature = m_EStructuralFeature__derived;

        // ENamedElement
        feature->setName("derived");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED);
        feature->basicsetEContainingClass(m_EStructuralFeatureEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature eContainingClass of class EStructuralFeature
        auto &&feature = m_EStructuralFeature__eContainingClass;

        // ENamedElement
        feature->setName("eContainingClass");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EClassEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS);
        feature->basicsetEContainingClass(m_EStructuralFeatureEClass);

        // EReference
        feature->setEReferenceType(m_EClassEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_EClass__eStructuralFeatures);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Classifier EStructuralFeature
        auto &&classifier = m_EStructuralFeatureEClass;

        // ENamedElement
        classifier->setName("EStructuralFeature");

        // EClassifier
        classifier->setClassifierID(ESTRUCTURALFEATURE);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EStructuralFeatureEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EStructuralFeature__changeable);
            eStructuralFeatures.basicAdd(m_EStructuralFeature__volatile);
            eStructuralFeatures.basicAdd(m_EStructuralFeature__transient);
            eStructuralFeatures.basicAdd(
                    m_EStructuralFeature__defaultValueLiteral);
            eStructuralFeatures.basicAdd(m_EStructuralFeature__defaultValue);
            eStructuralFeatures.basicAdd(m_EStructuralFeature__unsettable);
            eStructuralFeatures.basicAdd(m_EStructuralFeature__derived);
            eStructuralFeatures.basicAdd(
                    m_EStructuralFeature__eContainingClass);
        }
    }();

    [this]()
    { // Classifier ETreeIterator
        auto &&classifier = m_ETreeIteratorEDataType;

        // ENamedElement
        classifier->setName("ETreeIterator");

        // EClassifier
        classifier->setClassifierID(ETREEITERATOR);

        // EDataType
        classifier->setSerializable(false);
    }();

    [this]()
    { // Feature ordered of class ETypedElement
        auto &&feature = m_ETypedElement__ordered;

        // ENamedElement
        feature->setName("ordered");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("true");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::ETYPEDELEMENT__ORDERED);
        feature->basicsetEContainingClass(m_ETypedElementEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature unique of class ETypedElement
        auto &&feature = m_ETypedElement__unique;

        // ENamedElement
        feature->setName("unique");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("true");
        feature->setDerived(false);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE);
        feature->basicsetEContainingClass(m_ETypedElementEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature lowerBound of class ETypedElement
        auto &&feature = m_ETypedElement__lowerBound;

        // ENamedElement
        feature->setName("lowerBound");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EIntEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND);
        feature->basicsetEContainingClass(m_ETypedElementEClass);

        // EAttribute
        feature->setEAttributeType(m_EIntEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature upperBound of class ETypedElement
        auto &&feature = m_ETypedElement__upperBound;

        // ENamedElement
        feature->setName("upperBound");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("1");
        feature->setDerived(false);
        feature->setEType(m_EIntEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND);
        feature->basicsetEContainingClass(m_ETypedElementEClass);

        // EAttribute
        feature->setEAttributeType(m_EIntEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature many of class ETypedElement
        auto &&feature = m_ETypedElement__many;

        // ENamedElement
        feature->setName("many");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ETYPEDELEMENT__MANY);
        feature->basicsetEContainingClass(m_ETypedElementEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature required of class ETypedElement
        auto &&feature = m_ETypedElement__required;

        // ENamedElement
        feature->setName("required");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(false);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_EBooleanEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ETYPEDELEMENT__REQUIRED);
        feature->basicsetEContainingClass(m_ETypedElementEClass);

        // EAttribute
        feature->setEAttributeType(m_EBooleanEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature eType of class ETypedElement
        auto &&feature = m_ETypedElement__eType;

        // ENamedElement
        feature->setName("eType");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EClassifierEClass);
        feature->setTransient(false);
        feature->setUnsettable(true);
        feature->setVolatile(true);

        feature->setFeatureID(::ecore::EcorePackage::ETYPEDELEMENT__ETYPE);
        feature->basicsetEContainingClass(m_ETypedElementEClass);

        // EReference
        feature->setEReferenceType(m_EClassifierEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eGenericType of class ETypedElement
        auto &&feature = m_ETypedElement__eGenericType;

        // ENamedElement
        feature->setName("eGenericType");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EGenericTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(true);
        feature->setVolatile(true);

        feature->setFeatureID(
                ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE);
        feature->basicsetEContainingClass(m_ETypedElementEClass);

        // EReference
        feature->setEReferenceType(m_EGenericTypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Classifier ETypedElement
        auto &&classifier = m_ETypedElementEClass;

        // ENamedElement
        classifier->setName("ETypedElement");

        // EClassifier
        classifier->setClassifierID(ETYPEDELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ETypedElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ETypedElement__ordered);
            eStructuralFeatures.basicAdd(m_ETypedElement__unique);
            eStructuralFeatures.basicAdd(m_ETypedElement__lowerBound);
            eStructuralFeatures.basicAdd(m_ETypedElement__upperBound);
            eStructuralFeatures.basicAdd(m_ETypedElement__many);
            eStructuralFeatures.basicAdd(m_ETypedElement__required);
            eStructuralFeatures.basicAdd(m_ETypedElement__eType);
            eStructuralFeatures.basicAdd(m_ETypedElement__eGenericType);
        }
    }();

    [this]()
    { // Feature eBounds of class ETypeParameter
        auto &&feature = m_ETypeParameter__eBounds;

        // ENamedElement
        feature->setName("eBounds");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EGenericTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::ecore::EcorePackage::ETYPEPARAMETER__EBOUNDS);
        feature->basicsetEContainingClass(m_ETypeParameterEClass);

        // EReference
        feature->setEReferenceType(m_EGenericTypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Classifier ETypeParameter
        auto &&classifier = m_ETypeParameterEClass;

        // ENamedElement
        classifier->setName("ETypeParameter");

        // EClassifier
        classifier->setClassifierID(ETYPEPARAMETER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ETypeParameterEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ETypeParameter__eBounds);
        }
    }();

    // Initialize package
    setName("ecore");
    setNsPrefix("ecore");
    setNsURI("http://www.eclipse.org/emf/2002/Ecore");

    // TODO: bounds for type parameters
    // Create type parameters
    [this]()
    {

        {
            auto _tp = ::ecore::make< ::ecore::ETypeParameter >();
            _tp->setName("E");
            m_EEListEDataType->getETypeParameters().push_back(_tp);
        }

        {
            auto _tp = ::ecore::make< ::ecore::ETypeParameter >();
            _tp->setName("T");
            m_EJavaClassEDataType->getETypeParameters().push_back(_tp);
        }

        {
            auto _tp = ::ecore::make< ::ecore::ETypeParameter >();
            _tp->setName("K");
            m_EMapEDataType->getETypeParameters().push_back(_tp);
        }
        {
            auto _tp = ::ecore::make< ::ecore::ETypeParameter >();
            _tp->setName("V");
            m_EMapEDataType->getETypeParameters().push_back(_tp);
        }

        {
            auto _tp = ::ecore::make< ::ecore::ETypeParameter >();
            _tp->setName("E");
            m_ETreeIteratorEDataType->getETypeParameters().push_back(_tp);
        }
    }();

    // Add supertypes to classes
    [this]()
    {
        m_EAttributeEClass->getESuperTypes().push_back(
                m_EStructuralFeatureEClass);
        m_EAnnotationEClass->getESuperTypes().push_back(m_EModelElementEClass);
        m_EClassEClass->getESuperTypes().push_back(m_EClassifierEClass);
        m_EClassifierEClass->getESuperTypes().push_back(m_ENamedElementEClass);
        m_EDataTypeEClass->getESuperTypes().push_back(m_EClassifierEClass);
        m_EEnumEClass->getESuperTypes().push_back(m_EDataTypeEClass);
        m_EEnumLiteralEClass->getESuperTypes().push_back(m_ENamedElementEClass);
        m_EFactoryEClass->getESuperTypes().push_back(m_EModelElementEClass);
        m_ENamedElementEClass->getESuperTypes().push_back(
                m_EModelElementEClass);
        m_EOperationEClass->getESuperTypes().push_back(m_ETypedElementEClass);
        m_EPackageEClass->getESuperTypes().push_back(m_ENamedElementEClass);
        m_EParameterEClass->getESuperTypes().push_back(m_ETypedElementEClass);
        m_EReferenceEClass->getESuperTypes().push_back(
                m_EStructuralFeatureEClass);
        m_EStructuralFeatureEClass->getESuperTypes().push_back(
                m_ETypedElementEClass);
        m_ETypedElementEClass->getESuperTypes().push_back(
                m_ENamedElementEClass);
        m_ETypeParameterEClass->getESuperTypes().push_back(
                m_ENamedElementEClass);
    }();

    [this]()
    { // Class EAttribute
        auto &&cls = m_EAttributeEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints", "ConsistentTransient");
        }
    }();

    [this]()
    { // Class EAnnotation
        auto &&cls = m_EAnnotationEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints", "WellFormedSourceURI");
        }
    }();

    [this]()
    { // Feature eSuperTypes of class EClass
        auto &&feature = m_EClass__eSuperTypes;
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedIsSetVisibility", "true");
            eAnnotation->setDetail("suppressedUnsetVisibility", "true");
        }
    }();
    [this]()
    { // Feature eGenericSuperTypes of class EClass
        auto &&feature = m_EClass__eGenericSuperTypes;
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedIsSetVisibility", "true");
            eAnnotation->setDetail("suppressedUnsetVisibility", "true");
        }
    }();

    [this]()
    { // Class EClass
        auto &&cls = m_EClassEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints",
                    "InterfaceIsAbstract AtMostOneID UniqueFeatureNames UniqueOperationSignatures NoCircularSuperTypes WellFormedMapEntryClass ConsistentSuperTypes DisjointFeatureAndOperationSignatures");
        }

        auto &&eOperations = cls->getEOperations();
        { // Operation isSuperTypeOf()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EBooleanEDataType);
            _op->setName("isSuperTypeOf");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // someClass
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EClassEClass);
                _pa->setName("someClass");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation getFeatureCount()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EIntEDataType);
            _op->setName("getFeatureCount");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getEStructuralFeature()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EStructuralFeatureEClass);
            _op->setName("getEStructuralFeature");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // featureID
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EIntEDataType);
                _pa->setName("featureID");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation getFeatureID()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EIntEDataType);
            _op->setName("getFeatureID");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // feature
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStructuralFeatureEClass);
                _pa->setName("feature");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation getEStructuralFeature()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EStructuralFeatureEClass);
            _op->setName("getEStructuralFeature");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // featureName
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStringEDataType);
                _pa->setName("featureName");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation getOperationCount()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EIntEDataType);
            _op->setName("getOperationCount");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getEOperation()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EOperationEClass);
            _op->setName("getEOperation");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // operationID
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EIntEDataType);
                _pa->setName("operationID");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation getOperationID()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EIntEDataType);
            _op->setName("getOperationID");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // operation
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EOperationEClass);
                _pa->setName("operation");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation getOverride()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EOperationEClass);
            _op->setName("getOverride");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // operation
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EOperationEClass);
                _pa->setName("operation");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Feature instanceClassName of class EClassifier
        auto &&feature = m_EClassifier__instanceClassName;
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedIsSetVisibility", "true");
            eAnnotation->setDetail("suppressedUnsetVisibility", "true");
        }
    }();
    [this]()
    { // Feature instanceClass of class EClassifier
        auto &&feature = m_EClassifier__instanceClass;
        { // GenericType
            auto eGenericType = ::ecore::make< ::ecore::EGenericType >();
            eGenericType->setEClassifier(m_EJavaClassEDataType);
            auto &&eTypeArguments = eGenericType->getETypeArguments();
            {
                auto &&eTypeArgument = ::ecore::make< ::ecore::EGenericType >();
                eTypeArguments.push_back(eTypeArgument);
            }
            feature->setEGenericType(eGenericType);
        }
    }();
    [this]()
    { // Feature instanceTypeName of class EClassifier
        auto &&feature = m_EClassifier__instanceTypeName;
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedIsSetVisibility", "true");
            eAnnotation->setDetail("suppressedUnsetVisibility", "true");
        }
    }();

    [this]()
    { // Class EClassifier
        auto &&cls = m_EClassifierEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints",
                    "WellFormedInstanceTypeName UniqueTypeParameterNames");
        }

        auto &&eOperations = cls->getEOperations();
        { // Operation isInstance()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EBooleanEDataType);
            _op->setName("isInstance");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // object
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EJavaObjectEDataType);
                _pa->setName("object");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation getClassifierID()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EIntEDataType);
            _op->setName("getClassifierID");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Class EEnum
        auto &&cls = m_EEnumEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints",
                    "UniqueEnumeratorNames UniqueEnumeratorLiterals");
        }

        auto &&eOperations = cls->getEOperations();
        { // Operation getEEnumLiteral()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EEnumLiteralEClass);
            _op->setName("getEEnumLiteral");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // name
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStringEDataType);
                _pa->setName("name");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation getEEnumLiteral()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EEnumLiteralEClass);
            _op->setName("getEEnumLiteral");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // value
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EIntEDataType);
                _pa->setName("value");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation getEEnumLiteralByLiteral()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EEnumLiteralEClass);
            _op->setName("getEEnumLiteralByLiteral");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // literal
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStringEDataType);
                _pa->setName("literal");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Class EFactory
        auto &&cls = m_EFactoryEClass;

        auto &&eOperations = cls->getEOperations();
        { // Operation create()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EObjectEClass);
            _op->setName("create");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // eClass
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EClassEClass);
                _pa->setName("eClass");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation createFromString()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EJavaObjectEDataType);
            _op->setName("createFromString");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // eDataType
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EDataTypeEClass);
                _pa->setName("eDataType");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            { // literalValue
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStringEDataType);
                _pa->setName("literalValue");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation convertToString()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EStringEDataType);
            _op->setName("convertToString");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // eDataType
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EDataTypeEClass);
                _pa->setName("eDataType");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            { // instanceValue
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EJavaObjectEDataType);
                _pa->setName("instanceValue");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Class EModelElement
        auto &&cls = m_EModelElementEClass;

        auto &&eOperations = cls->getEOperations();
        { // Operation getEAnnotation()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EAnnotationEClass);
            _op->setName("getEAnnotation");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // source
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStringEDataType);
                _pa->setName("source");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Class ENamedElement
        auto &&cls = m_ENamedElementEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints", "WellFormedName");
        }
    }();

    [this]()
    { // Class EObject
        auto &&cls = m_EObjectEClass;

        auto &&eOperations = cls->getEOperations();
        { // Operation eClass()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EClassEClass);
            _op->setName("eClass");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation eIsProxy()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EBooleanEDataType);
            _op->setName("eIsProxy");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation eResource()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EResourceEDataType);
            _op->setName("eResource");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation eContainer()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EObjectEClass);
            _op->setName("eContainer");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation eContainingFeature()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EStructuralFeatureEClass);
            _op->setName("eContainingFeature");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation eContainmentFeature()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EReferenceEClass);
            _op->setName("eContainmentFeature");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation eContents()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EEListEDataType);
            { // GenericType
                auto eGenericType = ::ecore::make< ::ecore::EGenericType >();
                eGenericType->setEClassifier(m_EEListEDataType);
                auto &&eTypeArguments = eGenericType->getETypeArguments();
                {
                    auto &&eTypeArgument =
                            ::ecore::make< ::ecore::EGenericType >();
                    eTypeArgument->setEClassifier(m_EObjectEClass);
                    eTypeArguments.push_back(eTypeArgument);
                }
                _op->setEGenericType(eGenericType);
            }
            _op->setName("eContents");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation eAllContents()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_ETreeIteratorEDataType);
            { // GenericType
                auto eGenericType = ::ecore::make< ::ecore::EGenericType >();
                eGenericType->setEClassifier(m_ETreeIteratorEDataType);
                auto &&eTypeArguments = eGenericType->getETypeArguments();
                {
                    auto &&eTypeArgument =
                            ::ecore::make< ::ecore::EGenericType >();
                    eTypeArgument->setEClassifier(m_EObjectEClass);
                    eTypeArguments.push_back(eTypeArgument);
                }
                _op->setEGenericType(eGenericType);
            }
            _op->setName("eAllContents");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation eCrossReferences()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EEListEDataType);
            { // GenericType
                auto eGenericType = ::ecore::make< ::ecore::EGenericType >();
                eGenericType->setEClassifier(m_EEListEDataType);
                auto &&eTypeArguments = eGenericType->getETypeArguments();
                {
                    auto &&eTypeArgument =
                            ::ecore::make< ::ecore::EGenericType >();
                    eTypeArgument->setEClassifier(m_EObjectEClass);
                    eTypeArguments.push_back(eTypeArgument);
                }
                _op->setEGenericType(eGenericType);
            }
            _op->setName("eCrossReferences");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation eGet()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EJavaObjectEDataType);
            _op->setName("eGet");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // feature
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStructuralFeatureEClass);
                _pa->setName("feature");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation eGet()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EJavaObjectEDataType);
            _op->setName("eGet");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // feature
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStructuralFeatureEClass);
                _pa->setName("feature");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            { // resolve
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EBooleanEDataType);
                _pa->setName("resolve");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation eSet()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setName("eSet");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // feature
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStructuralFeatureEClass);
                _pa->setName("feature");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            { // newValue
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EJavaObjectEDataType);
                _pa->setName("newValue");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation eIsSet()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EBooleanEDataType);
            _op->setName("eIsSet");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // feature
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStructuralFeatureEClass);
                _pa->setName("feature");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation eUnset()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setName("eUnset");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // feature
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStructuralFeatureEClass);
                _pa->setName("feature");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
        { // Operation eInvoke()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EJavaObjectEDataType);
            _op->setName("eInvoke");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // operation
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EOperationEClass);
                _pa->setName("operation");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            { // arguments
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EEListEDataType);
                { // GenericType
                    auto eGenericType =
                            ::ecore::make< ::ecore::EGenericType >();
                    eGenericType->setEClassifier(m_EEListEDataType);
                    auto &&eTypeArguments = eGenericType->getETypeArguments();
                    {
                        auto &&eTypeArgument = ::ecore::make<
                                ::ecore::EGenericType >();
                        eTypeArguments.push_back(eTypeArgument);
                    }
                    _pa->setEGenericType(eGenericType);
                }
                _pa->setName("arguments");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Feature eExceptions of class EOperation
        auto &&feature = m_EOperation__eExceptions;
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedIsSetVisibility", "true");
            eAnnotation->setDetail("suppressedUnsetVisibility", "true");
        }
    }();
    [this]()
    { // Feature eGenericExceptions of class EOperation
        auto &&feature = m_EOperation__eGenericExceptions;
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedIsSetVisibility", "true");
            eAnnotation->setDetail("suppressedUnsetVisibility", "true");
        }
    }();

    [this]()
    { // Class EOperation
        auto &&cls = m_EOperationEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints",
                    "UniqueParameterNames UniqueTypeParameterNames NoRepeatingVoid");
        }

        auto &&eOperations = cls->getEOperations();
        { // Operation getOperationID()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EIntEDataType);
            _op->setName("getOperationID");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation isOverrideOf()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EBooleanEDataType);
            _op->setName("isOverrideOf");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // someOperation
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EOperationEClass);
                _pa->setName("someOperation");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Class EPackage
        auto &&cls = m_EPackageEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints",
                    "WellFormedNsURI WellFormedNsPrefix UniqueSubpackageNames UniqueClassifierNames UniqueNsURIs");
        }

        auto &&eOperations = cls->getEOperations();
        { // Operation getEClassifier()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EClassifierEClass);
            _op->setName("getEClassifier");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // name
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_EStringEDataType);
                _pa->setName("name");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Class EReference
        auto &&cls = m_EReferenceEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints",
                    "ConsistentOpposite SingleContainer ConsistentKeys ConsistentUnique ConsistentContainer");
        }
    }();

    [this]()
    { // Class EStructuralFeature
        auto &&cls = m_EStructuralFeatureEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints", "ValidDefaultValueLiteral");
        }

        auto &&eOperations = cls->getEOperations();
        { // Operation getFeatureID()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EIntEDataType);
            _op->setName("getFeatureID");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation getContainerClass()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            _op->setEType(m_EJavaClassEDataType);
            { // GenericType
                auto eGenericType = ::ecore::make< ::ecore::EGenericType >();
                eGenericType->setEClassifier(m_EJavaClassEDataType);
                auto &&eTypeArguments = eGenericType->getETypeArguments();
                {
                    auto &&eTypeArgument =
                            ::ecore::make< ::ecore::EGenericType >();
                    eTypeArguments.push_back(eTypeArgument);
                }
                _op->setEGenericType(eGenericType);
            }
            _op->setName("getContainerClass");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Feature eType of class ETypedElement
        auto &&feature = m_ETypedElement__eType;
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedIsSetVisibility", "true");
            eAnnotation->setDetail("suppressedUnsetVisibility", "true");
        }
    }();
    [this]()
    { // Feature eGenericType of class ETypedElement
        auto &&feature = m_ETypedElement__eGenericType;
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedIsSetVisibility", "true");
            eAnnotation->setDetail("suppressedUnsetVisibility", "true");
        }
    }();

    [this]()
    { // Class ETypedElement
        auto &&cls = m_ETypedElementEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints",
                    "ValidLowerBound ValidUpperBound ConsistentBounds ValidType");
        }
    }();

    [this]()
    { // Class EGenericType
        auto &&cls = m_EGenericTypeEClass;
        { // Annotations for http://www.eclipse.org/emf/2002/Ecore
            auto &&eAnnotation = cls->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/Ecore");
            eAnnotation->setDetail("constraints",
                    "ConsistentType ConsistentBounds ConsistentArguments");
        }
    }();

    [this]()
    { // Annotations for Datatype EBigDecimal
        auto &&datatype = m_EBigDecimalEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType",
                    "http://www.w3.org/2001/XMLSchema#decimal");
        }
    }();
    [this]()
    { // Annotations for Datatype EBigInteger
        auto &&datatype = m_EBigIntegerEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType",
                    "http://www.w3.org/2001/XMLSchema#integer");
        }
    }();
    [this]()
    { // Annotations for Datatype EBoolean
        auto &&datatype = m_EBooleanEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType",
                    "http://www.w3.org/2001/XMLSchema#boolean");
        }
    }();
    [this]()
    { // Annotations for Datatype EBooleanObject
        auto &&datatype = m_EBooleanObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType", "EBoolean");
            eAnnotation->setDetail("name", "EBoolean:Object");
        }
    }();
    [this]()
    { // Annotations for Datatype EByte
        auto &&datatype = m_EByteEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType",
                    "http://www.w3.org/2001/XMLSchema#byte");
        }
    }();
    [this]()
    { // Annotations for Datatype EByteArray
        auto &&datatype = m_EByteArrayEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType",
                    "http://www.w3.org/2001/XMLSchema#hexBinary");
        }
    }();
    [this]()
    { // Annotations for Datatype EByteObject
        auto &&datatype = m_EByteObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType", "EByte");
            eAnnotation->setDetail("name", "EByte:Object");
        }
    }();
    [this]()
    { // Annotations for Datatype ECharacterObject
        auto &&datatype = m_ECharacterObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType", "EChar");
            eAnnotation->setDetail("name", "EChar:Object");
        }
    }();
    [this]()
    { // Annotations for Datatype EDouble
        auto &&datatype = m_EDoubleEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType",
                    "http://www.w3.org/2001/XMLSchema#double");
        }
    }();
    [this]()
    { // Annotations for Datatype EDoubleObject
        auto &&datatype = m_EDoubleObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType", "EDouble");
            eAnnotation->setDetail("name", "EDouble:Object");
        }
    }();
    [this]()
    { // Annotations for Datatype EFloat
        auto &&datatype = m_EFloatEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType",
                    "http://www.w3.org/2001/XMLSchema#float");
        }
    }();
    [this]()
    { // Annotations for Datatype EFloatObject
        auto &&datatype = m_EFloatObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType", "EFloat");
            eAnnotation->setDetail("name", "EFloat:Object");
        }
    }();
    [this]()
    { // Annotations for Datatype EInt
        auto &&datatype = m_EIntEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType",
                    "http://www.w3.org/2001/XMLSchema#int");
        }
    }();
    [this]()
    { // Annotations for Datatype EIntegerObject
        auto &&datatype = m_EIntegerObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType", "EInt");
            eAnnotation->setDetail("name", "EInt:Object");
        }
    }();
    [this]()
    { // Annotations for Datatype ELong
        auto &&datatype = m_ELongEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType",
                    "http://www.w3.org/2001/XMLSchema#long");
        }
    }();
    [this]()
    { // Annotations for Datatype ELongObject
        auto &&datatype = m_ELongObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType", "ELong");
            eAnnotation->setDetail("name", "ELong:Object");
        }
    }();
    [this]()
    { // Annotations for Datatype EShort
        auto &&datatype = m_EShortEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType",
                    "http://www.w3.org/2001/XMLSchema#short");
        }
    }();
    [this]()
    { // Annotations for Datatype EShortObject
        auto &&datatype = m_EShortObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType", "EShort");
            eAnnotation->setDetail("name", "EShort:Object");
        }
    }();
    [this]()
    { // Annotations for Datatype EString
        auto &&datatype = m_EStringEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("baseType",
                    "http://www.w3.org/2001/XMLSchema#string");
        }
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_EAnnotationEClass);
        classifiers.push_back(m_EAttributeEClass);
        classifiers.push_back(m_EBigDecimalEDataType);
        classifiers.push_back(m_EBigIntegerEDataType);
        classifiers.push_back(m_EBooleanEDataType);
        classifiers.push_back(m_EBooleanObjectEDataType);
        classifiers.push_back(m_EByteEDataType);
        classifiers.push_back(m_EByteArrayEDataType);
        classifiers.push_back(m_EByteObjectEDataType);
        classifiers.push_back(m_ECharEDataType);
        classifiers.push_back(m_ECharacterObjectEDataType);
        classifiers.push_back(m_EClassEClass);
        classifiers.push_back(m_EClassifierEClass);
        classifiers.push_back(m_EDataTypeEClass);
        classifiers.push_back(m_EDateEDataType);
        classifiers.push_back(m_EDiagnosticChainEDataType);
        classifiers.push_back(m_EDoubleEDataType);
        classifiers.push_back(m_EDoubleObjectEDataType);
        classifiers.push_back(m_EEListEDataType);
        classifiers.push_back(m_EEnumEClass);
        classifiers.push_back(m_EEnumeratorEDataType);
        classifiers.push_back(m_EEnumLiteralEClass);
        classifiers.push_back(m_EFactoryEClass);
        classifiers.push_back(m_EFeatureMapEDataType);
        classifiers.push_back(m_EFeatureMapEntryEDataType);
        classifiers.push_back(m_EFloatEDataType);
        classifiers.push_back(m_EFloatObjectEDataType);
        classifiers.push_back(m_EGenericTypeEClass);
        classifiers.push_back(m_EIntEDataType);
        classifiers.push_back(m_EIntegerObjectEDataType);
        classifiers.push_back(m_EInvocationTargetExceptionEDataType);
        classifiers.push_back(m_EJavaClassEDataType);
        classifiers.push_back(m_EJavaObjectEDataType);
        classifiers.push_back(m_ELongEDataType);
        classifiers.push_back(m_ELongObjectEDataType);
        classifiers.push_back(m_EMapEDataType);
        classifiers.push_back(m_EModelElementEClass);
        classifiers.push_back(m_ENamedElementEClass);
        classifiers.push_back(m_EObjectEClass);
        classifiers.push_back(m_EOperationEClass);
        classifiers.push_back(m_EPackageEClass);
        classifiers.push_back(m_EParameterEClass);
        classifiers.push_back(m_EReferenceEClass);
        classifiers.push_back(m_EResourceEDataType);
        classifiers.push_back(m_EResourceSetEDataType);
        classifiers.push_back(m_EShortEDataType);
        classifiers.push_back(m_EShortObjectEDataType);
        classifiers.push_back(m_EStringEDataType);
        classifiers.push_back(m_EStringToStringMapEntryEClass);
        classifiers.push_back(m_EStructuralFeatureEClass);
        classifiers.push_back(m_ETreeIteratorEDataType);
        classifiers.push_back(m_ETypedElementEClass);
        classifiers.push_back(m_ETypeParameterEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr EcorePackage::getEAttribute()
{
    return m_EAttributeEClass;
}
::ecore::EClass_ptr EcorePackage::getEAnnotation_()
{
    return m_EAnnotationEClass;
}
::ecore::EClass_ptr EcorePackage::getEClass()
{
    return m_EClassEClass;
}
::ecore::EClass_ptr EcorePackage::getEClassifier_()
{
    return m_EClassifierEClass;
}
::ecore::EClass_ptr EcorePackage::getEDataType()
{
    return m_EDataTypeEClass;
}
::ecore::EClass_ptr EcorePackage::getEEnum()
{
    return m_EEnumEClass;
}
::ecore::EClass_ptr EcorePackage::getEEnumLiteral()
{
    return m_EEnumLiteralEClass;
}
::ecore::EClass_ptr EcorePackage::getEFactory()
{
    return m_EFactoryEClass;
}
::ecore::EClass_ptr EcorePackage::getEModelElement()
{
    return m_EModelElementEClass;
}
::ecore::EClass_ptr EcorePackage::getENamedElement()
{
    return m_ENamedElementEClass;
}
::ecore::EClass_ptr EcorePackage::getEObject()
{
    return m_EObjectEClass;
}
::ecore::EClass_ptr EcorePackage::getEOperation()
{
    return m_EOperationEClass;
}
::ecore::EClass_ptr EcorePackage::getEPackage()
{
    return m_EPackageEClass;
}
::ecore::EClass_ptr EcorePackage::getEParameter()
{
    return m_EParameterEClass;
}
::ecore::EClass_ptr EcorePackage::getEReference()
{
    return m_EReferenceEClass;
}
::ecore::EClass_ptr EcorePackage::getEStructuralFeature()
{
    return m_EStructuralFeatureEClass;
}
::ecore::EClass_ptr EcorePackage::getETypedElement()
{
    return m_ETypedElementEClass;
}
::ecore::EDataType_ptr EcorePackage::getEBigDecimal()
{
    return m_EBigDecimalEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEBigInteger()
{
    return m_EBigIntegerEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEBoolean()
{
    return m_EBooleanEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEBooleanObject()
{
    return m_EBooleanObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEByte()
{
    return m_EByteEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEByteArray()
{
    return m_EByteArrayEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEByteObject()
{
    return m_EByteObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEChar()
{
    return m_ECharEDataType;
}
::ecore::EDataType_ptr EcorePackage::getECharacterObject()
{
    return m_ECharacterObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDate()
{
    return m_EDateEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDiagnosticChain()
{
    return m_EDiagnosticChainEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDouble()
{
    return m_EDoubleEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDoubleObject()
{
    return m_EDoubleObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEEList()
{
    return m_EEListEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEEnumerator()
{
    return m_EEnumeratorEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFeatureMap()
{
    return m_EFeatureMapEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFeatureMapEntry()
{
    return m_EFeatureMapEntryEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFloat()
{
    return m_EFloatEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFloatObject()
{
    return m_EFloatObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEInt()
{
    return m_EIntEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEIntegerObject()
{
    return m_EIntegerObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEJavaClass()
{
    return m_EJavaClassEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEJavaObject()
{
    return m_EJavaObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getELong()
{
    return m_ELongEDataType;
}
::ecore::EDataType_ptr EcorePackage::getELongObject()
{
    return m_ELongObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEMap()
{
    return m_EMapEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEResource()
{
    return m_EResourceEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEResourceSet()
{
    return m_EResourceSetEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEShort()
{
    return m_EShortEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEShortObject()
{
    return m_EShortObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEString()
{
    return m_EStringEDataType;
}
::ecore::EClass_ptr EcorePackage::getEStringToStringMapEntry()
{
    return m_EStringToStringMapEntryEClass;
}
::ecore::EDataType_ptr EcorePackage::getETreeIterator()
{
    return m_ETreeIteratorEDataType;
}
::ecore::EClass_ptr EcorePackage::getEGenericType()
{
    return m_EGenericTypeEClass;
}
::ecore::EClass_ptr EcorePackage::getETypeParameter()
{
    return m_ETypeParameterEClass;
}
::ecore::EDataType_ptr EcorePackage::getEInvocationTargetException()
{
    return m_EInvocationTargetExceptionEDataType;
}

::ecore::EAttribute_ptr EcorePackage::getEAttribute__iD()
{
    return m_EAttribute__iD;
}
::ecore::EReference_ptr EcorePackage::getEAttribute__eAttributeType()
{
    return m_EAttribute__eAttributeType;
}
::ecore::EAttribute_ptr EcorePackage::getEAnnotation__source()
{
    return m_EAnnotation__source;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__details()
{
    return m_EAnnotation__details;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__eModelElement()
{
    return m_EAnnotation__eModelElement;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__contents()
{
    return m_EAnnotation__contents;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__references()
{
    return m_EAnnotation__references;
}
::ecore::EAttribute_ptr EcorePackage::getEClass__abstract()
{
    return m_EClass__abstract;
}
::ecore::EAttribute_ptr EcorePackage::getEClass__interface()
{
    return m_EClass__interface;
}
::ecore::EReference_ptr EcorePackage::getEClass__eSuperTypes()
{
    return m_EClass__eSuperTypes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eOperations()
{
    return m_EClass__eOperations;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllAttributes()
{
    return m_EClass__eAllAttributes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllReferences()
{
    return m_EClass__eAllReferences;
}
::ecore::EReference_ptr EcorePackage::getEClass__eReferences()
{
    return m_EClass__eReferences;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAttributes()
{
    return m_EClass__eAttributes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllContainments()
{
    return m_EClass__eAllContainments;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllOperations()
{
    return m_EClass__eAllOperations;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllStructuralFeatures()
{
    return m_EClass__eAllStructuralFeatures;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllSuperTypes()
{
    return m_EClass__eAllSuperTypes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eIDAttribute()
{
    return m_EClass__eIDAttribute;
}
::ecore::EReference_ptr EcorePackage::getEClass__eStructuralFeatures()
{
    return m_EClass__eStructuralFeatures;
}
::ecore::EReference_ptr EcorePackage::getEClass__eGenericSuperTypes()
{
    return m_EClass__eGenericSuperTypes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllGenericSuperTypes()
{
    return m_EClass__eAllGenericSuperTypes;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceClassName()
{
    return m_EClassifier__instanceClassName;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceClass()
{
    return m_EClassifier__instanceClass;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__defaultValue()
{
    return m_EClassifier__defaultValue;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceTypeName()
{
    return m_EClassifier__instanceTypeName;
}
::ecore::EReference_ptr EcorePackage::getEClassifier__ePackage()
{
    return m_EClassifier__ePackage;
}
::ecore::EReference_ptr EcorePackage::getEClassifier__eTypeParameters()
{
    return m_EClassifier__eTypeParameters;
}
::ecore::EAttribute_ptr EcorePackage::getEDataType__serializable()
{
    return m_EDataType__serializable;
}
::ecore::EReference_ptr EcorePackage::getEEnum__eLiterals()
{
    return m_EEnum__eLiterals;
}
::ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__value()
{
    return m_EEnumLiteral__value;
}
::ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__instance()
{
    return m_EEnumLiteral__instance;
}
::ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__literal()
{
    return m_EEnumLiteral__literal;
}
::ecore::EReference_ptr EcorePackage::getEEnumLiteral__eEnum()
{
    return m_EEnumLiteral__eEnum;
}
::ecore::EReference_ptr EcorePackage::getEFactory__ePackage()
{
    return m_EFactory__ePackage;
}
::ecore::EReference_ptr EcorePackage::getEModelElement__eAnnotations()
{
    return m_EModelElement__eAnnotations;
}
::ecore::EAttribute_ptr EcorePackage::getENamedElement__name()
{
    return m_ENamedElement__name;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eContainingClass()
{
    return m_EOperation__eContainingClass;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eTypeParameters()
{
    return m_EOperation__eTypeParameters;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eParameters()
{
    return m_EOperation__eParameters;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eExceptions()
{
    return m_EOperation__eExceptions;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eGenericExceptions()
{
    return m_EOperation__eGenericExceptions;
}
::ecore::EAttribute_ptr EcorePackage::getEPackage__nsURI()
{
    return m_EPackage__nsURI;
}
::ecore::EAttribute_ptr EcorePackage::getEPackage__nsPrefix()
{
    return m_EPackage__nsPrefix;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eFactoryInstance()
{
    return m_EPackage__eFactoryInstance;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eClassifiers()
{
    return m_EPackage__eClassifiers;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eSubpackages()
{
    return m_EPackage__eSubpackages;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eSuperPackage()
{
    return m_EPackage__eSuperPackage;
}
::ecore::EReference_ptr EcorePackage::getEParameter__eOperation()
{
    return m_EParameter__eOperation;
}
::ecore::EAttribute_ptr EcorePackage::getEReference__containment()
{
    return m_EReference__containment;
}
::ecore::EAttribute_ptr EcorePackage::getEReference__container()
{
    return m_EReference__container;
}
::ecore::EAttribute_ptr EcorePackage::getEReference__resolveProxies()
{
    return m_EReference__resolveProxies;
}
::ecore::EReference_ptr EcorePackage::getEReference__eOpposite()
{
    return m_EReference__eOpposite;
}
::ecore::EReference_ptr EcorePackage::getEReference__eReferenceType()
{
    return m_EReference__eReferenceType;
}
::ecore::EReference_ptr EcorePackage::getEReference__eKeys()
{
    return m_EReference__eKeys;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__changeable()
{
    return m_EStructuralFeature__changeable;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__volatile()
{
    return m_EStructuralFeature__volatile;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__transient()
{
    return m_EStructuralFeature__transient;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__defaultValueLiteral()
{
    return m_EStructuralFeature__defaultValueLiteral;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__defaultValue()
{
    return m_EStructuralFeature__defaultValue;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__unsettable()
{
    return m_EStructuralFeature__unsettable;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__derived()
{
    return m_EStructuralFeature__derived;
}
::ecore::EReference_ptr EcorePackage::getEStructuralFeature__eContainingClass()
{
    return m_EStructuralFeature__eContainingClass;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__ordered()
{
    return m_ETypedElement__ordered;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__unique()
{
    return m_ETypedElement__unique;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__lowerBound()
{
    return m_ETypedElement__lowerBound;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__upperBound()
{
    return m_ETypedElement__upperBound;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__many()
{
    return m_ETypedElement__many;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__required()
{
    return m_ETypedElement__required;
}
::ecore::EReference_ptr EcorePackage::getETypedElement__eType()
{
    return m_ETypedElement__eType;
}
::ecore::EReference_ptr EcorePackage::getETypedElement__eGenericType()
{
    return m_ETypedElement__eGenericType;
}
::ecore::EAttribute_ptr EcorePackage::getEStringToStringMapEntry__key()
{
    return m_EStringToStringMapEntry__key;
}
::ecore::EAttribute_ptr EcorePackage::getEStringToStringMapEntry__value()
{
    return m_EStringToStringMapEntry__value;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eUpperBound()
{
    return m_EGenericType__eUpperBound;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eTypeArguments()
{
    return m_EGenericType__eTypeArguments;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eRawType()
{
    return m_EGenericType__eRawType;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eLowerBound()
{
    return m_EGenericType__eLowerBound;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eTypeParameter()
{
    return m_EGenericType__eTypeParameter;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eClassifier()
{
    return m_EGenericType__eClassifier;
}
::ecore::EReference_ptr EcorePackage::getETypeParameter__eBounds()
{
    return m_ETypeParameter__eBounds;
}

