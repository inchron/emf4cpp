// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/IdlmmPackage.hpp
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

#ifndef _IDLMMPACKAGE_HPP
#define _IDLMMPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <idlmm_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <idlmm/dllIdlmm.hpp>

namespace idlmm
{

class EXPORT_IDLMM_DLL IdlmmPackage : public virtual ::ecore::EPackage
{
public:

    static IdlmmPackage_ptr _instance();
    static IdlmmPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier AliasDef
    static const int ALIASDEF = 0;
    static const int ALIASDEF__CONTAINEDTYPE = 0;
    static const int ALIASDEF__SHAREDTYPE = 1;
    static const int ALIASDEF__TYPECODE = 2;
    static const int ALIASDEF__IDENTIFIER = 3;
    static const int ALIASDEF__REPOSITORYID = 4;
    static const int ALIASDEF__VERSION = 5;
    static const int ALIASDEF__ABSOLUTENAME = 6;
    static const int ALIASDEF__DEFINEDIN = 7;
    static const int ALIASDEF_FEATURE_COUNT = 8;

    // IDs for classifier ArrayDef
    static const int ARRAYDEF = 1;
    static const int ARRAYDEF__CONTAINEDTYPE = 0;
    static const int ARRAYDEF__SHAREDTYPE = 1;
    static const int ARRAYDEF__TYPECODE = 2;
    static const int ARRAYDEF__BOUND = 3;
    static const int ARRAYDEF_FEATURE_COUNT = 4;

    // IDs for classifier AttributeDef
    static const int ATTRIBUTEDEF = 2;
    static const int ATTRIBUTEDEF__IDENTIFIER = 0;
    static const int ATTRIBUTEDEF__REPOSITORYID = 1;
    static const int ATTRIBUTEDEF__VERSION = 2;
    static const int ATTRIBUTEDEF__ABSOLUTENAME = 3;
    static const int ATTRIBUTEDEF__DEFINEDIN = 4;
    static const int ATTRIBUTEDEF__CONTAINEDTYPE = 5;
    static const int ATTRIBUTEDEF__SHAREDTYPE = 6;
    static const int ATTRIBUTEDEF__GETRAISES = 7;
    static const int ATTRIBUTEDEF__SETRAISES = 8;
    static const int ATTRIBUTEDEF__ISREADONLY = 9;
    static const int ATTRIBUTEDEF_FEATURE_COUNT = 10;

    // IDs for classifier ConstantDef
    static const int CONSTANTDEF = 3;
    static const int CONSTANTDEF__IDENTIFIER = 0;
    static const int CONSTANTDEF__REPOSITORYID = 1;
    static const int CONSTANTDEF__VERSION = 2;
    static const int CONSTANTDEF__ABSOLUTENAME = 3;
    static const int CONSTANTDEF__DEFINEDIN = 4;
    static const int CONSTANTDEF__CONTAINEDTYPE = 5;
    static const int CONSTANTDEF__SHAREDTYPE = 6;
    static const int CONSTANTDEF__CONSTVALUE = 7;
    static const int CONSTANTDEF_FEATURE_COUNT = 8;

    // IDs for classifier Contained
    static const int CONTAINED = 4;
    static const int CONTAINED__IDENTIFIER = 0;
    static const int CONTAINED__REPOSITORYID = 1;
    static const int CONTAINED__VERSION = 2;
    static const int CONTAINED__ABSOLUTENAME = 3;
    static const int CONTAINED__DEFINEDIN = 4;
    static const int CONTAINED_FEATURE_COUNT = 5;

    // IDs for classifier Container
    static const int CONTAINER = 5;
    static const int CONTAINER__IDENTIFIER = 0;
    static const int CONTAINER__REPOSITORYID = 1;
    static const int CONTAINER__VERSION = 2;
    static const int CONTAINER__ABSOLUTENAME = 3;
    static const int CONTAINER__DEFINEDIN = 4;
    static const int CONTAINER__CONTAINS = 5;
    static const int CONTAINER_FEATURE_COUNT = 6;

