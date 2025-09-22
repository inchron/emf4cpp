// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EcorePackage.hpp
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

#ifndef _ECOREPACKAGE_HPP
#define _ECOREPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <ecore_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include "dllEcore.hpp"

namespace ecore
{

class EXPORT_ECORE_DLL EcorePackage : public virtual ::ecore::EPackage
{
public:

    static EcorePackage_ptr _instance();
    static EcorePackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier EAnnotation
    static const int EANNOTATION = 0;
    static const int EANNOTATION__EANNOTATIONS = 0;
    static const int EANNOTATION__SOURCE = 1;
    static const int EANNOTATION__DETAILS = 2;
    static const int EANNOTATION__EMODELELEMENT = 3;
    static const int EANNOTATION__CONTENTS = 4;
    static const int EANNOTATION__REFERENCES = 5;
    static const int EANNOTATION_FEATURE_COUNT = 6;

    // IDs for classifier EAttribute
    static const int EATTRIBUTE = 1;
    static const int EATTRIBUTE__EANNOTATIONS = 0;
    static const int EATTRIBUTE__NAME = 1;
    static const int EATTRIBUTE__ORDERED = 2;
    static const int EATTRIBUTE__UNIQUE = 3;
    static const int EATTRIBUTE__LOWERBOUND = 4;
    static const int EATTRIBUTE__UPPERBOUND = 5;
    static const int EATTRIBUTE__MANY = 6;
    static const int EATTRIBUTE__REQUIRED = 7;
    static const int EATTRIBUTE__ETYPE = 8;
    static const int EATTRIBUTE__EGENERICTYPE = 9;
    static const int EATTRIBUTE__CHANGEABLE = 10;
    static const int EATTRIBUTE__VOLATILE = 11;
    static const int EATTRIBUTE__TRANSIENT = 12;
    static const int EATTRIBUTE__DEFAULTVALUELITERAL = 13;
    static const int EATTRIBUTE__DEFAULTVALUE = 14;
    static const int EATTRIBUTE__UNSETTABLE = 15;
    static const int EATTRIBUTE__DERIVED = 16;
    static const int EATTRIBUTE__ECONTAININGCLASS = 17;
    static const int EATTRIBUTE__ID = 18;
    static const int EATTRIBUTE__EATTRIBUTETYPE = 19;
    static const int EATTRIBUTE_FEATURE_COUNT = 20;

    // IDs for classifier EBigDecimal
    static const int EBIGDECIMAL = 2;

    // IDs for classifier EBigInteger
    static const int EBIGINTEGER = 3;

    // IDs for classifier EBoolean
    static const int EBOOLEAN = 4;

    // IDs for classifier EBooleanObject
    static const int EBOOLEANOBJECT = 5;

    // IDs for classifier EByte
    static const int EBYTE = 6;

    // IDs for classifier EByteArray
    static const int EBYTEARRAY = 7;

    // IDs for classifier EByteObject
    static const int EBYTEOBJECT = 8;

    // IDs for classifier EChar
    static const int ECHAR = 9;

    // IDs for classifier ECharacterObject
    static const int ECHARACTEROBJECT = 10;

    // IDs for classifier EClass
    static const int ECLASS = 11;
    static const int ECLASS__EANNOTATIONS = 0;
    static const int ECLASS__NAME = 1;
    static const int ECLASS__INSTANCECLASSNAME = 2;
    static const int ECLASS__INSTANCECLASS = 3;
    static const int ECLASS__DEFAULTVALUE = 4;
    static const int ECLASS__INSTANCETYPENAME = 5;
    static const int ECLASS__EPACKAGE = 6;
    static const int ECLASS__ETYPEPARAMETERS = 7;
    static const int ECLASS__ABSTRACT = 8;
    static const int ECLASS__INTERFACE = 9;
    static const int ECLASS__ESUPERTYPES = 10;
    static const int ECLASS__EOPERATIONS = 11;
    static const int ECLASS__EALLATTRIBUTES = 12;
    static const int ECLASS__EALLREFERENCES = 13;
    static const int ECLASS__EREFERENCES = 14;
    static const int ECLASS__EATTRIBUTES = 15;
    static const int ECLASS__EALLCONTAINMENTS = 16;
    static const int ECLASS__EALLOPERATIONS = 17;
    static const int ECLASS__EALLSTRUCTURALFEATURES = 18;
    static const int ECLASS__EALLSUPERTYPES = 19;
    static const int ECLASS__EIDATTRIBUTE = 20;
    static const int ECLASS__ESTRUCTURALFEATURES = 21;
    static const int ECLASS__EGENERICSUPERTYPES = 22;
    static const int ECLASS__EALLGENERICSUPERTYPES = 23;
    static const int ECLASS_FEATURE_COUNT = 24;

