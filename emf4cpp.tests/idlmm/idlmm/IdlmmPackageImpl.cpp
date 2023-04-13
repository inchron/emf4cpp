// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/IdlmmPackageImpl.cpp
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

#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/IdlmmFactory.hpp>
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

using namespace ::idlmm;

IdlmmPackage::IdlmmPackage()
{
    m_AliasDefEClass = ::ecore::make< ::ecore::EClass >();
    m_ArrayDef__bound = ::ecore::make< ::ecore::EAttribute >();
    m_ArrayDefEClass = ::ecore::make< ::ecore::EClass >();
    m_AttributeDef__getRaises = ::ecore::make< ::ecore::EReference >();
    m_AttributeDef__setRaises = ::ecore::make< ::ecore::EReference >();
    m_AttributeDef__isReadonly = ::ecore::make< ::ecore::EAttribute >();
    m_AttributeDefEClass = ::ecore::make< ::ecore::EClass >();
    m_ConstantDef__constValue = ::ecore::make< ::ecore::EAttribute >();
    m_ConstantDefEClass = ::ecore::make< ::ecore::EClass >();
    m_Contained__identifier = ::ecore::make< ::ecore::EAttribute >();
    m_Contained__repositoryId = ::ecore::make< ::ecore::EAttribute >();
    m_Contained__version = ::ecore::make< ::ecore::EAttribute >();
    m_Contained__absoluteName = ::ecore::make< ::ecore::EAttribute >();
    m_Contained__definedIn = ::ecore::make< ::ecore::EReference >();
    m_ContainedEClass = ::ecore::make< ::ecore::EClass >();
    m_Container__contains = ::ecore::make< ::ecore::EReference >();
    m_ContainerEClass = ::ecore::make< ::ecore::EClass >();
    m_EAnyEDataType = ::ecore::make< ::ecore::EDataType >();
    m_EnumDef__members = ::ecore::make< ::ecore::EAttribute >();
    m_EnumDefEClass = ::ecore::make< ::ecore::EClass >();
    m_ETypeCodeEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ExceptionDef__typeCode = ::ecore::make< ::ecore::EAttribute >();
    m_ExceptionDef__members = ::ecore::make< ::ecore::EReference >();
    m_ExceptionDefEClass = ::ecore::make< ::ecore::EClass >();
    m_Field__identifier = ::ecore::make< ::ecore::EAttribute >();
    m_FieldEClass = ::ecore::make< ::ecore::EClass >();
    m_FixedDef__digits = ::ecore::make< ::ecore::EAttribute >();
    m_FixedDef__scale = ::ecore::make< ::ecore::EAttribute >();
    m_FixedDefEClass = ::ecore::make< ::ecore::EClass >();
    m_IDLType__typeCode = ::ecore::make< ::ecore::EAttribute >();
    m_IDLTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_Include__importURI = ::ecore::make< ::ecore::EAttribute >();
    m_IncludeEClass = ::ecore::make< ::ecore::EClass >();
    m_InterfaceDef__isAbstract = ::ecore::make< ::ecore::EAttribute >();
    m_InterfaceDef__isCustom = ::ecore::make< ::ecore::EAttribute >();
    m_InterfaceDef__isTruncatable = ::ecore::make< ::ecore::EAttribute >();
    m_InterfaceDef__derivesFrom = ::ecore::make< ::ecore::EReference >();
    m_InterfaceDefEClass = ::ecore::make< ::ecore::EClass >();
    m_ModuleDef__prefix = ::ecore::make< ::ecore::EAttribute >();
    m_ModuleDefEClass = ::ecore::make< ::ecore::EClass >();
    m_OperationDef__parameters = ::ecore::make< ::ecore::EReference >();
    m_OperationDef__isOneway = ::ecore::make< ::ecore::EAttribute >();
    m_OperationDef__contexts = ::ecore::make< ::ecore::EAttribute >();
    m_OperationDef__canRaise = ::ecore::make< ::ecore::EReference >();
    m_OperationDefEClass = ::ecore::make< ::ecore::EClass >();
    m_ParameterDef__identifier = ::ecore::make< ::ecore::EAttribute >();
    m_ParameterDef__direction = ::ecore::make< ::ecore::EAttribute >();
    m_ParameterDefEClass = ::ecore::make< ::ecore::EClass >();
    m_ParameterModeEEnum = ::ecore::make< ::ecore::EEnum >();
    m_PrimitiveDef__kind = ::ecore::make< ::ecore::EAttribute >();
    m_PrimitiveDefEClass = ::ecore::make< ::ecore::EClass >();
    m_PrimitiveKindEEnum = ::ecore::make< ::ecore::EEnum >();
    m_SequenceDef__bound = ::ecore::make< ::ecore::EAttribute >();
    m_SequenceDefEClass = ::ecore::make< ::ecore::EClass >();
    m_StringDef__bound = ::ecore::make< ::ecore::EAttribute >();
    m_StringDefEClass = ::ecore::make< ::ecore::EClass >();
    m_StructDef__members = ::ecore::make< ::ecore::EReference >();
    m_StructDefEClass = ::ecore::make< ::ecore::EClass >();
    m_TranslationUnit__contains = ::ecore::make< ::ecore::EReference >();
    m_TranslationUnit__identifier = ::ecore::make< ::ecore::EAttribute >();
    m_TranslationUnit__includes = ::ecore::make< ::ecore::EReference >();
    m_TranslationUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_Typed__containedType = ::ecore::make< ::ecore::EReference >();
    m_Typed__sharedType = ::ecore::make< ::ecore::EReference >();
    m_TypedEClass = ::ecore::make< ::ecore::EClass >();
    m_TypedefDefEClass = ::ecore::make< ::ecore::EClass >();
    m_UnionDef__unionMembers = ::ecore::make< ::ecore::EReference >();
    m_UnionDef__containedDiscrim = ::ecore::make< ::ecore::EReference >();
    m_UnionDef__sharedDiscrim = ::ecore::make< ::ecore::EReference >();
    m_UnionDefEClass = ::ecore::make< ::ecore::EClass >();
    m_UnionField__identifier = ::ecore::make< ::ecore::EAttribute >();
    m_UnionField__label = ::ecore::make< ::ecore::EAttribute >();
    m_UnionFieldEClass = ::ecore::make< ::ecore::EClass >();
    m_WstringDef__bound = ::ecore::make< ::ecore::EAttribute >();
    m_WstringDefEClass = ::ecore::make< ::ecore::EClass >();
}

void IdlmmPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = IdlmmFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Classifier AliasDef
        auto &&classifier = m_AliasDefEClass;

        // ENamedElement
        classifier->setName("AliasDef");

        // EClassifier
        classifier->setClassifierID(ALIASDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature bound of class ArrayDef
        auto &&feature = m_ArrayDef__bound;

        // ENamedElement
        feature->setName("bound");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::ARRAYDEF__BOUND);
        feature->basicsetEContainingClass(m_ArrayDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier ArrayDef
        auto &&classifier = m_ArrayDefEClass;

        // ENamedElement
        classifier->setName("ArrayDef");

        // EClassifier
        classifier->setClassifierID(ARRAYDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ArrayDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ArrayDef__bound);
        }
    }();

    [this]()
    { // Feature getRaises of class AttributeDef
        auto &&feature = m_AttributeDef__getRaises;

        // ENamedElement
        feature->setName("getRaises");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ExceptionDefEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::ATTRIBUTEDEF__GETRAISES);
        feature->basicsetEContainingClass(m_AttributeDefEClass);

        // EReference
        feature->setEReferenceType(m_ExceptionDefEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature setRaises of class AttributeDef
        auto &&feature = m_AttributeDef__setRaises;

        // ENamedElement
        feature->setName("setRaises");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ExceptionDefEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::ATTRIBUTEDEF__SETRAISES);
        feature->basicsetEContainingClass(m_AttributeDefEClass);

        // EReference
        feature->setEReferenceType(m_ExceptionDefEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature isReadonly of class AttributeDef
        auto &&feature = m_AttributeDef__isReadonly;

        // ENamedElement
        feature->setName("isReadonly");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::ATTRIBUTEDEF__ISREADONLY);
        feature->basicsetEContainingClass(m_AttributeDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Classifier AttributeDef
        auto &&classifier = m_AttributeDefEClass;

        // ENamedElement
        classifier->setName("AttributeDef");

        // EClassifier
        classifier->setClassifierID(ATTRIBUTEDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AttributeDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AttributeDef__getRaises);
            eStructuralFeatures.basicAdd(m_AttributeDef__setRaises);
            eStructuralFeatures.basicAdd(m_AttributeDef__isReadonly);
        }
    }();

    [this]()
    { // Feature constValue of class ConstantDef
        auto &&feature = m_ConstantDef__constValue;

        // ENamedElement
        feature->setName("constValue");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EAnyEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::CONSTANTDEF__CONSTVALUE);
        feature->basicsetEContainingClass(m_ConstantDefEClass);

        // EAttribute
        feature->setEAttributeType(m_EAnyEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Classifier ConstantDef
        auto &&classifier = m_ConstantDefEClass;

        // ENamedElement
        classifier->setName("ConstantDef");

        // EClassifier
        classifier->setClassifierID(CONSTANTDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ConstantDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ConstantDef__constValue);
        }
    }();

    [this]()
    { // Feature identifier of class Contained
        auto &&feature = m_Contained__identifier;

        // ENamedElement
        feature->setName("identifier");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::CONTAINED__IDENTIFIER);
        feature->basicsetEContainingClass(m_ContainedEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature repositoryId of class Contained
        auto &&feature = m_Contained__repositoryId;

        // ENamedElement
        feature->setName("repositoryId");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::CONTAINED__REPOSITORYID);
        feature->basicsetEContainingClass(m_ContainedEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature version of class Contained
        auto &&feature = m_Contained__version;

        // ENamedElement
        feature->setName("version");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::CONTAINED__VERSION);
        feature->basicsetEContainingClass(m_ContainedEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature absoluteName of class Contained
        auto &&feature = m_Contained__absoluteName;

        // ENamedElement
        feature->setName("absoluteName");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::CONTAINED__ABSOLUTENAME);
        feature->basicsetEContainingClass(m_ContainedEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature definedIn of class Contained
        auto &&feature = m_Contained__definedIn;

        // ENamedElement
        feature->setName("definedIn");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ContainerEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::CONTAINED__DEFINEDIN);
        feature->basicsetEContainingClass(m_ContainedEClass);

        // EReference
        feature->setEReferenceType(m_ContainerEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_Container__contains);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Contained
        auto &&classifier = m_ContainedEClass;

        // ENamedElement
        classifier->setName("Contained");

        // EClassifier
        classifier->setClassifierID(CONTAINED);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ContainedEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Contained__identifier);
            eStructuralFeatures.basicAdd(m_Contained__repositoryId);
            eStructuralFeatures.basicAdd(m_Contained__version);
            eStructuralFeatures.basicAdd(m_Contained__absoluteName);
            eStructuralFeatures.basicAdd(m_Contained__definedIn);
        }
    }();

    [this]()
    { // Feature contains of class Container
        auto &&feature = m_Container__contains;

        // ENamedElement
        feature->setName("contains");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ContainedEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::CONTAINER__CONTAINS);
        feature->basicsetEContainingClass(m_ContainerEClass);

        // EReference
        feature->setEReferenceType(m_ContainedEClass);
        feature->setContainment(true);
        feature->setEOpposite(m_Contained__definedIn);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Container
        auto &&classifier = m_ContainerEClass;

        // ENamedElement
        classifier->setName("Container");

        // EClassifier
        classifier->setClassifierID(CONTAINER);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ContainerEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Container__contains);
        }
    }();

    [this]()
    { // Classifier EAny
        auto &&classifier = m_EAnyEDataType;

        // ENamedElement
        classifier->setName("EAny");

        // EClassifier
        classifier->setClassifierID(EANY);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature members of class EnumDef
        auto &&feature = m_EnumDef__members;

        // ENamedElement
        feature->setName("members");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::ENUMDEF__MEMBERS);
        feature->basicsetEContainingClass(m_EnumDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier EnumDef
        auto &&classifier = m_EnumDefEClass;

        // ENamedElement
        classifier->setName("EnumDef");

        // EClassifier
        classifier->setClassifierID(ENUMDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EnumDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EnumDef__members);
        }
    }();

    [this]()
    { // Classifier ETypeCode
        auto &&classifier = m_ETypeCodeEDataType;

        // ENamedElement
        classifier->setName("ETypeCode");

        // EClassifier
        classifier->setClassifierID(ETYPECODE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature typeCode of class ExceptionDef
        auto &&feature = m_ExceptionDef__typeCode;

        // ENamedElement
        feature->setName("typeCode");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ETypeCodeEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::EXCEPTIONDEF__TYPECODE);
        feature->basicsetEContainingClass(m_ExceptionDefEClass);

        // EAttribute
        feature->setEAttributeType(m_ETypeCodeEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature members of class ExceptionDef
        auto &&feature = m_ExceptionDef__members;

        // ENamedElement
        feature->setName("members");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_FieldEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::EXCEPTIONDEF__MEMBERS);
        feature->basicsetEContainingClass(m_ExceptionDefEClass);

        // EReference
        feature->setEReferenceType(m_FieldEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ExceptionDef
        auto &&classifier = m_ExceptionDefEClass;

        // ENamedElement
        classifier->setName("ExceptionDef");

        // EClassifier
        classifier->setClassifierID(EXCEPTIONDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExceptionDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ExceptionDef__typeCode);
            eStructuralFeatures.basicAdd(m_ExceptionDef__members);
        }
    }();

    [this]()
    { // Feature identifier of class Field
        auto &&feature = m_Field__identifier;

        // ENamedElement
        feature->setName("identifier");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::FIELD__IDENTIFIER);
        feature->basicsetEContainingClass(m_FieldEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Field
        auto &&classifier = m_FieldEClass;

        // ENamedElement
        classifier->setName("Field");

        // EClassifier
        classifier->setClassifierID(FIELD);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FieldEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Field__identifier);
        }
    }();

    [this]()
    { // Feature digits of class FixedDef
        auto &&feature = m_FixedDef__digits;

        // ENamedElement
        feature->setName("digits");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::FIXEDDEF__DIGITS);
        feature->basicsetEContainingClass(m_FixedDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature scale of class FixedDef
        auto &&feature = m_FixedDef__scale;

        // ENamedElement
        feature->setName("scale");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::FIXEDDEF__SCALE);
        feature->basicsetEContainingClass(m_FixedDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier FixedDef
        auto &&classifier = m_FixedDefEClass;

        // ENamedElement
        classifier->setName("FixedDef");

        // EClassifier
        classifier->setClassifierID(FIXEDDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FixedDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_FixedDef__digits);
            eStructuralFeatures.basicAdd(m_FixedDef__scale);
        }
    }();

    [this]()
    { // Feature typeCode of class IDLType
        auto &&feature = m_IDLType__typeCode;

        // ENamedElement
        feature->setName("typeCode");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ETypeCodeEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::IDLTYPE__TYPECODE);
        feature->basicsetEContainingClass(m_IDLTypeEClass);

        // EAttribute
        feature->setEAttributeType(m_ETypeCodeEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Classifier IDLType
        auto &&classifier = m_IDLTypeEClass;

        // ENamedElement
        classifier->setName("IDLType");

        // EClassifier
        classifier->setClassifierID(IDLTYPE);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_IDLTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_IDLType__typeCode);
        }
    }();

    [this]()
    { // Feature importURI of class Include
        auto &&feature = m_Include__importURI;

        // ENamedElement
        feature->setName("importURI");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::INCLUDE__IMPORTURI);
        feature->basicsetEContainingClass(m_IncludeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Include
        auto &&classifier = m_IncludeEClass;

        // ENamedElement
        classifier->setName("Include");

        // EClassifier
        classifier->setClassifierID(INCLUDE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_IncludeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Include__importURI);
        }
    }();

    [this]()
    { // Feature isAbstract of class InterfaceDef
        auto &&feature = m_InterfaceDef__isAbstract;

        // ENamedElement
        feature->setName("isAbstract");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::INTERFACEDEF__ISABSTRACT);
        feature->basicsetEContainingClass(m_InterfaceDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Feature isCustom of class InterfaceDef
        auto &&feature = m_InterfaceDef__isCustom;

        // ENamedElement
        feature->setName("isCustom");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::INTERFACEDEF__ISCUSTOM);
        feature->basicsetEContainingClass(m_InterfaceDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Feature isTruncatable of class InterfaceDef
        auto &&feature = m_InterfaceDef__isTruncatable;

        // ENamedElement
        feature->setName("isTruncatable");

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

        feature->setFeatureID(
                ::idlmm::IdlmmPackage::INTERFACEDEF__ISTRUNCATABLE);
        feature->basicsetEContainingClass(m_InterfaceDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Feature derivesFrom of class InterfaceDef
        auto &&feature = m_InterfaceDef__derivesFrom;

        // ENamedElement
        feature->setName("derivesFrom");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_InterfaceDefEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::INTERFACEDEF__DERIVESFROM);
        feature->basicsetEContainingClass(m_InterfaceDefEClass);

        // EReference
        feature->setEReferenceType(m_InterfaceDefEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier InterfaceDef
        auto &&classifier = m_InterfaceDefEClass;

        // ENamedElement
        classifier->setName("InterfaceDef");

        // EClassifier
        classifier->setClassifierID(INTERFACEDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_InterfaceDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_InterfaceDef__isAbstract);
            eStructuralFeatures.basicAdd(m_InterfaceDef__isCustom);
            eStructuralFeatures.basicAdd(m_InterfaceDef__isTruncatable);
            eStructuralFeatures.basicAdd(m_InterfaceDef__derivesFrom);
        }
    }();

    [this]()
    { // Feature prefix of class ModuleDef
        auto &&feature = m_ModuleDef__prefix;

        // ENamedElement
        feature->setName("prefix");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::MODULEDEF__PREFIX);
        feature->basicsetEContainingClass(m_ModuleDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier ModuleDef
        auto &&classifier = m_ModuleDefEClass;

        // ENamedElement
        classifier->setName("ModuleDef");

        // EClassifier
        classifier->setClassifierID(MODULEDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ModuleDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ModuleDef__prefix);
        }
    }();

    [this]()
    { // Feature parameters of class OperationDef
        auto &&feature = m_OperationDef__parameters;

        // ENamedElement
        feature->setName("parameters");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ParameterDefEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::OPERATIONDEF__PARAMETERS);
        feature->basicsetEContainingClass(m_OperationDefEClass);

        // EReference
        feature->setEReferenceType(m_ParameterDefEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature isOneway of class OperationDef
        auto &&feature = m_OperationDef__isOneway;

        // ENamedElement
        feature->setName("isOneway");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::OPERATIONDEF__ISONEWAY);
        feature->basicsetEContainingClass(m_OperationDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Feature contexts of class OperationDef
        auto &&feature = m_OperationDef__contexts;

        // ENamedElement
        feature->setName("contexts");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::OPERATIONDEF__CONTEXTS);
        feature->basicsetEContainingClass(m_OperationDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature canRaise of class OperationDef
        auto &&feature = m_OperationDef__canRaise;

        // ENamedElement
        feature->setName("canRaise");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ExceptionDefEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::OPERATIONDEF__CANRAISE);
        feature->basicsetEContainingClass(m_OperationDefEClass);

        // EReference
        feature->setEReferenceType(m_ExceptionDefEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier OperationDef
        auto &&classifier = m_OperationDefEClass;

        // ENamedElement
        classifier->setName("OperationDef");

        // EClassifier
        classifier->setClassifierID(OPERATIONDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_OperationDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_OperationDef__parameters);
            eStructuralFeatures.basicAdd(m_OperationDef__isOneway);
            eStructuralFeatures.basicAdd(m_OperationDef__contexts);
            eStructuralFeatures.basicAdd(m_OperationDef__canRaise);
        }
    }();

    [this]()
    { // Feature identifier of class ParameterDef
        auto &&feature = m_ParameterDef__identifier;

        // ENamedElement
        feature->setName("identifier");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::PARAMETERDEF__IDENTIFIER);
        feature->basicsetEContainingClass(m_ParameterDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature direction of class ParameterDef
        auto &&feature = m_ParameterDef__direction;

        // ENamedElement
        feature->setName("direction");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ParameterModeEEnum);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::PARAMETERDEF__DIRECTION);
        feature->basicsetEContainingClass(m_ParameterDefEClass);

        // EAttribute
        feature->setEAttributeType(m_ParameterModeEEnum);
        feature->setID(false);
    }();

    [this]()
    { // Classifier ParameterDef
        auto &&classifier = m_ParameterDefEClass;

        // ENamedElement
        classifier->setName("ParameterDef");

        // EClassifier
        classifier->setClassifierID(PARAMETERDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ParameterDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ParameterDef__identifier);
            eStructuralFeatures.basicAdd(m_ParameterDef__direction);
        }
    }();

    [this]()
    { // Classifier ParameterMode
        auto &&classifier = m_ParameterModeEEnum;

        // ENamedElement
        classifier->setName("ParameterMode");

        // EClassifier
        classifier->setClassifierID(PARAMETERMODE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature kind of class PrimitiveDef
        auto &&feature = m_PrimitiveDef__kind;

        // ENamedElement
        feature->setName("kind");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PrimitiveKindEEnum);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::PRIMITIVEDEF__KIND);
        feature->basicsetEContainingClass(m_PrimitiveDefEClass);

        // EAttribute
        feature->setEAttributeType(m_PrimitiveKindEEnum);
        feature->setID(false);
    }();

    [this]()
    { // Classifier PrimitiveDef
        auto &&classifier = m_PrimitiveDefEClass;

        // ENamedElement
        classifier->setName("PrimitiveDef");

        // EClassifier
        classifier->setClassifierID(PRIMITIVEDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PrimitiveDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_PrimitiveDef__kind);
        }
    }();

    [this]()
    { // Classifier PrimitiveKind
        auto &&classifier = m_PrimitiveKindEEnum;

        // ENamedElement
        classifier->setName("PrimitiveKind");

        // EClassifier
        classifier->setClassifierID(PRIMITIVEKIND);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature bound of class SequenceDef
        auto &&feature = m_SequenceDef__bound;

        // ENamedElement
        feature->setName("bound");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::SEQUENCEDEF__BOUND);
        feature->basicsetEContainingClass(m_SequenceDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier SequenceDef
        auto &&classifier = m_SequenceDefEClass;

        // ENamedElement
        classifier->setName("SequenceDef");

        // EClassifier
        classifier->setClassifierID(SEQUENCEDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SequenceDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SequenceDef__bound);
        }
    }();

    [this]()
    { // Feature bound of class StringDef
        auto &&feature = m_StringDef__bound;

        // ENamedElement
        feature->setName("bound");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::STRINGDEF__BOUND);
        feature->basicsetEContainingClass(m_StringDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier StringDef
        auto &&classifier = m_StringDefEClass;

        // ENamedElement
        classifier->setName("StringDef");

        // EClassifier
        classifier->setClassifierID(STRINGDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_StringDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_StringDef__bound);
        }
    }();

    [this]()
    { // Feature members of class StructDef
        auto &&feature = m_StructDef__members;

        // ENamedElement
        feature->setName("members");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_FieldEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::STRUCTDEF__MEMBERS);
        feature->basicsetEContainingClass(m_StructDefEClass);

        // EReference
        feature->setEReferenceType(m_FieldEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier StructDef
        auto &&classifier = m_StructDefEClass;

        // ENamedElement
        classifier->setName("StructDef");

        // EClassifier
        classifier->setClassifierID(STRUCTDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_StructDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_StructDef__members);
        }
    }();

    [this]()
    { // Feature contains of class TranslationUnit
        auto &&feature = m_TranslationUnit__contains;

        // ENamedElement
        feature->setName("contains");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ContainedEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::TRANSLATIONUNIT__CONTAINS);
        feature->basicsetEContainingClass(m_TranslationUnitEClass);

        // EReference
        feature->setEReferenceType(m_ContainedEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature identifier of class TranslationUnit
        auto &&feature = m_TranslationUnit__identifier;

        // ENamedElement
        feature->setName("identifier");

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
                ::idlmm::IdlmmPackage::TRANSLATIONUNIT__IDENTIFIER);
        feature->basicsetEContainingClass(m_TranslationUnitEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature includes of class TranslationUnit
        auto &&feature = m_TranslationUnit__includes;

        // ENamedElement
        feature->setName("includes");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_IncludeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::TRANSLATIONUNIT__INCLUDES);
        feature->basicsetEContainingClass(m_TranslationUnitEClass);

        // EReference
        feature->setEReferenceType(m_IncludeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier TranslationUnit
        auto &&classifier = m_TranslationUnitEClass;

        // ENamedElement
        classifier->setName("TranslationUnit");

        // EClassifier
        classifier->setClassifierID(TRANSLATIONUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TranslationUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TranslationUnit__contains);
            eStructuralFeatures.basicAdd(m_TranslationUnit__identifier);
            eStructuralFeatures.basicAdd(m_TranslationUnit__includes);
        }
    }();

    [this]()
    { // Feature containedType of class Typed
        auto &&feature = m_Typed__containedType;

        // ENamedElement
        feature->setName("containedType");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_IDLTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::TYPED__CONTAINEDTYPE);
        feature->basicsetEContainingClass(m_TypedEClass);

        // EReference
        feature->setEReferenceType(m_IDLTypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature sharedType of class Typed
        auto &&feature = m_Typed__sharedType;

        // ENamedElement
        feature->setName("sharedType");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_TypedefDefEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::TYPED__SHAREDTYPE);
        feature->basicsetEContainingClass(m_TypedEClass);

        // EReference
        feature->setEReferenceType(m_TypedefDefEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Typed
        auto &&classifier = m_TypedEClass;

        // ENamedElement
        classifier->setName("Typed");

        // EClassifier
        classifier->setClassifierID(TYPED);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TypedEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Typed__containedType);
            eStructuralFeatures.basicAdd(m_Typed__sharedType);
        }
    }();

    [this]()
    { // Classifier TypedefDef
        auto &&classifier = m_TypedefDefEClass;

        // ENamedElement
        classifier->setName("TypedefDef");

        // EClassifier
        classifier->setClassifierID(TYPEDEFDEF);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature unionMembers of class UnionDef
        auto &&feature = m_UnionDef__unionMembers;

        // ENamedElement
        feature->setName("unionMembers");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_UnionFieldEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::UNIONDEF__UNIONMEMBERS);
        feature->basicsetEContainingClass(m_UnionDefEClass);

        // EReference
        feature->setEReferenceType(m_UnionFieldEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature containedDiscrim of class UnionDef
        auto &&feature = m_UnionDef__containedDiscrim;

        // ENamedElement
        feature->setName("containedDiscrim");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_IDLTypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::idlmm::IdlmmPackage::UNIONDEF__CONTAINEDDISCRIM);
        feature->basicsetEContainingClass(m_UnionDefEClass);

        // EReference
        feature->setEReferenceType(m_IDLTypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature sharedDiscrim of class UnionDef
        auto &&feature = m_UnionDef__sharedDiscrim;

        // ENamedElement
        feature->setName("sharedDiscrim");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_TypedefDefEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::UNIONDEF__SHAREDDISCRIM);
        feature->basicsetEContainingClass(m_UnionDefEClass);

        // EReference
        feature->setEReferenceType(m_TypedefDefEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier UnionDef
        auto &&classifier = m_UnionDefEClass;

        // ENamedElement
        classifier->setName("UnionDef");

        // EClassifier
        classifier->setClassifierID(UNIONDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UnionDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_UnionDef__unionMembers);
            eStructuralFeatures.basicAdd(m_UnionDef__containedDiscrim);
            eStructuralFeatures.basicAdd(m_UnionDef__sharedDiscrim);
        }
    }();

    [this]()
    { // Feature identifier of class UnionField
        auto &&feature = m_UnionField__identifier;

        // ENamedElement
        feature->setName("identifier");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::UNIONFIELD__IDENTIFIER);
        feature->basicsetEContainingClass(m_UnionFieldEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature label of class UnionField
        auto &&feature = m_UnionField__label;

        // ENamedElement
        feature->setName("label");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EAnyEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::idlmm::IdlmmPackage::UNIONFIELD__LABEL);
        feature->basicsetEContainingClass(m_UnionFieldEClass);

        // EAttribute
        feature->setEAttributeType(m_EAnyEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Classifier UnionField
        auto &&classifier = m_UnionFieldEClass;

        // ENamedElement
        classifier->setName("UnionField");

        // EClassifier
        classifier->setClassifierID(UNIONFIELD);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UnionFieldEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_UnionField__identifier);
            eStructuralFeatures.basicAdd(m_UnionField__label);
        }
    }();

    [this]()
    { // Feature bound of class WstringDef
        auto &&feature = m_WstringDef__bound;

        // ENamedElement
        feature->setName("bound");

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

        feature->setFeatureID(::idlmm::IdlmmPackage::WSTRINGDEF__BOUND);
        feature->basicsetEContainingClass(m_WstringDefEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier WstringDef
        auto &&classifier = m_WstringDefEClass;

        // ENamedElement
        classifier->setName("WstringDef");

        // EClassifier
        classifier->setClassifierID(WSTRINGDEF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_WstringDefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_WstringDef__bound);
        }
    }();

    // Initialize package
    setName("idlmm");
    setNsPrefix("idlmm");
    setNsURI("http://idlmm/1.0");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_ContainerEClass->getESuperTypes().push_back(m_ContainedEClass);
        m_InterfaceDefEClass->getESuperTypes().push_back(m_ContainerEClass);
        m_InterfaceDefEClass->getESuperTypes().push_back(m_TypedefDefEClass);
        m_ModuleDefEClass->getESuperTypes().push_back(m_ContainerEClass);
        m_OperationDefEClass->getESuperTypes().push_back(m_ContainedEClass);
        m_OperationDefEClass->getESuperTypes().push_back(m_TypedEClass);
        m_AttributeDefEClass->getESuperTypes().push_back(m_ContainedEClass);
        m_AttributeDefEClass->getESuperTypes().push_back(m_TypedEClass);
        m_ConstantDefEClass->getESuperTypes().push_back(m_ContainedEClass);
        m_ConstantDefEClass->getESuperTypes().push_back(m_TypedEClass);
        m_ParameterDefEClass->getESuperTypes().push_back(m_TypedEClass);
        m_PrimitiveDefEClass->getESuperTypes().push_back(m_IDLTypeEClass);
        m_ExceptionDefEClass->getESuperTypes().push_back(m_ContainedEClass);
        m_FieldEClass->getESuperTypes().push_back(m_TypedEClass);
        m_FixedDefEClass->getESuperTypes().push_back(m_IDLTypeEClass);
        m_WstringDefEClass->getESuperTypes().push_back(m_IDLTypeEClass);
        m_StringDefEClass->getESuperTypes().push_back(m_IDLTypeEClass);
        m_AliasDefEClass->getESuperTypes().push_back(m_TypedEClass);
        m_AliasDefEClass->getESuperTypes().push_back(m_TypedefDefEClass);
        m_ArrayDefEClass->getESuperTypes().push_back(m_TypedEClass);
        m_ArrayDefEClass->getESuperTypes().push_back(m_IDLTypeEClass);
        m_SequenceDefEClass->getESuperTypes().push_back(m_TypedEClass);
        m_SequenceDefEClass->getESuperTypes().push_back(m_IDLTypeEClass);
        m_UnionFieldEClass->getESuperTypes().push_back(m_TypedEClass);
        m_TypedefDefEClass->getESuperTypes().push_back(m_IDLTypeEClass);
        m_TypedefDefEClass->getESuperTypes().push_back(m_ContainedEClass);
        m_UnionDefEClass->getESuperTypes().push_back(m_TypedefDefEClass);
        m_EnumDefEClass->getESuperTypes().push_back(m_TypedefDefEClass);
        m_StructDefEClass->getESuperTypes().push_back(m_TypedefDefEClass);
    }();

    [this]()
    { // EEnum ParameterMode
        auto &&eEnum = m_ParameterModeEEnum;
        { // Literals
            auto &&eLiterals = eEnum->getELiterals();
            { // Literal PARAM_IN
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PARAM_IN");
                _el->setValue(eLiterals.size());
                _el->setLiteral("PARAM_IN");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PARAM_OUT
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PARAM_OUT");
                _el->setValue(1);
                _el->setLiteral("PARAM_OUT");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PARAM_INOUT
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PARAM_INOUT");
                _el->setValue(2);
                _el->setLiteral("PARAM_INOUT");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
        }
    }();

    [this]()
    { // EEnum PrimitiveKind
        auto &&eEnum = m_PrimitiveKindEEnum;
        { // Literals
            auto &&eLiterals = eEnum->getELiterals();
            { // Literal PK_NULL
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_NULL");
                _el->setValue(eLiterals.size());
                _el->setLiteral("PK_NULL");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_VOID
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_VOID");
                _el->setValue(1);
                _el->setLiteral("PK_VOID");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_SHORT
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_SHORT");
                _el->setValue(2);
                _el->setLiteral("PK_SHORT");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_LONG
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_LONG");
                _el->setValue(3);
                _el->setLiteral("PK_LONG");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_USHORT
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_USHORT");
                _el->setValue(4);
                _el->setLiteral("PK_USHORT");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_ULONG
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_ULONG");
                _el->setValue(5);
                _el->setLiteral("PK_ULONG");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_FLOAT
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_FLOAT");
                _el->setValue(6);
                _el->setLiteral("PK_FLOAT");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_DOUBLE
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_DOUBLE");
                _el->setValue(7);
                _el->setLiteral("PK_DOUBLE");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_BOOLEAN
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_BOOLEAN");
                _el->setValue(8);
                _el->setLiteral("PK_BOOLEAN");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_CHAR
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_CHAR");
                _el->setValue(9);
                _el->setLiteral("PK_CHAR");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_OCTET
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_OCTET");
                _el->setValue(10);
                _el->setLiteral("PK_OCTET");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_ANY
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_ANY");
                _el->setValue(11);
                _el->setLiteral("PK_ANY");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_LONGDOUBLE
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_LONGDOUBLE");
                _el->setValue(12);
                _el->setLiteral("PK_LONGDOUBLE");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_WSTRING
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_WSTRING");
                _el->setValue(13);
                _el->setLiteral("PK_WSTRING");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_TYPECODE
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_TYPECODE");
                _el->setValue(14);
                _el->setLiteral("PK_TYPECODE");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_WCHAR
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_WCHAR");
                _el->setValue(15);
                _el->setLiteral("PK_WCHAR");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_PRINCIPAL
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_PRINCIPAL");
                _el->setValue(16);
                _el->setLiteral("PK_PRINCIPAL");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_STRING
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_STRING");
                _el->setValue(17);
                _el->setLiteral("PK_STRING");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_ULONGLONG
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_ULONGLONG");
                _el->setValue(18);
                _el->setLiteral("PK_ULONGLONG");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_OBJREF
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_OBJREF");
                _el->setValue(19);
                _el->setLiteral("PK_OBJREF");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal PK_LONGLONG
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("PK_LONGLONG");
                _el->setValue(20);
                _el->setLiteral("PK_LONGLONG");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
        }
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AliasDefEClass);
        classifiers.push_back(m_ArrayDefEClass);
        classifiers.push_back(m_AttributeDefEClass);
        classifiers.push_back(m_ConstantDefEClass);
        classifiers.push_back(m_ContainedEClass);
        classifiers.push_back(m_ContainerEClass);
        classifiers.push_back(m_EAnyEDataType);
        classifiers.push_back(m_EnumDefEClass);
        classifiers.push_back(m_ETypeCodeEDataType);
        classifiers.push_back(m_ExceptionDefEClass);
        classifiers.push_back(m_FieldEClass);
        classifiers.push_back(m_FixedDefEClass);
        classifiers.push_back(m_IDLTypeEClass);
        classifiers.push_back(m_IncludeEClass);
        classifiers.push_back(m_InterfaceDefEClass);
        classifiers.push_back(m_ModuleDefEClass);
        classifiers.push_back(m_OperationDefEClass);
        classifiers.push_back(m_ParameterDefEClass);
        classifiers.push_back(m_ParameterModeEEnum);
        classifiers.push_back(m_PrimitiveDefEClass);
        classifiers.push_back(m_PrimitiveKindEEnum);
        classifiers.push_back(m_SequenceDefEClass);
        classifiers.push_back(m_StringDefEClass);
        classifiers.push_back(m_StructDefEClass);
        classifiers.push_back(m_TranslationUnitEClass);
        classifiers.push_back(m_TypedEClass);
        classifiers.push_back(m_TypedefDefEClass);
        classifiers.push_back(m_UnionDefEClass);
        classifiers.push_back(m_UnionFieldEClass);
        classifiers.push_back(m_WstringDefEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr IdlmmPackage::getContainer()
{
    return m_ContainerEClass;
}
::ecore::EClass_ptr IdlmmPackage::getContained()
{
    return m_ContainedEClass;
}
::ecore::EClass_ptr IdlmmPackage::getInterfaceDef()
{
    return m_InterfaceDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getModuleDef()
{
    return m_ModuleDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getIDLType()
{
    return m_IDLTypeEClass;
}
::ecore::EClass_ptr IdlmmPackage::getOperationDef()
{
    return m_OperationDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getAttributeDef()
{
    return m_AttributeDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getConstantDef()
{
    return m_ConstantDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getTyped()
{
    return m_TypedEClass;
}
::ecore::EClass_ptr IdlmmPackage::getParameterDef()
{
    return m_ParameterDefEClass;
}
::ecore::EEnum_ptr IdlmmPackage::getParameterMode()
{
    return m_ParameterModeEEnum;
}
::ecore::EClass_ptr IdlmmPackage::getPrimitiveDef()
{
    return m_PrimitiveDefEClass;
}
::ecore::EEnum_ptr IdlmmPackage::getPrimitiveKind()
{
    return m_PrimitiveKindEEnum;
}
::ecore::EClass_ptr IdlmmPackage::getExceptionDef()
{
    return m_ExceptionDefEClass;
}
::ecore::EDataType_ptr IdlmmPackage::getEAny()
{
    return m_EAnyEDataType;
}
::ecore::EDataType_ptr IdlmmPackage::getETypeCode()
{
    return m_ETypeCodeEDataType;
}
::ecore::EClass_ptr IdlmmPackage::getField()
{
    return m_FieldEClass;
}
::ecore::EClass_ptr IdlmmPackage::getFixedDef()
{
    return m_FixedDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getWstringDef()
{
    return m_WstringDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getStringDef()
{
    return m_StringDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getAliasDef()
{
    return m_AliasDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getArrayDef()
{
    return m_ArrayDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getSequenceDef()
{
    return m_SequenceDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getUnionField()
{
    return m_UnionFieldEClass;
}
::ecore::EClass_ptr IdlmmPackage::getTypedefDef()
{
    return m_TypedefDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getUnionDef()
{
    return m_UnionDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getEnumDef()
{
    return m_EnumDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getStructDef()
{
    return m_StructDefEClass;
}
::ecore::EClass_ptr IdlmmPackage::getTranslationUnit()
{
    return m_TranslationUnitEClass;
}
::ecore::EClass_ptr IdlmmPackage::getInclude()
{
    return m_IncludeEClass;
}

::ecore::EReference_ptr IdlmmPackage::getContainer__contains()
{
    return m_Container__contains;
}
::ecore::EAttribute_ptr IdlmmPackage::getContained__identifier()
{
    return m_Contained__identifier;
}
::ecore::EAttribute_ptr IdlmmPackage::getContained__repositoryId()
{
    return m_Contained__repositoryId;
}
::ecore::EAttribute_ptr IdlmmPackage::getContained__version()
{
    return m_Contained__version;
}
::ecore::EAttribute_ptr IdlmmPackage::getContained__absoluteName()
{
    return m_Contained__absoluteName;
}
::ecore::EReference_ptr IdlmmPackage::getContained__definedIn()
{
    return m_Contained__definedIn;
}
::ecore::EAttribute_ptr IdlmmPackage::getInterfaceDef__isAbstract()
{
    return m_InterfaceDef__isAbstract;
}
::ecore::EAttribute_ptr IdlmmPackage::getInterfaceDef__isCustom()
{
    return m_InterfaceDef__isCustom;
}
::ecore::EAttribute_ptr IdlmmPackage::getInterfaceDef__isTruncatable()
{
    return m_InterfaceDef__isTruncatable;
}
::ecore::EReference_ptr IdlmmPackage::getInterfaceDef__derivesFrom()
{
    return m_InterfaceDef__derivesFrom;
}
::ecore::EAttribute_ptr IdlmmPackage::getModuleDef__prefix()
{
    return m_ModuleDef__prefix;
}
::ecore::EAttribute_ptr IdlmmPackage::getIDLType__typeCode()
{
    return m_IDLType__typeCode;
}
::ecore::EReference_ptr IdlmmPackage::getOperationDef__parameters()
{
    return m_OperationDef__parameters;
}
::ecore::EAttribute_ptr IdlmmPackage::getOperationDef__isOneway()
{
    return m_OperationDef__isOneway;
}
::ecore::EAttribute_ptr IdlmmPackage::getOperationDef__contexts()
{
    return m_OperationDef__contexts;
}
::ecore::EReference_ptr IdlmmPackage::getOperationDef__canRaise()
{
    return m_OperationDef__canRaise;
}
::ecore::EReference_ptr IdlmmPackage::getAttributeDef__getRaises()
{
    return m_AttributeDef__getRaises;
}
::ecore::EReference_ptr IdlmmPackage::getAttributeDef__setRaises()
{
    return m_AttributeDef__setRaises;
}
::ecore::EAttribute_ptr IdlmmPackage::getAttributeDef__isReadonly()
{
    return m_AttributeDef__isReadonly;
}
::ecore::EAttribute_ptr IdlmmPackage::getConstantDef__constValue()
{
    return m_ConstantDef__constValue;
}
::ecore::EReference_ptr IdlmmPackage::getTyped__containedType()
{
    return m_Typed__containedType;
}
::ecore::EReference_ptr IdlmmPackage::getTyped__sharedType()
{
    return m_Typed__sharedType;
}
::ecore::EAttribute_ptr IdlmmPackage::getParameterDef__identifier()
{
    return m_ParameterDef__identifier;
}
::ecore::EAttribute_ptr IdlmmPackage::getParameterDef__direction()
{
    return m_ParameterDef__direction;
}
::ecore::EAttribute_ptr IdlmmPackage::getPrimitiveDef__kind()
{
    return m_PrimitiveDef__kind;
}
::ecore::EAttribute_ptr IdlmmPackage::getExceptionDef__typeCode()
{
    return m_ExceptionDef__typeCode;
}
::ecore::EReference_ptr IdlmmPackage::getExceptionDef__members()
{
    return m_ExceptionDef__members;
}
::ecore::EAttribute_ptr IdlmmPackage::getField__identifier()
{
    return m_Field__identifier;
}
::ecore::EAttribute_ptr IdlmmPackage::getFixedDef__digits()
{
    return m_FixedDef__digits;
}
::ecore::EAttribute_ptr IdlmmPackage::getFixedDef__scale()
{
    return m_FixedDef__scale;
}
::ecore::EAttribute_ptr IdlmmPackage::getWstringDef__bound()
{
    return m_WstringDef__bound;
}
::ecore::EAttribute_ptr IdlmmPackage::getStringDef__bound()
{
    return m_StringDef__bound;
}
::ecore::EAttribute_ptr IdlmmPackage::getArrayDef__bound()
{
    return m_ArrayDef__bound;
}
::ecore::EAttribute_ptr IdlmmPackage::getSequenceDef__bound()
{
    return m_SequenceDef__bound;
}
::ecore::EAttribute_ptr IdlmmPackage::getUnionField__identifier()
{
    return m_UnionField__identifier;
}
::ecore::EAttribute_ptr IdlmmPackage::getUnionField__label()
{
    return m_UnionField__label;
}
::ecore::EReference_ptr IdlmmPackage::getUnionDef__unionMembers()
{
    return m_UnionDef__unionMembers;
}
::ecore::EReference_ptr IdlmmPackage::getUnionDef__containedDiscrim()
{
    return m_UnionDef__containedDiscrim;
}
::ecore::EReference_ptr IdlmmPackage::getUnionDef__sharedDiscrim()
{
    return m_UnionDef__sharedDiscrim;
}
::ecore::EAttribute_ptr IdlmmPackage::getEnumDef__members()
{
    return m_EnumDef__members;
}
::ecore::EReference_ptr IdlmmPackage::getStructDef__members()
{
    return m_StructDef__members;
}
::ecore::EReference_ptr IdlmmPackage::getTranslationUnit__contains()
{
    return m_TranslationUnit__contains;
}
::ecore::EAttribute_ptr IdlmmPackage::getTranslationUnit__identifier()
{
    return m_TranslationUnit__identifier;
}
::ecore::EReference_ptr IdlmmPackage::getTranslationUnit__includes()
{
    return m_TranslationUnit__includes;
}
::ecore::EAttribute_ptr IdlmmPackage::getInclude__importURI()
{
    return m_Include__importURI;
}