    // IDs for classifier EAny
    static const int EANY = 6;

    // IDs for classifier EnumDef
    static const int ENUMDEF = 7;
    static const int ENUMDEF__TYPECODE = 0;
    static const int ENUMDEF__IDENTIFIER = 1;
    static const int ENUMDEF__REPOSITORYID = 2;
    static const int ENUMDEF__VERSION = 3;
    static const int ENUMDEF__ABSOLUTENAME = 4;
    static const int ENUMDEF__DEFINEDIN = 5;
    static const int ENUMDEF__MEMBERS = 6;
    static const int ENUMDEF_FEATURE_COUNT = 7;

    // IDs for classifier ETypeCode
    static const int ETYPECODE = 8;

    // IDs for classifier ExceptionDef
    static const int EXCEPTIONDEF = 9;
    static const int EXCEPTIONDEF__IDENTIFIER = 0;
    static const int EXCEPTIONDEF__REPOSITORYID = 1;
    static const int EXCEPTIONDEF__VERSION = 2;
    static const int EXCEPTIONDEF__ABSOLUTENAME = 3;
    static const int EXCEPTIONDEF__DEFINEDIN = 4;
    static const int EXCEPTIONDEF__TYPECODE = 5;
    static const int EXCEPTIONDEF__MEMBERS = 6;
    static const int EXCEPTIONDEF_FEATURE_COUNT = 7;

    // IDs for classifier Field
    static const int FIELD = 10;
    static const int FIELD__CONTAINEDTYPE = 0;
    static const int FIELD__SHAREDTYPE = 1;
    static const int FIELD__IDENTIFIER = 2;
    static const int FIELD_FEATURE_COUNT = 3;

    // IDs for classifier FixedDef
    static const int FIXEDDEF = 11;
    static const int FIXEDDEF__TYPECODE = 0;
    static const int FIXEDDEF__DIGITS = 1;
    static const int FIXEDDEF__SCALE = 2;
    static const int FIXEDDEF_FEATURE_COUNT = 3;

    // IDs for classifier IDLType
    static const int IDLTYPE = 12;
    static const int IDLTYPE__TYPECODE = 0;
    static const int IDLTYPE_FEATURE_COUNT = 1;

    // IDs for classifier Include
    static const int INCLUDE = 13;
    static const int INCLUDE__IMPORTURI = 0;
    static const int INCLUDE_FEATURE_COUNT = 1;

    // IDs for classifier InterfaceDef
    static const int INTERFACEDEF = 14;
    static const int INTERFACEDEF__IDENTIFIER = 0;
    static const int INTERFACEDEF__REPOSITORYID = 1;
    static const int INTERFACEDEF__VERSION = 2;
    static const int INTERFACEDEF__ABSOLUTENAME = 3;
    static const int INTERFACEDEF__DEFINEDIN = 4;
    static const int INTERFACEDEF__CONTAINS = 5;
    static const int INTERFACEDEF__TYPECODE = 6;
    static const int INTERFACEDEF__ISABSTRACT = 7;
    static const int INTERFACEDEF__ISCUSTOM = 8;
    static const int INTERFACEDEF__ISTRUNCATABLE = 9;
    static const int INTERFACEDEF__DERIVESFROM = 10;
    static const int INTERFACEDEF_FEATURE_COUNT = 11;

    // IDs for classifier ModuleDef
    static const int MODULEDEF = 15;
    static const int MODULEDEF__IDENTIFIER = 0;
    static const int MODULEDEF__REPOSITORYID = 1;
    static const int MODULEDEF__VERSION = 2;
    static const int MODULEDEF__ABSOLUTENAME = 3;
    static const int MODULEDEF__DEFINEDIN = 4;
    static const int MODULEDEF__CONTAINS = 5;
    static const int MODULEDEF__PREFIX = 6;
    static const int MODULEDEF_FEATURE_COUNT = 7;