    // IDs for classifier EClassifier
    static const int ECLASSIFIER = 12;
    static const int ECLASSIFIER__EANNOTATIONS = 0;
    static const int ECLASSIFIER__NAME = 1;
    static const int ECLASSIFIER__INSTANCECLASSNAME = 2;
    static const int ECLASSIFIER__INSTANCECLASS = 3;
    static const int ECLASSIFIER__DEFAULTVALUE = 4;
    static const int ECLASSIFIER__INSTANCETYPENAME = 5;
    static const int ECLASSIFIER__EPACKAGE = 6;
    static const int ECLASSIFIER__ETYPEPARAMETERS = 7;
    static const int ECLASSIFIER_FEATURE_COUNT = 8;

    // IDs for classifier EDataType
    static const int EDATATYPE = 13;
    static const int EDATATYPE__EANNOTATIONS = 0;
    static const int EDATATYPE__NAME = 1;
    static const int EDATATYPE__INSTANCECLASSNAME = 2;
    static const int EDATATYPE__INSTANCECLASS = 3;
    static const int EDATATYPE__DEFAULTVALUE = 4;
    static const int EDATATYPE__INSTANCETYPENAME = 5;
    static const int EDATATYPE__EPACKAGE = 6;
    static const int EDATATYPE__ETYPEPARAMETERS = 7;
    static const int EDATATYPE__SERIALIZABLE = 8;
    static const int EDATATYPE_FEATURE_COUNT = 9;

    // IDs for classifier EDate
    static const int EDATE = 14;

    // IDs for classifier EDiagnosticChain
    static const int EDIAGNOSTICCHAIN = 15;

    // IDs for classifier EDouble
    static const int EDOUBLE = 16;

    // IDs for classifier EDoubleObject
    static const int EDOUBLEOBJECT = 17;

    // IDs for classifier EEList
    static const int EELIST = 18;

    // IDs for classifier EEnum
    static const int EENUM = 19;
    static const int EENUM__EANNOTATIONS = 0;
    static const int EENUM__NAME = 1;
    static const int EENUM__INSTANCECLASSNAME = 2;
    static const int EENUM__INSTANCECLASS = 3;
    static const int EENUM__DEFAULTVALUE = 4;
    static const int EENUM__INSTANCETYPENAME = 5;
    static const int EENUM__EPACKAGE = 6;
    static const int EENUM__ETYPEPARAMETERS = 7;
    static const int EENUM__SERIALIZABLE = 8;
    static const int EENUM__ELITERALS = 9;
    static const int EENUM_FEATURE_COUNT = 10;

    // IDs for classifier EEnumerator
    static const int EENUMERATOR = 20;

    // IDs for classifier EEnumLiteral
    static const int EENUMLITERAL = 21;
    static const int EENUMLITERAL__EANNOTATIONS = 0;
    static const int EENUMLITERAL__NAME = 1;
    static const int EENUMLITERAL__VALUE = 2;
    static const int EENUMLITERAL__INSTANCE = 3;
    static const int EENUMLITERAL__LITERAL = 4;
    static const int EENUMLITERAL__EENUM = 5;
    static const int EENUMLITERAL_FEATURE_COUNT = 6;

    // IDs for classifier EFactory
    static const int EFACTORY = 22;
    static const int EFACTORY__EANNOTATIONS = 0;
    static const int EFACTORY__EPACKAGE = 1;
    static const int EFACTORY_FEATURE_COUNT = 2;

    // IDs for classifier EFeatureMap
    static const int EFEATUREMAP = 23;

    // IDs for classifier EFeatureMapEntry
    static const int EFEATUREMAPENTRY = 24;

    // IDs for classifier EFloat
    static const int EFLOAT = 25;

    // IDs for classifier EFloatObject
    static const int EFLOATOBJECT = 26;

    // IDs for classifier EGenericType
    static const int EGENERICTYPE = 27;
    static const int EGENERICTYPE__EUPPERBOUND = 0;
    static const int EGENERICTYPE__ETYPEARGUMENTS = 1;
    static const int EGENERICTYPE__ERAWTYPE = 2;
    static const int EGENERICTYPE__ELOWERBOUND = 3;
    static const int EGENERICTYPE__ETYPEPARAMETER = 4;
    static const int EGENERICTYPE__ECLASSIFIER = 5;
    static const int EGENERICTYPE_FEATURE_COUNT = 6;

    // IDs for classifier EInt
    static const int EINT = 28;

    // IDs for classifier EIntegerObject
    static const int EINTEGEROBJECT = 29;

    // IDs for classifier EInvocationTargetException
    static const int EINVOCATIONTARGETEXCEPTION = 30;

    // IDs for classifier EJavaClass
    static const int EJAVACLASS = 31;

