// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/TypeFactoryImpl.cpp
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

#include <type/TypeFactory.hpp>
#include <type/TypePackage.hpp>
#include <type/AnyType.hpp>
#include <type/ProcessingInstruction.hpp>
#include <type/SimpleAnyType.hpp>
#include <type/XMLTypeDocumentRoot.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::type;

TypeFactory::TypeFactory()
{
}

::ecore::EObject_ptr TypeFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case TypePackage::ANYTYPE:
        return createAnyType();
    case TypePackage::PROCESSINGINSTRUCTION:
        return createProcessingInstruction();
    case TypePackage::SIMPLEANYTYPE:
        return createSimpleAnyType();
    case TypePackage::XMLTYPEDOCUMENTROOT:
        return createXMLTypeDocumentRoot();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject TypeFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]] ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    case TypePackage::ANYSIMPLETYPE:
        return ::ecorecpp::mapping::string_traits < ::type::AnySimpleType
                > ::fromString(_literalValue);
    case TypePackage::ANYURI:
        return ::ecorecpp::mapping::string_traits < ::type::AnyURI
                > ::fromString(_literalValue);
    case TypePackage::BASE64BINARY:
        return ::ecorecpp::mapping::string_traits < ::type::Base64Binary
                > ::fromString(_literalValue);
    case TypePackage::BOOLEAN:
        return ::ecorecpp::mapping::string_traits < ::type::Boolean
                > ::fromString(_literalValue);
    case TypePackage::BOOLEANOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::BooleanObject
                > ::fromString(_literalValue);
    case TypePackage::BYTE:
        return ::ecorecpp::mapping::string_traits < ::type::Byte
                > ::fromString(_literalValue);
    case TypePackage::BYTEOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::ByteObject
                > ::fromString(_literalValue);
    case TypePackage::DATE:
        return ::ecorecpp::mapping::string_traits < ::type::Date
                > ::fromString(_literalValue);
    case TypePackage::DATETIME:
        return ::ecorecpp::mapping::string_traits < ::type::DateTime
                > ::fromString(_literalValue);
    case TypePackage::DECIMAL:
        return ::ecorecpp::mapping::string_traits < ::type::Decimal
                > ::fromString(_literalValue);
    case TypePackage::DOUBLE:
        return ::ecorecpp::mapping::string_traits < ::type::Double
                > ::fromString(_literalValue);
    case TypePackage::DOUBLEOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::DoubleObject
                > ::fromString(_literalValue);
    case TypePackage::DURATION:
        return ::ecorecpp::mapping::string_traits < ::type::Duration
                > ::fromString(_literalValue);
    case TypePackage::ENTITIES:
        return ::ecorecpp::mapping::string_traits < ::type::ENTITIES
                > ::fromString(_literalValue);
    case TypePackage::ENTITIESBASE:
        return ::ecorecpp::mapping::string_traits < ::type::ENTITIESBase
                > ::fromString(_literalValue);
    case TypePackage::ENTITY:
        return ::ecorecpp::mapping::string_traits < ::type::ENTITY
                > ::fromString(_literalValue);
    case TypePackage::FLOAT:
        return ::ecorecpp::mapping::string_traits < ::type::Float
                > ::fromString(_literalValue);
    case TypePackage::FLOATOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::FloatObject
                > ::fromString(_literalValue);
    case TypePackage::GDAY:
        return ::ecorecpp::mapping::string_traits < ::type::GDay
                > ::fromString(_literalValue);
    case TypePackage::GMONTH:
        return ::ecorecpp::mapping::string_traits < ::type::GMonth
                > ::fromString(_literalValue);
    case TypePackage::GMONTHDAY:
        return ::ecorecpp::mapping::string_traits < ::type::GMonthDay
                > ::fromString(_literalValue);
    case TypePackage::GYEAR:
        return ::ecorecpp::mapping::string_traits < ::type::GYear
                > ::fromString(_literalValue);
    case TypePackage::GYEARMONTH:
        return ::ecorecpp::mapping::string_traits < ::type::GYearMonth
                > ::fromString(_literalValue);
    case TypePackage::HEXBINARY:
        return ::ecorecpp::mapping::string_traits < ::type::HexBinary
                > ::fromString(_literalValue);
    case TypePackage::ID:
        return ::ecorecpp::mapping::string_traits < ::type::ID
                > ::fromString(_literalValue);
    case TypePackage::IDREF:
        return ::ecorecpp::mapping::string_traits < ::type::IDREF
                > ::fromString(_literalValue);
    case TypePackage::IDREFS:
        return ::ecorecpp::mapping::string_traits < ::type::IDREFS
                > ::fromString(_literalValue);
    case TypePackage::IDREFSBASE:
        return ::ecorecpp::mapping::string_traits < ::type::IDREFSBase
                > ::fromString(_literalValue);
    case TypePackage::INT:
        return ::ecorecpp::mapping::string_traits < ::type::Int
                > ::fromString(_literalValue);
    case TypePackage::INTEGER:
        return ::ecorecpp::mapping::string_traits < ::type::Integer
                > ::fromString(_literalValue);
    case TypePackage::INTOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::IntObject
                > ::fromString(_literalValue);
    case TypePackage::LANGUAGE:
        return ::ecorecpp::mapping::string_traits < ::type::Language
                > ::fromString(_literalValue);
    case TypePackage::LONG:
        return ::ecorecpp::mapping::string_traits < ::type::Long
                > ::fromString(_literalValue);
    case TypePackage::LONGOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::LongObject
                > ::fromString(_literalValue);
    case TypePackage::NAME:
        return ::ecorecpp::mapping::string_traits < ::type::Name
                > ::fromString(_literalValue);
    case TypePackage::NCNAME:
        return ::ecorecpp::mapping::string_traits < ::type::NCName
                > ::fromString(_literalValue);
    case TypePackage::NEGATIVEINTEGER:
        return ::ecorecpp::mapping::string_traits < ::type::NegativeInteger
                > ::fromString(_literalValue);
    case TypePackage::NMTOKEN:
        return ::ecorecpp::mapping::string_traits < ::type::NMTOKEN
                > ::fromString(_literalValue);
    case TypePackage::NMTOKENS:
        return ::ecorecpp::mapping::string_traits < ::type::NMTOKENS
                > ::fromString(_literalValue);
    case TypePackage::NMTOKENSBASE:
        return ::ecorecpp::mapping::string_traits < ::type::NMTOKENSBase
                > ::fromString(_literalValue);
    case TypePackage::NONNEGATIVEINTEGER:
        return ::ecorecpp::mapping::string_traits < ::type::NonNegativeInteger
                > ::fromString(_literalValue);
    case TypePackage::NONPOSITIVEINTEGER:
        return ::ecorecpp::mapping::string_traits < ::type::NonPositiveInteger
                > ::fromString(_literalValue);
    case TypePackage::NORMALIZEDSTRING:
        return ::ecorecpp::mapping::string_traits < ::type::NormalizedString
                > ::fromString(_literalValue);
    case TypePackage::NOTATION:
        return ::ecorecpp::mapping::string_traits < ::type::NOTATION
                > ::fromString(_literalValue);
    case TypePackage::POSITIVEINTEGER:
        return ::ecorecpp::mapping::string_traits < ::type::PositiveInteger
                > ::fromString(_literalValue);
    case TypePackage::QNAME:
        return ::ecorecpp::mapping::string_traits < ::type::QName
                > ::fromString(_literalValue);
    case TypePackage::SHORT:
        return ::ecorecpp::mapping::string_traits < ::type::Short
                > ::fromString(_literalValue);
    case TypePackage::SHORTOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::ShortObject
                > ::fromString(_literalValue);
    case TypePackage::STRING:
        return ::ecorecpp::mapping::string_traits < ::type::String
                > ::fromString(_literalValue);
    case TypePackage::TIME:
        return ::ecorecpp::mapping::string_traits < ::type::Time
                > ::fromString(_literalValue);
    case TypePackage::TOKEN:
        return ::ecorecpp::mapping::string_traits < ::type::Token
                > ::fromString(_literalValue);
    case TypePackage::UNSIGNEDBYTE:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedByte
                > ::fromString(_literalValue);
    case TypePackage::UNSIGNEDBYTEOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedByteObject
                > ::fromString(_literalValue);
    case TypePackage::UNSIGNEDINT:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedInt
                > ::fromString(_literalValue);
    case TypePackage::UNSIGNEDINTOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedIntObject
                > ::fromString(_literalValue);
    case TypePackage::UNSIGNEDLONG:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedLong
                > ::fromString(_literalValue);
    case TypePackage::UNSIGNEDSHORT:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedShort
                > ::fromString(_literalValue);
    case TypePackage::UNSIGNEDSHORTOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedShortObject
                > ::fromString(_literalValue);
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString TypeFactory::convertToString(::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]] ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    case TypePackage::ANYSIMPLETYPE:
        return ::ecorecpp::mapping::string_traits < ::type::AnySimpleType
                > ::toString(_instanceValue);
    case TypePackage::ANYURI:
        return ::ecorecpp::mapping::string_traits < ::type::AnyURI
                > ::toString(_instanceValue);
    case TypePackage::BASE64BINARY:
        return ::ecorecpp::mapping::string_traits < ::type::Base64Binary
                > ::toString(_instanceValue);
    case TypePackage::BOOLEAN:
        return ::ecorecpp::mapping::string_traits < ::type::Boolean
                > ::toString(_instanceValue);
    case TypePackage::BOOLEANOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::BooleanObject
                > ::toString(_instanceValue);
    case TypePackage::BYTE:
        return ::ecorecpp::mapping::string_traits < ::type::Byte
                > ::toString(_instanceValue);
    case TypePackage::BYTEOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::ByteObject
                > ::toString(_instanceValue);
    case TypePackage::DATE:
        return ::ecorecpp::mapping::string_traits < ::type::Date
                > ::toString(_instanceValue);
    case TypePackage::DATETIME:
        return ::ecorecpp::mapping::string_traits < ::type::DateTime
                > ::toString(_instanceValue);
    case TypePackage::DECIMAL:
        return ::ecorecpp::mapping::string_traits < ::type::Decimal
                > ::toString(_instanceValue);
    case TypePackage::DOUBLE:
        return ::ecorecpp::mapping::string_traits < ::type::Double
                > ::toString(_instanceValue);
    case TypePackage::DOUBLEOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::DoubleObject
                > ::toString(_instanceValue);
    case TypePackage::DURATION:
        return ::ecorecpp::mapping::string_traits < ::type::Duration
                > ::toString(_instanceValue);
    case TypePackage::ENTITIES:
        return ::ecorecpp::mapping::string_traits < ::type::ENTITIES
                > ::toString(_instanceValue);
    case TypePackage::ENTITIESBASE:
        return ::ecorecpp::mapping::string_traits < ::type::ENTITIESBase
                > ::toString(_instanceValue);
    case TypePackage::ENTITY:
        return ::ecorecpp::mapping::string_traits < ::type::ENTITY
                > ::toString(_instanceValue);
    case TypePackage::FLOAT:
        return ::ecorecpp::mapping::string_traits < ::type::Float
                > ::toString(_instanceValue);
    case TypePackage::FLOATOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::FloatObject
                > ::toString(_instanceValue);
    case TypePackage::GDAY:
        return ::ecorecpp::mapping::string_traits < ::type::GDay
                > ::toString(_instanceValue);
    case TypePackage::GMONTH:
        return ::ecorecpp::mapping::string_traits < ::type::GMonth
                > ::toString(_instanceValue);
    case TypePackage::GMONTHDAY:
        return ::ecorecpp::mapping::string_traits < ::type::GMonthDay
                > ::toString(_instanceValue);
    case TypePackage::GYEAR:
        return ::ecorecpp::mapping::string_traits < ::type::GYear
                > ::toString(_instanceValue);
    case TypePackage::GYEARMONTH:
        return ::ecorecpp::mapping::string_traits < ::type::GYearMonth
                > ::toString(_instanceValue);
    case TypePackage::HEXBINARY:
        return ::ecorecpp::mapping::string_traits < ::type::HexBinary
                > ::toString(_instanceValue);
    case TypePackage::ID:
        return ::ecorecpp::mapping::string_traits < ::type::ID
                > ::toString(_instanceValue);
    case TypePackage::IDREF:
        return ::ecorecpp::mapping::string_traits < ::type::IDREF
                > ::toString(_instanceValue);
    case TypePackage::IDREFS:
        return ::ecorecpp::mapping::string_traits < ::type::IDREFS
                > ::toString(_instanceValue);
    case TypePackage::IDREFSBASE:
        return ::ecorecpp::mapping::string_traits < ::type::IDREFSBase
                > ::toString(_instanceValue);
    case TypePackage::INT:
        return ::ecorecpp::mapping::string_traits < ::type::Int
                > ::toString(_instanceValue);
    case TypePackage::INTEGER:
        return ::ecorecpp::mapping::string_traits < ::type::Integer
                > ::toString(_instanceValue);
    case TypePackage::INTOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::IntObject
                > ::toString(_instanceValue);
    case TypePackage::LANGUAGE:
        return ::ecorecpp::mapping::string_traits < ::type::Language
                > ::toString(_instanceValue);
    case TypePackage::LONG:
        return ::ecorecpp::mapping::string_traits < ::type::Long
                > ::toString(_instanceValue);
    case TypePackage::LONGOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::LongObject
                > ::toString(_instanceValue);
    case TypePackage::NAME:
        return ::ecorecpp::mapping::string_traits < ::type::Name
                > ::toString(_instanceValue);
    case TypePackage::NCNAME:
        return ::ecorecpp::mapping::string_traits < ::type::NCName
                > ::toString(_instanceValue);
    case TypePackage::NEGATIVEINTEGER:
        return ::ecorecpp::mapping::string_traits < ::type::NegativeInteger
                > ::toString(_instanceValue);
    case TypePackage::NMTOKEN:
        return ::ecorecpp::mapping::string_traits < ::type::NMTOKEN
                > ::toString(_instanceValue);
    case TypePackage::NMTOKENS:
        return ::ecorecpp::mapping::string_traits < ::type::NMTOKENS
                > ::toString(_instanceValue);
    case TypePackage::NMTOKENSBASE:
        return ::ecorecpp::mapping::string_traits < ::type::NMTOKENSBase
                > ::toString(_instanceValue);
    case TypePackage::NONNEGATIVEINTEGER:
        return ::ecorecpp::mapping::string_traits < ::type::NonNegativeInteger
                > ::toString(_instanceValue);
    case TypePackage::NONPOSITIVEINTEGER:
        return ::ecorecpp::mapping::string_traits < ::type::NonPositiveInteger
                > ::toString(_instanceValue);
    case TypePackage::NORMALIZEDSTRING:
        return ::ecorecpp::mapping::string_traits < ::type::NormalizedString
                > ::toString(_instanceValue);
    case TypePackage::NOTATION:
        return ::ecorecpp::mapping::string_traits < ::type::NOTATION
                > ::toString(_instanceValue);
    case TypePackage::POSITIVEINTEGER:
        return ::ecorecpp::mapping::string_traits < ::type::PositiveInteger
                > ::toString(_instanceValue);
    case TypePackage::QNAME:
        return ::ecorecpp::mapping::string_traits < ::type::QName
                > ::toString(_instanceValue);
    case TypePackage::SHORT:
        return ::ecorecpp::mapping::string_traits < ::type::Short
                > ::toString(_instanceValue);
    case TypePackage::SHORTOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::ShortObject
                > ::toString(_instanceValue);
    case TypePackage::STRING:
        return ::ecorecpp::mapping::string_traits < ::type::String
                > ::toString(_instanceValue);
    case TypePackage::TIME:
        return ::ecorecpp::mapping::string_traits < ::type::Time
                > ::toString(_instanceValue);
    case TypePackage::TOKEN:
        return ::ecorecpp::mapping::string_traits < ::type::Token
                > ::toString(_instanceValue);
    case TypePackage::UNSIGNEDBYTE:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedByte
                > ::toString(_instanceValue);
    case TypePackage::UNSIGNEDBYTEOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedByteObject
                > ::toString(_instanceValue);
    case TypePackage::UNSIGNEDINT:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedInt
                > ::toString(_instanceValue);
    case TypePackage::UNSIGNEDINTOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedIntObject
                > ::toString(_instanceValue);
    case TypePackage::UNSIGNEDLONG:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedLong
                > ::toString(_instanceValue);
    case TypePackage::UNSIGNEDSHORT:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedShort
                > ::toString(_instanceValue);
    case TypePackage::UNSIGNEDSHORTOBJECT:
        return ::ecorecpp::mapping::string_traits < ::type::UnsignedShortObject
                > ::toString(_instanceValue);
    default:
        throw "IllegalArgumentException";
    }
}

AnyType_ptr TypeFactory::createAnyType()
{
    return ::ecore::Ptr < AnyType > (new AnyType);
}
ProcessingInstruction_ptr TypeFactory::createProcessingInstruction()
{
    return ::ecore::Ptr < ProcessingInstruction > (new ProcessingInstruction);
}
SimpleAnyType_ptr TypeFactory::createSimpleAnyType()
{
    return ::ecore::Ptr < SimpleAnyType > (new SimpleAnyType);
}
XMLTypeDocumentRoot_ptr TypeFactory::createXMLTypeDocumentRoot()
{
    return ::ecore::Ptr < XMLTypeDocumentRoot > (new XMLTypeDocumentRoot);
}