    // IDs for classifier OperationDef
    static const int OPERATIONDEF = 16;
    static const int OPERATIONDEF__IDENTIFIER = 0;
    static const int OPERATIONDEF__REPOSITORYID = 1;
    static const int OPERATIONDEF__VERSION = 2;
    static const int OPERATIONDEF__ABSOLUTENAME = 3;
    static const int OPERATIONDEF__DEFINEDIN = 4;
    static const int OPERATIONDEF__CONTAINEDTYPE = 5;
    static const int OPERATIONDEF__SHAREDTYPE = 6;
    static const int OPERATIONDEF__PARAMETERS = 7;
    static const int OPERATIONDEF__ISONEWAY = 8;
    static const int OPERATIONDEF__CONTEXTS = 9;
    static const int OPERATIONDEF__CANRAISE = 10;
    static const int OPERATIONDEF_FEATURE_COUNT = 11;

    // IDs for classifier ParameterDef
    static const int PARAMETERDEF = 17;
    static const int PARAMETERDEF__CONTAINEDTYPE = 0;
    static const int PARAMETERDEF__SHAREDTYPE = 1;
    static const int PARAMETERDEF__IDENTIFIER = 2;
    static const int PARAMETERDEF__DIRECTION = 3;
    static const int PARAMETERDEF_FEATURE_COUNT = 4;

    // IDs for classifier ParameterMode
    static const int PARAMETERMODE = 18;

    // IDs for classifier PrimitiveDef
    static const int PRIMITIVEDEF = 19;
    static const int PRIMITIVEDEF__TYPECODE = 0;
    static const int PRIMITIVEDEF__KIND = 1;
    static const int PRIMITIVEDEF_FEATURE_COUNT = 2;

    // IDs for classifier PrimitiveKind
    static const int PRIMITIVEKIND = 20;

    // IDs for classifier SequenceDef
    static const int SEQUENCEDEF = 21;
    static const int SEQUENCEDEF__CONTAINEDTYPE = 0;
    static const int SEQUENCEDEF__SHAREDTYPE = 1;
    static const int SEQUENCEDEF__TYPECODE = 2;
    static const int SEQUENCEDEF__BOUND = 3;
    static const int SEQUENCEDEF_FEATURE_COUNT = 4;

    // IDs for classifier StringDef
    static const int STRINGDEF = 22;
    static const int STRINGDEF__TYPECODE = 0;
    static const int STRINGDEF__BOUND = 1;
    static const int STRINGDEF_FEATURE_COUNT = 2;

    // IDs for classifier StructDef
    static const int STRUCTDEF = 23;
    static const int STRUCTDEF__TYPECODE = 0;
    static const int STRUCTDEF__IDENTIFIER = 1;
    static const int STRUCTDEF__REPOSITORYID = 2;
    static const int STRUCTDEF__VERSION = 3;
    static const int STRUCTDEF__ABSOLUTENAME = 4;
    static const int STRUCTDEF__DEFINEDIN = 5;
    static const int STRUCTDEF__MEMBERS = 6;
    static const int STRUCTDEF_FEATURE_COUNT = 7;

    // IDs for classifier TranslationUnit
    static const int TRANSLATIONUNIT = 24;
    static const int TRANSLATIONUNIT__CONTAINS = 0;
    static const int TRANSLATIONUNIT__IDENTIFIER = 1;
    static const int TRANSLATIONUNIT__INCLUDES = 2;
    static const int TRANSLATIONUNIT_FEATURE_COUNT = 3;

    // IDs for classifier Typed
    static const int TYPED = 25;
    static const int TYPED__CONTAINEDTYPE = 0;
    static const int TYPED__SHAREDTYPE = 1;
    static const int TYPED_FEATURE_COUNT = 2;

    // IDs for classifier TypedefDef
    static const int TYPEDEFDEF = 26;
    static const int TYPEDEFDEF__TYPECODE = 0;
    static const int TYPEDEFDEF__IDENTIFIER = 1;
    static const int TYPEDEFDEF__REPOSITORYID = 2;
    static const int TYPEDEFDEF__VERSION = 3;
    static const int TYPEDEFDEF__ABSOLUTENAME = 4;
    static const int TYPEDEFDEF__DEFINEDIN = 5;
    static const int TYPEDEFDEF_FEATURE_COUNT = 6;