    // IDs for classifier EJavaObject
    static const int EJAVAOBJECT = 32;

    // IDs for classifier ELong
    static const int ELONG = 33;

    // IDs for classifier ELongObject
    static const int ELONGOBJECT = 34;

    // IDs for classifier EMap
    static const int EMAP = 35;

    // IDs for classifier EModelElement
    static const int EMODELELEMENT = 36;
    static const int EMODELELEMENT__EANNOTATIONS = 0;
    static const int EMODELELEMENT_FEATURE_COUNT = 1;

    // IDs for classifier ENamedElement
    static const int ENAMEDELEMENT = 37;
    static const int ENAMEDELEMENT__EANNOTATIONS = 0;
    static const int ENAMEDELEMENT__NAME = 1;
    static const int ENAMEDELEMENT_FEATURE_COUNT = 2;

    // IDs for classifier EObject
    static const int EOBJECT = 38;
    static const int EOBJECT_FEATURE_COUNT = 0;

    // IDs for classifier EOperation
    static const int EOPERATION = 39;
    static const int EOPERATION__EANNOTATIONS = 0;
    static const int EOPERATION__NAME = 1;
    static const int EOPERATION__ORDERED = 2;
    static const int EOPERATION__UNIQUE = 3;
    static const int EOPERATION__LOWERBOUND = 4;
    static const int EOPERATION__UPPERBOUND = 5;
    static const int EOPERATION__MANY = 6;
    static const int EOPERATION__REQUIRED = 7;
    static const int EOPERATION__ETYPE = 8;
    static const int EOPERATION__EGENERICTYPE = 9;
    static const int EOPERATION__ECONTAININGCLASS = 10;
    static const int EOPERATION__ETYPEPARAMETERS = 11;
    static const int EOPERATION__EPARAMETERS = 12;
    static const int EOPERATION__EEXCEPTIONS = 13;
    static const int EOPERATION__EGENERICEXCEPTIONS = 14;
    static const int EOPERATION_FEATURE_COUNT = 15;

    // IDs for classifier EPackage
    static const int EPACKAGE = 40;
    static const int EPACKAGE__EANNOTATIONS = 0;
    static const int EPACKAGE__NAME = 1;
    static const int EPACKAGE__NSURI = 2;
    static const int EPACKAGE__NSPREFIX = 3;
    static const int EPACKAGE__EFACTORYINSTANCE = 4;
    static const int EPACKAGE__ECLASSIFIERS = 5;
    static const int EPACKAGE__ESUBPACKAGES = 6;
    static const int EPACKAGE__ESUPERPACKAGE = 7;
    static const int EPACKAGE_FEATURE_COUNT = 8;

    // IDs for classifier EParameter
    static const int EPARAMETER = 41;
    static const int EPARAMETER__EANNOTATIONS = 0;
    static const int EPARAMETER__NAME = 1;
    static const int EPARAMETER__ORDERED = 2;
    static const int EPARAMETER__UNIQUE = 3;
    static const int EPARAMETER__LOWERBOUND = 4;
    static const int EPARAMETER__UPPERBOUND = 5;
    static const int EPARAMETER__MANY = 6;
    static const int EPARAMETER__REQUIRED = 7;
    static const int EPARAMETER__ETYPE = 8;
    static const int EPARAMETER__EGENERICTYPE = 9;
    static const int EPARAMETER__EOPERATION = 10;
    static const int EPARAMETER_FEATURE_COUNT = 11;

    // IDs for classifier EReference
    static const int EREFERENCE = 42;
    static const int EREFERENCE__EANNOTATIONS = 0;
    static const int EREFERENCE__NAME = 1;
    static const int EREFERENCE__ORDERED = 2;
    static const int EREFERENCE__UNIQUE = 3;
    static const int EREFERENCE__LOWERBOUND = 4;
    static const int EREFERENCE__UPPERBOUND = 5;
    static const int EREFERENCE__MANY = 6;
    static const int EREFERENCE__REQUIRED = 7;
    static const int EREFERENCE__ETYPE = 8;
    static const int EREFERENCE__EGENERICTYPE = 9;
    static const int EREFERENCE__CHANGEABLE = 10;
    static const int EREFERENCE__VOLATILE = 11;
    static const int EREFERENCE__TRANSIENT = 12;
    static const int EREFERENCE__DEFAULTVALUELITERAL = 13;
    static const int EREFERENCE__DEFAULTVALUE = 14;
    static const int EREFERENCE__UNSETTABLE = 15;
    static const int EREFERENCE__DERIVED = 16;
    static const int EREFERENCE__ECONTAININGCLASS = 17;
    static const int EREFERENCE__CONTAINMENT = 18;
    static const int EREFERENCE__CONTAINER = 19;
    static const int EREFERENCE__RESOLVEPROXIES = 20;
    static const int EREFERENCE__EOPPOSITE = 21;
    static const int EREFERENCE__EREFERENCETYPE = 22;
    static const int EREFERENCE__EKEYS = 23;
    static const int EREFERENCE_FEATURE_COUNT = 24;

