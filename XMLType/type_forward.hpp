// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type_forward.hpp
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

#ifndef _TYPE_FORWARD_HPP
#define _TYPE_FORWARD_HPP

#include <ecore_forward.hpp> // for EDataTypes

/*PROTECTED REGION ID(type_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

namespace type
{

// EDataType
    /*PROTECTED REGION ID(type_AnySimpleType) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using AnySimpleType = ::ecorecpp::mapping::any;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_AnyURI) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using AnyURI = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Base64Binary) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Base64Binary = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Boolean) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Boolean = bool;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_BooleanObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using BooleanObject = bool;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Byte) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Byte = int8_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_ByteObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using ByteObject = int8_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Date) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Date = ::ecorecpp::mapping::EDate;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_DateTime) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using DateTime = ::ecorecpp::mapping::EDate;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Decimal) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Decimal = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Double) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Double = double;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_DoubleObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using DoubleObject = double;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Duration) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Duration = int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_ENTITIES) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using ENTITIES = ::ecore::EList_ptr< ::ecorecpp::mapping::type_definitions::string_t >;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_ENTITIESBase) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using ENTITIESBase = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_ENTITY) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using ENTITY = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Float) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Float = float;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_FloatObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using FloatObject = float;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_GDay) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using GDay = int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_GMonth) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using GMonth = int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_GMonthDay) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using GMonthDay = int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_GYear) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using GYear = int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_GYearMonth) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using GYearMonth = int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_HexBinary) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using HexBinary = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_ID) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using ID = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_IDREF) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using IDREF = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_IDREFS) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using IDREFS = ::ecore::EList_ptr< ::ecorecpp::mapping::type_definitions::string_t >;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_IDREFSBase) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using IDREFSBase = ::ecore::EList_ptr< ::ecorecpp::mapping::type_definitions::string_t >;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Int) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Int = int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Integer) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Integer = int64_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_IntObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using IntObject = int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Language) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Language = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Long) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Long = int64_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_LongObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using LongObject = int64_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Name) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Name = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_NCName) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using NCName = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_NegativeInteger) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using NegativeInteger = int64_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_NMTOKEN) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using NMTOKEN = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_NMTOKENS) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using NMTOKENS = ::ecore::EList_ptr< ::ecorecpp::mapping::type_definitions::string_t >;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_NMTOKENSBase) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using NMTOKENSBase = ::ecore::EList_ptr< ::ecorecpp::mapping::type_definitions::string_t >;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_NonNegativeInteger) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using NonNegativeInteger = uint64_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_NonPositiveInteger) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using NonPositiveInteger = int64_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_NormalizedString) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using NormalizedString = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_NOTATION) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using NOTATION = int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_PositiveInteger) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using PositiveInteger = uint64_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_QName) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using QName = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Short) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Short = int16_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_ShortObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using ShortObject = int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_String) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using String = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Time) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Time = int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_Token) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using Token = ::ecorecpp::mapping::type_definitions::string_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_UnsignedByte) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using UnsignedByte = uint8_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_UnsignedByteObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using UnsignedByteObject = uint8_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_UnsignedInt) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using UnsignedInt = unsigned int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_UnsignedIntObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using UnsignedIntObject = unsigned int;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_UnsignedLong) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using UnsignedLong = uint64_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_UnsignedShort) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using UnsignedShort = uint16_t;

    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(type_UnsignedShortObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    using UnsignedShortObject = uint16_t;

    /*PROTECTED REGION END*/

// EClass
// AnyType
    class AnyType;
    using AnyType_ptr = ::ecore::Ptr<AnyType>;

// ProcessingInstruction
    class ProcessingInstruction;
    using ProcessingInstruction_ptr = ::ecore::Ptr<ProcessingInstruction>;

// SimpleAnyType
    class SimpleAnyType;
    using SimpleAnyType_ptr = ::ecore::Ptr<SimpleAnyType>;

// XMLTypeDocumentRoot
    class XMLTypeDocumentRoot;
    using XMLTypeDocumentRoot_ptr = ::ecore::Ptr<XMLTypeDocumentRoot>;

// EEnum

// Package & Factory
    class TypeFactory;
    using TypeFactory_ptr = ::ecore::Ptr<TypeFactory>;
    class TypePackage;
    using TypePackage_ptr = ::ecore::Ptr<TypePackage>;

} // type

#endif // _TYPE_FORWARD_HPP