    // IDs for classifier UnionDef
    static const int UNIONDEF = 27;
    static const int UNIONDEF__TYPECODE = 0;
    static const int UNIONDEF__IDENTIFIER = 1;
    static const int UNIONDEF__REPOSITORYID = 2;
    static const int UNIONDEF__VERSION = 3;
    static const int UNIONDEF__ABSOLUTENAME = 4;
    static const int UNIONDEF__DEFINEDIN = 5;
    static const int UNIONDEF__UNIONMEMBERS = 6;
    static const int UNIONDEF__CONTAINEDDISCRIM = 7;
    static const int UNIONDEF__SHAREDDISCRIM = 8;
    static const int UNIONDEF_FEATURE_COUNT = 9;

    // IDs for classifier UnionField
    static const int UNIONFIELD = 28;
    static const int UNIONFIELD__CONTAINEDTYPE = 0;
    static const int UNIONFIELD__SHAREDTYPE = 1;
    static const int UNIONFIELD__IDENTIFIER = 2;
    static const int UNIONFIELD__LABEL = 3;
    static const int UNIONFIELD_FEATURE_COUNT = 4;

    // IDs for classifier WstringDef
    static const int WSTRINGDEF = 29;
    static const int WSTRINGDEF__TYPECODE = 0;
    static const int WSTRINGDEF__BOUND = 1;
    static const int WSTRINGDEF_FEATURE_COUNT = 2;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getContainer();

    virtual ::ecore::EClass_ptr getContained();

    virtual ::ecore::EClass_ptr getInterfaceDef();

    virtual ::ecore::EClass_ptr getModuleDef();

    virtual ::ecore::EClass_ptr getIDLType();

    virtual ::ecore::EClass_ptr getOperationDef();

    virtual ::ecore::EClass_ptr getAttributeDef();

    virtual ::ecore::EClass_ptr getConstantDef();

    virtual ::ecore::EClass_ptr getTyped();

    virtual ::ecore::EClass_ptr getParameterDef();

    virtual ::ecore::EEnum_ptr getParameterMode();

    virtual ::ecore::EClass_ptr getPrimitiveDef();

    virtual ::ecore::EEnum_ptr getPrimitiveKind();

    virtual ::ecore::EClass_ptr getExceptionDef();

    virtual ::ecore::EDataType_ptr getEAny();

    virtual ::ecore::EDataType_ptr getETypeCode();

    virtual ::ecore::EClass_ptr getField();

    virtual ::ecore::EClass_ptr getFixedDef();

    virtual ::ecore::EClass_ptr getWstringDef();

    virtual ::ecore::EClass_ptr getStringDef();

    virtual ::ecore::EClass_ptr getAliasDef();

    virtual ::ecore::EClass_ptr getArrayDef();

    virtual ::ecore::EClass_ptr getSequenceDef();

    virtual ::ecore::EClass_ptr getUnionField();

    virtual ::ecore::EClass_ptr getTypedefDef();

    virtual ::ecore::EClass_ptr getUnionDef();

    virtual ::ecore::EClass_ptr getEnumDef();

    virtual ::ecore::EClass_ptr getStructDef();

    virtual ::ecore::EClass_ptr getTranslationUnit();

    virtual ::ecore::EClass_ptr getInclude();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getContainer__contains();

    virtual ::ecore::EAttribute_ptr getContained__identifier();

    virtual ::ecore::EAttribute_ptr getContained__repositoryId();

    virtual ::ecore::EAttribute_ptr getContained__version();

    virtual ::ecore::EAttribute_ptr getContained__absoluteName();

    virtual ::ecore::EReference_ptr getContained__definedIn();

    virtual ::ecore::EAttribute_ptr getInterfaceDef__isAbstract();

    virtual ::ecore::EAttribute_ptr getInterfaceDef__isCustom();

    virtual ::ecore::EAttribute_ptr getInterfaceDef__isTruncatable();

    virtual ::ecore::EReference_ptr getInterfaceDef__derivesFrom();