    // IDs for classifier EResource
    static const int ERESOURCE = 43;

    // IDs for classifier EResourceSet
    static const int ERESOURCESET = 44;

    // IDs for classifier EShort
    static const int ESHORT = 45;

    // IDs for classifier EShortObject
    static const int ESHORTOBJECT = 46;

    // IDs for classifier EString
    static const int ESTRING = 47;

    // IDs for classifier EStringToStringMapEntry
    static const int ESTRINGTOSTRINGMAPENTRY = 48;
    static const int ESTRINGTOSTRINGMAPENTRY__KEY = 0;
    static const int ESTRINGTOSTRINGMAPENTRY__VALUE = 1;
    static const int ESTRINGTOSTRINGMAPENTRY_FEATURE_COUNT = 2;

    // IDs for classifier EStructuralFeature
    static const int ESTRUCTURALFEATURE = 49;
    static const int ESTRUCTURALFEATURE__EANNOTATIONS = 0;
    static const int ESTRUCTURALFEATURE__NAME = 1;
    static const int ESTRUCTURALFEATURE__ORDERED = 2;
    static const int ESTRUCTURALFEATURE__UNIQUE = 3;
    static const int ESTRUCTURALFEATURE__LOWERBOUND = 4;
    static const int ESTRUCTURALFEATURE__UPPERBOUND = 5;
    static const int ESTRUCTURALFEATURE__MANY = 6;
    static const int ESTRUCTURALFEATURE__REQUIRED = 7;
    static const int ESTRUCTURALFEATURE__ETYPE = 8;
    static const int ESTRUCTURALFEATURE__EGENERICTYPE = 9;
    static const int ESTRUCTURALFEATURE__CHANGEABLE = 10;
    static const int ESTRUCTURALFEATURE__VOLATILE = 11;
    static const int ESTRUCTURALFEATURE__TRANSIENT = 12;
    static const int ESTRUCTURALFEATURE__DEFAULTVALUELITERAL = 13;
    static const int ESTRUCTURALFEATURE__DEFAULTVALUE = 14;
    static const int ESTRUCTURALFEATURE__UNSETTABLE = 15;
    static const int ESTRUCTURALFEATURE__DERIVED = 16;
    static const int ESTRUCTURALFEATURE__ECONTAININGCLASS = 17;
    static const int ESTRUCTURALFEATURE_FEATURE_COUNT = 18;

    // IDs for classifier ETreeIterator
    static const int ETREEITERATOR = 50;

    // IDs for classifier ETypedElement
    static const int ETYPEDELEMENT = 51;
    static const int ETYPEDELEMENT__EANNOTATIONS = 0;
    static const int ETYPEDELEMENT__NAME = 1;
    static const int ETYPEDELEMENT__ORDERED = 2;
    static const int ETYPEDELEMENT__UNIQUE = 3;
    static const int ETYPEDELEMENT__LOWERBOUND = 4;
    static const int ETYPEDELEMENT__UPPERBOUND = 5;
    static const int ETYPEDELEMENT__MANY = 6;
    static const int ETYPEDELEMENT__REQUIRED = 7;
    static const int ETYPEDELEMENT__ETYPE = 8;
    static const int ETYPEDELEMENT__EGENERICTYPE = 9;
    static const int ETYPEDELEMENT_FEATURE_COUNT = 10;

    // IDs for classifier ETypeParameter
    static const int ETYPEPARAMETER = 52;
    static const int ETYPEPARAMETER__EANNOTATIONS = 0;
    static const int ETYPEPARAMETER__NAME = 1;
    static const int ETYPEPARAMETER__EBOUNDS = 2;
    static const int ETYPEPARAMETER_FEATURE_COUNT = 3;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getEAttribute();

    virtual ::ecore::EClass_ptr getEAnnotation_();

    virtual ::ecore::EClass_ptr getEClass();

    virtual ::ecore::EClass_ptr getEClassifier_();

    virtual ::ecore::EClass_ptr getEDataType();

    virtual ::ecore::EClass_ptr getEEnum();

    virtual ::ecore::EClass_ptr getEEnumLiteral();

    virtual ::ecore::EClass_ptr getEFactory();

    virtual ::ecore::EClass_ptr getEModelElement();

    virtual ::ecore::EClass_ptr getENamedElement();

    virtual ::ecore::EClass_ptr getEObject();

    virtual ::ecore::EClass_ptr getEOperation();

