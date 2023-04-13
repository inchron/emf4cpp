// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/TypePackageImpl.cpp
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

#include <type/TypePackage.hpp>
#include <type/TypeFactory.hpp>
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
#include <ecore/EDataType.hpp>
#include <ecore/EStringToStringMapEntry.hpp>

using namespace ::type;

TypePackage::TypePackage()
{
    m_AnySimpleTypeEDataType = ::ecore::make< ::ecore::EDataType >();
    m_AnyType__mixed = ::ecore::make< ::ecore::EAttribute >();
    m_AnyType__any = ::ecore::make< ::ecore::EAttribute >();
    m_AnyType__anyAttribute = ::ecore::make< ::ecore::EAttribute >();
    m_AnyTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_AnyURIEDataType = ::ecore::make< ::ecore::EDataType >();
    m_Base64BinaryEDataType = ::ecore::make< ::ecore::EDataType >();
    m_BooleanEDataType = ::ecore::make< ::ecore::EDataType >();
    m_BooleanObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ByteEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ByteObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_DateEDataType = ::ecore::make< ::ecore::EDataType >();
    m_DateTimeEDataType = ::ecore::make< ::ecore::EDataType >();
    m_DecimalEDataType = ::ecore::make< ::ecore::EDataType >();
    m_DoubleEDataType = ::ecore::make< ::ecore::EDataType >();
    m_DoubleObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_DurationEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ENTITIESEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ENTITIESBaseEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ENTITYEDataType = ::ecore::make< ::ecore::EDataType >();
    m_FloatEDataType = ::ecore::make< ::ecore::EDataType >();
    m_FloatObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_GDayEDataType = ::ecore::make< ::ecore::EDataType >();
    m_GMonthEDataType = ::ecore::make< ::ecore::EDataType >();
    m_GMonthDayEDataType = ::ecore::make< ::ecore::EDataType >();
    m_GYearEDataType = ::ecore::make< ::ecore::EDataType >();
    m_GYearMonthEDataType = ::ecore::make< ::ecore::EDataType >();
    m_HexBinaryEDataType = ::ecore::make< ::ecore::EDataType >();
    m_IDEDataType = ::ecore::make< ::ecore::EDataType >();
    m_IDREFEDataType = ::ecore::make< ::ecore::EDataType >();
    m_IDREFSEDataType = ::ecore::make< ::ecore::EDataType >();
    m_IDREFSBaseEDataType = ::ecore::make< ::ecore::EDataType >();
    m_IntEDataType = ::ecore::make< ::ecore::EDataType >();
    m_IntegerEDataType = ::ecore::make< ::ecore::EDataType >();
    m_IntObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_LanguageEDataType = ::ecore::make< ::ecore::EDataType >();
    m_LongEDataType = ::ecore::make< ::ecore::EDataType >();
    m_LongObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_NameEDataType = ::ecore::make< ::ecore::EDataType >();
    m_NCNameEDataType = ::ecore::make< ::ecore::EDataType >();
    m_NegativeIntegerEDataType = ::ecore::make< ::ecore::EDataType >();
    m_NMTOKENEDataType = ::ecore::make< ::ecore::EDataType >();
    m_NMTOKENSEDataType = ::ecore::make< ::ecore::EDataType >();
    m_NMTOKENSBaseEDataType = ::ecore::make< ::ecore::EDataType >();
    m_NonNegativeIntegerEDataType = ::ecore::make< ::ecore::EDataType >();
    m_NonPositiveIntegerEDataType = ::ecore::make< ::ecore::EDataType >();
    m_NormalizedStringEDataType = ::ecore::make< ::ecore::EDataType >();
    m_NOTATIONEDataType = ::ecore::make< ::ecore::EDataType >();
    m_PositiveIntegerEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ProcessingInstruction__data = ::ecore::make< ::ecore::EAttribute >();
    m_ProcessingInstruction__target = ::ecore::make< ::ecore::EAttribute >();
    m_ProcessingInstructionEClass = ::ecore::make< ::ecore::EClass >();
    m_QNameEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ShortEDataType = ::ecore::make< ::ecore::EDataType >();
    m_ShortObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_SimpleAnyType__rawValue = ::ecore::make< ::ecore::EAttribute >();
    m_SimpleAnyType__value = ::ecore::make< ::ecore::EAttribute >();
    m_SimpleAnyType__instanceType = ::ecore::make< ::ecore::EReference >();
    m_SimpleAnyTypeEClass = ::ecore::make< ::ecore::EClass >();
    m_StringEDataType = ::ecore::make< ::ecore::EDataType >();
    m_TimeEDataType = ::ecore::make< ::ecore::EDataType >();
    m_TokenEDataType = ::ecore::make< ::ecore::EDataType >();
    m_UnsignedByteEDataType = ::ecore::make< ::ecore::EDataType >();
    m_UnsignedByteObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_UnsignedIntEDataType = ::ecore::make< ::ecore::EDataType >();
    m_UnsignedIntObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_UnsignedLongEDataType = ::ecore::make< ::ecore::EDataType >();
    m_UnsignedShortEDataType = ::ecore::make< ::ecore::EDataType >();
    m_UnsignedShortObjectEDataType = ::ecore::make< ::ecore::EDataType >();
    m_XMLTypeDocumentRoot__mixed = ::ecore::make< ::ecore::EAttribute >();
    m_XMLTypeDocumentRoot__xMLNSPrefixMap =
            ::ecore::make< ::ecore::EReference >();
    m_XMLTypeDocumentRoot__xSISchemaLocation = ::ecore::make<
            ::ecore::EReference >();
    m_XMLTypeDocumentRoot__cDATA = ::ecore::make< ::ecore::EAttribute >();
    m_XMLTypeDocumentRoot__comment = ::ecore::make< ::ecore::EAttribute >();
    m_XMLTypeDocumentRoot__processingInstruction = ::ecore::make<
            ::ecore::EReference >();
    m_XMLTypeDocumentRoot__text = ::ecore::make< ::ecore::EAttribute >();
    m_XMLTypeDocumentRootEClass = ::ecore::make< ::ecore::EClass >();
}

void TypePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = TypeFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Classifier AnySimpleType
        auto &&classifier = m_AnySimpleTypeEDataType;

        // ENamedElement
        classifier->setName("AnySimpleType");

        // EClassifier
        classifier->setClassifierID(ANYSIMPLETYPE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature mixed of class AnyType
        auto &&feature = m_AnyType__mixed;

        // ENamedElement
        feature->setName("mixed");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(false);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::ecore::EcorePackage::_instance()->getEFeatureMapEntry());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::type::TypePackage::ANYTYPE__MIXED);
        feature->basicsetEContainingClass(m_AnyTypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEFeatureMapEntry());
        feature->setID(false);
    }();

    [this]()
    { // Feature any of class AnyType
        auto &&feature = m_AnyType__any;

        // ENamedElement
        feature->setName("any");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(false);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(
                ::ecore::EcorePackage::_instance()->getEFeatureMapEntry());
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::type::TypePackage::ANYTYPE__ANY);
        feature->basicsetEContainingClass(m_AnyTypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEFeatureMapEntry());
        feature->setID(false);
    }();

    [this]()
    { // Feature anyAttribute of class AnyType
        auto &&feature = m_AnyType__anyAttribute;

        // ENamedElement
        feature->setName("anyAttribute");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(false);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::ecore::EcorePackage::_instance()->getEFeatureMapEntry());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::type::TypePackage::ANYTYPE__ANYATTRIBUTE);
        feature->basicsetEContainingClass(m_AnyTypeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEFeatureMapEntry());
        feature->setID(false);
    }();

    [this]()
    { // Classifier AnyType
        auto &&classifier = m_AnyTypeEClass;

        // ENamedElement
        classifier->setName("AnyType");

        // EClassifier
        classifier->setClassifierID(ANYTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AnyTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AnyType__mixed);
            eStructuralFeatures.basicAdd(m_AnyType__any);
            eStructuralFeatures.basicAdd(m_AnyType__anyAttribute);
        }
    }();

    [this]()
    { // Classifier AnyURI
        auto &&classifier = m_AnyURIEDataType;

        // ENamedElement
        classifier->setName("AnyURI");

        // EClassifier
        classifier->setClassifierID(ANYURI);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Base64Binary
        auto &&classifier = m_Base64BinaryEDataType;

        // ENamedElement
        classifier->setName("Base64Binary");

        // EClassifier
        classifier->setClassifierID(BASE64BINARY);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Boolean
        auto &&classifier = m_BooleanEDataType;

        // ENamedElement
        classifier->setName("Boolean");

        // EClassifier
        classifier->setClassifierID(BOOLEAN);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier BooleanObject
        auto &&classifier = m_BooleanObjectEDataType;

        // ENamedElement
        classifier->setName("BooleanObject");

        // EClassifier
        classifier->setClassifierID(BOOLEANOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Byte
        auto &&classifier = m_ByteEDataType;

        // ENamedElement
        classifier->setName("Byte");

        // EClassifier
        classifier->setClassifierID(BYTE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier ByteObject
        auto &&classifier = m_ByteObjectEDataType;

        // ENamedElement
        classifier->setName("ByteObject");

        // EClassifier
        classifier->setClassifierID(BYTEOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Date
        auto &&classifier = m_DateEDataType;

        // ENamedElement
        classifier->setName("Date");

        // EClassifier
        classifier->setClassifierID(DATE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier DateTime
        auto &&classifier = m_DateTimeEDataType;

        // ENamedElement
        classifier->setName("DateTime");

        // EClassifier
        classifier->setClassifierID(DATETIME);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Decimal
        auto &&classifier = m_DecimalEDataType;

        // ENamedElement
        classifier->setName("Decimal");

        // EClassifier
        classifier->setClassifierID(DECIMAL);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Double
        auto &&classifier = m_DoubleEDataType;

        // ENamedElement
        classifier->setName("Double");

        // EClassifier
        classifier->setClassifierID(DOUBLE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier DoubleObject
        auto &&classifier = m_DoubleObjectEDataType;

        // ENamedElement
        classifier->setName("DoubleObject");

        // EClassifier
        classifier->setClassifierID(DOUBLEOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Duration
        auto &&classifier = m_DurationEDataType;

        // ENamedElement
        classifier->setName("Duration");

        // EClassifier
        classifier->setClassifierID(DURATION);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier ENTITIES
        auto &&classifier = m_ENTITIESEDataType;

        // ENamedElement
        classifier->setName("ENTITIES");

        // EClassifier
        classifier->setClassifierID(ENTITIES);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier ENTITIESBase
        auto &&classifier = m_ENTITIESBaseEDataType;

        // ENamedElement
        classifier->setName("ENTITIESBase");

        // EClassifier
        classifier->setClassifierID(ENTITIESBASE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier ENTITY
        auto &&classifier = m_ENTITYEDataType;

        // ENamedElement
        classifier->setName("ENTITY");

        // EClassifier
        classifier->setClassifierID(ENTITY);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Float
        auto &&classifier = m_FloatEDataType;

        // ENamedElement
        classifier->setName("Float");

        // EClassifier
        classifier->setClassifierID(FLOAT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier FloatObject
        auto &&classifier = m_FloatObjectEDataType;

        // ENamedElement
        classifier->setName("FloatObject");

        // EClassifier
        classifier->setClassifierID(FLOATOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier GDay
        auto &&classifier = m_GDayEDataType;

        // ENamedElement
        classifier->setName("GDay");

        // EClassifier
        classifier->setClassifierID(GDAY);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier GMonth
        auto &&classifier = m_GMonthEDataType;

        // ENamedElement
        classifier->setName("GMonth");

        // EClassifier
        classifier->setClassifierID(GMONTH);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier GMonthDay
        auto &&classifier = m_GMonthDayEDataType;

        // ENamedElement
        classifier->setName("GMonthDay");

        // EClassifier
        classifier->setClassifierID(GMONTHDAY);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier GYear
        auto &&classifier = m_GYearEDataType;

        // ENamedElement
        classifier->setName("GYear");

        // EClassifier
        classifier->setClassifierID(GYEAR);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier GYearMonth
        auto &&classifier = m_GYearMonthEDataType;

        // ENamedElement
        classifier->setName("GYearMonth");

        // EClassifier
        classifier->setClassifierID(GYEARMONTH);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier HexBinary
        auto &&classifier = m_HexBinaryEDataType;

        // ENamedElement
        classifier->setName("HexBinary");

        // EClassifier
        classifier->setClassifierID(HEXBINARY);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier ID
        auto &&classifier = m_IDEDataType;

        // ENamedElement
        classifier->setName("ID");

        // EClassifier
        classifier->setClassifierID(ID);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier IDREF
        auto &&classifier = m_IDREFEDataType;

        // ENamedElement
        classifier->setName("IDREF");

        // EClassifier
        classifier->setClassifierID(IDREF);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier IDREFS
        auto &&classifier = m_IDREFSEDataType;

        // ENamedElement
        classifier->setName("IDREFS");

        // EClassifier
        classifier->setClassifierID(IDREFS);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier IDREFSBase
        auto &&classifier = m_IDREFSBaseEDataType;

        // ENamedElement
        classifier->setName("IDREFSBase");

        // EClassifier
        classifier->setClassifierID(IDREFSBASE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Int
        auto &&classifier = m_IntEDataType;

        // ENamedElement
        classifier->setName("Int");

        // EClassifier
        classifier->setClassifierID(INT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Integer
        auto &&classifier = m_IntegerEDataType;

        // ENamedElement
        classifier->setName("Integer");

        // EClassifier
        classifier->setClassifierID(INTEGER);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier IntObject
        auto &&classifier = m_IntObjectEDataType;

        // ENamedElement
        classifier->setName("IntObject");

        // EClassifier
        classifier->setClassifierID(INTOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Language
        auto &&classifier = m_LanguageEDataType;

        // ENamedElement
        classifier->setName("Language");

        // EClassifier
        classifier->setClassifierID(LANGUAGE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Long
        auto &&classifier = m_LongEDataType;

        // ENamedElement
        classifier->setName("Long");

        // EClassifier
        classifier->setClassifierID(LONG);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier LongObject
        auto &&classifier = m_LongObjectEDataType;

        // ENamedElement
        classifier->setName("LongObject");

        // EClassifier
        classifier->setClassifierID(LONGOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Name
        auto &&classifier = m_NameEDataType;

        // ENamedElement
        classifier->setName("Name");

        // EClassifier
        classifier->setClassifierID(NAME);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier NCName
        auto &&classifier = m_NCNameEDataType;

        // ENamedElement
        classifier->setName("NCName");

        // EClassifier
        classifier->setClassifierID(NCNAME);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier NegativeInteger
        auto &&classifier = m_NegativeIntegerEDataType;

        // ENamedElement
        classifier->setName("NegativeInteger");

        // EClassifier
        classifier->setClassifierID(NEGATIVEINTEGER);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier NMTOKEN
        auto &&classifier = m_NMTOKENEDataType;

        // ENamedElement
        classifier->setName("NMTOKEN");

        // EClassifier
        classifier->setClassifierID(NMTOKEN);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier NMTOKENS
        auto &&classifier = m_NMTOKENSEDataType;

        // ENamedElement
        classifier->setName("NMTOKENS");

        // EClassifier
        classifier->setClassifierID(NMTOKENS);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier NMTOKENSBase
        auto &&classifier = m_NMTOKENSBaseEDataType;

        // ENamedElement
        classifier->setName("NMTOKENSBase");

        // EClassifier
        classifier->setClassifierID(NMTOKENSBASE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier NonNegativeInteger
        auto &&classifier = m_NonNegativeIntegerEDataType;

        // ENamedElement
        classifier->setName("NonNegativeInteger");

        // EClassifier
        classifier->setClassifierID(NONNEGATIVEINTEGER);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier NonPositiveInteger
        auto &&classifier = m_NonPositiveIntegerEDataType;

        // ENamedElement
        classifier->setName("NonPositiveInteger");

        // EClassifier
        classifier->setClassifierID(NONPOSITIVEINTEGER);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier NormalizedString
        auto &&classifier = m_NormalizedStringEDataType;

        // ENamedElement
        classifier->setName("NormalizedString");

        // EClassifier
        classifier->setClassifierID(NORMALIZEDSTRING);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier NOTATION
        auto &&classifier = m_NOTATIONEDataType;

        // ENamedElement
        classifier->setName("NOTATION");

        // EClassifier
        classifier->setClassifierID(NOTATION);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier PositiveInteger
        auto &&classifier = m_PositiveIntegerEDataType;

        // ENamedElement
        classifier->setName("PositiveInteger");

        // EClassifier
        classifier->setClassifierID(POSITIVEINTEGER);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature data of class ProcessingInstruction
        auto &&feature = m_ProcessingInstruction__data;

        // ENamedElement
        feature->setName("data");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_StringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::type::TypePackage::PROCESSINGINSTRUCTION__DATA);
        feature->basicsetEContainingClass(m_ProcessingInstructionEClass);

        // EAttribute
        feature->setEAttributeType(m_StringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature target of class ProcessingInstruction
        auto &&feature = m_ProcessingInstruction__target;

        // ENamedElement
        feature->setName("target");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_StringEDataType);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::type::TypePackage::PROCESSINGINSTRUCTION__TARGET);
        feature->basicsetEContainingClass(m_ProcessingInstructionEClass);

        // EAttribute
        feature->setEAttributeType(m_StringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Classifier ProcessingInstruction
        auto &&classifier = m_ProcessingInstructionEClass;

        // ENamedElement
        classifier->setName("ProcessingInstruction");

        // EClassifier
        classifier->setClassifierID(PROCESSINGINSTRUCTION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ProcessingInstructionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ProcessingInstruction__data);
            eStructuralFeatures.basicAdd(m_ProcessingInstruction__target);
        }
    }();

    [this]()
    { // Classifier QName
        auto &&classifier = m_QNameEDataType;

        // ENamedElement
        classifier->setName("QName");

        // EClassifier
        classifier->setClassifierID(QNAME);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Short
        auto &&classifier = m_ShortEDataType;

        // ENamedElement
        classifier->setName("Short");

        // EClassifier
        classifier->setClassifierID(SHORT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier ShortObject
        auto &&classifier = m_ShortObjectEDataType;

        // ENamedElement
        classifier->setName("ShortObject");

        // EClassifier
        classifier->setClassifierID(SHORTOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature rawValue of class SimpleAnyType
        auto &&feature = m_SimpleAnyType__rawValue;

        // ENamedElement
        feature->setName("rawValue");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_StringEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::type::TypePackage::SIMPLEANYTYPE__RAWVALUE);
        feature->basicsetEContainingClass(m_SimpleAnyTypeEClass);

        // EAttribute
        feature->setEAttributeType(m_StringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature value of class SimpleAnyType
        auto &&feature = m_SimpleAnyType__value;

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
        feature->setDerived(true);
        feature->setEType(m_AnySimpleTypeEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::type::TypePackage::SIMPLEANYTYPE__VALUE);
        feature->basicsetEContainingClass(m_SimpleAnyTypeEClass);

        // EAttribute
        feature->setEAttributeType(m_AnySimpleTypeEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature instanceType of class SimpleAnyType
        auto &&feature = m_SimpleAnyType__instanceType;

        // ENamedElement
        feature->setName("instanceType");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEDataType());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::type::TypePackage::SIMPLEANYTYPE__INSTANCETYPE);
        feature->basicsetEContainingClass(m_SimpleAnyTypeEClass);

        // EReference
        feature->setEReferenceType(
                ::ecore::EcorePackage::_instance()->getEDataType());
        feature->setContainment(false);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Classifier SimpleAnyType
        auto &&classifier = m_SimpleAnyTypeEClass;

        // ENamedElement
        classifier->setName("SimpleAnyType");

        // EClassifier
        classifier->setClassifierID(SIMPLEANYTYPE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SimpleAnyTypeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SimpleAnyType__rawValue);
            eStructuralFeatures.basicAdd(m_SimpleAnyType__value);
            eStructuralFeatures.basicAdd(m_SimpleAnyType__instanceType);
        }
    }();

    [this]()
    { // Classifier String
        auto &&classifier = m_StringEDataType;

        // ENamedElement
        classifier->setName("String");

        // EClassifier
        classifier->setClassifierID(STRING);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Time
        auto &&classifier = m_TimeEDataType;

        // ENamedElement
        classifier->setName("Time");

        // EClassifier
        classifier->setClassifierID(TIME);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Token
        auto &&classifier = m_TokenEDataType;

        // ENamedElement
        classifier->setName("Token");

        // EClassifier
        classifier->setClassifierID(TOKEN);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier UnsignedByte
        auto &&classifier = m_UnsignedByteEDataType;

        // ENamedElement
        classifier->setName("UnsignedByte");

        // EClassifier
        classifier->setClassifierID(UNSIGNEDBYTE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier UnsignedByteObject
        auto &&classifier = m_UnsignedByteObjectEDataType;

        // ENamedElement
        classifier->setName("UnsignedByteObject");

        // EClassifier
        classifier->setClassifierID(UNSIGNEDBYTEOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier UnsignedInt
        auto &&classifier = m_UnsignedIntEDataType;

        // ENamedElement
        classifier->setName("UnsignedInt");

        // EClassifier
        classifier->setClassifierID(UNSIGNEDINT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier UnsignedIntObject
        auto &&classifier = m_UnsignedIntObjectEDataType;

        // ENamedElement
        classifier->setName("UnsignedIntObject");

        // EClassifier
        classifier->setClassifierID(UNSIGNEDINTOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier UnsignedLong
        auto &&classifier = m_UnsignedLongEDataType;

        // ENamedElement
        classifier->setName("UnsignedLong");

        // EClassifier
        classifier->setClassifierID(UNSIGNEDLONG);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier UnsignedShort
        auto &&classifier = m_UnsignedShortEDataType;

        // ENamedElement
        classifier->setName("UnsignedShort");

        // EClassifier
        classifier->setClassifierID(UNSIGNEDSHORT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier UnsignedShortObject
        auto &&classifier = m_UnsignedShortObjectEDataType;

        // ENamedElement
        classifier->setName("UnsignedShortObject");

        // EClassifier
        classifier->setClassifierID(UNSIGNEDSHORTOBJECT);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Feature mixed of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__mixed;

        // ENamedElement
        feature->setName("mixed");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(false);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::ecore::EcorePackage::_instance()->getEFeatureMapEntry());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::type::TypePackage::XMLTYPEDOCUMENTROOT__MIXED);
        feature->basicsetEContainingClass(m_XMLTypeDocumentRootEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEFeatureMapEntry());
        feature->setID(false);
    }();

    [this]()
    { // Feature xMLNSPrefixMap of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__xMLNSPrefixMap;

        // ENamedElement
        feature->setName("xMLNSPrefixMap");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::ecore::EcorePackage::_instance()->getEStringToStringMapEntry());
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::type::TypePackage::XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP);
        feature->basicsetEContainingClass(m_XMLTypeDocumentRootEClass);

        // EReference
        feature->setEReferenceType(
                ::ecore::EcorePackage::_instance()->getEStringToStringMapEntry());
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature xSISchemaLocation of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__xSISchemaLocation;

        // ENamedElement
        feature->setName("xSISchemaLocation");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::ecore::EcorePackage::_instance()->getEStringToStringMapEntry());
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::type::TypePackage::XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION);
        feature->basicsetEContainingClass(m_XMLTypeDocumentRootEClass);

        // EReference
        feature->setEReferenceType(
                ::ecore::EcorePackage::_instance()->getEStringToStringMapEntry());
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature cDATA of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__cDATA;

        // ENamedElement
        feature->setName("cDATA");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(false);
        feature->setUpperBound(-2);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_StringEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::type::TypePackage::XMLTYPEDOCUMENTROOT__CDATA);
        feature->basicsetEContainingClass(m_XMLTypeDocumentRootEClass);

        // EAttribute
        feature->setEAttributeType(m_StringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature comment of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__comment;

        // ENamedElement
        feature->setName("comment");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(false);
        feature->setUpperBound(-2);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_StringEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(
                ::type::TypePackage::XMLTYPEDOCUMENTROOT__COMMENT);
        feature->basicsetEContainingClass(m_XMLTypeDocumentRootEClass);

        // EAttribute
        feature->setEAttributeType(m_StringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Feature processingInstruction of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__processingInstruction;

        // ENamedElement
        feature->setName("processingInstruction");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-2);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_ProcessingInstructionEClass);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(
                ::type::TypePackage::XMLTYPEDOCUMENTROOT__PROCESSINGINSTRUCTION);
        feature->basicsetEContainingClass(m_XMLTypeDocumentRootEClass);

        // EReference
        feature->setEReferenceType(m_ProcessingInstructionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(false);
    }();

    [this]()
    { // Feature text of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__text;

        // ENamedElement
        feature->setName("text");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(false);
        feature->setUpperBound(-2);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(true);
        feature->setEType(m_StringEDataType);
        feature->setTransient(true);
        feature->setUnsettable(false);
        feature->setVolatile(true);

        feature->setFeatureID(::type::TypePackage::XMLTYPEDOCUMENTROOT__TEXT);
        feature->basicsetEContainingClass(m_XMLTypeDocumentRootEClass);

        // EAttribute
        feature->setEAttributeType(m_StringEDataType);
        feature->setID(false);
    }();

    [this]()
    { // Classifier XMLTypeDocumentRoot
        auto &&classifier = m_XMLTypeDocumentRootEClass;

        // ENamedElement
        classifier->setName("XMLTypeDocumentRoot");

        // EClassifier
        classifier->setClassifierID(XMLTYPEDOCUMENTROOT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_XMLTypeDocumentRootEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_XMLTypeDocumentRoot__mixed);
            eStructuralFeatures.basicAdd(m_XMLTypeDocumentRoot__xMLNSPrefixMap);
            eStructuralFeatures.basicAdd(
                    m_XMLTypeDocumentRoot__xSISchemaLocation);
            eStructuralFeatures.basicAdd(m_XMLTypeDocumentRoot__cDATA);
            eStructuralFeatures.basicAdd(m_XMLTypeDocumentRoot__comment);
            eStructuralFeatures.basicAdd(
                    m_XMLTypeDocumentRoot__processingInstruction);
            eStructuralFeatures.basicAdd(m_XMLTypeDocumentRoot__text);
        }
    }();

    // Initialize package
    setName("type");
    setNsPrefix("ecore.xml.type");
    setNsURI("http://www.eclipse.org/emf/2003/XMLType");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_SimpleAnyTypeEClass->getESuperTypes().push_back(m_AnyTypeEClass);
    }();

    [this]()
    { // Feature mixed of class AnyType
        auto &&feature = m_AnyType__mixed;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "elementWildcard");
            eAnnotation->setDetail("name", ":mixed");
        }
    }();
    [this]()
    { // Feature any of class AnyType
        auto &&feature = m_AnyType__any;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "elementWildcard");
            eAnnotation->setDetail("wildcards", "##any");
            eAnnotation->setDetail("name", ":1");
            eAnnotation->setDetail("processing", "lax");
        }
    }();
    [this]()
    { // Feature anyAttribute of class AnyType
        auto &&feature = m_AnyType__anyAttribute;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "attributeWildcard");
            eAnnotation->setDetail("wildcards", "##any");
            eAnnotation->setDetail("name", ":2");
            eAnnotation->setDetail("processing", "lax");
        }
    }();

    [this]()
    { // Class AnyType
        auto &&cls = m_AnyTypeEClass;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = cls->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "anyType");
            eAnnotation->setDetail("kind", "mixed");
        }
    }();

    [this]()
    { // Feature data of class ProcessingInstruction
        auto &&feature = m_ProcessingInstruction__data;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "attribute");
            eAnnotation->setDetail("name", "data");
        }
    }();
    [this]()
    { // Feature target of class ProcessingInstruction
        auto &&feature = m_ProcessingInstruction__target;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "attribute");
            eAnnotation->setDetail("name", "target");
        }
    }();

    [this]()
    { // Class ProcessingInstruction
        auto &&cls = m_ProcessingInstructionEClass;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = cls->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "processingInstruction_._type");
            eAnnotation->setDetail("kind", "empty");
        }
    }();

    [this]()
    { // Feature rawValue of class SimpleAnyType
        auto &&feature = m_SimpleAnyType__rawValue;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", ":3");
            eAnnotation->setDetail("kind", "simple");
        }
    }();
    [this]()
    { // Feature value of class SimpleAnyType
        auto &&feature = m_SimpleAnyType__value;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", ":4");
            eAnnotation->setDetail("kind", "simple");
        }
    }();
    [this]()
    { // Feature instanceType of class SimpleAnyType
        auto &&feature = m_SimpleAnyType__instanceType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", ":5");
            eAnnotation->setDetail("kind", "simple");
        }
    }();

    [this]()
    { // Class SimpleAnyType
        auto &&cls = m_SimpleAnyTypeEClass;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = cls->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "simpleAnyType");
            eAnnotation->setDetail("kind", "simple");
        }
    }();

    [this]()
    { // Feature mixed of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__mixed;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "elementWildcard");
            eAnnotation->setDetail("name", ":mixed");
        }
    }();
    [this]()
    { // Feature xMLNSPrefixMap of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__xMLNSPrefixMap;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "attribute");
            eAnnotation->setDetail("name", "xmlns:prefix");
        }
    }();
    [this]()
    { // Feature xSISchemaLocation of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__xSISchemaLocation;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "attribute");
            eAnnotation->setDetail("name", "xsi:schemaLocation");
        }
    }();
    [this]()
    { // Feature cDATA of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__cDATA;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "element");
            eAnnotation->setDetail("name", "cDATA");
            eAnnotation->setDetail("namespace", "##targetNamespace");
        }
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedGetVisibility", "true");
        }
    }();
    [this]()
    { // Feature comment of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__comment;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "element");
            eAnnotation->setDetail("name", "comment");
            eAnnotation->setDetail("namespace", "##targetNamespace");
        }
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedGetVisibility", "true");
        }
    }();
    [this]()
    { // Feature processingInstruction of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__processingInstruction;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "element");
            eAnnotation->setDetail("name", "processingInstruction");
            eAnnotation->setDetail("namespace", "##targetNamespace");
        }
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedGetVisibility", "true");
        }
    }();
    [this]()
    { // Feature text of class XMLTypeDocumentRoot
        auto &&feature = m_XMLTypeDocumentRoot__text;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = feature->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("kind", "element");
            eAnnotation->setDetail("name", "text");
            eAnnotation->setDetail("namespace", "##targetNamespace");
        }
        { // Annotations for http://www.eclipse.org/emf/2002/GenModel
            auto &&eAnnotation = feature->getEAnnotation(
                    "http://www.eclipse.org/emf/2002/GenModel");
            eAnnotation->setDetail("suppressedGetVisibility", "true");
        }
    }();

    [this]()
    { // Class XMLTypeDocumentRoot
        auto &&cls = m_XMLTypeDocumentRootEClass;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = cls->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "");
            eAnnotation->setDetail("kind", "mixed");
        }
    }();

    [this]()
    { // Annotations for Datatype AnySimpleType
        auto &&datatype = m_AnySimpleTypeEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "anySimpleType");
        }
    }();
    [this]()
    { // Annotations for Datatype AnyURI
        auto &&datatype = m_AnyURIEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "anyURI");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype Base64Binary
        auto &&datatype = m_Base64BinaryEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "base64Binary");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype Boolean
        auto &&datatype = m_BooleanEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "boolean");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype BooleanObject
        auto &&datatype = m_BooleanObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "boolean:Object");
            eAnnotation->setDetail("baseType", "boolean");
        }
    }();
    [this]()
    { // Annotations for Datatype Byte
        auto &&datatype = m_ByteEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "byte");
        }
    }();
    [this]()
    { // Annotations for Datatype ByteObject
        auto &&datatype = m_ByteObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "byte:Object");
            eAnnotation->setDetail("baseType", "byte");
        }
    }();
    [this]()
    { // Annotations for Datatype Date
        auto &&datatype = m_DateEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "date");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype DateTime
        auto &&datatype = m_DateTimeEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "dateTime");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype Decimal
        auto &&datatype = m_DecimalEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "decimal");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype Double
        auto &&datatype = m_DoubleEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "double");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype DoubleObject
        auto &&datatype = m_DoubleObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "double:Object");
            eAnnotation->setDetail("baseType", "double");
        }
    }();
    [this]()
    { // Annotations for Datatype Duration
        auto &&datatype = m_DurationEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "duration");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype ENTITIES
        auto &&datatype = m_ENTITIESEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "ENTITIES");
            eAnnotation->setDetail("baseType", "ENTITIES_._base");
            eAnnotation->setDetail("minLength", "1");
        }
    }();
    [this]()
    { // Annotations for Datatype ENTITIESBase
        auto &&datatype = m_ENTITIESBaseEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "ENTITIES_._base");
            eAnnotation->setDetail("itemType", "ENTITY");
        }
    }();
    [this]()
    { // Annotations for Datatype ENTITY
        auto &&datatype = m_ENTITYEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "ENTITY");
            eAnnotation->setDetail("baseType", "NCName");
        }
    }();
    [this]()
    { // Annotations for Datatype Float
        auto &&datatype = m_FloatEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "float");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype FloatObject
        auto &&datatype = m_FloatObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "float:Object");
            eAnnotation->setDetail("baseType", "float");
        }
    }();
    [this]()
    { // Annotations for Datatype GDay
        auto &&datatype = m_GDayEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "gDay");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype GMonth
        auto &&datatype = m_GMonthEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "gMonth");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype GMonthDay
        auto &&datatype = m_GMonthDayEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "gMonthDay");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype GYear
        auto &&datatype = m_GYearEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "gYear");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype GYearMonth
        auto &&datatype = m_GYearMonthEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "gYearMonth");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype HexBinary
        auto &&datatype = m_HexBinaryEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "hexBinary");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype ID
        auto &&datatype = m_IDEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "ID");
            eAnnotation->setDetail("baseType", "NCName");
        }
    }();
    [this]()
    { // Annotations for Datatype IDREF
        auto &&datatype = m_IDREFEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "IDREF");
            eAnnotation->setDetail("baseType", "NCName");
        }
    }();
    [this]()
    { // Annotations for Datatype IDREFS
        auto &&datatype = m_IDREFSEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "IDREFS");
            eAnnotation->setDetail("baseType", "IDREFS_._base");
            eAnnotation->setDetail("minLength", "1");
        }
    }();
    [this]()
    { // Annotations for Datatype IDREFSBase
        auto &&datatype = m_IDREFSBaseEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "IDREFS_._base");
            eAnnotation->setDetail("itemType", "IDREF");
        }
    }();
    [this]()
    { // Annotations for Datatype Int
        auto &&datatype = m_IntEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "int");
        }
    }();
    [this]()
    { // Annotations for Datatype Integer
        auto &&datatype = m_IntegerEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "integer");
        }
    }();
    [this]()
    { // Annotations for Datatype IntObject
        auto &&datatype = m_IntObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "int:Object");
            eAnnotation->setDetail("baseType", "int");
        }
    }();
    [this]()
    { // Annotations for Datatype Language
        auto &&datatype = m_LanguageEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "language");
            eAnnotation->setDetail("baseType", "token");
            eAnnotation->setDetail("pattern",
                    "[a-zA-Z]{1,8}(-[a-zA-Z0-9]{1,8})*");
        }
    }();
    [this]()
    { // Annotations for Datatype Long
        auto &&datatype = m_LongEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "long");
        }
    }();
    [this]()
    { // Annotations for Datatype LongObject
        auto &&datatype = m_LongObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "long:Object");
            eAnnotation->setDetail("baseType", "long");
        }
    }();
    [this]()
    { // Annotations for Datatype Name
        auto &&datatype = m_NameEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "Name");
            eAnnotation->setDetail("baseType", "token");
            eAnnotation->setDetail("pattern", "\\i\\c*");
        }
    }();
    [this]()
    { // Annotations for Datatype NCName
        auto &&datatype = m_NCNameEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "NCName");
            eAnnotation->setDetail("baseType", "Name");
            eAnnotation->setDetail("pattern", "[\\i-[:]][\\c-[:]]*");
        }
    }();
    [this]()
    { // Annotations for Datatype NegativeInteger
        auto &&datatype = m_NegativeIntegerEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "negativeInteger");
            eAnnotation->setDetail("baseType", "nonPositiveInteger");
            eAnnotation->setDetail("maxInclusive", "-1");
        }
    }();
    [this]()
    { // Annotations for Datatype NMTOKEN
        auto &&datatype = m_NMTOKENEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "NMTOKEN");
            eAnnotation->setDetail("baseType", "token");
            eAnnotation->setDetail("pattern", "\\c+");
        }
    }();
    [this]()
    { // Annotations for Datatype NMTOKENS
        auto &&datatype = m_NMTOKENSEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "NMTOKENS");
            eAnnotation->setDetail("baseType", "NMTOKENS_._base");
            eAnnotation->setDetail("minLength", "1");
        }
    }();
    [this]()
    { // Annotations for Datatype NMTOKENSBase
        auto &&datatype = m_NMTOKENSBaseEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "NMTOKENS_._base");
            eAnnotation->setDetail("itemType", "NMTOKEN");
        }
    }();
    [this]()
    { // Annotations for Datatype NonNegativeInteger
        auto &&datatype = m_NonNegativeIntegerEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "nonNegativeInteger");
            eAnnotation->setDetail("baseType", "integer");
            eAnnotation->setDetail("minInclusive", "0");
        }
    }();
    [this]()
    { // Annotations for Datatype NonPositiveInteger
        auto &&datatype = m_NonPositiveIntegerEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "nonPositiveInteger");
            eAnnotation->setDetail("baseType", "integer");
            eAnnotation->setDetail("maxInclusive", "0");
        }
    }();
    [this]()
    { // Annotations for Datatype NormalizedString
        auto &&datatype = m_NormalizedStringEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "normalizedString");
            eAnnotation->setDetail("baseType", "string");
            eAnnotation->setDetail("whiteSpace", "replace");
        }
    }();
    [this]()
    { // Annotations for Datatype NOTATION
        auto &&datatype = m_NOTATIONEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "NOTATION");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype PositiveInteger
        auto &&datatype = m_PositiveIntegerEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "positiveInteger");
            eAnnotation->setDetail("baseType", "nonNegativeInteger");
            eAnnotation->setDetail("minInclusive", "1");
        }
    }();
    [this]()
    { // Annotations for Datatype QName
        auto &&datatype = m_QNameEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "QName");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype Short
        auto &&datatype = m_ShortEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "short");
        }
    }();
    [this]()
    { // Annotations for Datatype ShortObject
        auto &&datatype = m_ShortObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "short:Object");
            eAnnotation->setDetail("baseType", "short");
        }
    }();
    [this]()
    { // Annotations for Datatype String
        auto &&datatype = m_StringEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "string");
            eAnnotation->setDetail("whiteSpace", "preserve");
        }
    }();
    [this]()
    { // Annotations for Datatype Time
        auto &&datatype = m_TimeEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "time");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype Token
        auto &&datatype = m_TokenEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "token");
            eAnnotation->setDetail("baseType", "normalizedString");
            eAnnotation->setDetail("whiteSpace", "collapse");
        }
    }();
    [this]()
    { // Annotations for Datatype UnsignedByte
        auto &&datatype = m_UnsignedByteEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "unsignedByte");
            eAnnotation->setDetail("maxInclusive", "255");
            eAnnotation->setDetail("minInclusive", "0");
        }
    }();
    [this]()
    { // Annotations for Datatype UnsignedByteObject
        auto &&datatype = m_UnsignedByteObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "unsignedByte:Object");
            eAnnotation->setDetail("baseType", "unsignedByte");
        }
    }();
    [this]()
    { // Annotations for Datatype UnsignedInt
        auto &&datatype = m_UnsignedIntEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "unsignedInt");
            eAnnotation->setDetail("maxInclusive", "4294967295");
            eAnnotation->setDetail("minInclusive", "0");
        }
    }();
    [this]()
    { // Annotations for Datatype UnsignedIntObject
        auto &&datatype = m_UnsignedIntObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "unsignedInt:Object");
            eAnnotation->setDetail("baseType", "unsignedInt");
        }
    }();
    [this]()
    { // Annotations for Datatype UnsignedLong
        auto &&datatype = m_UnsignedLongEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "unsignedLong");
            eAnnotation->setDetail("baseType", "nonNegativeInteger");
            eAnnotation->setDetail("maxInclusive", "18446744073709551615");
            eAnnotation->setDetail("minInclusive", "0");
        }
    }();
    [this]()
    { // Annotations for Datatype UnsignedShort
        auto &&datatype = m_UnsignedShortEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "unsignedShort");
            eAnnotation->setDetail("maxInclusive", "65535");
            eAnnotation->setDetail("minInclusive", "0");
        }
    }();
    [this]()
    { // Annotations for Datatype UnsignedShortObject
        auto &&datatype = m_UnsignedShortObjectEDataType;
        { // Annotations for http:///org/eclipse/emf/ecore/util/ExtendedMetaData
            auto &&eAnnotation = datatype->getEAnnotation(
                    "http:///org/eclipse/emf/ecore/util/ExtendedMetaData");
            eAnnotation->setDetail("name", "unsignedShort:Object");
            eAnnotation->setDetail("baseType", "unsignedShort");
        }
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AnySimpleTypeEDataType);
        classifiers.push_back(m_AnyTypeEClass);
        classifiers.push_back(m_AnyURIEDataType);
        classifiers.push_back(m_Base64BinaryEDataType);
        classifiers.push_back(m_BooleanEDataType);
        classifiers.push_back(m_BooleanObjectEDataType);
        classifiers.push_back(m_ByteEDataType);
        classifiers.push_back(m_ByteObjectEDataType);
        classifiers.push_back(m_DateEDataType);
        classifiers.push_back(m_DateTimeEDataType);
        classifiers.push_back(m_DecimalEDataType);
        classifiers.push_back(m_DoubleEDataType);
        classifiers.push_back(m_DoubleObjectEDataType);
        classifiers.push_back(m_DurationEDataType);
        classifiers.push_back(m_ENTITIESEDataType);
        classifiers.push_back(m_ENTITIESBaseEDataType);
        classifiers.push_back(m_ENTITYEDataType);
        classifiers.push_back(m_FloatEDataType);
        classifiers.push_back(m_FloatObjectEDataType);
        classifiers.push_back(m_GDayEDataType);
        classifiers.push_back(m_GMonthEDataType);
        classifiers.push_back(m_GMonthDayEDataType);
        classifiers.push_back(m_GYearEDataType);
        classifiers.push_back(m_GYearMonthEDataType);
        classifiers.push_back(m_HexBinaryEDataType);
        classifiers.push_back(m_IDEDataType);
        classifiers.push_back(m_IDREFEDataType);
        classifiers.push_back(m_IDREFSEDataType);
        classifiers.push_back(m_IDREFSBaseEDataType);
        classifiers.push_back(m_IntEDataType);
        classifiers.push_back(m_IntegerEDataType);
        classifiers.push_back(m_IntObjectEDataType);
        classifiers.push_back(m_LanguageEDataType);
        classifiers.push_back(m_LongEDataType);
        classifiers.push_back(m_LongObjectEDataType);
        classifiers.push_back(m_NameEDataType);
        classifiers.push_back(m_NCNameEDataType);
        classifiers.push_back(m_NegativeIntegerEDataType);
        classifiers.push_back(m_NMTOKENEDataType);
        classifiers.push_back(m_NMTOKENSEDataType);
        classifiers.push_back(m_NMTOKENSBaseEDataType);
        classifiers.push_back(m_NonNegativeIntegerEDataType);
        classifiers.push_back(m_NonPositiveIntegerEDataType);
        classifiers.push_back(m_NormalizedStringEDataType);
        classifiers.push_back(m_NOTATIONEDataType);
        classifiers.push_back(m_PositiveIntegerEDataType);
        classifiers.push_back(m_ProcessingInstructionEClass);
        classifiers.push_back(m_QNameEDataType);
        classifiers.push_back(m_ShortEDataType);
        classifiers.push_back(m_ShortObjectEDataType);
        classifiers.push_back(m_SimpleAnyTypeEClass);
        classifiers.push_back(m_StringEDataType);
        classifiers.push_back(m_TimeEDataType);
        classifiers.push_back(m_TokenEDataType);
        classifiers.push_back(m_UnsignedByteEDataType);
        classifiers.push_back(m_UnsignedByteObjectEDataType);
        classifiers.push_back(m_UnsignedIntEDataType);
        classifiers.push_back(m_UnsignedIntObjectEDataType);
        classifiers.push_back(m_UnsignedLongEDataType);
        classifiers.push_back(m_UnsignedShortEDataType);
        classifiers.push_back(m_UnsignedShortObjectEDataType);
        classifiers.push_back(m_XMLTypeDocumentRootEClass);
    }();

    _initialize();
}