    virtual ::ecore::EAttribute_ptr getModuleDef__prefix();

    virtual ::ecore::EAttribute_ptr getIDLType__typeCode();

    virtual ::ecore::EReference_ptr getOperationDef__parameters();

    virtual ::ecore::EAttribute_ptr getOperationDef__isOneway();

    virtual ::ecore::EAttribute_ptr getOperationDef__contexts();

    virtual ::ecore::EReference_ptr getOperationDef__canRaise();

    virtual ::ecore::EReference_ptr getAttributeDef__getRaises();

    virtual ::ecore::EReference_ptr getAttributeDef__setRaises();

    virtual ::ecore::EAttribute_ptr getAttributeDef__isReadonly();

    virtual ::ecore::EAttribute_ptr getConstantDef__constValue();

    virtual ::ecore::EReference_ptr getTyped__containedType();

    virtual ::ecore::EReference_ptr getTyped__sharedType();

    virtual ::ecore::EAttribute_ptr getParameterDef__identifier();

    virtual ::ecore::EAttribute_ptr getParameterDef__direction();

    virtual ::ecore::EAttribute_ptr getPrimitiveDef__kind();

    virtual ::ecore::EAttribute_ptr getExceptionDef__typeCode();

    virtual ::ecore::EReference_ptr getExceptionDef__members();

    virtual ::ecore::EAttribute_ptr getField__identifier();

    virtual ::ecore::EAttribute_ptr getFixedDef__digits();

    virtual ::ecore::EAttribute_ptr getFixedDef__scale();

    virtual ::ecore::EAttribute_ptr getWstringDef__bound();

    virtual ::ecore::EAttribute_ptr getStringDef__bound();

    virtual ::ecore::EAttribute_ptr getArrayDef__bound();

    virtual ::ecore::EAttribute_ptr getSequenceDef__bound();

    virtual ::ecore::EAttribute_ptr getUnionField__identifier();

    virtual ::ecore::EAttribute_ptr getUnionField__label();

    virtual ::ecore::EReference_ptr getUnionDef__unionMembers();

    virtual ::ecore::EReference_ptr getUnionDef__containedDiscrim();

    virtual ::ecore::EReference_ptr getUnionDef__sharedDiscrim();

    virtual ::ecore::EAttribute_ptr getEnumDef__members();

    virtual ::ecore::EReference_ptr getStructDef__members();

    virtual ::ecore::EReference_ptr getTranslationUnit__contains();

    virtual ::ecore::EAttribute_ptr getTranslationUnit__identifier();

    virtual ::ecore::EReference_ptr getTranslationUnit__includes();

    virtual ::ecore::EAttribute_ptr getInclude__importURI();

protected:

    static ::ecore::Ptr< IdlmmPackage > s_instance;

    IdlmmPackage();
    void _initPackage();

    ::ecore::EClass_ptr m_AliasDefEClass;
    ::ecore::EClass_ptr m_ArrayDefEClass;
    ::ecore::EClass_ptr m_AttributeDefEClass;
    ::ecore::EClass_ptr m_ConstantDefEClass;
    ::ecore::EClass_ptr m_ContainedEClass;
    ::ecore::EClass_ptr m_ContainerEClass;
    ::ecore::EDataType_ptr m_EAnyEDataType;
    ::ecore::EDataType_ptr m_ETypeCodeEDataType;
    ::ecore::EClass_ptr m_EnumDefEClass;
    ::ecore::EClass_ptr m_ExceptionDefEClass;
    ::ecore::EClass_ptr m_FieldEClass;
    ::ecore::EClass_ptr m_FixedDefEClass;
    ::ecore::EClass_ptr m_IDLTypeEClass;
    ::ecore::EClass_ptr m_IncludeEClass;
    ::ecore::EClass_ptr m_InterfaceDefEClass;
    ::ecore::EClass_ptr m_ModuleDefEClass;
    ::ecore::EClass_ptr m_OperationDefEClass;
    ::ecore::EClass_ptr m_ParameterDefEClass;
    ::ecore::EEnum_ptr m_ParameterModeEEnum;
    ::ecore::EClass_ptr m_PrimitiveDefEClass;
    ::ecore::EEnum_ptr m_PrimitiveKindEEnum;
    ::ecore::EClass_ptr m_SequenceDefEClass;
    ::ecore::EClass_ptr m_StringDefEClass;
    ::ecore::EClass_ptr m_StructDefEClass;
    ::ecore::EClass_ptr m_TranslationUnitEClass;
    ::ecore::EClass_ptr m_TypedEClass;
    ::ecore::EClass_ptr m_TypedefDefEClass;
    ::ecore::EClass_ptr m_UnionDefEClass;
    ::ecore::EClass_ptr m_UnionFieldEClass;
    ::ecore::EClass_ptr m_WstringDefEClass;

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_Container__contains;

