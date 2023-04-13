// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/TypePackage.hpp
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

#ifndef _TYPEPACKAGE_HPP
#define _TYPEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <type_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <type/dllType.hpp>

namespace type
{

class EXPORT_TYPE_DLL TypePackage : public virtual ::ecore::EPackage
{
public:

    static TypePackage_ptr _instance();
    static TypePackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier AnySimpleType
    static const int ANYSIMPLETYPE = 0;

    // IDs for classifier AnyType
    static const int ANYTYPE = 1;
    static const int ANYTYPE__MIXED = 0;
    static const int ANYTYPE__ANY = 1;
    static const int ANYTYPE__ANYATTRIBUTE = 2;
    static const int ANYTYPE_FEATURE_COUNT = 3;

    // IDs for classifier AnyURI
    static const int ANYURI = 2;

    // IDs for classifier Base64Binary
    static const int BASE64BINARY = 3;

    // IDs for classifier Boolean
    static const int BOOLEAN = 4;

    // IDs for classifier BooleanObject
    static const int BOOLEANOBJECT = 5;

    // IDs for classifier Byte
    static const int BYTE = 6;

    // IDs for classifier ByteObject
    static const int BYTEOBJECT = 7;

    // IDs for classifier Date
    static const int DATE = 8;

    // IDs for classifier DateTime
    static const int DATETIME = 9;

    // IDs for classifier Decimal
    static const int DECIMAL = 10;

    // IDs for classifier Double
    static const int DOUBLE = 11;

    // IDs for classifier DoubleObject
    static const int DOUBLEOBJECT = 12;

    // IDs for classifier Duration
    static const int DURATION = 13;

    // IDs for classifier ENTITIES
    static const int ENTITIES = 14;

    // IDs for classifier ENTITIESBase
    static const int ENTITIESBASE = 15;

    // IDs for classifier ENTITY
    static const int ENTITY = 16;

    // IDs for classifier Float
    static const int FLOAT = 17;

    // IDs for classifier FloatObject
    static const int FLOATOBJECT = 18;

    // IDs for classifier GDay
    static const int GDAY = 19;

    // IDs for classifier GMonth
    static const int GMONTH = 20;

    // IDs for classifier GMonthDay
    static const int GMONTHDAY = 21;

    // IDs for classifier GYear
    static const int GYEAR = 22;

    // IDs for classifier GYearMonth
    static const int GYEARMONTH = 23;

    // IDs for classifier HexBinary
    static const int HEXBINARY = 24;

    // IDs for classifier ID
    static const int ID = 25;

    // IDs for classifier IDREF
    static const int IDREF = 26;

    // IDs for classifier IDREFS
    static const int IDREFS = 27;

    // IDs for classifier IDREFSBase
    static const int IDREFSBASE = 28;

    // IDs for classifier Int
    static const int INT = 29;

    // IDs for classifier Integer
    static const int INTEGER = 30;

    // IDs for classifier IntObject
    static const int INTOBJECT = 31;

    // IDs for classifier Language
    static const int LANGUAGE = 32;

    // IDs for classifier Long
    static const int LONG = 33;

    // IDs for classifier LongObject
    static const int LONGOBJECT = 34;

    // IDs for classifier Name
    static const int NAME = 35;

    // IDs for classifier NCName
    static const int NCNAME = 36;

    // IDs for classifier NegativeInteger
    static const int NEGATIVEINTEGER = 37;

    // IDs for classifier NMTOKEN
    static const int NMTOKEN = 38;

    // IDs for classifier NMTOKENS
    static const int NMTOKENS = 39;

    // IDs for classifier NMTOKENSBase
    static const int NMTOKENSBASE = 40;

    // IDs for classifier NonNegativeInteger
    static const int NONNEGATIVEINTEGER = 41;

    // IDs for classifier NonPositiveInteger
    static const int NONPOSITIVEINTEGER = 42;

    // IDs for classifier NormalizedString
    static const int NORMALIZEDSTRING = 43;

    // IDs for classifier NOTATION
    static const int NOTATION = 44;

    // IDs for classifier PositiveInteger
    static const int POSITIVEINTEGER = 45;

    // IDs for classifier ProcessingInstruction
    static const int PROCESSINGINSTRUCTION = 46;
    static const int PROCESSINGINSTRUCTION__DATA = 0;
    static const int PROCESSINGINSTRUCTION__TARGET = 1;
    static const int PROCESSINGINSTRUCTION_FEATURE_COUNT = 2;

    // IDs for classifier QName
    static const int QNAME = 47;

    // IDs for classifier Short
    static const int SHORT = 48;