::ecore::EDataType_ptr TypePackage::getAnySimpleType()
{
    return m_AnySimpleTypeEDataType;
}
::ecore::EClass_ptr TypePackage::getAnyType()
{
    return m_AnyTypeEClass;
}
::ecore::EDataType_ptr TypePackage::getAnyURI()
{
    return m_AnyURIEDataType;
}
::ecore::EDataType_ptr TypePackage::getBase64Binary()
{
    return m_Base64BinaryEDataType;
}
::ecore::EDataType_ptr TypePackage::getBoolean()
{
    return m_BooleanEDataType;
}
::ecore::EDataType_ptr TypePackage::getBooleanObject()
{
    return m_BooleanObjectEDataType;
}
::ecore::EDataType_ptr TypePackage::getByte()
{
    return m_ByteEDataType;
}
::ecore::EDataType_ptr TypePackage::getByteObject()
{
    return m_ByteObjectEDataType;
}
::ecore::EDataType_ptr TypePackage::getDate()
{
    return m_DateEDataType;
}
::ecore::EDataType_ptr TypePackage::getDateTime()
{
    return m_DateTimeEDataType;
}
::ecore::EDataType_ptr TypePackage::getDecimal()
{
    return m_DecimalEDataType;
}
::ecore::EDataType_ptr TypePackage::getDouble()
{
    return m_DoubleEDataType;
}
::ecore::EDataType_ptr TypePackage::getDoubleObject()
{
    return m_DoubleObjectEDataType;
}
::ecore::EDataType_ptr TypePackage::getDuration()
{
    return m_DurationEDataType;
}
::ecore::EDataType_ptr TypePackage::getENTITIES()
{
    return m_ENTITIESEDataType;
}
::ecore::EDataType_ptr TypePackage::getENTITIESBase()
{
    return m_ENTITIESBaseEDataType;
}
::ecore::EDataType_ptr TypePackage::getENTITY()
{
    return m_ENTITYEDataType;
}
::ecore::EDataType_ptr TypePackage::getFloat()
{
    return m_FloatEDataType;
}
::ecore::EDataType_ptr TypePackage::getFloatObject()
{
    return m_FloatObjectEDataType;
}
::ecore::EDataType_ptr TypePackage::getGDay()
{
    return m_GDayEDataType;
}
::ecore::EDataType_ptr TypePackage::getGMonth()
{
    return m_GMonthEDataType;
}
::ecore::EDataType_ptr TypePackage::getGMonthDay()
{
    return m_GMonthDayEDataType;
}
::ecore::EDataType_ptr TypePackage::getGYear()
{
    return m_GYearEDataType;
}
::ecore::EDataType_ptr TypePackage::getGYearMonth()
{
    return m_GYearMonthEDataType;
}
::ecore::EDataType_ptr TypePackage::getHexBinary()
{
    return m_HexBinaryEDataType;
}
::ecore::EDataType_ptr TypePackage::getID()
{
    return m_IDEDataType;
}
::ecore::EDataType_ptr TypePackage::getIDREF()
{
    return m_IDREFEDataType;
}
::ecore::EDataType_ptr TypePackage::getIDREFS()
{
    return m_IDREFSEDataType;
}
::ecore::EDataType_ptr TypePackage::getIDREFSBase()
{
    return m_IDREFSBaseEDataType;
}
::ecore::EDataType_ptr TypePackage::getInt()
{
    return m_IntEDataType;
}
::ecore::EDataType_ptr TypePackage::getInteger()
{
    return m_IntegerEDataType;
}
::ecore::EDataType_ptr TypePackage::getIntObject()
{
    return m_IntObjectEDataType;
}
::ecore::EDataType_ptr TypePackage::getLanguage()
{
    return m_LanguageEDataType;
}
::ecore::EDataType_ptr TypePackage::getLong()
{
    return m_LongEDataType;
}
::ecore::EDataType_ptr TypePackage::getLongObject()
{
    return m_LongObjectEDataType;
}
::ecore::EDataType_ptr TypePackage::getName_()
{
    return m_NameEDataType;
}
::ecore::EDataType_ptr TypePackage::getNCName()
{
    return m_NCNameEDataType;
}
::ecore::EDataType_ptr TypePackage::getNegativeInteger()
{
    return m_NegativeIntegerEDataType;
}
::ecore::EDataType_ptr TypePackage::getNMTOKEN()
{
    return m_NMTOKENEDataType;
}
::ecore::EDataType_ptr TypePackage::getNMTOKENS()
{
    return m_NMTOKENSEDataType;
}
::ecore::EDataType_ptr TypePackage::getNMTOKENSBase()
{
    return m_NMTOKENSBaseEDataType;
}
::ecore::EDataType_ptr TypePackage::getNonNegativeInteger()
{
    return m_NonNegativeIntegerEDataType;
}
::ecore::EDataType_ptr TypePackage::getNonPositiveInteger()
{
    return m_NonPositiveIntegerEDataType;
}
::ecore::EDataType_ptr TypePackage::getNormalizedString()
{
    return m_NormalizedStringEDataType;
}
::ecore::EDataType_ptr TypePackage::getNOTATION()
{
    return m_NOTATIONEDataType;
}
::ecore::EDataType_ptr TypePackage::getPositiveInteger()
{
    return m_PositiveIntegerEDataType;
}
::ecore::EClass_ptr TypePackage::getProcessingInstruction()
{
    return m_ProcessingInstructionEClass;
}
::ecore::EDataType_ptr TypePackage::getQName()
{
    return m_QNameEDataType;
}
::ecore::EDataType_ptr TypePackage::getShort()
{
    return m_ShortEDataType;
}
::ecore::EDataType_ptr TypePackage::getShortObject()
{
    return m_ShortObjectEDataType;
}
::ecore::EClass_ptr TypePackage::getSimpleAnyType()
{
    return m_SimpleAnyTypeEClass;
}
::ecore::EDataType_ptr TypePackage::getString()
{
    return m_StringEDataType;
}
::ecore::EDataType_ptr TypePackage::getTime()
{
    return m_TimeEDataType;
}
::ecore::EDataType_ptr TypePackage::getToken()
{
    return m_TokenEDataType;
}
::ecore::EDataType_ptr TypePackage::getUnsignedByte()
{
    return m_UnsignedByteEDataType;
}
::ecore::EDataType_ptr TypePackage::getUnsignedByteObject()
{
    return m_UnsignedByteObjectEDataType;
}
::ecore::EDataType_ptr TypePackage::getUnsignedInt()
{
    return m_UnsignedIntEDataType;
}
::ecore::EDataType_ptr TypePackage::getUnsignedIntObject()
{
    return m_UnsignedIntObjectEDataType;
}
::ecore::EDataType_ptr TypePackage::getUnsignedLong()
{
    return m_UnsignedLongEDataType;
}
::ecore::EDataType_ptr TypePackage::getUnsignedShort()
{
    return m_UnsignedShortEDataType;
}
::ecore::EDataType_ptr TypePackage::getUnsignedShortObject()
{
    return m_UnsignedShortObjectEDataType;
}
::ecore::EClass_ptr TypePackage::getXMLTypeDocumentRoot()
{
    return m_XMLTypeDocumentRootEClass;
}