    virtual ::ecore::EClass_ptr getEPackage();

    virtual ::ecore::EClass_ptr getEParameter();

    virtual ::ecore::EClass_ptr getEReference();

    virtual ::ecore::EClass_ptr getEStructuralFeature();

    virtual ::ecore::EClass_ptr getETypedElement();

    virtual ::ecore::EDataType_ptr getEBigDecimal();

    virtual ::ecore::EDataType_ptr getEBigInteger();

    virtual ::ecore::EDataType_ptr getEBoolean();

    virtual ::ecore::EDataType_ptr getEBooleanObject();

    virtual ::ecore::EDataType_ptr getEByte();

    virtual ::ecore::EDataType_ptr getEByteArray();

    virtual ::ecore::EDataType_ptr getEByteObject();

    virtual ::ecore::EDataType_ptr getEChar();

    virtual ::ecore::EDataType_ptr getECharacterObject();

    virtual ::ecore::EDataType_ptr getEDate();

    virtual ::ecore::EDataType_ptr getEDiagnosticChain();

    virtual ::ecore::EDataType_ptr getEDouble();

    virtual ::ecore::EDataType_ptr getEDoubleObject();

    virtual ::ecore::EDataType_ptr getEEList();

    virtual ::ecore::EDataType_ptr getEEnumerator();

    virtual ::ecore::EDataType_ptr getEFeatureMap();

    virtual ::ecore::EDataType_ptr getEFeatureMapEntry();

    virtual ::ecore::EDataType_ptr getEFloat();

    virtual ::ecore::EDataType_ptr getEFloatObject();

    virtual ::ecore::EDataType_ptr getEInt();

    virtual ::ecore::EDataType_ptr getEIntegerObject();

    virtual ::ecore::EDataType_ptr getEJavaClass();

    virtual ::ecore::EDataType_ptr getEJavaObject();

    virtual ::ecore::EDataType_ptr getELong();

    virtual ::ecore::EDataType_ptr getELongObject();

    virtual ::ecore::EDataType_ptr getEMap();

    virtual ::ecore::EDataType_ptr getEResource();

    virtual ::ecore::EDataType_ptr getEResourceSet();

    virtual ::ecore::EDataType_ptr getEShort();

    virtual ::ecore::EDataType_ptr getEShortObject();

    virtual ::ecore::EDataType_ptr getEString();

    virtual ::ecore::EClass_ptr getEStringToStringMapEntry();

    virtual ::ecore::EDataType_ptr getETreeIterator();

    virtual ::ecore::EClass_ptr getEGenericType();

    virtual ::ecore::EClass_ptr getETypeParameter();

    virtual ::ecore::EDataType_ptr getEInvocationTargetException();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getEAttribute__iD();

    virtual ::ecore::EReference_ptr getEAttribute__eAttributeType();

    virtual ::ecore::EAttribute_ptr getEAnnotation__source();

    virtual ::ecore::EReference_ptr getEAnnotation__details();

    virtual ::ecore::EReference_ptr getEAnnotation__eModelElement();

    virtual ::ecore::EReference_ptr getEAnnotation__contents();

    virtual ::ecore::EReference_ptr getEAnnotation__references();

    virtual ::ecore::EAttribute_ptr getEClass__abstract();

    virtual ::ecore::EAttribute_ptr getEClass__interface();

    virtual ::ecore::EReference_ptr getEClass__eSuperTypes();

    virtual ::ecore::EReference_ptr getEClass__eOperations();

    virtual ::ecore::EReference_ptr getEClass__eAllAttributes();

    virtual ::ecore::EReference_ptr getEClass__eAllReferences();

    virtual ::ecore::EReference_ptr getEClass__eReferences();

    virtual ::ecore::EReference_ptr getEClass__eAttributes();

    virtual ::ecore::EReference_ptr getEClass__eAllContainments();

    virtual ::ecore::EReference_ptr getEClass__eAllOperations();

    virtual ::ecore::EReference_ptr getEClass__eAllStructuralFeatures();

    virtual ::ecore::EReference_ptr getEClass__eAllSuperTypes();

    virtual ::ecore::EReference_ptr getEClass__eIDAttribute();

    virtual ::ecore::EReference_ptr getEClass__eStructuralFeatures();

    virtual ::ecore::EReference_ptr getEClass__eGenericSuperTypes();

    virtual ::ecore::EReference_ptr getEClass__eAllGenericSuperTypes();

    virtual ::ecore::EAttribute_ptr getEClassifier__instanceClassName();

    virtual ::ecore::EAttribute_ptr getEClassifier__instanceClass();

    virtual ::ecore::EAttribute_ptr getEClassifier__defaultValue();

    virtual ::ecore::EAttribute_ptr getEClassifier__instanceTypeName();