    ::ecore::EAttribute_ptr m_Contained__identifier;

    ::ecore::EAttribute_ptr m_Contained__repositoryId;

    ::ecore::EAttribute_ptr m_Contained__version;

    ::ecore::EAttribute_ptr m_Contained__absoluteName;

    ::ecore::EReference_ptr m_Contained__definedIn;

    ::ecore::EAttribute_ptr m_InterfaceDef__isAbstract;

    ::ecore::EAttribute_ptr m_InterfaceDef__isCustom;

    ::ecore::EAttribute_ptr m_InterfaceDef__isTruncatable;

    ::ecore::EReference_ptr m_InterfaceDef__derivesFrom;

    ::ecore::EAttribute_ptr m_ModuleDef__prefix;

    ::ecore::EAttribute_ptr m_IDLType__typeCode;

    ::ecore::EReference_ptr m_OperationDef__parameters;

    ::ecore::EAttribute_ptr m_OperationDef__isOneway;

    ::ecore::EAttribute_ptr m_OperationDef__contexts;

    ::ecore::EReference_ptr m_OperationDef__canRaise;

    ::ecore::EReference_ptr m_AttributeDef__getRaises;

    ::ecore::EReference_ptr m_AttributeDef__setRaises;

    ::ecore::EAttribute_ptr m_AttributeDef__isReadonly;

    ::ecore::EAttribute_ptr m_ConstantDef__constValue;

    ::ecore::EReference_ptr m_Typed__containedType;

    ::ecore::EReference_ptr m_Typed__sharedType;

    ::ecore::EAttribute_ptr m_ParameterDef__identifier;

    ::ecore::EAttribute_ptr m_ParameterDef__direction;

    ::ecore::EAttribute_ptr m_PrimitiveDef__kind;

    ::ecore::EAttribute_ptr m_ExceptionDef__typeCode;

    ::ecore::EReference_ptr m_ExceptionDef__members;

    ::ecore::EAttribute_ptr m_Field__identifier;

    ::ecore::EAttribute_ptr m_FixedDef__digits;

    ::ecore::EAttribute_ptr m_FixedDef__scale;

    ::ecore::EAttribute_ptr m_WstringDef__bound;

    ::ecore::EAttribute_ptr m_StringDef__bound;

    ::ecore::EAttribute_ptr m_ArrayDef__bound;

    ::ecore::EAttribute_ptr m_SequenceDef__bound;

    ::ecore::EAttribute_ptr m_UnionField__identifier;

    ::ecore::EAttribute_ptr m_UnionField__label;

    ::ecore::EReference_ptr m_UnionDef__unionMembers;

    ::ecore::EReference_ptr m_UnionDef__containedDiscrim;

    ::ecore::EReference_ptr m_UnionDef__sharedDiscrim;

    ::ecore::EAttribute_ptr m_EnumDef__members;

    ::ecore::EReference_ptr m_StructDef__members;

    ::ecore::EReference_ptr m_TranslationUnit__contains;

    ::ecore::EAttribute_ptr m_TranslationUnit__identifier;

    ::ecore::EReference_ptr m_TranslationUnit__includes;

    ::ecore::EAttribute_ptr m_Include__importURI;

};

}
 // idlmm

#endif // _IDLMMPACKAGE_HPP