::ecore::EAttribute_ptr TypePackage::getAnyType__mixed()
{
    return m_AnyType__mixed;
}
::ecore::EAttribute_ptr TypePackage::getAnyType__any()
{
    return m_AnyType__any;
}
::ecore::EAttribute_ptr TypePackage::getAnyType__anyAttribute()
{
    return m_AnyType__anyAttribute;
}
::ecore::EAttribute_ptr TypePackage::getProcessingInstruction__data()
{
    return m_ProcessingInstruction__data;
}
::ecore::EAttribute_ptr TypePackage::getProcessingInstruction__target()
{
    return m_ProcessingInstruction__target;
}
::ecore::EAttribute_ptr TypePackage::getSimpleAnyType__rawValue()
{
    return m_SimpleAnyType__rawValue;
}
::ecore::EAttribute_ptr TypePackage::getSimpleAnyType__value()
{
    return m_SimpleAnyType__value;
}
::ecore::EReference_ptr TypePackage::getSimpleAnyType__instanceType()
{
    return m_SimpleAnyType__instanceType;
}
::ecore::EAttribute_ptr TypePackage::getXMLTypeDocumentRoot__mixed()
{
    return m_XMLTypeDocumentRoot__mixed;
}
::ecore::EReference_ptr TypePackage::getXMLTypeDocumentRoot__xMLNSPrefixMap()
{
    return m_XMLTypeDocumentRoot__xMLNSPrefixMap;
}
::ecore::EReference_ptr TypePackage::getXMLTypeDocumentRoot__xSISchemaLocation()
{
    return m_XMLTypeDocumentRoot__xSISchemaLocation;
}
::ecore::EAttribute_ptr TypePackage::getXMLTypeDocumentRoot__cDATA()
{
    return m_XMLTypeDocumentRoot__cDATA;
}
::ecore::EAttribute_ptr TypePackage::getXMLTypeDocumentRoot__comment()
{
    return m_XMLTypeDocumentRoot__comment;
}
::ecore::EReference_ptr TypePackage::getXMLTypeDocumentRoot__processingInstruction()
{
    return m_XMLTypeDocumentRoot__processingInstruction;
}
::ecore::EAttribute_ptr TypePackage::getXMLTypeDocumentRoot__text()
{
    return m_XMLTypeDocumentRoot__text;
}