    // IDs for classifier ShortObject
    static const int SHORTOBJECT = 49;

    // IDs for classifier SimpleAnyType
    static const int SIMPLEANYTYPE = 50;
    static const int SIMPLEANYTYPE__MIXED = 0;
    static const int SIMPLEANYTYPE__ANY = 1;
    static const int SIMPLEANYTYPE__ANYATTRIBUTE = 2;
    static const int SIMPLEANYTYPE__RAWVALUE = 3;
    static const int SIMPLEANYTYPE__VALUE = 4;
    static const int SIMPLEANYTYPE__INSTANCETYPE = 5;
    static const int SIMPLEANYTYPE_FEATURE_COUNT = 6;

    // IDs for classifier String
    static const int STRING = 51;

    // IDs for classifier Time
    static const int TIME = 52;

    // IDs for classifier Token
    static const int TOKEN = 53;

    // IDs for classifier UnsignedByte
    static const int UNSIGNEDBYTE = 54;

    // IDs for classifier UnsignedByteObject
    static const int UNSIGNEDBYTEOBJECT = 55;

    // IDs for classifier UnsignedInt
    static const int UNSIGNEDINT = 56;

    // IDs for classifier UnsignedIntObject
    static const int UNSIGNEDINTOBJECT = 57;

    // IDs for classifier UnsignedLong
    static const int UNSIGNEDLONG = 58;

    // IDs for classifier UnsignedShort
    static const int UNSIGNEDSHORT = 59;

    // IDs for classifier UnsignedShortObject
    static const int UNSIGNEDSHORTOBJECT = 60;

    // IDs for classifier XMLTypeDocumentRoot
    static const int XMLTYPEDOCUMENTROOT = 61;
    static const int XMLTYPEDOCUMENTROOT__MIXED = 0;
    static const int XMLTYPEDOCUMENTROOT__XMLNSPREFIXMAP = 1;
    static const int XMLTYPEDOCUMENTROOT__XSISCHEMALOCATION = 2;
    static const int XMLTYPEDOCUMENTROOT__CDATA = 3;
    static const int XMLTYPEDOCUMENTROOT__COMMENT = 4;
    static const int XMLTYPEDOCUMENTROOT__PROCESSINGINSTRUCTION = 5;
    static const int XMLTYPEDOCUMENTROOT__TEXT = 6;
    static const int XMLTYPEDOCUMENTROOT_FEATURE_COUNT = 7;

    // EClassifiers methods

    virtual ::ecore::EDataType_ptr getAnySimpleType();

    virtual ::ecore::EClass_ptr getAnyType();

    virtual ::ecore::EDataType_ptr getAnyURI();

    virtual ::ecore::EDataType_ptr getBase64Binary();

    virtual ::ecore::EDataType_ptr getBoolean();

    virtual ::ecore::EDataType_ptr getBooleanObject();

    virtual ::ecore::EDataType_ptr getByte();

    virtual ::ecore::EDataType_ptr getByteObject();

    virtual ::ecore::EDataType_ptr getDate();

    virtual ::ecore::EDataType_ptr getDateTime();

    virtual ::ecore::EDataType_ptr getDecimal();

    virtual ::ecore::EDataType_ptr getDouble();

    virtual ::ecore::EDataType_ptr getDoubleObject();

    virtual ::ecore::EDataType_ptr getDuration();

    virtual ::ecore::EDataType_ptr getENTITIES();

    virtual ::ecore::EDataType_ptr getENTITIESBase();

    virtual ::ecore::EDataType_ptr getENTITY();

    virtual ::ecore::EDataType_ptr getFloat();

    virtual ::ecore::EDataType_ptr getFloatObject();

    virtual ::ecore::EDataType_ptr getGDay();

    virtual ::ecore::EDataType_ptr getGMonth();

    virtual ::ecore::EDataType_ptr getGMonthDay();

    virtual ::ecore::EDataType_ptr getGYear();

    virtual ::ecore::EDataType_ptr getGYearMonth();

    virtual ::ecore::EDataType_ptr getHexBinary();

    virtual ::ecore::EDataType_ptr getID();

    virtual ::ecore::EDataType_ptr getIDREF();

    virtual ::ecore::EDataType_ptr getIDREFS();

    virtual ::ecore::EDataType_ptr getIDREFSBase();

    virtual ::ecore::EDataType_ptr getInt();

    virtual ::ecore::EDataType_ptr getInteger();

    virtual ::ecore::EDataType_ptr getIntObject();

    virtual ::ecore::EDataType_ptr getLanguage();