    virtual ::ecore::EReference_ptr getEClassifier__ePackage();

    virtual ::ecore::EReference_ptr getEClassifier__eTypeParameters();

    virtual ::ecore::EAttribute_ptr getEDataType__serializable();

    virtual ::ecore::EReference_ptr getEEnum__eLiterals();

    virtual ::ecore::EAttribute_ptr getEEnumLiteral__value();

    virtual ::ecore::EAttribute_ptr getEEnumLiteral__instance();

    virtual ::ecore::EAttribute_ptr getEEnumLiteral__literal();

    virtual ::ecore::EReference_ptr getEEnumLiteral__eEnum();

    virtual ::ecore::EReference_ptr getEFactory__ePackage();

    virtual ::ecore::EReference_ptr getEModelElement__eAnnotations();

    virtual ::ecore::EAttribute_ptr getENamedElement__name();

    virtual ::ecore::EReference_ptr getEOperation__eContainingClass();

    virtual ::ecore::EReference_ptr getEOperation__eTypeParameters();

    virtual ::ecore::EReference_ptr getEOperation__eParameters();

    virtual ::ecore::EReference_ptr getEOperation__eExceptions();

    virtual ::ecore::EReference_ptr getEOperation__eGenericExceptions();

    virtual ::ecore::EAttribute_ptr getEPackage__nsURI();

    virtual ::ecore::EAttribute_ptr getEPackage__nsPrefix();

    virtual ::ecore::EReference_ptr getEPackage__eFactoryInstance();

    virtual ::ecore::EReference_ptr getEPackage__eClassifiers();

    virtual ::ecore::EReference_ptr getEPackage__eSubpackages();

    virtual ::ecore::EReference_ptr getEPackage__eSuperPackage();

    virtual ::ecore::EReference_ptr getEParameter__eOperation();

    virtual ::ecore::EAttribute_ptr getEReference__containment();

    virtual ::ecore::EAttribute_ptr getEReference__container();

    virtual ::ecore::EAttribute_ptr getEReference__resolveProxies();

    virtual ::ecore::EReference_ptr getEReference__eOpposite();

    virtual ::ecore::EReference_ptr getEReference__eReferenceType();

    virtual ::ecore::EReference_ptr getEReference__eKeys();

    virtual ::ecore::EAttribute_ptr getEStructuralFeature__changeable();

    virtual ::ecore::EAttribute_ptr getEStructuralFeature__volatile();

    virtual ::ecore::EAttribute_ptr getEStructuralFeature__transient();

    virtual ::ecore::EAttribute_ptr getEStructuralFeature__defaultValueLiteral();

    virtual ::ecore::EAttribute_ptr getEStructuralFeature__defaultValue();

    virtual ::ecore::EAttribute_ptr getEStructuralFeature__unsettable();

    virtual ::ecore::EAttribute_ptr getEStructuralFeature__derived();

    virtual ::ecore::EReference_ptr getEStructuralFeature__eContainingClass();

    virtual ::ecore::EAttribute_ptr getETypedElement__ordered();

    virtual ::ecore::EAttribute_ptr getETypedElement__unique();

    virtual ::ecore::EAttribute_ptr getETypedElement__lowerBound();

    virtual ::ecore::EAttribute_ptr getETypedElement__upperBound();

    virtual ::ecore::EAttribute_ptr getETypedElement__many();

    virtual ::ecore::EAttribute_ptr getETypedElement__required();

    virtual ::ecore::EReference_ptr getETypedElement__eType();

    virtual ::ecore::EReference_ptr getETypedElement__eGenericType();

    virtual ::ecore::EAttribute_ptr getEStringToStringMapEntry__key();

    virtual ::ecore::EAttribute_ptr getEStringToStringMapEntry__value();

    virtual ::ecore::EReference_ptr getEGenericType__eUpperBound();

    virtual ::ecore::EReference_ptr getEGenericType__eTypeArguments();

    virtual ::ecore::EReference_ptr getEGenericType__eRawType();

    virtual ::ecore::EReference_ptr getEGenericType__eLowerBound();

    virtual ::ecore::EReference_ptr getEGenericType__eTypeParameter();

    virtual ::ecore::EReference_ptr getEGenericType__eClassifier();

    virtual ::ecore::EReference_ptr getETypeParameter__eBounds();

protected:

    static ::ecore::Ptr< EcorePackage > s_instance;

    EcorePackage();
    void _initPackage();

