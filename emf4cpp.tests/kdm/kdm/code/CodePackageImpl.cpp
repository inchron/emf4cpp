// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/CodePackageImpl.cpp
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

#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeFactory.hpp>
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
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/core/CorePackage.hpp>
#include <kdm/source/SourcePackage.hpp>
#include <kdm/action/ActionPackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/action/EntryFlow.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/core/KDMEntity.hpp>

using namespace ::kdm::code;

CodePackage::CodePackage()
{
    m_AbstractCodeElement__source = ::ecore::make< ::ecore::EReference >();
    m_AbstractCodeElement__comment = ::ecore::make< ::ecore::EReference >();
    m_AbstractCodeElement__codeRelation =
            ::ecore::make< ::ecore::EReference >();
    m_AbstractCodeElementEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractCodeRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_ArrayType__size = ::ecore::make< ::ecore::EAttribute >();
    m_ArrayType__indexUnit = ::ecore::make< ::ecore::EReference >();
    m_ArrayTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_BagType__size = ::ecore::make< ::ecore::EAttribute >();
    m_BagTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_BitstringTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_BitTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_BooleanTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_CallableKindEEnum = ::ecore::make< ::ecore::EEnum >();
    m_CallableUnit__kind = ::ecore::make< ::ecore::EAttribute >();
    m_CallableUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_CharTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_ChoiceTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_ClassUnit__isAbstract = ::ecore::make< ::ecore::EAttribute >();
    m_ClassUnit__codeElement = ::ecore::make< ::ecore::EReference >();
    m_ClassUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_CodeAssemblyEClass = ::ecore::make< ::ecore::EClass >();
    m_CodeElementEClass = ::ecore::make< ::ecore::EClass >();
    m_CodeItemEClass = ::ecore::make< ::ecore::EClass >();
    m_CodeModel__codeElement = ::ecore::make< ::ecore::EReference >();
    m_CodeModelEClass = ::ecore::make< ::ecore::EClass >();
    m_CodeRelationship__to = ::ecore::make< ::ecore::EReference >();
    m_CodeRelationship__from = ::ecore::make< ::ecore::EReference >();
    m_CodeRelationshipEClass = ::ecore::make< ::ecore::EClass >();
    m_CommentUnit__text = ::ecore::make< ::ecore::EAttribute >();
    m_CommentUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_CompilationUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_CompositeType__itemUnit = ::ecore::make< ::ecore::EReference >();
    m_CompositeTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_ComputationalObjectEClass = ::ecore::make< ::ecore::EClass >();
    m_ConditionalDirectiveEClass = ::ecore::make< ::ecore::EClass >();
    m_ControlElement__type = ::ecore::make< ::ecore::EReference >();
    m_ControlElement__entryFlow = ::ecore::make< ::ecore::EReference >();
    m_ControlElement__codeElement = ::ecore::make< ::ecore::EReference >();
    m_ControlElementEClass = ::ecore::make< ::ecore::EClass >();
    m_DataElement__type = ::ecore::make< ::ecore::EReference >();
    m_DataElement__ext = ::ecore::make< ::ecore::EAttribute >();
    m_DataElement__size = ::ecore::make< ::ecore::EAttribute >();
    m_DataElement__codeElement = ::ecore::make< ::ecore::EReference >();
    m_DataElementEClass = ::ecore::make< ::ecore::EClass >();
    m_DatatypeEClass = ::ecore::make< ::ecore::EClass >();
    m_DateTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_DecimalTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_DefinedType__type = ::ecore::make< ::ecore::EReference >();
    m_DefinedType__codeElement = ::ecore::make< ::ecore::EReference >();
    m_DefinedTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_DerivedType__itemUnit = ::ecore::make< ::ecore::EReference >();
    m_DerivedTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_EnumeratedType__value = ::ecore::make< ::ecore::EReference >();
    m_EnumeratedTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_Expands__to = ::ecore::make< ::ecore::EReference >();
    m_Expands__from = ::ecore::make< ::ecore::EReference >();
    m_ExpandsEClass = ::ecore::make< ::ecore::EClass >();
    m_ExportKindEEnum = ::ecore::make< ::ecore::EEnum >();
    m_Extends__to = ::ecore::make< ::ecore::EReference >();
    m_Extends__from = ::ecore::make< ::ecore::EReference >();
    m_ExtendsEClass = ::ecore::make< ::ecore::EClass >();
    m_FloatTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_GeneratedFrom__to = ::ecore::make< ::ecore::EReference >();
    m_GeneratedFrom__from = ::ecore::make< ::ecore::EReference >();
    m_GeneratedFromEClass = ::ecore::make< ::ecore::EClass >();
    m_HasType__to = ::ecore::make< ::ecore::EReference >();
    m_HasType__from = ::ecore::make< ::ecore::EReference >();
    m_HasTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_HasValue__to = ::ecore::make< ::ecore::EReference >();
    m_HasValue__from = ::ecore::make< ::ecore::EReference >();
    m_HasValueEClass = ::ecore::make< ::ecore::EClass >();
    m_ImplementationOf__to = ::ecore::make< ::ecore::EReference >();
    m_ImplementationOf__from = ::ecore::make< ::ecore::EReference >();
    m_ImplementationOfEClass = ::ecore::make< ::ecore::EClass >();
    m_Implements__to = ::ecore::make< ::ecore::EReference >();
    m_Implements__from = ::ecore::make< ::ecore::EReference >();
    m_ImplementsEClass = ::ecore::make< ::ecore::EClass >();
    m_Imports__to = ::ecore::make< ::ecore::EReference >();
    m_Imports__from = ::ecore::make< ::ecore::EReference >();
    m_ImportsEClass = ::ecore::make< ::ecore::EClass >();
    m_IncludeDirectiveEClass = ::ecore::make< ::ecore::EClass >();
    m_Includes__to = ::ecore::make< ::ecore::EReference >();
    m_Includes__from = ::ecore::make< ::ecore::EReference >();
    m_IncludesEClass = ::ecore::make< ::ecore::EClass >();
    m_IndexUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_InstanceOf__to = ::ecore::make< ::ecore::EReference >();
    m_InstanceOf__from = ::ecore::make< ::ecore::EReference >();
    m_InstanceOfEClass = ::ecore::make< ::ecore::EClass >();
    m_IntegerTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_InterfaceUnit__codeElement = ::ecore::make< ::ecore::EReference >();
    m_InterfaceUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_ItemUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_LanguageUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_MacroDirectiveEClass = ::ecore::make< ::ecore::EClass >();
    m_MacroKindEEnum = ::ecore::make< ::ecore::EEnum >();
    m_MacroUnit__kind = ::ecore::make< ::ecore::EAttribute >();
    m_MacroUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_MemberUnit__export = ::ecore::make< ::ecore::EAttribute >();
    m_MemberUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_MethodKindEEnum = ::ecore::make< ::ecore::EEnum >();
    m_MethodUnit__kind = ::ecore::make< ::ecore::EAttribute >();
    m_MethodUnit__export = ::ecore::make< ::ecore::EAttribute >();
    m_MethodUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_Module__codeElement = ::ecore::make< ::ecore::EReference >();
    m_ModuleEClass = ::ecore::make< ::ecore::EClass >();
    m_NamespaceUnit__groupedCode = ::ecore::make< ::ecore::EReference >();
    m_NamespaceUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_OctetstringTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_OctetTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_OrdinalTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_PackageEClass = ::ecore::make< ::ecore::EClass >();
    m_ParameterKindEEnum = ::ecore::make< ::ecore::EEnum >();
    m_ParameterTo__to = ::ecore::make< ::ecore::EReference >();
    m_ParameterTo__from = ::ecore::make< ::ecore::EReference >();
    m_ParameterToEClass = ::ecore::make< ::ecore::EClass >();
    m_ParameterUnit__kind = ::ecore::make< ::ecore::EAttribute >();
    m_ParameterUnit__pos = ::ecore::make< ::ecore::EAttribute >();
    m_ParameterUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_PointerTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_PreprocessorDirective__codeElement =
            ::ecore::make< ::ecore::EReference >();
    m_PreprocessorDirectiveEClass = ::ecore::make< ::ecore::EClass >();
    m_PrimitiveTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_RangeType__lower = ::ecore::make< ::ecore::EAttribute >();
    m_RangeType__upper = ::ecore::make< ::ecore::EAttribute >();
    m_RangeTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_RecordTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_Redefines__to = ::ecore::make< ::ecore::EReference >();
    m_Redefines__from = ::ecore::make< ::ecore::EReference >();
    m_RedefinesEClass = ::ecore::make< ::ecore::EClass >();
    m_ScaledTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_SequenceType__size = ::ecore::make< ::ecore::EAttribute >();
    m_SequenceTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_SetType__size = ::ecore::make< ::ecore::EAttribute >();
    m_SetTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_SharedUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_Signature__parameterUnit = ::ecore::make< ::ecore::EReference >();
    m_SignatureEClass = ::ecore::make< ::ecore::EClass >();
    m_StorableKindEEnum = ::ecore::make< ::ecore::EEnum >();
    m_StorableUnit__kind = ::ecore::make< ::ecore::EAttribute >();
    m_StorableUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_StringTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_SynonymTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_TemplateParameterEClass = ::ecore::make< ::ecore::EClass >();
    m_TemplateTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_TemplateUnit__codeElement = ::ecore::make< ::ecore::EReference >();
    m_TemplateUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_TimeTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_TypeUnitEClass = ::ecore::make< ::ecore::EClass >();
    m_ValueEClass = ::ecore::make< ::ecore::EClass >();
    m_ValueElementEClass = ::ecore::make< ::ecore::EClass >();
    m_ValueList__valueElement = ::ecore::make< ::ecore::EReference >();
    m_ValueListEClass = ::ecore::make< ::ecore::EClass >();
    m_VariantTo__to = ::ecore::make< ::ecore::EReference >();
    m_VariantTo__from = ::ecore::make< ::ecore::EReference >();
    m_VariantToEClass = ::ecore::make< ::ecore::EClass >();
    m_VisibleIn__to = ::ecore::make< ::ecore::EReference >();
    m_VisibleIn__from = ::ecore::make< ::ecore::EReference >();
    m_VisibleInEClass = ::ecore::make< ::ecore::EClass >();
    m_VoidTypeEClass = ::ecore::make< ::ecore::EClass >();
}

void CodePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = CodeFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature source of class AbstractCodeElement
        auto &&feature = m_AbstractCodeElement__source;

        // ENamedElement
        feature->setName("source");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::kdm::source::SourcePackage::_instance()->getSourceRef());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__SOURCE);
        feature->basicsetEContainingClass(m_AbstractCodeElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::source::SourcePackage::_instance()->getSourceRef());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature comment of class AbstractCodeElement
        auto &&feature = m_AbstractCodeElement__comment;

        // ENamedElement
        feature->setName("comment");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CommentUnitEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__COMMENT);
        feature->basicsetEContainingClass(m_AbstractCodeElementEClass);

        // EReference
        feature->setEReferenceType(m_CommentUnitEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature codeRelation of class AbstractCodeElement
        auto &&feature = m_AbstractCodeElement__codeRelation;

        // ENamedElement
        feature->setName("codeRelation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractCodeRelationshipEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::ABSTRACTCODEELEMENT__CODERELATION);
        feature->basicsetEContainingClass(m_AbstractCodeElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractCodeRelationshipEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractCodeElement
        auto &&classifier = m_AbstractCodeElementEClass;

        // ENamedElement
        classifier->setName("AbstractCodeElement");

        // EClassifier
        classifier->setClassifierID(ABSTRACTCODEELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractCodeElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AbstractCodeElement__source);
            eStructuralFeatures.basicAdd(m_AbstractCodeElement__comment);
            eStructuralFeatures.basicAdd(m_AbstractCodeElement__codeRelation);
        }
    }();

    [this]()
    { // Classifier AbstractCodeRelationship
        auto &&classifier = m_AbstractCodeRelationshipEClass;

        // ENamedElement
        classifier->setName("AbstractCodeRelationship");

        // EClassifier
        classifier->setClassifierID(ABSTRACTCODERELATIONSHIP);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature size of class ArrayType
        auto &&feature = m_ArrayType__size;

        // ENamedElement
        feature->setName("size");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::ARRAYTYPE__SIZE);
        feature->basicsetEContainingClass(m_ArrayTypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Feature indexUnit of class ArrayType
        auto &&feature = m_ArrayType__indexUnit;

        // ENamedElement
        feature->setName("indexUnit");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_IndexUnitEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::ARRAYTYPE__INDEXUNIT);
        feature->basicsetEContainingClass(m_ArrayTypeEClass);

        // EReference
        feature->setEReferenceType(m_IndexUnitEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ArrayType
        auto &&classifier = m_ArrayTypeEClass;

        // ENamedElement
        classifier->setName("ArrayType");

        // EClassifier
        classifier->setClassifierID(ARRAYTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ArrayTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ArrayType__size);
            eStructuralFeatures.basicAdd(m_ArrayType__indexUnit);
        }
    }();

    [this]()
    { // Feature size of class BagType
        auto &&feature = m_BagType__size;

        // ENamedElement
        feature->setName("size");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::BAGTYPE__SIZE);
        feature->basicsetEContainingClass(m_BagTypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Classifier BagType
        auto &&classifier = m_BagTypeEClass;

        // ENamedElement
        classifier->setName("BagType");

        // EClassifier
        classifier->setClassifierID(BAGTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BagTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_BagType__size);
        }
    }();

    [this]()
    { // Classifier BitstringType
        auto &&classifier = m_BitstringTypeEClass;

        // ENamedElement
        classifier->setName("BitstringType");

        // EClassifier
        classifier->setClassifierID(BITSTRINGTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier BitType
        auto &&classifier = m_BitTypeEClass;

        // ENamedElement
        classifier->setName("BitType");

        // EClassifier
        classifier->setClassifierID(BITTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier BooleanType
        auto &&classifier = m_BooleanTypeEClass;

        // ENamedElement
        classifier->setName("BooleanType");

        // EClassifier
        classifier->setClassifierID(BOOLEANTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier CallableKind
        auto &&classifier = m_CallableKindEEnum;

        // ENamedElement
        classifier->setName("CallableKind");

        // EClassifier
        classifier->setClassifierID(CALLABLEKIND);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature kind of class CallableUnit
        auto &&feature = m_CallableUnit__kind;

        // ENamedElement
        feature->setName("kind");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CallableKindEEnum);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::CALLABLEUNIT__KIND);
        feature->basicsetEContainingClass(m_CallableUnitEClass);

        // EAttribute
        feature->setEAttributeType(m_CallableKindEEnum);
        feature->setID(false);
    }();

    [this]()
    { // Classifier CallableUnit
        auto &&classifier = m_CallableUnitEClass;

        // ENamedElement
        classifier->setName("CallableUnit");

        // EClassifier
        classifier->setClassifierID(CALLABLEUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CallableUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_CallableUnit__kind);
        }
    }();

    [this]()
    { // Classifier CharType
        auto &&classifier = m_CharTypeEClass;

        // ENamedElement
        classifier->setName("CharType");

        // EClassifier
        classifier->setClassifierID(CHARTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier ChoiceType
        auto &&classifier = m_ChoiceTypeEClass;

        // ENamedElement
        classifier->setName("ChoiceType");

        // EClassifier
        classifier->setClassifierID(CHOICETYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature isAbstract of class ClassUnit
        auto &&feature = m_ClassUnit__isAbstract;

        // ENamedElement
        feature->setName("isAbstract");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getBoolean());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::CLASSUNIT__ISABSTRACT);
        feature->basicsetEContainingClass(m_ClassUnitEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Feature codeElement of class ClassUnit
        auto &&feature = m_ClassUnit__codeElement;

        // ENamedElement
        feature->setName("codeElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::CLASSUNIT__CODEELEMENT);
        feature->basicsetEContainingClass(m_ClassUnitEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ClassUnit
        auto &&classifier = m_ClassUnitEClass;

        // ENamedElement
        classifier->setName("ClassUnit");

        // EClassifier
        classifier->setClassifierID(CLASSUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ClassUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ClassUnit__isAbstract);
            eStructuralFeatures.basicAdd(m_ClassUnit__codeElement);
        }
    }();

    [this]()
    { // Classifier CodeAssembly
        auto &&classifier = m_CodeAssemblyEClass;

        // ENamedElement
        classifier->setName("CodeAssembly");

        // EClassifier
        classifier->setClassifierID(CODEASSEMBLY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier CodeElement
        auto &&classifier = m_CodeElementEClass;

        // ENamedElement
        classifier->setName("CodeElement");

        // EClassifier
        classifier->setClassifierID(CODEELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier CodeItem
        auto &&classifier = m_CodeItemEClass;

        // ENamedElement
        classifier->setName("CodeItem");

        // EClassifier
        classifier->setClassifierID(CODEITEM);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature codeElement of class CodeModel
        auto &&feature = m_CodeModel__codeElement;

        // ENamedElement
        feature->setName("codeElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractCodeElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::CODEMODEL__CODEELEMENT);
        feature->basicsetEContainingClass(m_CodeModelEClass);

        // EReference
        feature->setEReferenceType(m_AbstractCodeElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier CodeModel
        auto &&classifier = m_CodeModelEClass;

        // ENamedElement
        classifier->setName("CodeModel");

        // EClassifier
        classifier->setClassifierID(CODEMODEL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CodeModelEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_CodeModel__codeElement);
        }
    }();

    [this]()
    { // Feature to of class CodeRelationship
        auto &&feature = m_CodeRelationship__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::CODERELATIONSHIP__TO);
        feature->basicsetEContainingClass(m_CodeRelationshipEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class CodeRelationship
        auto &&feature = m_CodeRelationship__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::CODERELATIONSHIP__FROM);
        feature->basicsetEContainingClass(m_CodeRelationshipEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier CodeRelationship
        auto &&classifier = m_CodeRelationshipEClass;

        // ENamedElement
        classifier->setName("CodeRelationship");

        // EClassifier
        classifier->setClassifierID(CODERELATIONSHIP);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CodeRelationshipEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_CodeRelationship__to);
            eStructuralFeatures.basicAdd(m_CodeRelationship__from);
        }
    }();

    [this]()
    { // Feature text of class CommentUnit
        auto &&feature = m_CommentUnit__text;

        // ENamedElement
        feature->setName("text");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::COMMENTUNIT__TEXT);
        feature->basicsetEContainingClass(m_CommentUnitEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier CommentUnit
        auto &&classifier = m_CommentUnitEClass;

        // ENamedElement
        classifier->setName("CommentUnit");

        // EClassifier
        classifier->setClassifierID(COMMENTUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CommentUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_CommentUnit__text);
        }
    }();

    [this]()
    { // Classifier CompilationUnit
        auto &&classifier = m_CompilationUnitEClass;

        // ENamedElement
        classifier->setName("CompilationUnit");

        // EClassifier
        classifier->setClassifierID(COMPILATIONUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature itemUnit of class CompositeType
        auto &&feature = m_CompositeType__itemUnit;

        // ENamedElement
        feature->setName("itemUnit");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ItemUnitEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::COMPOSITETYPE__ITEMUNIT);
        feature->basicsetEContainingClass(m_CompositeTypeEClass);

        // EReference
        feature->setEReferenceType(m_ItemUnitEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier CompositeType
        auto &&classifier = m_CompositeTypeEClass;

        // ENamedElement
        classifier->setName("CompositeType");

        // EClassifier
        classifier->setClassifierID(COMPOSITETYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CompositeTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_CompositeType__itemUnit);
        }
    }();

    [this]()
    { // Classifier ComputationalObject
        auto &&classifier = m_ComputationalObjectEClass;

        // ENamedElement
        classifier->setName("ComputationalObject");

        // EClassifier
        classifier->setClassifierID(COMPUTATIONALOBJECT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier ConditionalDirective
        auto &&classifier = m_ConditionalDirectiveEClass;

        // ENamedElement
        classifier->setName("ConditionalDirective");

        // EClassifier
        classifier->setClassifierID(CONDITIONALDIRECTIVE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature type of class ControlElement
        auto &&feature = m_ControlElement__type;

        // ENamedElement
        feature->setName("type");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DatatypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::CONTROLELEMENT__TYPE);
        feature->basicsetEContainingClass(m_ControlElementEClass);

        // EReference
        feature->setEReferenceType(m_DatatypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature entryFlow of class ControlElement
        auto &&feature = m_ControlElement__entryFlow;

        // ENamedElement
        feature->setName("entryFlow");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::kdm::action::ActionPackage::_instance()->getEntryFlow());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::CONTROLELEMENT__ENTRYFLOW);
        feature->basicsetEContainingClass(m_ControlElementEClass);

        // EReference
        feature->setEReferenceType(
                ::kdm::action::ActionPackage::_instance()->getEntryFlow());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature codeElement of class ControlElement
        auto &&feature = m_ControlElement__codeElement;

        // ENamedElement
        feature->setName("codeElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractCodeElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::CONTROLELEMENT__CODEELEMENT);
        feature->basicsetEContainingClass(m_ControlElementEClass);

        // EReference
        feature->setEReferenceType(m_AbstractCodeElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ControlElement
        auto &&classifier = m_ControlElementEClass;

        // ENamedElement
        classifier->setName("ControlElement");

        // EClassifier
        classifier->setClassifierID(CONTROLELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ControlElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ControlElement__type);
            eStructuralFeatures.basicAdd(m_ControlElement__entryFlow);
            eStructuralFeatures.basicAdd(m_ControlElement__codeElement);
        }
    }();

    [this]()
    { // Feature type of class DataElement
        auto &&feature = m_DataElement__type;

        // ENamedElement
        feature->setName("type");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DatatypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::DATAELEMENT__TYPE);
        feature->basicsetEContainingClass(m_DataElementEClass);

        // EReference
        feature->setEReferenceType(m_DatatypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature ext of class DataElement
        auto &&feature = m_DataElement__ext;

        // ENamedElement
        feature->setName("ext");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::DATAELEMENT__EXT);
        feature->basicsetEContainingClass(m_DataElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature size of class DataElement
        auto &&feature = m_DataElement__size;

        // ENamedElement
        feature->setName("size");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::DATAELEMENT__SIZE);
        feature->basicsetEContainingClass(m_DataElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Feature codeElement of class DataElement
        auto &&feature = m_DataElement__codeElement;

        // ENamedElement
        feature->setName("codeElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DatatypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::DATAELEMENT__CODEELEMENT);
        feature->basicsetEContainingClass(m_DataElementEClass);

        // EReference
        feature->setEReferenceType(m_DatatypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DataElement
        auto &&classifier = m_DataElementEClass;

        // ENamedElement
        classifier->setName("DataElement");

        // EClassifier
        classifier->setClassifierID(DATAELEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DataElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DataElement__type);
            eStructuralFeatures.basicAdd(m_DataElement__ext);
            eStructuralFeatures.basicAdd(m_DataElement__size);
            eStructuralFeatures.basicAdd(m_DataElement__codeElement);
        }
    }();

    [this]()
    { // Classifier Datatype
        auto &&classifier = m_DatatypeEClass;

        // ENamedElement
        classifier->setName("Datatype");

        // EClassifier
        classifier->setClassifierID(DATATYPE);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier DateType
        auto &&classifier = m_DateTypeEClass;

        // ENamedElement
        classifier->setName("DateType");

        // EClassifier
        classifier->setClassifierID(DATETYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier DecimalType
        auto &&classifier = m_DecimalTypeEClass;

        // ENamedElement
        classifier->setName("DecimalType");

        // EClassifier
        classifier->setClassifierID(DECIMALTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature type of class DefinedType
        auto &&feature = m_DefinedType__type;

        // ENamedElement
        feature->setName("type");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DatatypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::DEFINEDTYPE__TYPE);
        feature->basicsetEContainingClass(m_DefinedTypeEClass);

        // EReference
        feature->setEReferenceType(m_DatatypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature codeElement of class DefinedType
        auto &&feature = m_DefinedType__codeElement;

        // ENamedElement
        feature->setName("codeElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DatatypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::DEFINEDTYPE__CODEELEMENT);
        feature->basicsetEContainingClass(m_DefinedTypeEClass);

        // EReference
        feature->setEReferenceType(m_DatatypeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DefinedType
        auto &&classifier = m_DefinedTypeEClass;

        // ENamedElement
        classifier->setName("DefinedType");

        // EClassifier
        classifier->setClassifierID(DEFINEDTYPE);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DefinedTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DefinedType__type);
            eStructuralFeatures.basicAdd(m_DefinedType__codeElement);
        }
    }();

    [this]()
    { // Feature itemUnit of class DerivedType
        auto &&feature = m_DerivedType__itemUnit;

        // ENamedElement
        feature->setName("itemUnit");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ItemUnitEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::DERIVEDTYPE__ITEMUNIT);
        feature->basicsetEContainingClass(m_DerivedTypeEClass);

        // EReference
        feature->setEReferenceType(m_ItemUnitEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DerivedType
        auto &&classifier = m_DerivedTypeEClass;

        // ENamedElement
        classifier->setName("DerivedType");

        // EClassifier
        classifier->setClassifierID(DERIVEDTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DerivedTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DerivedType__itemUnit);
        }
    }();

    [this]()
    { // Feature value of class EnumeratedType
        auto &&feature = m_EnumeratedType__value;

        // ENamedElement
        feature->setName("value");

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

        feature->setFeatureID(::kdm::code::CodePackage::ENUMERATEDTYPE__VALUE);
        feature->basicsetEContainingClass(m_EnumeratedTypeEClass);

        // EReference
        feature->setEReferenceType(m_ValueEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier EnumeratedType
        auto &&classifier = m_EnumeratedTypeEClass;

        // ENamedElement
        classifier->setName("EnumeratedType");

        // EClassifier
        classifier->setClassifierID(ENUMERATEDTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EnumeratedTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_EnumeratedType__value);
        }
    }();

    [this]()
    { // Feature to of class Expands
        auto &&feature = m_Expands__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PreprocessorDirectiveEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::EXPANDS__TO);
        feature->basicsetEContainingClass(m_ExpandsEClass);

        // EReference
        feature->setEReferenceType(m_PreprocessorDirectiveEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Expands
        auto &&feature = m_Expands__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PreprocessorDirectiveEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::EXPANDS__FROM);
        feature->basicsetEContainingClass(m_ExpandsEClass);

        // EReference
        feature->setEReferenceType(m_PreprocessorDirectiveEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Expands
        auto &&classifier = m_ExpandsEClass;

        // ENamedElement
        classifier->setName("Expands");

        // EClassifier
        classifier->setClassifierID(EXPANDS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExpandsEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Expands__to);
            eStructuralFeatures.basicAdd(m_Expands__from);
        }
    }();

    [this]()
    { // Classifier ExportKind
        auto &&classifier = m_ExportKindEEnum;

        // ENamedElement
        classifier->setName("ExportKind");

        // EClassifier
        classifier->setClassifierID(EXPORTKIND);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature to of class Extends
        auto &&feature = m_Extends__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DatatypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::EXTENDS__TO);
        feature->basicsetEContainingClass(m_ExtendsEClass);

        // EReference
        feature->setEReferenceType(m_DatatypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Extends
        auto &&feature = m_Extends__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DatatypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::EXTENDS__FROM);
        feature->basicsetEContainingClass(m_ExtendsEClass);

        // EReference
        feature->setEReferenceType(m_DatatypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Extends
        auto &&classifier = m_ExtendsEClass;

        // ENamedElement
        classifier->setName("Extends");

        // EClassifier
        classifier->setClassifierID(EXTENDS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExtendsEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Extends__to);
            eStructuralFeatures.basicAdd(m_Extends__from);
        }
    }();

    [this]()
    { // Classifier FloatType
        auto &&classifier = m_FloatTypeEClass;

        // ENamedElement
        classifier->setName("FloatType");

        // EClassifier
        classifier->setClassifierID(FLOATTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class GeneratedFrom
        auto &&feature = m_GeneratedFrom__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PreprocessorDirectiveEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::GENERATEDFROM__TO);
        feature->basicsetEContainingClass(m_GeneratedFromEClass);

        // EReference
        feature->setEReferenceType(m_PreprocessorDirectiveEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class GeneratedFrom
        auto &&feature = m_GeneratedFrom__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractCodeElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::GENERATEDFROM__FROM);
        feature->basicsetEContainingClass(m_GeneratedFromEClass);

        // EReference
        feature->setEReferenceType(m_AbstractCodeElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier GeneratedFrom
        auto &&classifier = m_GeneratedFromEClass;

        // ENamedElement
        classifier->setName("GeneratedFrom");

        // EClassifier
        classifier->setClassifierID(GENERATEDFROM);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_GeneratedFromEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_GeneratedFrom__to);
            eStructuralFeatures.basicAdd(m_GeneratedFrom__from);
        }
    }();

    [this]()
    { // Feature to of class HasType
        auto &&feature = m_HasType__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DatatypeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::HASTYPE__TO);
        feature->basicsetEContainingClass(m_HasTypeEClass);

        // EReference
        feature->setEReferenceType(m_DatatypeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class HasType
        auto &&feature = m_HasType__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::HASTYPE__FROM);
        feature->basicsetEContainingClass(m_HasTypeEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier HasType
        auto &&classifier = m_HasTypeEClass;

        // ENamedElement
        classifier->setName("HasType");

        // EClassifier
        classifier->setClassifierID(HASTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_HasTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_HasType__to);
            eStructuralFeatures.basicAdd(m_HasType__from);
        }
    }();

    [this]()
    { // Feature to of class HasValue
        auto &&feature = m_HasValue__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::HASVALUE__TO);
        feature->basicsetEContainingClass(m_HasValueEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class HasValue
        auto &&feature = m_HasValue__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::HASVALUE__FROM);
        feature->basicsetEContainingClass(m_HasValueEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier HasValue
        auto &&classifier = m_HasValueEClass;

        // ENamedElement
        classifier->setName("HasValue");

        // EClassifier
        classifier->setClassifierID(HASVALUE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_HasValueEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_HasValue__to);
            eStructuralFeatures.basicAdd(m_HasValue__from);
        }
    }();

    [this]()
    { // Feature to of class ImplementationOf
        auto &&feature = m_ImplementationOf__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::IMPLEMENTATIONOF__TO);
        feature->basicsetEContainingClass(m_ImplementationOfEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ImplementationOf
        auto &&feature = m_ImplementationOf__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::IMPLEMENTATIONOF__FROM);
        feature->basicsetEContainingClass(m_ImplementationOfEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ImplementationOf
        auto &&classifier = m_ImplementationOfEClass;

        // ENamedElement
        classifier->setName("ImplementationOf");

        // EClassifier
        classifier->setClassifierID(IMPLEMENTATIONOF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ImplementationOfEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ImplementationOf__to);
            eStructuralFeatures.basicAdd(m_ImplementationOf__from);
        }
    }();

    [this]()
    { // Feature to of class Implements
        auto &&feature = m_Implements__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::IMPLEMENTS__TO);
        feature->basicsetEContainingClass(m_ImplementsEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Implements
        auto &&feature = m_Implements__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::IMPLEMENTS__FROM);
        feature->basicsetEContainingClass(m_ImplementsEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Implements
        auto &&classifier = m_ImplementsEClass;

        // ENamedElement
        classifier->setName("Implements");

        // EClassifier
        classifier->setClassifierID(IMPLEMENTS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ImplementsEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Implements__to);
            eStructuralFeatures.basicAdd(m_Implements__from);
        }
    }();

    [this]()
    { // Feature to of class Imports
        auto &&feature = m_Imports__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::IMPORTS__TO);
        feature->basicsetEContainingClass(m_ImportsEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Imports
        auto &&feature = m_Imports__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::IMPORTS__FROM);
        feature->basicsetEContainingClass(m_ImportsEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Imports
        auto &&classifier = m_ImportsEClass;

        // ENamedElement
        classifier->setName("Imports");

        // EClassifier
        classifier->setClassifierID(IMPORTS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ImportsEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Imports__to);
            eStructuralFeatures.basicAdd(m_Imports__from);
        }
    }();

    [this]()
    { // Classifier IncludeDirective
        auto &&classifier = m_IncludeDirectiveEClass;

        // ENamedElement
        classifier->setName("IncludeDirective");

        // EClassifier
        classifier->setClassifierID(INCLUDEDIRECTIVE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class Includes
        auto &&feature = m_Includes__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractCodeElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::INCLUDES__TO);
        feature->basicsetEContainingClass(m_IncludesEClass);

        // EReference
        feature->setEReferenceType(m_AbstractCodeElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Includes
        auto &&feature = m_Includes__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PreprocessorDirectiveEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::INCLUDES__FROM);
        feature->basicsetEContainingClass(m_IncludesEClass);

        // EReference
        feature->setEReferenceType(m_PreprocessorDirectiveEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Includes
        auto &&classifier = m_IncludesEClass;

        // ENamedElement
        classifier->setName("Includes");

        // EClassifier
        classifier->setClassifierID(INCLUDES);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_IncludesEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Includes__to);
            eStructuralFeatures.basicAdd(m_Includes__from);
        }
    }();

    [this]()
    { // Classifier IndexUnit
        auto &&classifier = m_IndexUnitEClass;

        // ENamedElement
        classifier->setName("IndexUnit");

        // EClassifier
        classifier->setClassifierID(INDEXUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class InstanceOf
        auto &&feature = m_InstanceOf__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_TemplateUnitEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::INSTANCEOF__TO);
        feature->basicsetEContainingClass(m_InstanceOfEClass);

        // EReference
        feature->setEReferenceType(m_TemplateUnitEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class InstanceOf
        auto &&feature = m_InstanceOf__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractCodeElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::INSTANCEOF__FROM);
        feature->basicsetEContainingClass(m_InstanceOfEClass);

        // EReference
        feature->setEReferenceType(m_AbstractCodeElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier InstanceOf
        auto &&classifier = m_InstanceOfEClass;

        // ENamedElement
        classifier->setName("InstanceOf");

        // EClassifier
        classifier->setClassifierID(INSTANCEOF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_InstanceOfEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_InstanceOf__to);
            eStructuralFeatures.basicAdd(m_InstanceOf__from);
        }
    }();

    [this]()
    { // Classifier IntegerType
        auto &&classifier = m_IntegerTypeEClass;

        // ENamedElement
        classifier->setName("IntegerType");

        // EClassifier
        classifier->setClassifierID(INTEGERTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature codeElement of class InterfaceUnit
        auto &&feature = m_InterfaceUnit__codeElement;

        // ENamedElement
        feature->setName("codeElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::INTERFACEUNIT__CODEELEMENT);
        feature->basicsetEContainingClass(m_InterfaceUnitEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier InterfaceUnit
        auto &&classifier = m_InterfaceUnitEClass;

        // ENamedElement
        classifier->setName("InterfaceUnit");

        // EClassifier
        classifier->setClassifierID(INTERFACEUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_InterfaceUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_InterfaceUnit__codeElement);
        }
    }();

    [this]()
    { // Classifier ItemUnit
        auto &&classifier = m_ItemUnitEClass;

        // ENamedElement
        classifier->setName("ItemUnit");

        // EClassifier
        classifier->setClassifierID(ITEMUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier LanguageUnit
        auto &&classifier = m_LanguageUnitEClass;

        // ENamedElement
        classifier->setName("LanguageUnit");

        // EClassifier
        classifier->setClassifierID(LANGUAGEUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier MacroDirective
        auto &&classifier = m_MacroDirectiveEClass;

        // ENamedElement
        classifier->setName("MacroDirective");

        // EClassifier
        classifier->setClassifierID(MACRODIRECTIVE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier MacroKind
        auto &&classifier = m_MacroKindEEnum;

        // ENamedElement
        classifier->setName("MacroKind");

        // EClassifier
        classifier->setClassifierID(MACROKIND);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature kind of class MacroUnit
        auto &&feature = m_MacroUnit__kind;

        // ENamedElement
        feature->setName("kind");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_MacroKindEEnum);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::MACROUNIT__KIND);
        feature->basicsetEContainingClass(m_MacroUnitEClass);

        // EAttribute
        feature->setEAttributeType(m_MacroKindEEnum);
        feature->setID(false);
    }();

    [this]()
    { // Classifier MacroUnit
        auto &&classifier = m_MacroUnitEClass;

        // ENamedElement
        classifier->setName("MacroUnit");

        // EClassifier
        classifier->setClassifierID(MACROUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_MacroUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_MacroUnit__kind);
        }
    }();

    [this]()
    { // Feature export of class MemberUnit
        auto &&feature = m_MemberUnit__export;

        // ENamedElement
        feature->setName("export");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ExportKindEEnum);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::MEMBERUNIT__EXPORT);
        feature->basicsetEContainingClass(m_MemberUnitEClass);

        // EAttribute
        feature->setEAttributeType(m_ExportKindEEnum);
        feature->setID(false);
    }();

    [this]()
    { // Classifier MemberUnit
        auto &&classifier = m_MemberUnitEClass;

        // ENamedElement
        classifier->setName("MemberUnit");

        // EClassifier
        classifier->setClassifierID(MEMBERUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_MemberUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_MemberUnit__export);
        }
    }();

    [this]()
    { // Classifier MethodKind
        auto &&classifier = m_MethodKindEEnum;

        // ENamedElement
        classifier->setName("MethodKind");

        // EClassifier
        classifier->setClassifierID(METHODKIND);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature kind of class MethodUnit
        auto &&feature = m_MethodUnit__kind;

        // ENamedElement
        feature->setName("kind");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_MethodKindEEnum);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::METHODUNIT__KIND);
        feature->basicsetEContainingClass(m_MethodUnitEClass);

        // EAttribute
        feature->setEAttributeType(m_MethodKindEEnum);
        feature->setID(false);
    }();

    [this]()
    { // Feature export of class MethodUnit
        auto &&feature = m_MethodUnit__export;

        // ENamedElement
        feature->setName("export");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ExportKindEEnum);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::METHODUNIT__EXPORT);
        feature->basicsetEContainingClass(m_MethodUnitEClass);

        // EAttribute
        feature->setEAttributeType(m_ExportKindEEnum);
        feature->setID(false);
    }();

    [this]()
    { // Classifier MethodUnit
        auto &&classifier = m_MethodUnitEClass;

        // ENamedElement
        classifier->setName("MethodUnit");

        // EClassifier
        classifier->setClassifierID(METHODUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_MethodUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_MethodUnit__kind);
            eStructuralFeatures.basicAdd(m_MethodUnit__export);
        }
    }();

    [this]()
    { // Feature codeElement of class Module
        auto &&feature = m_Module__codeElement;

        // ENamedElement
        feature->setName("codeElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractCodeElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::MODULE__CODEELEMENT);
        feature->basicsetEContainingClass(m_ModuleEClass);

        // EReference
        feature->setEReferenceType(m_AbstractCodeElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Module
        auto &&classifier = m_ModuleEClass;

        // ENamedElement
        classifier->setName("Module");

        // EClassifier
        classifier->setClassifierID(MODULE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ModuleEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Module__codeElement);
        }
    }();

    [this]()
    { // Feature groupedCode of class NamespaceUnit
        auto &&feature = m_NamespaceUnit__groupedCode;

        // ENamedElement
        feature->setName("groupedCode");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::NAMESPACEUNIT__GROUPEDCODE);
        feature->basicsetEContainingClass(m_NamespaceUnitEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier NamespaceUnit
        auto &&classifier = m_NamespaceUnitEClass;

        // ENamedElement
        classifier->setName("NamespaceUnit");

        // EClassifier
        classifier->setClassifierID(NAMESPACEUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_NamespaceUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_NamespaceUnit__groupedCode);
        }
    }();

    [this]()
    { // Classifier OctetstringType
        auto &&classifier = m_OctetstringTypeEClass;

        // ENamedElement
        classifier->setName("OctetstringType");

        // EClassifier
        classifier->setClassifierID(OCTETSTRINGTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier OctetType
        auto &&classifier = m_OctetTypeEClass;

        // ENamedElement
        classifier->setName("OctetType");

        // EClassifier
        classifier->setClassifierID(OCTETTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier OrdinalType
        auto &&classifier = m_OrdinalTypeEClass;

        // ENamedElement
        classifier->setName("OrdinalType");

        // EClassifier
        classifier->setClassifierID(ORDINALTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Package
        auto &&classifier = m_PackageEClass;

        // ENamedElement
        classifier->setName("Package");

        // EClassifier
        classifier->setClassifierID(PACKAGE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier ParameterKind
        auto &&classifier = m_ParameterKindEEnum;

        // ENamedElement
        classifier->setName("ParameterKind");

        // EClassifier
        classifier->setClassifierID(PARAMETERKIND);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature to of class ParameterTo
        auto &&feature = m_ParameterTo__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::PARAMETERTO__TO);
        feature->basicsetEContainingClass(m_ParameterToEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class ParameterTo
        auto &&feature = m_ParameterTo__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractCodeElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::PARAMETERTO__FROM);
        feature->basicsetEContainingClass(m_ParameterToEClass);

        // EReference
        feature->setEReferenceType(m_AbstractCodeElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ParameterTo
        auto &&classifier = m_ParameterToEClass;

        // ENamedElement
        classifier->setName("ParameterTo");

        // EClassifier
        classifier->setClassifierID(PARAMETERTO);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ParameterToEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ParameterTo__to);
            eStructuralFeatures.basicAdd(m_ParameterTo__from);
        }
    }();

    [this]()
    { // Feature kind of class ParameterUnit
        auto &&feature = m_ParameterUnit__kind;

        // ENamedElement
        feature->setName("kind");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ParameterKindEEnum);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::PARAMETERUNIT__KIND);
        feature->basicsetEContainingClass(m_ParameterUnitEClass);

        // EAttribute
        feature->setEAttributeType(m_ParameterKindEEnum);
        feature->setID(false);
    }();

    [this]()
    { // Feature pos of class ParameterUnit
        auto &&feature = m_ParameterUnit__pos;

        // ENamedElement
        feature->setName("pos");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::PARAMETERUNIT__POS);
        feature->basicsetEContainingClass(m_ParameterUnitEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Classifier ParameterUnit
        auto &&classifier = m_ParameterUnitEClass;

        // ENamedElement
        classifier->setName("ParameterUnit");

        // EClassifier
        classifier->setClassifierID(PARAMETERUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ParameterUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ParameterUnit__kind);
            eStructuralFeatures.basicAdd(m_ParameterUnit__pos);
        }
    }();

    [this]()
    { // Classifier PointerType
        auto &&classifier = m_PointerTypeEClass;

        // ENamedElement
        classifier->setName("PointerType");

        // EClassifier
        classifier->setClassifierID(POINTERTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature codeElement of class PreprocessorDirective
        auto &&feature = m_PreprocessorDirective__codeElement;

        // ENamedElement
        feature->setName("codeElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractCodeElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::PREPROCESSORDIRECTIVE__CODEELEMENT);
        feature->basicsetEContainingClass(m_PreprocessorDirectiveEClass);

        // EReference
        feature->setEReferenceType(m_AbstractCodeElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier PreprocessorDirective
        auto &&classifier = m_PreprocessorDirectiveEClass;

        // ENamedElement
        classifier->setName("PreprocessorDirective");

        // EClassifier
        classifier->setClassifierID(PREPROCESSORDIRECTIVE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PreprocessorDirectiveEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_PreprocessorDirective__codeElement);
        }
    }();

    [this]()
    { // Classifier PrimitiveType
        auto &&classifier = m_PrimitiveTypeEClass;

        // ENamedElement
        classifier->setName("PrimitiveType");

        // EClassifier
        classifier->setClassifierID(PRIMITIVETYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature lower of class RangeType
        auto &&feature = m_RangeType__lower;

        // ENamedElement
        feature->setName("lower");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::RANGETYPE__LOWER);
        feature->basicsetEContainingClass(m_RangeTypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Feature upper of class RangeType
        auto &&feature = m_RangeType__upper;

        // ENamedElement
        feature->setName("upper");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::RANGETYPE__UPPER);
        feature->basicsetEContainingClass(m_RangeTypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Classifier RangeType
        auto &&classifier = m_RangeTypeEClass;

        // ENamedElement
        classifier->setName("RangeType");

        // EClassifier
        classifier->setClassifierID(RANGETYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RangeTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_RangeType__lower);
            eStructuralFeatures.basicAdd(m_RangeType__upper);
        }
    }();

    [this]()
    { // Classifier RecordType
        auto &&classifier = m_RecordTypeEClass;

        // ENamedElement
        classifier->setName("RecordType");

        // EClassifier
        classifier->setClassifierID(RECORDTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature to of class Redefines
        auto &&feature = m_Redefines__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PreprocessorDirectiveEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::REDEFINES__TO);
        feature->basicsetEContainingClass(m_RedefinesEClass);

        // EReference
        feature->setEReferenceType(m_PreprocessorDirectiveEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class Redefines
        auto &&feature = m_Redefines__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PreprocessorDirectiveEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::REDEFINES__FROM);
        feature->basicsetEContainingClass(m_RedefinesEClass);

        // EReference
        feature->setEReferenceType(m_PreprocessorDirectiveEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Redefines
        auto &&classifier = m_RedefinesEClass;

        // ENamedElement
        classifier->setName("Redefines");

        // EClassifier
        classifier->setClassifierID(REDEFINES);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RedefinesEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Redefines__to);
            eStructuralFeatures.basicAdd(m_Redefines__from);
        }
    }();

    [this]()
    { // Classifier ScaledType
        auto &&classifier = m_ScaledTypeEClass;

        // ENamedElement
        classifier->setName("ScaledType");

        // EClassifier
        classifier->setClassifierID(SCALEDTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature size of class SequenceType
        auto &&feature = m_SequenceType__size;

        // ENamedElement
        feature->setName("size");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::SEQUENCETYPE__SIZE);
        feature->basicsetEContainingClass(m_SequenceTypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Classifier SequenceType
        auto &&classifier = m_SequenceTypeEClass;

        // ENamedElement
        classifier->setName("SequenceType");

        // EClassifier
        classifier->setClassifierID(SEQUENCETYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SequenceTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SequenceType__size);
        }
    }();

    [this]()
    { // Feature size of class SetType
        auto &&feature = m_SetType__size;

        // ENamedElement
        feature->setName("size");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::kdm::core::CorePackage::_instance()->getInteger());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::SETTYPE__SIZE);
        feature->basicsetEContainingClass(m_SetTypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::kdm::core::CorePackage::_instance()->getInteger());
        feature->setID(false);
    }();

    [this]()
    { // Classifier SetType
        auto &&classifier = m_SetTypeEClass;

        // ENamedElement
        classifier->setName("SetType");

        // EClassifier
        classifier->setClassifierID(SETTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SetTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SetType__size);
        }
    }();

    [this]()
    { // Classifier SharedUnit
        auto &&classifier = m_SharedUnitEClass;

        // ENamedElement
        classifier->setName("SharedUnit");

        // EClassifier
        classifier->setClassifierID(SHAREDUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature parameterUnit of class Signature
        auto &&feature = m_Signature__parameterUnit;

        // ENamedElement
        feature->setName("parameterUnit");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ParameterUnitEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::SIGNATURE__PARAMETERUNIT);
        feature->basicsetEContainingClass(m_SignatureEClass);

        // EReference
        feature->setEReferenceType(m_ParameterUnitEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Signature
        auto &&classifier = m_SignatureEClass;

        // ENamedElement
        classifier->setName("Signature");

        // EClassifier
        classifier->setClassifierID(SIGNATURE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SignatureEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Signature__parameterUnit);
        }
    }();

    [this]()
    { // Classifier StorableKind
        auto &&classifier = m_StorableKindEEnum;

        // ENamedElement
        classifier->setName("StorableKind");

        // EClassifier
        classifier->setClassifierID(STORABLEKIND);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature kind of class StorableUnit
        auto &&feature = m_StorableUnit__kind;

        // ENamedElement
        feature->setName("kind");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_StorableKindEEnum);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::STORABLEUNIT__KIND);
        feature->basicsetEContainingClass(m_StorableUnitEClass);

        // EAttribute
        feature->setEAttributeType(m_StorableKindEEnum);
        feature->setID(false);
    }();

    [this]()
    { // Classifier StorableUnit
        auto &&classifier = m_StorableUnitEClass;

        // ENamedElement
        classifier->setName("StorableUnit");

        // EClassifier
        classifier->setClassifierID(STORABLEUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_StorableUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_StorableUnit__kind);
        }
    }();

    [this]()
    { // Classifier StringType
        auto &&classifier = m_StringTypeEClass;

        // ENamedElement
        classifier->setName("StringType");

        // EClassifier
        classifier->setClassifierID(STRINGTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier SynonymType
        auto &&classifier = m_SynonymTypeEClass;

        // ENamedElement
        classifier->setName("SynonymType");

        // EClassifier
        classifier->setClassifierID(SYNONYMTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier TemplateParameter
        auto &&classifier = m_TemplateParameterEClass;

        // ENamedElement
        classifier->setName("TemplateParameter");

        // EClassifier
        classifier->setClassifierID(TEMPLATEPARAMETER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier TemplateType
        auto &&classifier = m_TemplateTypeEClass;

        // ENamedElement
        classifier->setName("TemplateType");

        // EClassifier
        classifier->setClassifierID(TEMPLATETYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature codeElement of class TemplateUnit
        auto &&feature = m_TemplateUnit__codeElement;

        // ENamedElement
        feature->setName("codeElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::TEMPLATEUNIT__CODEELEMENT);
        feature->basicsetEContainingClass(m_TemplateUnitEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier TemplateUnit
        auto &&classifier = m_TemplateUnitEClass;

        // ENamedElement
        classifier->setName("TemplateUnit");

        // EClassifier
        classifier->setClassifierID(TEMPLATEUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TemplateUnitEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TemplateUnit__codeElement);
        }
    }();

    [this]()
    { // Classifier TimeType
        auto &&classifier = m_TimeTypeEClass;

        // ENamedElement
        classifier->setName("TimeType");

        // EClassifier
        classifier->setClassifierID(TIMETYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier TypeUnit
        auto &&classifier = m_TypeUnitEClass;

        // ENamedElement
        classifier->setName("TypeUnit");

        // EClassifier
        classifier->setClassifierID(TYPEUNIT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier Value
        auto &&classifier = m_ValueEClass;

        // ENamedElement
        classifier->setName("Value");

        // EClassifier
        classifier->setClassifierID(VALUE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier ValueElement
        auto &&classifier = m_ValueElementEClass;

        // ENamedElement
        classifier->setName("ValueElement");

        // EClassifier
        classifier->setClassifierID(VALUEELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature valueElement of class ValueList
        auto &&feature = m_ValueList__valueElement;

        // ENamedElement
        feature->setName("valueElement");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ValueElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::kdm::code::CodePackage::VALUELIST__VALUEELEMENT);
        feature->basicsetEContainingClass(m_ValueListEClass);

        // EReference
        feature->setEReferenceType(m_ValueElementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ValueList
        auto &&classifier = m_ValueListEClass;

        // ENamedElement
        classifier->setName("ValueList");

        // EClassifier
        classifier->setClassifierID(VALUELIST);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ValueListEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ValueList__valueElement);
        }
    }();

    [this]()
    { // Feature to of class VariantTo
        auto &&feature = m_VariantTo__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PreprocessorDirectiveEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::VARIANTTO__TO);
        feature->basicsetEContainingClass(m_VariantToEClass);

        // EReference
        feature->setEReferenceType(m_PreprocessorDirectiveEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class VariantTo
        auto &&feature = m_VariantTo__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PreprocessorDirectiveEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::VARIANTTO__FROM);
        feature->basicsetEContainingClass(m_VariantToEClass);

        // EReference
        feature->setEReferenceType(m_PreprocessorDirectiveEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier VariantTo
        auto &&classifier = m_VariantToEClass;

        // ENamedElement
        classifier->setName("VariantTo");

        // EClassifier
        classifier->setClassifierID(VARIANTTO);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_VariantToEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_VariantTo__to);
            eStructuralFeatures.basicAdd(m_VariantTo__from);
        }
    }();

    [this]()
    { // Feature to of class VisibleIn
        auto &&feature = m_VisibleIn__to;

        // ENamedElement
        feature->setName("to");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::VISIBLEIN__TO);
        feature->basicsetEContainingClass(m_VisibleInEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature from of class VisibleIn
        auto &&feature = m_VisibleIn__from;

        // ENamedElement
        feature->setName("from");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CodeItemEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::kdm::code::CodePackage::VISIBLEIN__FROM);
        feature->basicsetEContainingClass(m_VisibleInEClass);

        // EReference
        feature->setEReferenceType(m_CodeItemEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier VisibleIn
        auto &&classifier = m_VisibleInEClass;

        // ENamedElement
        classifier->setName("VisibleIn");

        // EClassifier
        classifier->setClassifierID(VISIBLEIN);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_VisibleInEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_VisibleIn__to);
            eStructuralFeatures.basicAdd(m_VisibleIn__from);
        }
    }();

    [this]()
    { // Classifier VoidType
        auto &&classifier = m_VoidTypeEClass;

        // ENamedElement
        classifier->setName("VoidType");

        // EClassifier
        classifier->setClassifierID(VOIDTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    // Initialize package
    setName("code");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_AbstractCodeElementEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMEntity());
        m_CodeItemEClass->getESuperTypes().push_back(
                m_AbstractCodeElementEClass);
        m_ComputationalObjectEClass->getESuperTypes().push_back(
                m_CodeItemEClass);
        m_ControlElementEClass->getESuperTypes().push_back(
                m_ComputationalObjectEClass);
        m_MethodUnitEClass->getESuperTypes().push_back(m_ControlElementEClass);
        m_ModuleEClass->getESuperTypes().push_back(m_CodeItemEClass);
        m_CodeAssemblyEClass->getESuperTypes().push_back(m_ModuleEClass);
        m_CallableUnitEClass->getESuperTypes().push_back(
                m_ControlElementEClass);
        m_DatatypeEClass->getESuperTypes().push_back(m_CodeItemEClass);
        m_TemplateUnitEClass->getESuperTypes().push_back(m_DatatypeEClass);
        m_TemplateParameterEClass->getESuperTypes().push_back(m_DatatypeEClass);
        m_AbstractCodeRelationshipEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getKDMRelationship());
        m_InstanceOfEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_CompilationUnitEClass->getESuperTypes().push_back(m_ModuleEClass);
        m_CodeModelEClass->getESuperTypes().push_back(
                ::kdm::kdm::KdmPackage::_instance()->getKDMModel());
        m_DerivedTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
        m_ArrayTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
        m_PrimitiveTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
        m_BooleanTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_CharTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_ClassUnitEClass->getESuperTypes().push_back(m_DatatypeEClass);
        m_CompositeTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
        m_RecordTypeEClass->getESuperTypes().push_back(m_CompositeTypeEClass);
        m_EnumeratedTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
        m_ExtendsEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_ScaledTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_FloatTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_HasTypeEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_ImplementationOfEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_ImplementsEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_IntegerTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_InterfaceUnitEClass->getESuperTypes().push_back(m_DatatypeEClass);
        m_PointerTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
        m_DefinedTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
        m_TypeUnitEClass->getESuperTypes().push_back(m_DefinedTypeEClass);
        m_RangeTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
        m_SignatureEClass->getESuperTypes().push_back(m_DatatypeEClass);
        m_DataElementEClass->getESuperTypes().push_back(
                m_ComputationalObjectEClass);
        m_StringTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_ChoiceTypeEClass->getESuperTypes().push_back(m_CompositeTypeEClass);
        m_NamespaceUnitEClass->getESuperTypes().push_back(m_CodeItemEClass);
        m_VisibleInEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_CommentUnitEClass->getESuperTypes().push_back(
                ::kdm::core::CorePackage::_instance()->getModelElement());
        m_SharedUnitEClass->getESuperTypes().push_back(m_CompilationUnitEClass);
        m_DecimalTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_DateTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_TimeTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_VoidTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_ValueElementEClass->getESuperTypes().push_back(m_DataElementEClass);
        m_ValueEClass->getESuperTypes().push_back(m_ValueElementEClass);
        m_ValueListEClass->getESuperTypes().push_back(m_ValueElementEClass);
        m_StorableUnitEClass->getESuperTypes().push_back(m_DataElementEClass);
        m_MemberUnitEClass->getESuperTypes().push_back(m_DataElementEClass);
        m_ParameterUnitEClass->getESuperTypes().push_back(m_DataElementEClass);
        m_ItemUnitEClass->getESuperTypes().push_back(m_DataElementEClass);
        m_IndexUnitEClass->getESuperTypes().push_back(m_DataElementEClass);
        m_SynonymTypeEClass->getESuperTypes().push_back(m_DefinedTypeEClass);
        m_SequenceTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
        m_BagTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
        m_SetTypeEClass->getESuperTypes().push_back(m_DerivedTypeEClass);
        m_CodeElementEClass->getESuperTypes().push_back(m_CodeItemEClass);
        m_CodeRelationshipEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_LanguageUnitEClass->getESuperTypes().push_back(m_ModuleEClass);
        m_OrdinalTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_BitstringTypeEClass->getESuperTypes().push_back(
                m_PrimitiveTypeEClass);
        m_OctetTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_OctetstringTypeEClass->getESuperTypes().push_back(
                m_PrimitiveTypeEClass);
        m_BitTypeEClass->getESuperTypes().push_back(m_PrimitiveTypeEClass);
        m_ImportsEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_PackageEClass->getESuperTypes().push_back(m_ModuleEClass);
        m_ParameterToEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_TemplateTypeEClass->getESuperTypes().push_back(m_DatatypeEClass);
        m_PreprocessorDirectiveEClass->getESuperTypes().push_back(
                m_AbstractCodeElementEClass);
        m_MacroDirectiveEClass->getESuperTypes().push_back(
                m_PreprocessorDirectiveEClass);
        m_MacroUnitEClass->getESuperTypes().push_back(
                m_PreprocessorDirectiveEClass);
        m_ConditionalDirectiveEClass->getESuperTypes().push_back(
                m_PreprocessorDirectiveEClass);
        m_IncludeDirectiveEClass->getESuperTypes().push_back(
                m_PreprocessorDirectiveEClass);
        m_VariantToEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_ExpandsEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_RedefinesEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_GeneratedFromEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_IncludesEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
        m_HasValueEClass->getESuperTypes().push_back(
                m_AbstractCodeRelationshipEClass);
    }();

    [this]()
    { // EEnum MethodKind
        auto &&eEnum = m_MethodKindEEnum;
        { // Literals
            auto &&eLiterals = eEnum->getELiterals();
            { // Literal operator
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("operator");
                _el->setValue(1);
                _el->setLiteral("operator");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal destructor
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("destructor");
                _el->setValue(2);
                _el->setLiteral("destructor");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal method
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("method");
                _el->setValue(3);
                _el->setLiteral("method");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal abstract
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("abstract");
                _el->setValue(4);
                _el->setLiteral("abstract");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal virtual
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("virtual");
                _el->setValue(5);
                _el->setLiteral("virtual");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal unknown
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("unknown");
                _el->setValue(6);
                _el->setLiteral("unknown");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal constructor
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("constructor");
                _el->setValue(7);
                _el->setLiteral("constructor");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
        }
    }();

    [this]()
    { // EEnum ParameterKind
        auto &&eEnum = m_ParameterKindEEnum;
        { // Literals
            auto &&eLiterals = eEnum->getELiterals();
            { // Literal byReference
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("byReference");
                _el->setValue(1);
                _el->setLiteral("byReference");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal unknown
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("unknown");
                _el->setValue(2);
                _el->setLiteral("unknown");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal exception
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("exception");
                _el->setValue(3);
                _el->setLiteral("exception");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal return
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("return");
                _el->setValue(4);
                _el->setLiteral("return");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal byValue
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("byValue");
                _el->setValue(5);
                _el->setLiteral("byValue");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal catchall
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("catchall");
                _el->setValue(6);
                _el->setLiteral("catchall");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal byName
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("byName");
                _el->setValue(7);
                _el->setLiteral("byName");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal throws
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("throws");
                _el->setValue(8);
                _el->setLiteral("throws");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal variadic
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("variadic");
                _el->setValue(9);
                _el->setLiteral("variadic");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
        }
    }();

    [this]()
    { // EEnum ExportKind
        auto &&eEnum = m_ExportKindEEnum;
        { // Literals
            auto &&eLiterals = eEnum->getELiterals();
            { // Literal private
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("private");
                _el->setValue(1);
                _el->setLiteral("private");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal unknown
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("unknown");
                _el->setValue(2);
                _el->setLiteral("unknown");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal public
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("public");
                _el->setValue(3);
                _el->setLiteral("public");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal protected
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("protected");
                _el->setValue(4);
                _el->setLiteral("protected");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal final
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("final");
                _el->setValue(5);
                _el->setLiteral("final");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
        }
    }();

    [this]()
    { // EEnum StorableKind
        auto &&eEnum = m_StorableKindEEnum;
        { // Literals
            auto &&eLiterals = eEnum->getELiterals();
            { // Literal global
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("global");
                _el->setValue(1);
                _el->setLiteral("global");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal external
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("external");
                _el->setValue(2);
                _el->setLiteral("external");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal static
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("static");
                _el->setValue(3);
                _el->setLiteral("static");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal unknown
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("unknown");
                _el->setValue(4);
                _el->setLiteral("unknown");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal register
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("register");
                _el->setValue(5);
                _el->setLiteral("register");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal local
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("local");
                _el->setValue(6);
                _el->setLiteral("local");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
        }
    }();

    [this]()
    { // EEnum CallableKind
        auto &&eEnum = m_CallableKindEEnum;
        { // Literals
            auto &&eLiterals = eEnum->getELiterals();
            { // Literal external
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("external");
                _el->setValue(1);
                _el->setLiteral("external");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal regular
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("regular");
                _el->setValue(2);
                _el->setLiteral("regular");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal stored
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("stored");
                _el->setValue(3);
                _el->setLiteral("stored");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal operator
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("operator");
                _el->setValue(4);
                _el->setLiteral("operator");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal unknown
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("unknown");
                _el->setValue(5);
                _el->setLiteral("unknown");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
        }
    }();

    [this]()
    { // EEnum MacroKind
        auto &&eEnum = m_MacroKindEEnum;
        { // Literals
            auto &&eLiterals = eEnum->getELiterals();
            { // Literal external
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("external");
                _el->setValue(1);
                _el->setLiteral("external");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal unknown
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("unknown");
                _el->setValue(2);
                _el->setLiteral("unknown");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal option
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("option");
                _el->setValue(3);
                _el->setLiteral("option");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal undefined
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("undefined");
                _el->setValue(4);
                _el->setLiteral("undefined");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal regular
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("regular");
                _el->setValue(5);
                _el->setLiteral("regular");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
        }
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractCodeElementEClass);
        classifiers.push_back(m_AbstractCodeRelationshipEClass);
        classifiers.push_back(m_ArrayTypeEClass);
        classifiers.push_back(m_BagTypeEClass);
        classifiers.push_back(m_BitstringTypeEClass);
        classifiers.push_back(m_BitTypeEClass);
        classifiers.push_back(m_BooleanTypeEClass);
        classifiers.push_back(m_CallableKindEEnum);
        classifiers.push_back(m_CallableUnitEClass);
        classifiers.push_back(m_CharTypeEClass);
        classifiers.push_back(m_ChoiceTypeEClass);
        classifiers.push_back(m_ClassUnitEClass);
        classifiers.push_back(m_CodeAssemblyEClass);
        classifiers.push_back(m_CodeElementEClass);
        classifiers.push_back(m_CodeItemEClass);
        classifiers.push_back(m_CodeModelEClass);
        classifiers.push_back(m_CodeRelationshipEClass);
        classifiers.push_back(m_CommentUnitEClass);
        classifiers.push_back(m_CompilationUnitEClass);
        classifiers.push_back(m_CompositeTypeEClass);
        classifiers.push_back(m_ComputationalObjectEClass);
        classifiers.push_back(m_ConditionalDirectiveEClass);
        classifiers.push_back(m_ControlElementEClass);
        classifiers.push_back(m_DataElementEClass);
        classifiers.push_back(m_DatatypeEClass);
        classifiers.push_back(m_DateTypeEClass);
        classifiers.push_back(m_DecimalTypeEClass);
        classifiers.push_back(m_DefinedTypeEClass);
        classifiers.push_back(m_DerivedTypeEClass);
        classifiers.push_back(m_EnumeratedTypeEClass);
        classifiers.push_back(m_ExpandsEClass);
        classifiers.push_back(m_ExportKindEEnum);
        classifiers.push_back(m_ExtendsEClass);
        classifiers.push_back(m_FloatTypeEClass);
        classifiers.push_back(m_GeneratedFromEClass);
        classifiers.push_back(m_HasTypeEClass);
        classifiers.push_back(m_HasValueEClass);
        classifiers.push_back(m_ImplementationOfEClass);
        classifiers.push_back(m_ImplementsEClass);
        classifiers.push_back(m_ImportsEClass);
        classifiers.push_back(m_IncludeDirectiveEClass);
        classifiers.push_back(m_IncludesEClass);
        classifiers.push_back(m_IndexUnitEClass);
        classifiers.push_back(m_InstanceOfEClass);
        classifiers.push_back(m_IntegerTypeEClass);
        classifiers.push_back(m_InterfaceUnitEClass);
        classifiers.push_back(m_ItemUnitEClass);
        classifiers.push_back(m_LanguageUnitEClass);
        classifiers.push_back(m_MacroDirectiveEClass);
        classifiers.push_back(m_MacroKindEEnum);
        classifiers.push_back(m_MacroUnitEClass);
        classifiers.push_back(m_MemberUnitEClass);
        classifiers.push_back(m_MethodKindEEnum);
        classifiers.push_back(m_MethodUnitEClass);
        classifiers.push_back(m_ModuleEClass);
        classifiers.push_back(m_NamespaceUnitEClass);
        classifiers.push_back(m_OctetstringTypeEClass);
        classifiers.push_back(m_OctetTypeEClass);
        classifiers.push_back(m_OrdinalTypeEClass);
        classifiers.push_back(m_PackageEClass);
        classifiers.push_back(m_ParameterKindEEnum);
        classifiers.push_back(m_ParameterToEClass);
        classifiers.push_back(m_ParameterUnitEClass);
        classifiers.push_back(m_PointerTypeEClass);
        classifiers.push_back(m_PreprocessorDirectiveEClass);
        classifiers.push_back(m_PrimitiveTypeEClass);
        classifiers.push_back(m_RangeTypeEClass);
        classifiers.push_back(m_RecordTypeEClass);
        classifiers.push_back(m_RedefinesEClass);
        classifiers.push_back(m_ScaledTypeEClass);
        classifiers.push_back(m_SequenceTypeEClass);
        classifiers.push_back(m_SetTypeEClass);
        classifiers.push_back(m_SharedUnitEClass);
        classifiers.push_back(m_SignatureEClass);
        classifiers.push_back(m_StorableKindEEnum);
        classifiers.push_back(m_StorableUnitEClass);
        classifiers.push_back(m_StringTypeEClass);
        classifiers.push_back(m_SynonymTypeEClass);
        classifiers.push_back(m_TemplateParameterEClass);
        classifiers.push_back(m_TemplateTypeEClass);
        classifiers.push_back(m_TemplateUnitEClass);
        classifiers.push_back(m_TimeTypeEClass);
        classifiers.push_back(m_TypeUnitEClass);
        classifiers.push_back(m_ValueEClass);
        classifiers.push_back(m_ValueElementEClass);
        classifiers.push_back(m_ValueListEClass);
        classifiers.push_back(m_VariantToEClass);
        classifiers.push_back(m_VisibleInEClass);
        classifiers.push_back(m_VoidTypeEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr CodePackage::getAbstractCodeElement()
{
    return m_AbstractCodeElementEClass;
}
::ecore::EClass_ptr CodePackage::getCodeItem()
{
    return m_CodeItemEClass;
}
::ecore::EClass_ptr CodePackage::getComputationalObject()
{
    return m_ComputationalObjectEClass;
}
::ecore::EClass_ptr CodePackage::getControlElement()
{
    return m_ControlElementEClass;
}
::ecore::EClass_ptr CodePackage::getMethodUnit()
{
    return m_MethodUnitEClass;
}
::ecore::EClass_ptr CodePackage::getModule()
{
    return m_ModuleEClass;
}
::ecore::EClass_ptr CodePackage::getCodeAssembly()
{
    return m_CodeAssemblyEClass;
}
::ecore::EClass_ptr CodePackage::getCallableUnit()
{
    return m_CallableUnitEClass;
}
::ecore::EClass_ptr CodePackage::getDatatype()
{
    return m_DatatypeEClass;
}
::ecore::EClass_ptr CodePackage::getTemplateUnit()
{
    return m_TemplateUnitEClass;
}
::ecore::EClass_ptr CodePackage::getTemplateParameter()
{
    return m_TemplateParameterEClass;
}
::ecore::EClass_ptr CodePackage::getAbstractCodeRelationship()
{
    return m_AbstractCodeRelationshipEClass;
}
::ecore::EClass_ptr CodePackage::getInstanceOf()
{
    return m_InstanceOfEClass;
}
::ecore::EClass_ptr CodePackage::getCompilationUnit()
{
    return m_CompilationUnitEClass;
}
::ecore::EClass_ptr CodePackage::getCodeModel()
{
    return m_CodeModelEClass;
}
::ecore::EClass_ptr CodePackage::getDerivedType()
{
    return m_DerivedTypeEClass;
}
::ecore::EClass_ptr CodePackage::getArrayType()
{
    return m_ArrayTypeEClass;
}
::ecore::EClass_ptr CodePackage::getPrimitiveType()
{
    return m_PrimitiveTypeEClass;
}
::ecore::EClass_ptr CodePackage::getBooleanType()
{
    return m_BooleanTypeEClass;
}
::ecore::EClass_ptr CodePackage::getCharType()
{
    return m_CharTypeEClass;
}
::ecore::EClass_ptr CodePackage::getClassUnit()
{
    return m_ClassUnitEClass;
}
::ecore::EClass_ptr CodePackage::getCompositeType()
{
    return m_CompositeTypeEClass;
}
::ecore::EClass_ptr CodePackage::getRecordType()
{
    return m_RecordTypeEClass;
}
::ecore::EClass_ptr CodePackage::getEnumeratedType()
{
    return m_EnumeratedTypeEClass;
}
::ecore::EClass_ptr CodePackage::getExtends()
{
    return m_ExtendsEClass;
}
::ecore::EClass_ptr CodePackage::getScaledType()
{
    return m_ScaledTypeEClass;
}
::ecore::EClass_ptr CodePackage::getFloatType()
{
    return m_FloatTypeEClass;
}
::ecore::EClass_ptr CodePackage::getHasType()
{
    return m_HasTypeEClass;
}
::ecore::EClass_ptr CodePackage::getImplementationOf()
{
    return m_ImplementationOfEClass;
}
::ecore::EClass_ptr CodePackage::getImplements()
{
    return m_ImplementsEClass;
}
::ecore::EClass_ptr CodePackage::getIntegerType()
{
    return m_IntegerTypeEClass;
}
::ecore::EClass_ptr CodePackage::getInterfaceUnit()
{
    return m_InterfaceUnitEClass;
}
::ecore::EClass_ptr CodePackage::getPointerType()
{
    return m_PointerTypeEClass;
}
::ecore::EClass_ptr CodePackage::getDefinedType()
{
    return m_DefinedTypeEClass;
}
::ecore::EClass_ptr CodePackage::getTypeUnit()
{
    return m_TypeUnitEClass;
}
::ecore::EClass_ptr CodePackage::getRangeType()
{
    return m_RangeTypeEClass;
}
::ecore::EClass_ptr CodePackage::getSignature()
{
    return m_SignatureEClass;
}
::ecore::EClass_ptr CodePackage::getDataElement()
{
    return m_DataElementEClass;
}
::ecore::EClass_ptr CodePackage::getStringType()
{
    return m_StringTypeEClass;
}
::ecore::EClass_ptr CodePackage::getChoiceType()
{
    return m_ChoiceTypeEClass;
}
::ecore::EClass_ptr CodePackage::getNamespaceUnit()
{
    return m_NamespaceUnitEClass;
}
::ecore::EClass_ptr CodePackage::getVisibleIn()
{
    return m_VisibleInEClass;
}
::ecore::EClass_ptr CodePackage::getCommentUnit()
{
    return m_CommentUnitEClass;
}
::ecore::EClass_ptr CodePackage::getSharedUnit()
{
    return m_SharedUnitEClass;
}
::ecore::EClass_ptr CodePackage::getDecimalType()
{
    return m_DecimalTypeEClass;
}
::ecore::EClass_ptr CodePackage::getDateType()
{
    return m_DateTypeEClass;
}
::ecore::EClass_ptr CodePackage::getTimeType()
{
    return m_TimeTypeEClass;
}
::ecore::EEnum_ptr CodePackage::getMethodKind()
{
    return m_MethodKindEEnum;
}
::ecore::EClass_ptr CodePackage::getVoidType()
{
    return m_VoidTypeEClass;
}
::ecore::EClass_ptr CodePackage::getValueElement()
{
    return m_ValueElementEClass;
}
::ecore::EClass_ptr CodePackage::getValue()
{
    return m_ValueEClass;
}
::ecore::EClass_ptr CodePackage::getValueList()
{
    return m_ValueListEClass;
}
::ecore::EClass_ptr CodePackage::getStorableUnit()
{
    return m_StorableUnitEClass;
}
::ecore::EClass_ptr CodePackage::getMemberUnit()
{
    return m_MemberUnitEClass;
}
::ecore::EClass_ptr CodePackage::getParameterUnit()
{
    return m_ParameterUnitEClass;
}
::ecore::EClass_ptr CodePackage::getItemUnit()
{
    return m_ItemUnitEClass;
}
::ecore::EClass_ptr CodePackage::getIndexUnit()
{
    return m_IndexUnitEClass;
}
::ecore::EClass_ptr CodePackage::getSynonymType()
{
    return m_SynonymTypeEClass;
}
::ecore::EClass_ptr CodePackage::getSequenceType()
{
    return m_SequenceTypeEClass;
}
::ecore::EClass_ptr CodePackage::getBagType()
{
    return m_BagTypeEClass;
}
::ecore::EClass_ptr CodePackage::getSetType()
{
    return m_SetTypeEClass;
}
::ecore::EClass_ptr CodePackage::getCodeElement()
{
    return m_CodeElementEClass;
}
::ecore::EClass_ptr CodePackage::getCodeRelationship()
{
    return m_CodeRelationshipEClass;
}
::ecore::EEnum_ptr CodePackage::getParameterKind()
{
    return m_ParameterKindEEnum;
}
::ecore::EEnum_ptr CodePackage::getExportKind()
{
    return m_ExportKindEEnum;
}
::ecore::EClass_ptr CodePackage::getLanguageUnit()
{
    return m_LanguageUnitEClass;
}
::ecore::EClass_ptr CodePackage::getOrdinalType()
{
    return m_OrdinalTypeEClass;
}
::ecore::EClass_ptr CodePackage::getBitstringType()
{
    return m_BitstringTypeEClass;
}
::ecore::EClass_ptr CodePackage::getOctetType()
{
    return m_OctetTypeEClass;
}
::ecore::EClass_ptr CodePackage::getOctetstringType()
{
    return m_OctetstringTypeEClass;
}
::ecore::EClass_ptr CodePackage::getBitType()
{
    return m_BitTypeEClass;
}
::ecore::EEnum_ptr CodePackage::getStorableKind()
{
    return m_StorableKindEEnum;
}
::ecore::EEnum_ptr CodePackage::getCallableKind()
{
    return m_CallableKindEEnum;
}
::ecore::EClass_ptr CodePackage::getImports()
{
    return m_ImportsEClass;
}
::ecore::EClass_ptr CodePackage::getPackage()
{
    return m_PackageEClass;
}
::ecore::EClass_ptr CodePackage::getParameterTo()
{
    return m_ParameterToEClass;
}
::ecore::EClass_ptr CodePackage::getTemplateType()
{
    return m_TemplateTypeEClass;
}
::ecore::EClass_ptr CodePackage::getPreprocessorDirective()
{
    return m_PreprocessorDirectiveEClass;
}
::ecore::EClass_ptr CodePackage::getMacroDirective()
{
    return m_MacroDirectiveEClass;
}
::ecore::EClass_ptr CodePackage::getMacroUnit()
{
    return m_MacroUnitEClass;
}
::ecore::EClass_ptr CodePackage::getConditionalDirective()
{
    return m_ConditionalDirectiveEClass;
}
::ecore::EClass_ptr CodePackage::getIncludeDirective()
{
    return m_IncludeDirectiveEClass;
}
::ecore::EEnum_ptr CodePackage::getMacroKind()
{
    return m_MacroKindEEnum;
}
::ecore::EClass_ptr CodePackage::getVariantTo()
{
    return m_VariantToEClass;
}
::ecore::EClass_ptr CodePackage::getExpands()
{
    return m_ExpandsEClass;
}
::ecore::EClass_ptr CodePackage::getRedefines()
{
    return m_RedefinesEClass;
}
::ecore::EClass_ptr CodePackage::getGeneratedFrom()
{
    return m_GeneratedFromEClass;
}
::ecore::EClass_ptr CodePackage::getIncludes()
{
    return m_IncludesEClass;
}
::ecore::EClass_ptr CodePackage::getHasValue()
{
    return m_HasValueEClass;
}

::ecore::EReference_ptr CodePackage::getAbstractCodeElement__source()
{
    return m_AbstractCodeElement__source;
}
::ecore::EReference_ptr CodePackage::getAbstractCodeElement__comment()
{
    return m_AbstractCodeElement__comment;
}
::ecore::EReference_ptr CodePackage::getAbstractCodeElement__codeRelation()
{
    return m_AbstractCodeElement__codeRelation;
}
::ecore::EReference_ptr CodePackage::getControlElement__type()
{
    return m_ControlElement__type;
}
::ecore::EReference_ptr CodePackage::getControlElement__entryFlow()
{
    return m_ControlElement__entryFlow;
}
::ecore::EReference_ptr CodePackage::getControlElement__codeElement()
{
    return m_ControlElement__codeElement;
}
::ecore::EAttribute_ptr CodePackage::getMethodUnit__kind()
{
    return m_MethodUnit__kind;
}
::ecore::EAttribute_ptr CodePackage::getMethodUnit__export()
{
    return m_MethodUnit__export;
}
::ecore::EReference_ptr CodePackage::getModule__codeElement()
{
    return m_Module__codeElement;
}
::ecore::EAttribute_ptr CodePackage::getCallableUnit__kind()
{
    return m_CallableUnit__kind;
}
::ecore::EReference_ptr CodePackage::getTemplateUnit__codeElement()
{
    return m_TemplateUnit__codeElement;
}
::ecore::EReference_ptr CodePackage::getInstanceOf__to()
{
    return m_InstanceOf__to;
}
::ecore::EReference_ptr CodePackage::getInstanceOf__from()
{
    return m_InstanceOf__from;
}
::ecore::EReference_ptr CodePackage::getCodeModel__codeElement()
{
    return m_CodeModel__codeElement;
}
::ecore::EReference_ptr CodePackage::getDerivedType__itemUnit()
{
    return m_DerivedType__itemUnit;
}
::ecore::EAttribute_ptr CodePackage::getArrayType__size()
{
    return m_ArrayType__size;
}
::ecore::EReference_ptr CodePackage::getArrayType__indexUnit()
{
    return m_ArrayType__indexUnit;
}
::ecore::EAttribute_ptr CodePackage::getClassUnit__isAbstract()
{
    return m_ClassUnit__isAbstract;
}
::ecore::EReference_ptr CodePackage::getClassUnit__codeElement()
{
    return m_ClassUnit__codeElement;
}
::ecore::EReference_ptr CodePackage::getCompositeType__itemUnit()
{
    return m_CompositeType__itemUnit;
}
::ecore::EReference_ptr CodePackage::getEnumeratedType__value()
{
    return m_EnumeratedType__value;
}
::ecore::EReference_ptr CodePackage::getExtends__to()
{
    return m_Extends__to;
}
::ecore::EReference_ptr CodePackage::getExtends__from()
{
    return m_Extends__from;
}
::ecore::EReference_ptr CodePackage::getHasType__to()
{
    return m_HasType__to;
}
::ecore::EReference_ptr CodePackage::getHasType__from()
{
    return m_HasType__from;
}
::ecore::EReference_ptr CodePackage::getImplementationOf__to()
{
    return m_ImplementationOf__to;
}
::ecore::EReference_ptr CodePackage::getImplementationOf__from()
{
    return m_ImplementationOf__from;
}
::ecore::EReference_ptr CodePackage::getImplements__to()
{
    return m_Implements__to;
}
::ecore::EReference_ptr CodePackage::getImplements__from()
{
    return m_Implements__from;
}
::ecore::EReference_ptr CodePackage::getInterfaceUnit__codeElement()
{
    return m_InterfaceUnit__codeElement;
}
::ecore::EReference_ptr CodePackage::getDefinedType__type()
{
    return m_DefinedType__type;
}
::ecore::EReference_ptr CodePackage::getDefinedType__codeElement()
{
    return m_DefinedType__codeElement;
}
::ecore::EAttribute_ptr CodePackage::getRangeType__lower()
{
    return m_RangeType__lower;
}
::ecore::EAttribute_ptr CodePackage::getRangeType__upper()
{
    return m_RangeType__upper;
}
::ecore::EReference_ptr CodePackage::getSignature__parameterUnit()
{
    return m_Signature__parameterUnit;
}
::ecore::EReference_ptr CodePackage::getDataElement__type()
{
    return m_DataElement__type;
}
::ecore::EAttribute_ptr CodePackage::getDataElement__ext()
{
    return m_DataElement__ext;
}
::ecore::EAttribute_ptr CodePackage::getDataElement__size()
{
    return m_DataElement__size;
}
::ecore::EReference_ptr CodePackage::getDataElement__codeElement()
{
    return m_DataElement__codeElement;
}
::ecore::EReference_ptr CodePackage::getNamespaceUnit__groupedCode()
{
    return m_NamespaceUnit__groupedCode;
}
::ecore::EReference_ptr CodePackage::getVisibleIn__to()
{
    return m_VisibleIn__to;
}
::ecore::EReference_ptr CodePackage::getVisibleIn__from()
{
    return m_VisibleIn__from;
}
::ecore::EAttribute_ptr CodePackage::getCommentUnit__text()
{
    return m_CommentUnit__text;
}
::ecore::EReference_ptr CodePackage::getValueList__valueElement()
{
    return m_ValueList__valueElement;
}
::ecore::EAttribute_ptr CodePackage::getStorableUnit__kind()
{
    return m_StorableUnit__kind;
}
::ecore::EAttribute_ptr CodePackage::getMemberUnit__export()
{
    return m_MemberUnit__export;
}
::ecore::EAttribute_ptr CodePackage::getParameterUnit__kind()
{
    return m_ParameterUnit__kind;
}
::ecore::EAttribute_ptr CodePackage::getParameterUnit__pos()
{
    return m_ParameterUnit__pos;
}
::ecore::EAttribute_ptr CodePackage::getSequenceType__size()
{
    return m_SequenceType__size;
}
::ecore::EAttribute_ptr CodePackage::getBagType__size()
{
    return m_BagType__size;
}
::ecore::EAttribute_ptr CodePackage::getSetType__size()
{
    return m_SetType__size;
}
::ecore::EReference_ptr CodePackage::getCodeRelationship__to()
{
    return m_CodeRelationship__to;
}
::ecore::EReference_ptr CodePackage::getCodeRelationship__from()
{
    return m_CodeRelationship__from;
}
::ecore::EReference_ptr CodePackage::getImports__to()
{
    return m_Imports__to;
}
::ecore::EReference_ptr CodePackage::getImports__from()
{
    return m_Imports__from;
}
::ecore::EReference_ptr CodePackage::getParameterTo__to()
{
    return m_ParameterTo__to;
}
::ecore::EReference_ptr CodePackage::getParameterTo__from()
{
    return m_ParameterTo__from;
}
::ecore::EReference_ptr CodePackage::getPreprocessorDirective__codeElement()
{
    return m_PreprocessorDirective__codeElement;
}
::ecore::EAttribute_ptr CodePackage::getMacroUnit__kind()
{
    return m_MacroUnit__kind;
}
::ecore::EReference_ptr CodePackage::getVariantTo__to()
{
    return m_VariantTo__to;
}
::ecore::EReference_ptr CodePackage::getVariantTo__from()
{
    return m_VariantTo__from;
}
::ecore::EReference_ptr CodePackage::getExpands__to()
{
    return m_Expands__to;
}
::ecore::EReference_ptr CodePackage::getExpands__from()
{
    return m_Expands__from;
}
::ecore::EReference_ptr CodePackage::getRedefines__to()
{
    return m_Redefines__to;
}
::ecore::EReference_ptr CodePackage::getRedefines__from()
{
    return m_Redefines__from;
}
::ecore::EReference_ptr CodePackage::getGeneratedFrom__to()
{
    return m_GeneratedFrom__to;
}
::ecore::EReference_ptr CodePackage::getGeneratedFrom__from()
{
    return m_GeneratedFrom__from;
}
::ecore::EReference_ptr CodePackage::getIncludes__to()
{
    return m_Includes__to;
}
::ecore::EReference_ptr CodePackage::getIncludes__from()
{
    return m_Includes__from;
}
::ecore::EReference_ptr CodePackage::getHasValue__to()
{
    return m_HasValue__to;
}
::ecore::EReference_ptr CodePackage::getHasValue__from()
{
    return m_HasValue__from;
}