    virtual ::ecore::EDataType_ptr getLong();

    virtual ::ecore::EDataType_ptr getLongObject();

    virtual ::ecore::EDataType_ptr getName_();

    virtual ::ecore::EDataType_ptr getNCName();

    virtual ::ecore::EDataType_ptr getNegativeInteger();

    virtual ::ecore::EDataType_ptr getNMTOKEN();

    virtual ::ecore::EDataType_ptr getNMTOKENS();

    virtual ::ecore::EDataType_ptr getNMTOKENSBase();

    virtual ::ecore::EDataType_ptr getNonNegativeInteger();

    virtual ::ecore::EDataType_ptr getNonPositiveInteger();

    virtual ::ecore::EDataType_ptr getNormalizedString();

    virtual ::ecore::EDataType_ptr getNOTATION();

    virtual ::ecore::EDataType_ptr getPositiveInteger();

    virtual ::ecore::EClass_ptr getProcessingInstruction();

    virtual ::ecore::EDataType_ptr getQName();

    virtual ::ecore::EDataType_ptr getShort();

    virtual ::ecore::EDataType_ptr getShortObject();

    virtual ::ecore::EClass_ptr getSimpleAnyType();

    virtual ::ecore::EDataType_ptr getString();

    virtual ::ecore::EDataType_ptr getTime();

    virtual ::ecore::EDataType_ptr getToken();

    virtual ::ecore::EDataType_ptr getUnsignedByte();

    virtual ::ecore::EDataType_ptr getUnsignedByteObject();

    virtual ::ecore::EDataType_ptr getUnsignedInt();

    virtual ::ecore::EDataType_ptr getUnsignedIntObject();

    virtual ::ecore::EDataType_ptr getUnsignedLong();

    virtual ::ecore::EDataType_ptr getUnsignedShort();

    virtual ::ecore::EDataType_ptr getUnsignedShortObject();

    virtual ::ecore::EClass_ptr getXMLTypeDocumentRoot();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getAnyType__mixed();

    virtual ::ecore::EAttribute_ptr getAnyType__any();

    virtual ::ecore::EAttribute_ptr getAnyType__anyAttribute();

    virtual ::ecore::EAttribute_ptr getProcessingInstruction__data();

    virtual ::ecore::EAttribute_ptr getProcessingInstruction__target();

    virtual ::ecore::EAttribute_ptr getSimpleAnyType__rawValue();

    virtual ::ecore::EAttribute_ptr getSimpleAnyType__value();

    virtual ::ecore::EReference_ptr getSimpleAnyType__instanceType();

    virtual ::ecore::EAttribute_ptr getXMLTypeDocumentRoot__mixed();

    virtual ::ecore::EReference_ptr getXMLTypeDocumentRoot__xMLNSPrefixMap();

    virtual ::ecore::EReference_ptr getXMLTypeDocumentRoot__xSISchemaLocation();

    virtual ::ecore::EAttribute_ptr getXMLTypeDocumentRoot__cDATA();

    virtual ::ecore::EAttribute_ptr getXMLTypeDocumentRoot__comment();

    virtual ::ecore::EReference_ptr getXMLTypeDocumentRoot__processingInstruction();

    virtual ::ecore::EAttribute_ptr getXMLTypeDocumentRoot__text();

protected:

    static ::ecore::Ptr< TypePackage > s_instance;

    TypePackage();
    void _initPackage();