    ::ecore::EClass_ptr m_EAnnotationEClass;
    ::ecore::EClass_ptr m_EAttributeEClass;
    ::ecore::EDataType_ptr m_EBigDecimalEDataType;
    ::ecore::EDataType_ptr m_EBigIntegerEDataType;
    ::ecore::EDataType_ptr m_EBooleanEDataType;
    ::ecore::EDataType_ptr m_EBooleanObjectEDataType;
    ::ecore::EDataType_ptr m_EByteEDataType;
    ::ecore::EDataType_ptr m_EByteArrayEDataType;
    ::ecore::EDataType_ptr m_EByteObjectEDataType;
    ::ecore::EDataType_ptr m_ECharEDataType;
    ::ecore::EDataType_ptr m_ECharacterObjectEDataType;
    ::ecore::EClass_ptr m_EClassEClass;
    ::ecore::EClass_ptr m_EClassifierEClass;
    ::ecore::EClass_ptr m_EDataTypeEClass;
    ::ecore::EDataType_ptr m_EDateEDataType;
    ::ecore::EDataType_ptr m_EDiagnosticChainEDataType;
    ::ecore::EDataType_ptr m_EDoubleEDataType;
    ::ecore::EDataType_ptr m_EDoubleObjectEDataType;
    ::ecore::EDataType_ptr m_EEListEDataType;
    ::ecore::EClass_ptr m_EEnumEClass;
    ::ecore::EClass_ptr m_EEnumLiteralEClass;
    ::ecore::EDataType_ptr m_EEnumeratorEDataType;
    ::ecore::EClass_ptr m_EFactoryEClass;
    ::ecore::EDataType_ptr m_EFeatureMapEDataType;
    ::ecore::EDataType_ptr m_EFeatureMapEntryEDataType;
    ::ecore::EDataType_ptr m_EFloatEDataType;
    ::ecore::EDataType_ptr m_EFloatObjectEDataType;
    ::ecore::EClass_ptr m_EGenericTypeEClass;
    ::ecore::EDataType_ptr m_EIntEDataType;
    ::ecore::EDataType_ptr m_EIntegerObjectEDataType;
    ::ecore::EDataType_ptr m_EInvocationTargetExceptionEDataType;
    ::ecore::EDataType_ptr m_EJavaClassEDataType;
    ::ecore::EDataType_ptr m_EJavaObjectEDataType;
    ::ecore::EDataType_ptr m_ELongEDataType;
    ::ecore::EDataType_ptr m_ELongObjectEDataType;
    ::ecore::EDataType_ptr m_EMapEDataType;
    ::ecore::EClass_ptr m_EModelElementEClass;
    ::ecore::EClass_ptr m_ENamedElementEClass;
    ::ecore::EClass_ptr m_EObjectEClass;
    ::ecore::EClass_ptr m_EOperationEClass;
    ::ecore::EClass_ptr m_EPackageEClass;
    ::ecore::EClass_ptr m_EParameterEClass;
    ::ecore::EClass_ptr m_EReferenceEClass;
    ::ecore::EDataType_ptr m_EResourceEDataType;
    ::ecore::EDataType_ptr m_EResourceSetEDataType;
    ::ecore::EDataType_ptr m_EShortEDataType;
    ::ecore::EDataType_ptr m_EShortObjectEDataType;
    ::ecore::EDataType_ptr m_EStringEDataType;
    ::ecore::EClass_ptr m_EStringToStringMapEntryEClass;
    ::ecore::EClass_ptr m_EStructuralFeatureEClass;
    ::ecore::EDataType_ptr m_ETreeIteratorEDataType;
    ::ecore::EClass_ptr m_ETypeParameterEClass;
    ::ecore::EClass_ptr m_ETypedElementEClass;

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_EAttribute__iD;

    ::ecore::EReference_ptr m_EAttribute__eAttributeType;

    ::ecore::EAttribute_ptr m_EAnnotation__source;

    ::ecore::EReference_ptr m_EAnnotation__details;

    ::ecore::EReference_ptr m_EAnnotation__eModelElement;

    ::ecore::EReference_ptr m_EAnnotation__contents;

    ::ecore::EReference_ptr m_EAnnotation__references;

    ::ecore::EAttribute_ptr m_EClass__abstract;

    ::ecore::EAttribute_ptr m_EClass__interface;

    ::ecore::EReference_ptr m_EClass__eSuperTypes;

    ::ecore::EReference_ptr m_EClass__eOperations;

    ::ecore::EReference_ptr m_EClass__eAllAttributes;

    ::ecore::EReference_ptr m_EClass__eAllReferences;

    ::ecore::EReference_ptr m_EClass__eReferences;

    ::ecore::EReference_ptr m_EClass__eAttributes;

    ::ecore::EReference_ptr m_EClass__eAllContainments;

    ::ecore::EReference_ptr m_EClass__eAllOperations;

    ::ecore::EReference_ptr m_EClass__eAllStructuralFeatures;

    ::ecore::EReference_ptr m_EClass__eAllSuperTypes;