    ::ecore::EDataType_ptr m_AnySimpleTypeEDataType;
    ::ecore::EClass_ptr m_AnyTypeEClass;
    ::ecore::EDataType_ptr m_AnyURIEDataType;
    ::ecore::EDataType_ptr m_Base64BinaryEDataType;
    ::ecore::EDataType_ptr m_BooleanEDataType;
    ::ecore::EDataType_ptr m_BooleanObjectEDataType;
    ::ecore::EDataType_ptr m_ByteEDataType;
    ::ecore::EDataType_ptr m_ByteObjectEDataType;
    ::ecore::EDataType_ptr m_DateEDataType;
    ::ecore::EDataType_ptr m_DateTimeEDataType;
    ::ecore::EDataType_ptr m_DecimalEDataType;
    ::ecore::EDataType_ptr m_DoubleEDataType;
    ::ecore::EDataType_ptr m_DoubleObjectEDataType;
    ::ecore::EDataType_ptr m_DurationEDataType;
    ::ecore::EDataType_ptr m_ENTITIESEDataType;
    ::ecore::EDataType_ptr m_ENTITIESBaseEDataType;
    ::ecore::EDataType_ptr m_ENTITYEDataType;
    ::ecore::EDataType_ptr m_FloatEDataType;
    ::ecore::EDataType_ptr m_FloatObjectEDataType;
    ::ecore::EDataType_ptr m_GDayEDataType;
    ::ecore::EDataType_ptr m_GMonthEDataType;
    ::ecore::EDataType_ptr m_GMonthDayEDataType;
    ::ecore::EDataType_ptr m_GYearEDataType;
    ::ecore::EDataType_ptr m_GYearMonthEDataType;
    ::ecore::EDataType_ptr m_HexBinaryEDataType;
    ::ecore::EDataType_ptr m_IDEDataType;
    ::ecore::EDataType_ptr m_IDREFEDataType;
    ::ecore::EDataType_ptr m_IDREFSEDataType;
    ::ecore::EDataType_ptr m_IDREFSBaseEDataType;
    ::ecore::EDataType_ptr m_IntEDataType;
    ::ecore::EDataType_ptr m_IntObjectEDataType;
    ::ecore::EDataType_ptr m_IntegerEDataType;
    ::ecore::EDataType_ptr m_LanguageEDataType;
    ::ecore::EDataType_ptr m_LongEDataType;
    ::ecore::EDataType_ptr m_LongObjectEDataType;
    ::ecore::EDataType_ptr m_NCNameEDataType;
    ::ecore::EDataType_ptr m_NMTOKENEDataType;
    ::ecore::EDataType_ptr m_NMTOKENSEDataType;
    ::ecore::EDataType_ptr m_NMTOKENSBaseEDataType;
    ::ecore::EDataType_ptr m_NOTATIONEDataType;
    ::ecore::EDataType_ptr m_NameEDataType;
    ::ecore::EDataType_ptr m_NegativeIntegerEDataType;
    ::ecore::EDataType_ptr m_NonNegativeIntegerEDataType;
    ::ecore::EDataType_ptr m_NonPositiveIntegerEDataType;
    ::ecore::EDataType_ptr m_NormalizedStringEDataType;
    ::ecore::EDataType_ptr m_PositiveIntegerEDataType;
    ::ecore::EClass_ptr m_ProcessingInstructionEClass;
    ::ecore::EDataType_ptr m_QNameEDataType;
    ::ecore::EDataType_ptr m_ShortEDataType;
    ::ecore::EDataType_ptr m_ShortObjectEDataType;
    ::ecore::EClass_ptr m_SimpleAnyTypeEClass;
    ::ecore::EDataType_ptr m_StringEDataType;
    ::ecore::EDataType_ptr m_TimeEDataType;
    ::ecore::EDataType_ptr m_TokenEDataType;
    ::ecore::EDataType_ptr m_UnsignedByteEDataType;
    ::ecore::EDataType_ptr m_UnsignedByteObjectEDataType;
    ::ecore::EDataType_ptr m_UnsignedIntEDataType;
    ::ecore::EDataType_ptr m_UnsignedIntObjectEDataType;
    ::ecore::EDataType_ptr m_UnsignedLongEDataType;
    ::ecore::EDataType_ptr m_UnsignedShortEDataType;
    ::ecore::EDataType_ptr m_UnsignedShortObjectEDataType;
    ::ecore::EClass_ptr m_XMLTypeDocumentRootEClass;

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_AnyType__mixed;

    ::ecore::EAttribute_ptr m_AnyType__any;

    ::ecore::EAttribute_ptr m_AnyType__anyAttribute;

    ::ecore::EAttribute_ptr m_ProcessingInstruction__data;

    ::ecore::EAttribute_ptr m_ProcessingInstruction__target;

    ::ecore::EAttribute_ptr m_SimpleAnyType__rawValue;

    ::ecore::EAttribute_ptr m_SimpleAnyType__value;

    ::ecore::EReference_ptr m_SimpleAnyType__instanceType;

    ::ecore::EAttribute_ptr m_XMLTypeDocumentRoot__mixed;

    ::ecore::EReference_ptr m_XMLTypeDocumentRoot__xMLNSPrefixMap;

    ::ecore::EReference_ptr m_XMLTypeDocumentRoot__xSISchemaLocation;

    ::ecore::EAttribute_ptr m_XMLTypeDocumentRoot__cDATA;

    ::ecore::EAttribute_ptr m_XMLTypeDocumentRoot__comment;

    ::ecore::EReference_ptr m_XMLTypeDocumentRoot__processingInstruction;

    ::ecore::EAttribute_ptr m_XMLTypeDocumentRoot__text;

};

}
 // type

#endif // _TYPEPACKAGE_HPP