    ::ecore::EReference_ptr m_EClass__eIDAttribute;

    ::ecore::EReference_ptr m_EClass__eStructuralFeatures;

    ::ecore::EReference_ptr m_EClass__eGenericSuperTypes;

    ::ecore::EReference_ptr m_EClass__eAllGenericSuperTypes;

    ::ecore::EAttribute_ptr m_EClassifier__instanceClassName;

    ::ecore::EAttribute_ptr m_EClassifier__instanceClass;

    ::ecore::EAttribute_ptr m_EClassifier__defaultValue;

    ::ecore::EAttribute_ptr m_EClassifier__instanceTypeName;

    ::ecore::EReference_ptr m_EClassifier__ePackage;

    ::ecore::EReference_ptr m_EClassifier__eTypeParameters;

    ::ecore::EAttribute_ptr m_EDataType__serializable;

    ::ecore::EReference_ptr m_EEnum__eLiterals;

    ::ecore::EAttribute_ptr m_EEnumLiteral__value;

    ::ecore::EAttribute_ptr m_EEnumLiteral__instance;

    ::ecore::EAttribute_ptr m_EEnumLiteral__literal;

    ::ecore::EReference_ptr m_EEnumLiteral__eEnum;

    ::ecore::EReference_ptr m_EFactory__ePackage;

    ::ecore::EReference_ptr m_EModelElement__eAnnotations;

    ::ecore::EAttribute_ptr m_ENamedElement__name;

    ::ecore::EReference_ptr m_EOperation__eContainingClass;

    ::ecore::EReference_ptr m_EOperation__eTypeParameters;

    ::ecore::EReference_ptr m_EOperation__eParameters;

    ::ecore::EReference_ptr m_EOperation__eExceptions;

    ::ecore::EReference_ptr m_EOperation__eGenericExceptions;

    ::ecore::EAttribute_ptr m_EPackage__nsURI;

    ::ecore::EAttribute_ptr m_EPackage__nsPrefix;

    ::ecore::EReference_ptr m_EPackage__eFactoryInstance;

    ::ecore::EReference_ptr m_EPackage__eClassifiers;

    ::ecore::EReference_ptr m_EPackage__eSubpackages;

    ::ecore::EReference_ptr m_EPackage__eSuperPackage;

    ::ecore::EReference_ptr m_EParameter__eOperation;

    ::ecore::EAttribute_ptr m_EReference__containment;

    ::ecore::EAttribute_ptr m_EReference__container;

    ::ecore::EAttribute_ptr m_EReference__resolveProxies;

    ::ecore::EReference_ptr m_EReference__eOpposite;

    ::ecore::EReference_ptr m_EReference__eReferenceType;

    ::ecore::EReference_ptr m_EReference__eKeys;

    ::ecore::EAttribute_ptr m_EStructuralFeature__changeable;

    ::ecore::EAttribute_ptr m_EStructuralFeature__volatile;

    ::ecore::EAttribute_ptr m_EStructuralFeature__transient;

    ::ecore::EAttribute_ptr m_EStructuralFeature__defaultValueLiteral;

    ::ecore::EAttribute_ptr m_EStructuralFeature__defaultValue;

    ::ecore::EAttribute_ptr m_EStructuralFeature__unsettable;

    ::ecore::EAttribute_ptr m_EStructuralFeature__derived;

    ::ecore::EReference_ptr m_EStructuralFeature__eContainingClass;

    ::ecore::EAttribute_ptr m_ETypedElement__ordered;

    ::ecore::EAttribute_ptr m_ETypedElement__unique;

    ::ecore::EAttribute_ptr m_ETypedElement__lowerBound;

    ::ecore::EAttribute_ptr m_ETypedElement__upperBound;

    ::ecore::EAttribute_ptr m_ETypedElement__many;

    ::ecore::EAttribute_ptr m_ETypedElement__required;

    ::ecore::EReference_ptr m_ETypedElement__eType;

    ::ecore::EReference_ptr m_ETypedElement__eGenericType;

    ::ecore::EAttribute_ptr m_EStringToStringMapEntry__key;

    ::ecore::EAttribute_ptr m_EStringToStringMapEntry__value;

    ::ecore::EReference_ptr m_EGenericType__eUpperBound;

    ::ecore::EReference_ptr m_EGenericType__eTypeArguments;

    ::ecore::EReference_ptr m_EGenericType__eRawType;

    ::ecore::EReference_ptr m_EGenericType__eLowerBound;

    ::ecore::EReference_ptr m_EGenericType__eTypeParameter;

    ::ecore::EReference_ptr m_EGenericType__eClassifier;

    ::ecore::EReference_ptr m_ETypeParameter__eBounds;

};

}
 // ecore

#endif // _ECOREPACKAGE_HPP

