// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/CodePackage.hpp
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

#ifndef _KDM_CODEPACKAGE_HPP
#define _KDM_CODEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/code_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace code
    {

    class EXPORT_KDM_DLL CodePackage : public virtual ::ecore::EPackage
    {
    public:

        static CodePackage_ptr _instance();
        static CodePackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractCodeElement
        static const int ABSTRACTCODEELEMENT = 0;
        static const int ABSTRACTCODEELEMENT__ATTRIBUTE = 0;
        static const int ABSTRACTCODEELEMENT__ANNOTATION = 1;
        static const int ABSTRACTCODEELEMENT__STEREOTYPE = 2;
        static const int ABSTRACTCODEELEMENT__TAGGEDVALUE = 3;
        static const int ABSTRACTCODEELEMENT__NAME = 4;
        static const int ABSTRACTCODEELEMENT__SOURCE = 5;
        static const int ABSTRACTCODEELEMENT__COMMENT = 6;
        static const int ABSTRACTCODEELEMENT__CODERELATION = 7;
        static const int ABSTRACTCODEELEMENT_FEATURE_COUNT = 8;

        // IDs for classifier AbstractCodeRelationship
        static const int ABSTRACTCODERELATIONSHIP = 1;
        static const int ABSTRACTCODERELATIONSHIP__ATTRIBUTE = 0;
        static const int ABSTRACTCODERELATIONSHIP__ANNOTATION = 1;
        static const int ABSTRACTCODERELATIONSHIP__STEREOTYPE = 2;
        static const int ABSTRACTCODERELATIONSHIP__TAGGEDVALUE = 3;
        static const int ABSTRACTCODERELATIONSHIP_FEATURE_COUNT = 4;

        // IDs for classifier ArrayType
        static const int ARRAYTYPE = 2;
        static const int ARRAYTYPE__ATTRIBUTE = 0;
        static const int ARRAYTYPE__ANNOTATION = 1;
        static const int ARRAYTYPE__STEREOTYPE = 2;
        static const int ARRAYTYPE__TAGGEDVALUE = 3;
        static const int ARRAYTYPE__NAME = 4;
        static const int ARRAYTYPE__SOURCE = 5;
        static const int ARRAYTYPE__COMMENT = 6;
        static const int ARRAYTYPE__CODERELATION = 7;
        static const int ARRAYTYPE__ITEMUNIT = 8;
        static const int ARRAYTYPE__SIZE = 9;
        static const int ARRAYTYPE__INDEXUNIT = 10;
        static const int ARRAYTYPE_FEATURE_COUNT = 11;

        // IDs for classifier BagType
        static const int BAGTYPE = 3;
        static const int BAGTYPE__ATTRIBUTE = 0;
        static const int BAGTYPE__ANNOTATION = 1;
        static const int BAGTYPE__STEREOTYPE = 2;
        static const int BAGTYPE__TAGGEDVALUE = 3;
        static const int BAGTYPE__NAME = 4;
        static const int BAGTYPE__SOURCE = 5;
        static const int BAGTYPE__COMMENT = 6;
        static const int BAGTYPE__CODERELATION = 7;
        static const int BAGTYPE__ITEMUNIT = 8;
        static const int BAGTYPE__SIZE = 9;
        static const int BAGTYPE_FEATURE_COUNT = 10;

        // IDs for classifier BitstringType
        static const int BITSTRINGTYPE = 4;
        static const int BITSTRINGTYPE__ATTRIBUTE = 0;
        static const int BITSTRINGTYPE__ANNOTATION = 1;
        static const int BITSTRINGTYPE__STEREOTYPE = 2;
        static const int BITSTRINGTYPE__TAGGEDVALUE = 3;
        static const int BITSTRINGTYPE__NAME = 4;
        static const int BITSTRINGTYPE__SOURCE = 5;
        static const int BITSTRINGTYPE__COMMENT = 6;
        static const int BITSTRINGTYPE__CODERELATION = 7;
        static const int BITSTRINGTYPE_FEATURE_COUNT = 8;

        // IDs for classifier BitType
        static const int BITTYPE = 5;
        static const int BITTYPE__ATTRIBUTE = 0;
        static const int BITTYPE__ANNOTATION = 1;
        static const int BITTYPE__STEREOTYPE = 2;
        static const int BITTYPE__TAGGEDVALUE = 3;
        static const int BITTYPE__NAME = 4;
        static const int BITTYPE__SOURCE = 5;
        static const int BITTYPE__COMMENT = 6;
        static const int BITTYPE__CODERELATION = 7;
        static const int BITTYPE_FEATURE_COUNT = 8;

        // IDs for classifier BooleanType
        static const int BOOLEANTYPE = 6;
        static const int BOOLEANTYPE__ATTRIBUTE = 0;
        static const int BOOLEANTYPE__ANNOTATION = 1;
        static const int BOOLEANTYPE__STEREOTYPE = 2;
        static const int BOOLEANTYPE__TAGGEDVALUE = 3;
        static const int BOOLEANTYPE__NAME = 4;
        static const int BOOLEANTYPE__SOURCE = 5;
        static const int BOOLEANTYPE__COMMENT = 6;
        static const int BOOLEANTYPE__CODERELATION = 7;
        static const int BOOLEANTYPE_FEATURE_COUNT = 8;

        // IDs for classifier CallableKind
        static const int CALLABLEKIND = 7;

        // IDs for classifier CallableUnit
        static const int CALLABLEUNIT = 8;
        static const int CALLABLEUNIT__ATTRIBUTE = 0;
        static const int CALLABLEUNIT__ANNOTATION = 1;
        static const int CALLABLEUNIT__STEREOTYPE = 2;
        static const int CALLABLEUNIT__TAGGEDVALUE = 3;
        static const int CALLABLEUNIT__NAME = 4;
        static const int CALLABLEUNIT__SOURCE = 5;
        static const int CALLABLEUNIT__COMMENT = 6;
        static const int CALLABLEUNIT__CODERELATION = 7;
        static const int CALLABLEUNIT__TYPE = 8;
        static const int CALLABLEUNIT__ENTRYFLOW = 9;
        static const int CALLABLEUNIT__CODEELEMENT = 10;
        static const int CALLABLEUNIT__KIND = 11;
        static const int CALLABLEUNIT_FEATURE_COUNT = 12;

        // IDs for classifier CharType
        static const int CHARTYPE = 9;
        static const int CHARTYPE__ATTRIBUTE = 0;
        static const int CHARTYPE__ANNOTATION = 1;
        static const int CHARTYPE__STEREOTYPE = 2;
        static const int CHARTYPE__TAGGEDVALUE = 3;
        static const int CHARTYPE__NAME = 4;
        static const int CHARTYPE__SOURCE = 5;
        static const int CHARTYPE__COMMENT = 6;
        static const int CHARTYPE__CODERELATION = 7;
        static const int CHARTYPE_FEATURE_COUNT = 8;

        // IDs for classifier ChoiceType
        static const int CHOICETYPE = 10;
        static const int CHOICETYPE__ATTRIBUTE = 0;
        static const int CHOICETYPE__ANNOTATION = 1;
        static const int CHOICETYPE__STEREOTYPE = 2;
        static const int CHOICETYPE__TAGGEDVALUE = 3;
        static const int CHOICETYPE__NAME = 4;
        static const int CHOICETYPE__SOURCE = 5;
        static const int CHOICETYPE__COMMENT = 6;
        static const int CHOICETYPE__CODERELATION = 7;
        static const int CHOICETYPE__ITEMUNIT = 8;
        static const int CHOICETYPE_FEATURE_COUNT = 9;

        // IDs for classifier ClassUnit
        static const int CLASSUNIT = 11;
        static const int CLASSUNIT__ATTRIBUTE = 0;
        static const int CLASSUNIT__ANNOTATION = 1;
        static const int CLASSUNIT__STEREOTYPE = 2;
        static const int CLASSUNIT__TAGGEDVALUE = 3;
        static const int CLASSUNIT__NAME = 4;
        static const int CLASSUNIT__SOURCE = 5;
        static const int CLASSUNIT__COMMENT = 6;
        static const int CLASSUNIT__CODERELATION = 7;
        static const int CLASSUNIT__ISABSTRACT = 8;
        static const int CLASSUNIT__CODEELEMENT = 9;
        static const int CLASSUNIT_FEATURE_COUNT = 10;

        // IDs for classifier CodeAssembly
        static const int CODEASSEMBLY = 12;
        static const int CODEASSEMBLY__ATTRIBUTE = 0;
        static const int CODEASSEMBLY__ANNOTATION = 1;
        static const int CODEASSEMBLY__STEREOTYPE = 2;
        static const int CODEASSEMBLY__TAGGEDVALUE = 3;
        static const int CODEASSEMBLY__NAME = 4;
        static const int CODEASSEMBLY__SOURCE = 5;
        static const int CODEASSEMBLY__COMMENT = 6;
        static const int CODEASSEMBLY__CODERELATION = 7;
        static const int CODEASSEMBLY__CODEELEMENT = 8;
        static const int CODEASSEMBLY_FEATURE_COUNT = 9;

        // IDs for classifier CodeElement
        static const int CODEELEMENT = 13;
        static const int CODEELEMENT__ATTRIBUTE = 0;
        static const int CODEELEMENT__ANNOTATION = 1;
        static const int CODEELEMENT__STEREOTYPE = 2;
        static const int CODEELEMENT__TAGGEDVALUE = 3;
        static const int CODEELEMENT__NAME = 4;
        static const int CODEELEMENT__SOURCE = 5;
        static const int CODEELEMENT__COMMENT = 6;
        static const int CODEELEMENT__CODERELATION = 7;
        static const int CODEELEMENT_FEATURE_COUNT = 8;

        // IDs for classifier CodeItem
        static const int CODEITEM = 14;
        static const int CODEITEM__ATTRIBUTE = 0;
        static const int CODEITEM__ANNOTATION = 1;
        static const int CODEITEM__STEREOTYPE = 2;
        static const int CODEITEM__TAGGEDVALUE = 3;
        static const int CODEITEM__NAME = 4;
        static const int CODEITEM__SOURCE = 5;
        static const int CODEITEM__COMMENT = 6;
        static const int CODEITEM__CODERELATION = 7;
        static const int CODEITEM_FEATURE_COUNT = 8;

        // IDs for classifier CodeModel
        static const int CODEMODEL = 15;
        static const int CODEMODEL__ATTRIBUTE = 0;
        static const int CODEMODEL__ANNOTATION = 1;
        static const int CODEMODEL__STEREOTYPE = 2;
        static const int CODEMODEL__TAGGEDVALUE = 3;
        static const int CODEMODEL__AUDIT = 4;
        static const int CODEMODEL__EXTENSIONFAMILY = 5;
        static const int CODEMODEL__NAME = 6;
        static const int CODEMODEL__CODEELEMENT = 7;
        static const int CODEMODEL_FEATURE_COUNT = 8;

        // IDs for classifier CodeRelationship
        static const int CODERELATIONSHIP = 16;
        static const int CODERELATIONSHIP__ATTRIBUTE = 0;
        static const int CODERELATIONSHIP__ANNOTATION = 1;
        static const int CODERELATIONSHIP__STEREOTYPE = 2;
        static const int CODERELATIONSHIP__TAGGEDVALUE = 3;
        static const int CODERELATIONSHIP__TO = 4;
        static const int CODERELATIONSHIP__FROM = 5;
        static const int CODERELATIONSHIP_FEATURE_COUNT = 6;

        // IDs for classifier CommentUnit
        static const int COMMENTUNIT = 17;
        static const int COMMENTUNIT__ATTRIBUTE = 0;
        static const int COMMENTUNIT__ANNOTATION = 1;
        static const int COMMENTUNIT__STEREOTYPE = 2;
        static const int COMMENTUNIT__TAGGEDVALUE = 3;
        static const int COMMENTUNIT__TEXT = 4;
        static const int COMMENTUNIT_FEATURE_COUNT = 5;

        // IDs for classifier CompilationUnit
        static const int COMPILATIONUNIT = 18;
        static const int COMPILATIONUNIT__ATTRIBUTE = 0;
        static const int COMPILATIONUNIT__ANNOTATION = 1;
        static const int COMPILATIONUNIT__STEREOTYPE = 2;
        static const int COMPILATIONUNIT__TAGGEDVALUE = 3;
        static const int COMPILATIONUNIT__NAME = 4;
        static const int COMPILATIONUNIT__SOURCE = 5;
        static const int COMPILATIONUNIT__COMMENT = 6;
        static const int COMPILATIONUNIT__CODERELATION = 7;
        static const int COMPILATIONUNIT__CODEELEMENT = 8;
        static const int COMPILATIONUNIT_FEATURE_COUNT = 9;

        // IDs for classifier CompositeType
        static const int COMPOSITETYPE = 19;
        static const int COMPOSITETYPE__ATTRIBUTE = 0;
        static const int COMPOSITETYPE__ANNOTATION = 1;
        static const int COMPOSITETYPE__STEREOTYPE = 2;
        static const int COMPOSITETYPE__TAGGEDVALUE = 3;
        static const int COMPOSITETYPE__NAME = 4;
        static const int COMPOSITETYPE__SOURCE = 5;
        static const int COMPOSITETYPE__COMMENT = 6;
        static const int COMPOSITETYPE__CODERELATION = 7;
        static const int COMPOSITETYPE__ITEMUNIT = 8;
        static const int COMPOSITETYPE_FEATURE_COUNT = 9;

        // IDs for classifier ComputationalObject
        static const int COMPUTATIONALOBJECT = 20;
        static const int COMPUTATIONALOBJECT__ATTRIBUTE = 0;
        static const int COMPUTATIONALOBJECT__ANNOTATION = 1;
        static const int COMPUTATIONALOBJECT__STEREOTYPE = 2;
        static const int COMPUTATIONALOBJECT__TAGGEDVALUE = 3;
        static const int COMPUTATIONALOBJECT__NAME = 4;
        static const int COMPUTATIONALOBJECT__SOURCE = 5;
        static const int COMPUTATIONALOBJECT__COMMENT = 6;
        static const int COMPUTATIONALOBJECT__CODERELATION = 7;
        static const int COMPUTATIONALOBJECT_FEATURE_COUNT = 8;

        // IDs for classifier ConditionalDirective
        static const int CONDITIONALDIRECTIVE = 21;
        static const int CONDITIONALDIRECTIVE__ATTRIBUTE = 0;
        static const int CONDITIONALDIRECTIVE__ANNOTATION = 1;
        static const int CONDITIONALDIRECTIVE__STEREOTYPE = 2;
        static const int CONDITIONALDIRECTIVE__TAGGEDVALUE = 3;
        static const int CONDITIONALDIRECTIVE__NAME = 4;
        static const int CONDITIONALDIRECTIVE__SOURCE = 5;
        static const int CONDITIONALDIRECTIVE__COMMENT = 6;
        static const int CONDITIONALDIRECTIVE__CODERELATION = 7;
        static const int CONDITIONALDIRECTIVE__CODEELEMENT = 8;
        static const int CONDITIONALDIRECTIVE_FEATURE_COUNT = 9;

        // IDs for classifier ControlElement
        static const int CONTROLELEMENT = 22;
        static const int CONTROLELEMENT__ATTRIBUTE = 0;
        static const int CONTROLELEMENT__ANNOTATION = 1;
        static const int CONTROLELEMENT__STEREOTYPE = 2;
        static const int CONTROLELEMENT__TAGGEDVALUE = 3;
        static const int CONTROLELEMENT__NAME = 4;
        static const int CONTROLELEMENT__SOURCE = 5;
        static const int CONTROLELEMENT__COMMENT = 6;
        static const int CONTROLELEMENT__CODERELATION = 7;
        static const int CONTROLELEMENT__TYPE = 8;
        static const int CONTROLELEMENT__ENTRYFLOW = 9;
        static const int CONTROLELEMENT__CODEELEMENT = 10;
        static const int CONTROLELEMENT_FEATURE_COUNT = 11;

        // IDs for classifier DataElement
        static const int DATAELEMENT = 23;
        static const int DATAELEMENT__ATTRIBUTE = 0;
        static const int DATAELEMENT__ANNOTATION = 1;
        static const int DATAELEMENT__STEREOTYPE = 2;
        static const int DATAELEMENT__TAGGEDVALUE = 3;
        static const int DATAELEMENT__NAME = 4;
        static const int DATAELEMENT__SOURCE = 5;
        static const int DATAELEMENT__COMMENT = 6;
        static const int DATAELEMENT__CODERELATION = 7;
        static const int DATAELEMENT__TYPE = 8;
        static const int DATAELEMENT__EXT = 9;
        static const int DATAELEMENT__SIZE = 10;
        static const int DATAELEMENT__CODEELEMENT = 11;
        static const int DATAELEMENT_FEATURE_COUNT = 12;

        // IDs for classifier Datatype
        static const int DATATYPE = 24;
        static const int DATATYPE__ATTRIBUTE = 0;
        static const int DATATYPE__ANNOTATION = 1;
        static const int DATATYPE__STEREOTYPE = 2;
        static const int DATATYPE__TAGGEDVALUE = 3;
        static const int DATATYPE__NAME = 4;
        static const int DATATYPE__SOURCE = 5;
        static const int DATATYPE__COMMENT = 6;
        static const int DATATYPE__CODERELATION = 7;
        static const int DATATYPE_FEATURE_COUNT = 8;

        // IDs for classifier DateType
        static const int DATETYPE = 25;
        static const int DATETYPE__ATTRIBUTE = 0;
        static const int DATETYPE__ANNOTATION = 1;
        static const int DATETYPE__STEREOTYPE = 2;
        static const int DATETYPE__TAGGEDVALUE = 3;
        static const int DATETYPE__NAME = 4;
        static const int DATETYPE__SOURCE = 5;
        static const int DATETYPE__COMMENT = 6;
        static const int DATETYPE__CODERELATION = 7;
        static const int DATETYPE_FEATURE_COUNT = 8;

        // IDs for classifier DecimalType
        static const int DECIMALTYPE = 26;
        static const int DECIMALTYPE__ATTRIBUTE = 0;
        static const int DECIMALTYPE__ANNOTATION = 1;
        static const int DECIMALTYPE__STEREOTYPE = 2;
        static const int DECIMALTYPE__TAGGEDVALUE = 3;
        static const int DECIMALTYPE__NAME = 4;
        static const int DECIMALTYPE__SOURCE = 5;
        static const int DECIMALTYPE__COMMENT = 6;
        static const int DECIMALTYPE__CODERELATION = 7;
        static const int DECIMALTYPE_FEATURE_COUNT = 8;

        // IDs for classifier DefinedType
        static const int DEFINEDTYPE = 27;
        static const int DEFINEDTYPE__ATTRIBUTE = 0;
        static const int DEFINEDTYPE__ANNOTATION = 1;
        static const int DEFINEDTYPE__STEREOTYPE = 2;
        static const int DEFINEDTYPE__TAGGEDVALUE = 3;
        static const int DEFINEDTYPE__NAME = 4;
        static const int DEFINEDTYPE__SOURCE = 5;
        static const int DEFINEDTYPE__COMMENT = 6;
        static const int DEFINEDTYPE__CODERELATION = 7;
        static const int DEFINEDTYPE__TYPE = 8;
        static const int DEFINEDTYPE__CODEELEMENT = 9;
        static const int DEFINEDTYPE_FEATURE_COUNT = 10;

        // IDs for classifier DerivedType
        static const int DERIVEDTYPE = 28;
        static const int DERIVEDTYPE__ATTRIBUTE = 0;
        static const int DERIVEDTYPE__ANNOTATION = 1;
        static const int DERIVEDTYPE__STEREOTYPE = 2;
        static const int DERIVEDTYPE__TAGGEDVALUE = 3;
        static const int DERIVEDTYPE__NAME = 4;
        static const int DERIVEDTYPE__SOURCE = 5;
        static const int DERIVEDTYPE__COMMENT = 6;
        static const int DERIVEDTYPE__CODERELATION = 7;
        static const int DERIVEDTYPE__ITEMUNIT = 8;
        static const int DERIVEDTYPE_FEATURE_COUNT = 9;

        // IDs for classifier EnumeratedType
        static const int ENUMERATEDTYPE = 29;
        static const int ENUMERATEDTYPE__ATTRIBUTE = 0;
        static const int ENUMERATEDTYPE__ANNOTATION = 1;
        static const int ENUMERATEDTYPE__STEREOTYPE = 2;
        static const int ENUMERATEDTYPE__TAGGEDVALUE = 3;
        static const int ENUMERATEDTYPE__NAME = 4;
        static const int ENUMERATEDTYPE__SOURCE = 5;
        static const int ENUMERATEDTYPE__COMMENT = 6;
        static const int ENUMERATEDTYPE__CODERELATION = 7;
        static const int ENUMERATEDTYPE__VALUE = 8;
        static const int ENUMERATEDTYPE_FEATURE_COUNT = 9;

        // IDs for classifier Expands
        static const int EXPANDS = 30;
        static const int EXPANDS__ATTRIBUTE = 0;
        static const int EXPANDS__ANNOTATION = 1;
        static const int EXPANDS__STEREOTYPE = 2;
        static const int EXPANDS__TAGGEDVALUE = 3;
        static const int EXPANDS__TO = 4;
        static const int EXPANDS__FROM = 5;
        static const int EXPANDS_FEATURE_COUNT = 6;

        // IDs for classifier ExportKind
        static const int EXPORTKIND = 31;

        // IDs for classifier Extends
        static const int EXTENDS = 32;
        static const int EXTENDS__ATTRIBUTE = 0;
        static const int EXTENDS__ANNOTATION = 1;
        static const int EXTENDS__STEREOTYPE = 2;
        static const int EXTENDS__TAGGEDVALUE = 3;
        static const int EXTENDS__TO = 4;
        static const int EXTENDS__FROM = 5;
        static const int EXTENDS_FEATURE_COUNT = 6;

        // IDs for classifier FloatType
        static const int FLOATTYPE = 33;
        static const int FLOATTYPE__ATTRIBUTE = 0;
        static const int FLOATTYPE__ANNOTATION = 1;
        static const int FLOATTYPE__STEREOTYPE = 2;
        static const int FLOATTYPE__TAGGEDVALUE = 3;
        static const int FLOATTYPE__NAME = 4;
        static const int FLOATTYPE__SOURCE = 5;
        static const int FLOATTYPE__COMMENT = 6;
        static const int FLOATTYPE__CODERELATION = 7;
        static const int FLOATTYPE_FEATURE_COUNT = 8;

        // IDs for classifier GeneratedFrom
        static const int GENERATEDFROM = 34;
        static const int GENERATEDFROM__ATTRIBUTE = 0;
        static const int GENERATEDFROM__ANNOTATION = 1;
        static const int GENERATEDFROM__STEREOTYPE = 2;
        static const int GENERATEDFROM__TAGGEDVALUE = 3;
        static const int GENERATEDFROM__TO = 4;
        static const int GENERATEDFROM__FROM = 5;
        static const int GENERATEDFROM_FEATURE_COUNT = 6;

        // IDs for classifier HasType
        static const int HASTYPE = 35;
        static const int HASTYPE__ATTRIBUTE = 0;
        static const int HASTYPE__ANNOTATION = 1;
        static const int HASTYPE__STEREOTYPE = 2;
        static const int HASTYPE__TAGGEDVALUE = 3;
        static const int HASTYPE__TO = 4;
        static const int HASTYPE__FROM = 5;
        static const int HASTYPE_FEATURE_COUNT = 6;

        // IDs for classifier HasValue
        static const int HASVALUE = 36;
        static const int HASVALUE__ATTRIBUTE = 0;
        static const int HASVALUE__ANNOTATION = 1;
        static const int HASVALUE__STEREOTYPE = 2;
        static const int HASVALUE__TAGGEDVALUE = 3;
        static const int HASVALUE__TO = 4;
        static const int HASVALUE__FROM = 5;
        static const int HASVALUE_FEATURE_COUNT = 6;

        // IDs for classifier ImplementationOf
        static const int IMPLEMENTATIONOF = 37;
        static const int IMPLEMENTATIONOF__ATTRIBUTE = 0;
        static const int IMPLEMENTATIONOF__ANNOTATION = 1;
        static const int IMPLEMENTATIONOF__STEREOTYPE = 2;
        static const int IMPLEMENTATIONOF__TAGGEDVALUE = 3;
        static const int IMPLEMENTATIONOF__TO = 4;
        static const int IMPLEMENTATIONOF__FROM = 5;
        static const int IMPLEMENTATIONOF_FEATURE_COUNT = 6;

        // IDs for classifier Implements
        static const int IMPLEMENTS = 38;
        static const int IMPLEMENTS__ATTRIBUTE = 0;
        static const int IMPLEMENTS__ANNOTATION = 1;
        static const int IMPLEMENTS__STEREOTYPE = 2;
        static const int IMPLEMENTS__TAGGEDVALUE = 3;
        static const int IMPLEMENTS__TO = 4;
        static const int IMPLEMENTS__FROM = 5;
        static const int IMPLEMENTS_FEATURE_COUNT = 6;

        // IDs for classifier Imports
        static const int IMPORTS = 39;
        static const int IMPORTS__ATTRIBUTE = 0;
        static const int IMPORTS__ANNOTATION = 1;
        static const int IMPORTS__STEREOTYPE = 2;
        static const int IMPORTS__TAGGEDVALUE = 3;
        static const int IMPORTS__TO = 4;
        static const int IMPORTS__FROM = 5;
        static const int IMPORTS_FEATURE_COUNT = 6;

        // IDs for classifier IncludeDirective
        static const int INCLUDEDIRECTIVE = 40;
        static const int INCLUDEDIRECTIVE__ATTRIBUTE = 0;
        static const int INCLUDEDIRECTIVE__ANNOTATION = 1;
        static const int INCLUDEDIRECTIVE__STEREOTYPE = 2;
        static const int INCLUDEDIRECTIVE__TAGGEDVALUE = 3;
        static const int INCLUDEDIRECTIVE__NAME = 4;
        static const int INCLUDEDIRECTIVE__SOURCE = 5;
        static const int INCLUDEDIRECTIVE__COMMENT = 6;
        static const int INCLUDEDIRECTIVE__CODERELATION = 7;
        static const int INCLUDEDIRECTIVE__CODEELEMENT = 8;
        static const int INCLUDEDIRECTIVE_FEATURE_COUNT = 9;

        // IDs for classifier Includes
        static const int INCLUDES = 41;
        static const int INCLUDES__ATTRIBUTE = 0;
        static const int INCLUDES__ANNOTATION = 1;
        static const int INCLUDES__STEREOTYPE = 2;
        static const int INCLUDES__TAGGEDVALUE = 3;
        static const int INCLUDES__TO = 4;
        static const int INCLUDES__FROM = 5;
        static const int INCLUDES_FEATURE_COUNT = 6;

        // IDs for classifier IndexUnit
        static const int INDEXUNIT = 42;
        static const int INDEXUNIT__ATTRIBUTE = 0;
        static const int INDEXUNIT__ANNOTATION = 1;
        static const int INDEXUNIT__STEREOTYPE = 2;
        static const int INDEXUNIT__TAGGEDVALUE = 3;
        static const int INDEXUNIT__NAME = 4;
        static const int INDEXUNIT__SOURCE = 5;
        static const int INDEXUNIT__COMMENT = 6;
        static const int INDEXUNIT__CODERELATION = 7;
        static const int INDEXUNIT__TYPE = 8;
        static const int INDEXUNIT__EXT = 9;
        static const int INDEXUNIT__SIZE = 10;
        static const int INDEXUNIT__CODEELEMENT = 11;
        static const int INDEXUNIT_FEATURE_COUNT = 12;

        // IDs for classifier InstanceOf
        static const int INSTANCEOF = 43;
        static const int INSTANCEOF__ATTRIBUTE = 0;
        static const int INSTANCEOF__ANNOTATION = 1;
        static const int INSTANCEOF__STEREOTYPE = 2;
        static const int INSTANCEOF__TAGGEDVALUE = 3;
        static const int INSTANCEOF__TO = 4;
        static const int INSTANCEOF__FROM = 5;
        static const int INSTANCEOF_FEATURE_COUNT = 6;

        // IDs for classifier IntegerType
        static const int INTEGERTYPE = 44;
        static const int INTEGERTYPE__ATTRIBUTE = 0;
        static const int INTEGERTYPE__ANNOTATION = 1;
        static const int INTEGERTYPE__STEREOTYPE = 2;
        static const int INTEGERTYPE__TAGGEDVALUE = 3;
        static const int INTEGERTYPE__NAME = 4;
        static const int INTEGERTYPE__SOURCE = 5;
        static const int INTEGERTYPE__COMMENT = 6;
        static const int INTEGERTYPE__CODERELATION = 7;
        static const int INTEGERTYPE_FEATURE_COUNT = 8;

        // IDs for classifier InterfaceUnit
        static const int INTERFACEUNIT = 45;
        static const int INTERFACEUNIT__ATTRIBUTE = 0;
        static const int INTERFACEUNIT__ANNOTATION = 1;
        static const int INTERFACEUNIT__STEREOTYPE = 2;
        static const int INTERFACEUNIT__TAGGEDVALUE = 3;
        static const int INTERFACEUNIT__NAME = 4;
        static const int INTERFACEUNIT__SOURCE = 5;
        static const int INTERFACEUNIT__COMMENT = 6;
        static const int INTERFACEUNIT__CODERELATION = 7;
        static const int INTERFACEUNIT__CODEELEMENT = 8;
        static const int INTERFACEUNIT_FEATURE_COUNT = 9;

        // IDs for classifier ItemUnit
        static const int ITEMUNIT = 46;
        static const int ITEMUNIT__ATTRIBUTE = 0;
        static const int ITEMUNIT__ANNOTATION = 1;
        static const int ITEMUNIT__STEREOTYPE = 2;
        static const int ITEMUNIT__TAGGEDVALUE = 3;
        static const int ITEMUNIT__NAME = 4;
        static const int ITEMUNIT__SOURCE = 5;
        static const int ITEMUNIT__COMMENT = 6;
        static const int ITEMUNIT__CODERELATION = 7;
        static const int ITEMUNIT__TYPE = 8;
        static const int ITEMUNIT__EXT = 9;
        static const int ITEMUNIT__SIZE = 10;
        static const int ITEMUNIT__CODEELEMENT = 11;
        static const int ITEMUNIT_FEATURE_COUNT = 12;

        // IDs for classifier LanguageUnit
        static const int LANGUAGEUNIT = 47;
        static const int LANGUAGEUNIT__ATTRIBUTE = 0;
        static const int LANGUAGEUNIT__ANNOTATION = 1;
        static const int LANGUAGEUNIT__STEREOTYPE = 2;
        static const int LANGUAGEUNIT__TAGGEDVALUE = 3;
        static const int LANGUAGEUNIT__NAME = 4;
        static const int LANGUAGEUNIT__SOURCE = 5;
        static const int LANGUAGEUNIT__COMMENT = 6;
        static const int LANGUAGEUNIT__CODERELATION = 7;
        static const int LANGUAGEUNIT__CODEELEMENT = 8;
        static const int LANGUAGEUNIT_FEATURE_COUNT = 9;

        // IDs for classifier MacroDirective
        static const int MACRODIRECTIVE = 48;
        static const int MACRODIRECTIVE__ATTRIBUTE = 0;
        static const int MACRODIRECTIVE__ANNOTATION = 1;
        static const int MACRODIRECTIVE__STEREOTYPE = 2;
        static const int MACRODIRECTIVE__TAGGEDVALUE = 3;
        static const int MACRODIRECTIVE__NAME = 4;
        static const int MACRODIRECTIVE__SOURCE = 5;
        static const int MACRODIRECTIVE__COMMENT = 6;
        static const int MACRODIRECTIVE__CODERELATION = 7;
        static const int MACRODIRECTIVE__CODEELEMENT = 8;
        static const int MACRODIRECTIVE_FEATURE_COUNT = 9;

        // IDs for classifier MacroKind
        static const int MACROKIND = 49;

        // IDs for classifier MacroUnit
        static const int MACROUNIT = 50;
        static const int MACROUNIT__ATTRIBUTE = 0;
        static const int MACROUNIT__ANNOTATION = 1;
        static const int MACROUNIT__STEREOTYPE = 2;
        static const int MACROUNIT__TAGGEDVALUE = 3;
        static const int MACROUNIT__NAME = 4;
        static const int MACROUNIT__SOURCE = 5;
        static const int MACROUNIT__COMMENT = 6;
        static const int MACROUNIT__CODERELATION = 7;
        static const int MACROUNIT__CODEELEMENT = 8;
        static const int MACROUNIT__KIND = 9;
        static const int MACROUNIT_FEATURE_COUNT = 10;

        // IDs for classifier MemberUnit
        static const int MEMBERUNIT = 51;
        static const int MEMBERUNIT__ATTRIBUTE = 0;
        static const int MEMBERUNIT__ANNOTATION = 1;
        static const int MEMBERUNIT__STEREOTYPE = 2;
        static const int MEMBERUNIT__TAGGEDVALUE = 3;
        static const int MEMBERUNIT__NAME = 4;
        static const int MEMBERUNIT__SOURCE = 5;
        static const int MEMBERUNIT__COMMENT = 6;
        static const int MEMBERUNIT__CODERELATION = 7;
        static const int MEMBERUNIT__TYPE = 8;
        static const int MEMBERUNIT__EXT = 9;
        static const int MEMBERUNIT__SIZE = 10;
        static const int MEMBERUNIT__CODEELEMENT = 11;
        static const int MEMBERUNIT__EXPORT = 12;
        static const int MEMBERUNIT_FEATURE_COUNT = 13;

        // IDs for classifier MethodKind
        static const int METHODKIND = 52;

        // IDs for classifier MethodUnit
        static const int METHODUNIT = 53;
        static const int METHODUNIT__ATTRIBUTE = 0;
        static const int METHODUNIT__ANNOTATION = 1;
        static const int METHODUNIT__STEREOTYPE = 2;
        static const int METHODUNIT__TAGGEDVALUE = 3;
        static const int METHODUNIT__NAME = 4;
        static const int METHODUNIT__SOURCE = 5;
        static const int METHODUNIT__COMMENT = 6;
        static const int METHODUNIT__CODERELATION = 7;
        static const int METHODUNIT__TYPE = 8;
        static const int METHODUNIT__ENTRYFLOW = 9;
        static const int METHODUNIT__CODEELEMENT = 10;
        static const int METHODUNIT__KIND = 11;
        static const int METHODUNIT__EXPORT = 12;
        static const int METHODUNIT_FEATURE_COUNT = 13;

        // IDs for classifier Module
        static const int MODULE = 54;
        static const int MODULE__ATTRIBUTE = 0;
        static const int MODULE__ANNOTATION = 1;
        static const int MODULE__STEREOTYPE = 2;
        static const int MODULE__TAGGEDVALUE = 3;
        static const int MODULE__NAME = 4;
        static const int MODULE__SOURCE = 5;
        static const int MODULE__COMMENT = 6;
        static const int MODULE__CODERELATION = 7;
        static const int MODULE__CODEELEMENT = 8;
        static const int MODULE_FEATURE_COUNT = 9;

        // IDs for classifier NamespaceUnit
        static const int NAMESPACEUNIT = 55;
        static const int NAMESPACEUNIT__ATTRIBUTE = 0;
        static const int NAMESPACEUNIT__ANNOTATION = 1;
        static const int NAMESPACEUNIT__STEREOTYPE = 2;
        static const int NAMESPACEUNIT__TAGGEDVALUE = 3;
        static const int NAMESPACEUNIT__NAME = 4;
        static const int NAMESPACEUNIT__SOURCE = 5;
        static const int NAMESPACEUNIT__COMMENT = 6;
        static const int NAMESPACEUNIT__CODERELATION = 7;
        static const int NAMESPACEUNIT__GROUPEDCODE = 8;
        static const int NAMESPACEUNIT_FEATURE_COUNT = 9;

        // IDs for classifier OctetstringType
        static const int OCTETSTRINGTYPE = 56;
        static const int OCTETSTRINGTYPE__ATTRIBUTE = 0;
        static const int OCTETSTRINGTYPE__ANNOTATION = 1;
        static const int OCTETSTRINGTYPE__STEREOTYPE = 2;
        static const int OCTETSTRINGTYPE__TAGGEDVALUE = 3;
        static const int OCTETSTRINGTYPE__NAME = 4;
        static const int OCTETSTRINGTYPE__SOURCE = 5;
        static const int OCTETSTRINGTYPE__COMMENT = 6;
        static const int OCTETSTRINGTYPE__CODERELATION = 7;
        static const int OCTETSTRINGTYPE_FEATURE_COUNT = 8;

        // IDs for classifier OctetType
        static const int OCTETTYPE = 57;
        static const int OCTETTYPE__ATTRIBUTE = 0;
        static const int OCTETTYPE__ANNOTATION = 1;
        static const int OCTETTYPE__STEREOTYPE = 2;
        static const int OCTETTYPE__TAGGEDVALUE = 3;
        static const int OCTETTYPE__NAME = 4;
        static const int OCTETTYPE__SOURCE = 5;
        static const int OCTETTYPE__COMMENT = 6;
        static const int OCTETTYPE__CODERELATION = 7;
        static const int OCTETTYPE_FEATURE_COUNT = 8;

        // IDs for classifier OrdinalType
        static const int ORDINALTYPE = 58;
        static const int ORDINALTYPE__ATTRIBUTE = 0;
        static const int ORDINALTYPE__ANNOTATION = 1;
        static const int ORDINALTYPE__STEREOTYPE = 2;
        static const int ORDINALTYPE__TAGGEDVALUE = 3;
        static const int ORDINALTYPE__NAME = 4;
        static const int ORDINALTYPE__SOURCE = 5;
        static const int ORDINALTYPE__COMMENT = 6;
        static const int ORDINALTYPE__CODERELATION = 7;
        static const int ORDINALTYPE_FEATURE_COUNT = 8;

        // IDs for classifier Package
        static const int PACKAGE = 59;
        static const int PACKAGE__ATTRIBUTE = 0;
        static const int PACKAGE__ANNOTATION = 1;
        static const int PACKAGE__STEREOTYPE = 2;
        static const int PACKAGE__TAGGEDVALUE = 3;
        static const int PACKAGE__NAME = 4;
        static const int PACKAGE__SOURCE = 5;
        static const int PACKAGE__COMMENT = 6;
        static const int PACKAGE__CODERELATION = 7;
        static const int PACKAGE__CODEELEMENT = 8;
        static const int PACKAGE_FEATURE_COUNT = 9;

        // IDs for classifier ParameterKind
        static const int PARAMETERKIND = 60;

        // IDs for classifier ParameterTo
        static const int PARAMETERTO = 61;
        static const int PARAMETERTO__ATTRIBUTE = 0;
        static const int PARAMETERTO__ANNOTATION = 1;
        static const int PARAMETERTO__STEREOTYPE = 2;
        static const int PARAMETERTO__TAGGEDVALUE = 3;
        static const int PARAMETERTO__TO = 4;
        static const int PARAMETERTO__FROM = 5;
        static const int PARAMETERTO_FEATURE_COUNT = 6;

        // IDs for classifier ParameterUnit
        static const int PARAMETERUNIT = 62;
        static const int PARAMETERUNIT__ATTRIBUTE = 0;
        static const int PARAMETERUNIT__ANNOTATION = 1;
        static const int PARAMETERUNIT__STEREOTYPE = 2;
        static const int PARAMETERUNIT__TAGGEDVALUE = 3;
        static const int PARAMETERUNIT__NAME = 4;
        static const int PARAMETERUNIT__SOURCE = 5;
        static const int PARAMETERUNIT__COMMENT = 6;
        static const int PARAMETERUNIT__CODERELATION = 7;
        static const int PARAMETERUNIT__TYPE = 8;
        static const int PARAMETERUNIT__EXT = 9;
        static const int PARAMETERUNIT__SIZE = 10;
        static const int PARAMETERUNIT__CODEELEMENT = 11;
        static const int PARAMETERUNIT__KIND = 12;
        static const int PARAMETERUNIT__POS = 13;
        static const int PARAMETERUNIT_FEATURE_COUNT = 14;

        // IDs for classifier PointerType
        static const int POINTERTYPE = 63;
        static const int POINTERTYPE__ATTRIBUTE = 0;
        static const int POINTERTYPE__ANNOTATION = 1;
        static const int POINTERTYPE__STEREOTYPE = 2;
        static const int POINTERTYPE__TAGGEDVALUE = 3;
        static const int POINTERTYPE__NAME = 4;
        static const int POINTERTYPE__SOURCE = 5;
        static const int POINTERTYPE__COMMENT = 6;
        static const int POINTERTYPE__CODERELATION = 7;
        static const int POINTERTYPE__ITEMUNIT = 8;
        static const int POINTERTYPE_FEATURE_COUNT = 9;

        // IDs for classifier PreprocessorDirective
        static const int PREPROCESSORDIRECTIVE = 64;
        static const int PREPROCESSORDIRECTIVE__ATTRIBUTE = 0;
        static const int PREPROCESSORDIRECTIVE__ANNOTATION = 1;
        static const int PREPROCESSORDIRECTIVE__STEREOTYPE = 2;
        static const int PREPROCESSORDIRECTIVE__TAGGEDVALUE = 3;
        static const int PREPROCESSORDIRECTIVE__NAME = 4;
        static const int PREPROCESSORDIRECTIVE__SOURCE = 5;
        static const int PREPROCESSORDIRECTIVE__COMMENT = 6;
        static const int PREPROCESSORDIRECTIVE__CODERELATION = 7;
        static const int PREPROCESSORDIRECTIVE__CODEELEMENT = 8;
        static const int PREPROCESSORDIRECTIVE_FEATURE_COUNT = 9;

        // IDs for classifier PrimitiveType
        static const int PRIMITIVETYPE = 65;
        static const int PRIMITIVETYPE__ATTRIBUTE = 0;
        static const int PRIMITIVETYPE__ANNOTATION = 1;
        static const int PRIMITIVETYPE__STEREOTYPE = 2;
        static const int PRIMITIVETYPE__TAGGEDVALUE = 3;
        static const int PRIMITIVETYPE__NAME = 4;
        static const int PRIMITIVETYPE__SOURCE = 5;
        static const int PRIMITIVETYPE__COMMENT = 6;
        static const int PRIMITIVETYPE__CODERELATION = 7;
        static const int PRIMITIVETYPE_FEATURE_COUNT = 8;

        // IDs for classifier RangeType
        static const int RANGETYPE = 66;
        static const int RANGETYPE__ATTRIBUTE = 0;
        static const int RANGETYPE__ANNOTATION = 1;
        static const int RANGETYPE__STEREOTYPE = 2;
        static const int RANGETYPE__TAGGEDVALUE = 3;
        static const int RANGETYPE__NAME = 4;
        static const int RANGETYPE__SOURCE = 5;
        static const int RANGETYPE__COMMENT = 6;
        static const int RANGETYPE__CODERELATION = 7;
        static const int RANGETYPE__ITEMUNIT = 8;
        static const int RANGETYPE__LOWER = 9;
        static const int RANGETYPE__UPPER = 10;
        static const int RANGETYPE_FEATURE_COUNT = 11;

        // IDs for classifier RecordType
        static const int RECORDTYPE = 67;
        static const int RECORDTYPE__ATTRIBUTE = 0;
        static const int RECORDTYPE__ANNOTATION = 1;
        static const int RECORDTYPE__STEREOTYPE = 2;
        static const int RECORDTYPE__TAGGEDVALUE = 3;
        static const int RECORDTYPE__NAME = 4;
        static const int RECORDTYPE__SOURCE = 5;
        static const int RECORDTYPE__COMMENT = 6;
        static const int RECORDTYPE__CODERELATION = 7;
        static const int RECORDTYPE__ITEMUNIT = 8;
        static const int RECORDTYPE_FEATURE_COUNT = 9;

        // IDs for classifier Redefines
        static const int REDEFINES = 68;
        static const int REDEFINES__ATTRIBUTE = 0;
        static const int REDEFINES__ANNOTATION = 1;
        static const int REDEFINES__STEREOTYPE = 2;
        static const int REDEFINES__TAGGEDVALUE = 3;
        static const int REDEFINES__TO = 4;
        static const int REDEFINES__FROM = 5;
        static const int REDEFINES_FEATURE_COUNT = 6;

        // IDs for classifier ScaledType
        static const int SCALEDTYPE = 69;
        static const int SCALEDTYPE__ATTRIBUTE = 0;
        static const int SCALEDTYPE__ANNOTATION = 1;
        static const int SCALEDTYPE__STEREOTYPE = 2;
        static const int SCALEDTYPE__TAGGEDVALUE = 3;
        static const int SCALEDTYPE__NAME = 4;
        static const int SCALEDTYPE__SOURCE = 5;
        static const int SCALEDTYPE__COMMENT = 6;
        static const int SCALEDTYPE__CODERELATION = 7;
        static const int SCALEDTYPE_FEATURE_COUNT = 8;

        // IDs for classifier SequenceType
        static const int SEQUENCETYPE = 70;
        static const int SEQUENCETYPE__ATTRIBUTE = 0;
        static const int SEQUENCETYPE__ANNOTATION = 1;
        static const int SEQUENCETYPE__STEREOTYPE = 2;
        static const int SEQUENCETYPE__TAGGEDVALUE = 3;
        static const int SEQUENCETYPE__NAME = 4;
        static const int SEQUENCETYPE__SOURCE = 5;
        static const int SEQUENCETYPE__COMMENT = 6;
        static const int SEQUENCETYPE__CODERELATION = 7;
        static const int SEQUENCETYPE__ITEMUNIT = 8;
        static const int SEQUENCETYPE__SIZE = 9;
        static const int SEQUENCETYPE_FEATURE_COUNT = 10;

        // IDs for classifier SetType
        static const int SETTYPE = 71;
        static const int SETTYPE__ATTRIBUTE = 0;
        static const int SETTYPE__ANNOTATION = 1;
        static const int SETTYPE__STEREOTYPE = 2;
        static const int SETTYPE__TAGGEDVALUE = 3;
        static const int SETTYPE__NAME = 4;
        static const int SETTYPE__SOURCE = 5;
        static const int SETTYPE__COMMENT = 6;
        static const int SETTYPE__CODERELATION = 7;
        static const int SETTYPE__ITEMUNIT = 8;
        static const int SETTYPE__SIZE = 9;
        static const int SETTYPE_FEATURE_COUNT = 10;

        // IDs for classifier SharedUnit
        static const int SHAREDUNIT = 72;
        static const int SHAREDUNIT__ATTRIBUTE = 0;
        static const int SHAREDUNIT__ANNOTATION = 1;
        static const int SHAREDUNIT__STEREOTYPE = 2;
        static const int SHAREDUNIT__TAGGEDVALUE = 3;
        static const int SHAREDUNIT__NAME = 4;
        static const int SHAREDUNIT__SOURCE = 5;
        static const int SHAREDUNIT__COMMENT = 6;
        static const int SHAREDUNIT__CODERELATION = 7;
        static const int SHAREDUNIT__CODEELEMENT = 8;
        static const int SHAREDUNIT_FEATURE_COUNT = 9;

        // IDs for classifier Signature
        static const int SIGNATURE = 73;
        static const int SIGNATURE__ATTRIBUTE = 0;
        static const int SIGNATURE__ANNOTATION = 1;
        static const int SIGNATURE__STEREOTYPE = 2;
        static const int SIGNATURE__TAGGEDVALUE = 3;
        static const int SIGNATURE__NAME = 4;
        static const int SIGNATURE__SOURCE = 5;
        static const int SIGNATURE__COMMENT = 6;
        static const int SIGNATURE__CODERELATION = 7;
        static const int SIGNATURE__PARAMETERUNIT = 8;
        static const int SIGNATURE_FEATURE_COUNT = 9;

        // IDs for classifier StorableKind
        static const int STORABLEKIND = 74;

        // IDs for classifier StorableUnit
        static const int STORABLEUNIT = 75;
        static const int STORABLEUNIT__ATTRIBUTE = 0;
        static const int STORABLEUNIT__ANNOTATION = 1;
        static const int STORABLEUNIT__STEREOTYPE = 2;
        static const int STORABLEUNIT__TAGGEDVALUE = 3;
        static const int STORABLEUNIT__NAME = 4;
        static const int STORABLEUNIT__SOURCE = 5;
        static const int STORABLEUNIT__COMMENT = 6;
        static const int STORABLEUNIT__CODERELATION = 7;
        static const int STORABLEUNIT__TYPE = 8;
        static const int STORABLEUNIT__EXT = 9;
        static const int STORABLEUNIT__SIZE = 10;
        static const int STORABLEUNIT__CODEELEMENT = 11;
        static const int STORABLEUNIT__KIND = 12;
        static const int STORABLEUNIT_FEATURE_COUNT = 13;

        // IDs for classifier StringType
        static const int STRINGTYPE = 76;
        static const int STRINGTYPE__ATTRIBUTE = 0;
        static const int STRINGTYPE__ANNOTATION = 1;
        static const int STRINGTYPE__STEREOTYPE = 2;
        static const int STRINGTYPE__TAGGEDVALUE = 3;
        static const int STRINGTYPE__NAME = 4;
        static const int STRINGTYPE__SOURCE = 5;
        static const int STRINGTYPE__COMMENT = 6;
        static const int STRINGTYPE__CODERELATION = 7;
        static const int STRINGTYPE_FEATURE_COUNT = 8;

        // IDs for classifier SynonymType
        static const int SYNONYMTYPE = 77;
        static const int SYNONYMTYPE__ATTRIBUTE = 0;
        static const int SYNONYMTYPE__ANNOTATION = 1;
        static const int SYNONYMTYPE__STEREOTYPE = 2;
        static const int SYNONYMTYPE__TAGGEDVALUE = 3;
        static const int SYNONYMTYPE__NAME = 4;
        static const int SYNONYMTYPE__SOURCE = 5;
        static const int SYNONYMTYPE__COMMENT = 6;
        static const int SYNONYMTYPE__CODERELATION = 7;
        static const int SYNONYMTYPE__TYPE = 8;
        static const int SYNONYMTYPE__CODEELEMENT = 9;
        static const int SYNONYMTYPE_FEATURE_COUNT = 10;

        // IDs for classifier TemplateParameter
        static const int TEMPLATEPARAMETER = 78;
        static const int TEMPLATEPARAMETER__ATTRIBUTE = 0;
        static const int TEMPLATEPARAMETER__ANNOTATION = 1;
        static const int TEMPLATEPARAMETER__STEREOTYPE = 2;
        static const int TEMPLATEPARAMETER__TAGGEDVALUE = 3;
        static const int TEMPLATEPARAMETER__NAME = 4;
        static const int TEMPLATEPARAMETER__SOURCE = 5;
        static const int TEMPLATEPARAMETER__COMMENT = 6;
        static const int TEMPLATEPARAMETER__CODERELATION = 7;
        static const int TEMPLATEPARAMETER_FEATURE_COUNT = 8;

        // IDs for classifier TemplateType
        static const int TEMPLATETYPE = 79;
        static const int TEMPLATETYPE__ATTRIBUTE = 0;
        static const int TEMPLATETYPE__ANNOTATION = 1;
        static const int TEMPLATETYPE__STEREOTYPE = 2;
        static const int TEMPLATETYPE__TAGGEDVALUE = 3;
        static const int TEMPLATETYPE__NAME = 4;
        static const int TEMPLATETYPE__SOURCE = 5;
        static const int TEMPLATETYPE__COMMENT = 6;
        static const int TEMPLATETYPE__CODERELATION = 7;
        static const int TEMPLATETYPE_FEATURE_COUNT = 8;

        // IDs for classifier TemplateUnit
        static const int TEMPLATEUNIT = 80;
        static const int TEMPLATEUNIT__ATTRIBUTE = 0;
        static const int TEMPLATEUNIT__ANNOTATION = 1;
        static const int TEMPLATEUNIT__STEREOTYPE = 2;
        static const int TEMPLATEUNIT__TAGGEDVALUE = 3;
        static const int TEMPLATEUNIT__NAME = 4;
        static const int TEMPLATEUNIT__SOURCE = 5;
        static const int TEMPLATEUNIT__COMMENT = 6;
        static const int TEMPLATEUNIT__CODERELATION = 7;
        static const int TEMPLATEUNIT__CODEELEMENT = 8;
        static const int TEMPLATEUNIT_FEATURE_COUNT = 9;

        // IDs for classifier TimeType
        static const int TIMETYPE = 81;
        static const int TIMETYPE__ATTRIBUTE = 0;
        static const int TIMETYPE__ANNOTATION = 1;
        static const int TIMETYPE__STEREOTYPE = 2;
        static const int TIMETYPE__TAGGEDVALUE = 3;
        static const int TIMETYPE__NAME = 4;
        static const int TIMETYPE__SOURCE = 5;
        static const int TIMETYPE__COMMENT = 6;
        static const int TIMETYPE__CODERELATION = 7;
        static const int TIMETYPE_FEATURE_COUNT = 8;

        // IDs for classifier TypeUnit
        static const int TYPEUNIT = 82;
        static const int TYPEUNIT__ATTRIBUTE = 0;
        static const int TYPEUNIT__ANNOTATION = 1;
        static const int TYPEUNIT__STEREOTYPE = 2;
        static const int TYPEUNIT__TAGGEDVALUE = 3;
        static const int TYPEUNIT__NAME = 4;
        static const int TYPEUNIT__SOURCE = 5;
        static const int TYPEUNIT__COMMENT = 6;
        static const int TYPEUNIT__CODERELATION = 7;
        static const int TYPEUNIT__TYPE = 8;
        static const int TYPEUNIT__CODEELEMENT = 9;
        static const int TYPEUNIT_FEATURE_COUNT = 10;

        // IDs for classifier Value
        static const int VALUE = 83;
        static const int VALUE__ATTRIBUTE = 0;
        static const int VALUE__ANNOTATION = 1;
        static const int VALUE__STEREOTYPE = 2;
        static const int VALUE__TAGGEDVALUE = 3;
        static const int VALUE__NAME = 4;
        static const int VALUE__SOURCE = 5;
        static const int VALUE__COMMENT = 6;
        static const int VALUE__CODERELATION = 7;
        static const int VALUE__TYPE = 8;
        static const int VALUE__EXT = 9;
        static const int VALUE__SIZE = 10;
        static const int VALUE__CODEELEMENT = 11;
        static const int VALUE_FEATURE_COUNT = 12;

        // IDs for classifier ValueElement
        static const int VALUEELEMENT = 84;
        static const int VALUEELEMENT__ATTRIBUTE = 0;
        static const int VALUEELEMENT__ANNOTATION = 1;
        static const int VALUEELEMENT__STEREOTYPE = 2;
        static const int VALUEELEMENT__TAGGEDVALUE = 3;
        static const int VALUEELEMENT__NAME = 4;
        static const int VALUEELEMENT__SOURCE = 5;
        static const int VALUEELEMENT__COMMENT = 6;
        static const int VALUEELEMENT__CODERELATION = 7;
        static const int VALUEELEMENT__TYPE = 8;
        static const int VALUEELEMENT__EXT = 9;
        static const int VALUEELEMENT__SIZE = 10;
        static const int VALUEELEMENT__CODEELEMENT = 11;
        static const int VALUEELEMENT_FEATURE_COUNT = 12;

        // IDs for classifier ValueList
        static const int VALUELIST = 85;
        static const int VALUELIST__ATTRIBUTE = 0;
        static const int VALUELIST__ANNOTATION = 1;
        static const int VALUELIST__STEREOTYPE = 2;
        static const int VALUELIST__TAGGEDVALUE = 3;
        static const int VALUELIST__NAME = 4;
        static const int VALUELIST__SOURCE = 5;
        static const int VALUELIST__COMMENT = 6;
        static const int VALUELIST__CODERELATION = 7;
        static const int VALUELIST__TYPE = 8;
        static const int VALUELIST__EXT = 9;
        static const int VALUELIST__SIZE = 10;
        static const int VALUELIST__CODEELEMENT = 11;
        static const int VALUELIST__VALUEELEMENT = 12;
        static const int VALUELIST_FEATURE_COUNT = 13;

        // IDs for classifier VariantTo
        static const int VARIANTTO = 86;
        static const int VARIANTTO__ATTRIBUTE = 0;
        static const int VARIANTTO__ANNOTATION = 1;
        static const int VARIANTTO__STEREOTYPE = 2;
        static const int VARIANTTO__TAGGEDVALUE = 3;
        static const int VARIANTTO__TO = 4;
        static const int VARIANTTO__FROM = 5;
        static const int VARIANTTO_FEATURE_COUNT = 6;

        // IDs for classifier VisibleIn
        static const int VISIBLEIN = 87;
        static const int VISIBLEIN__ATTRIBUTE = 0;
        static const int VISIBLEIN__ANNOTATION = 1;
        static const int VISIBLEIN__STEREOTYPE = 2;
        static const int VISIBLEIN__TAGGEDVALUE = 3;
        static const int VISIBLEIN__TO = 4;
        static const int VISIBLEIN__FROM = 5;
        static const int VISIBLEIN_FEATURE_COUNT = 6;

        // IDs for classifier VoidType
        static const int VOIDTYPE = 88;
        static const int VOIDTYPE__ATTRIBUTE = 0;
        static const int VOIDTYPE__ANNOTATION = 1;
        static const int VOIDTYPE__STEREOTYPE = 2;
        static const int VOIDTYPE__TAGGEDVALUE = 3;
        static const int VOIDTYPE__NAME = 4;
        static const int VOIDTYPE__SOURCE = 5;
        static const int VOIDTYPE__COMMENT = 6;
        static const int VOIDTYPE__CODERELATION = 7;
        static const int VOIDTYPE_FEATURE_COUNT = 8;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractCodeElement();

        virtual ::ecore::EClass_ptr getCodeItem();

        virtual ::ecore::EClass_ptr getComputationalObject();

        virtual ::ecore::EClass_ptr getControlElement();

        virtual ::ecore::EClass_ptr getMethodUnit();

        virtual ::ecore::EClass_ptr getModule();

        virtual ::ecore::EClass_ptr getCodeAssembly();

        virtual ::ecore::EClass_ptr getCallableUnit();

        virtual ::ecore::EClass_ptr getDatatype();

        virtual ::ecore::EClass_ptr getTemplateUnit();

        virtual ::ecore::EClass_ptr getTemplateParameter();

        virtual ::ecore::EClass_ptr getAbstractCodeRelationship();

        virtual ::ecore::EClass_ptr getInstanceOf();

        virtual ::ecore::EClass_ptr getCompilationUnit();

        virtual ::ecore::EClass_ptr getCodeModel();

        virtual ::ecore::EClass_ptr getDerivedType();

        virtual ::ecore::EClass_ptr getArrayType();

        virtual ::ecore::EClass_ptr getPrimitiveType();

        virtual ::ecore::EClass_ptr getBooleanType();

        virtual ::ecore::EClass_ptr getCharType();

        virtual ::ecore::EClass_ptr getClassUnit();

        virtual ::ecore::EClass_ptr getCompositeType();

        virtual ::ecore::EClass_ptr getRecordType();

        virtual ::ecore::EClass_ptr getEnumeratedType();

        virtual ::ecore::EClass_ptr getExtends();

        virtual ::ecore::EClass_ptr getScaledType();

        virtual ::ecore::EClass_ptr getFloatType();

        virtual ::ecore::EClass_ptr getHasType();

        virtual ::ecore::EClass_ptr getImplementationOf();

        virtual ::ecore::EClass_ptr getImplements();

        virtual ::ecore::EClass_ptr getIntegerType();

        virtual ::ecore::EClass_ptr getInterfaceUnit();

        virtual ::ecore::EClass_ptr getPointerType();

        virtual ::ecore::EClass_ptr getDefinedType();

        virtual ::ecore::EClass_ptr getTypeUnit();

        virtual ::ecore::EClass_ptr getRangeType();

        virtual ::ecore::EClass_ptr getSignature();

        virtual ::ecore::EClass_ptr getDataElement();

        virtual ::ecore::EClass_ptr getStringType();

        virtual ::ecore::EClass_ptr getChoiceType();

        virtual ::ecore::EClass_ptr getNamespaceUnit();

        virtual ::ecore::EClass_ptr getVisibleIn();

        virtual ::ecore::EClass_ptr getCommentUnit();

        virtual ::ecore::EClass_ptr getSharedUnit();

        virtual ::ecore::EClass_ptr getDecimalType();

        virtual ::ecore::EClass_ptr getDateType();

        virtual ::ecore::EClass_ptr getTimeType();

        virtual ::ecore::EEnum_ptr getMethodKind();

        virtual ::ecore::EClass_ptr getVoidType();

        virtual ::ecore::EClass_ptr getValueElement();

        virtual ::ecore::EClass_ptr getValue();

        virtual ::ecore::EClass_ptr getValueList();

        virtual ::ecore::EClass_ptr getStorableUnit();

        virtual ::ecore::EClass_ptr getMemberUnit();

        virtual ::ecore::EClass_ptr getParameterUnit();

        virtual ::ecore::EClass_ptr getItemUnit();

        virtual ::ecore::EClass_ptr getIndexUnit();

        virtual ::ecore::EClass_ptr getSynonymType();

        virtual ::ecore::EClass_ptr getSequenceType();

        virtual ::ecore::EClass_ptr getBagType();

        virtual ::ecore::EClass_ptr getSetType();

        virtual ::ecore::EClass_ptr getCodeElement();

        virtual ::ecore::EClass_ptr getCodeRelationship();

        virtual ::ecore::EEnum_ptr getParameterKind();

        virtual ::ecore::EEnum_ptr getExportKind();

        virtual ::ecore::EClass_ptr getLanguageUnit();

        virtual ::ecore::EClass_ptr getOrdinalType();

        virtual ::ecore::EClass_ptr getBitstringType();

        virtual ::ecore::EClass_ptr getOctetType();

        virtual ::ecore::EClass_ptr getOctetstringType();

        virtual ::ecore::EClass_ptr getBitType();

        virtual ::ecore::EEnum_ptr getStorableKind();

        virtual ::ecore::EEnum_ptr getCallableKind();

        virtual ::ecore::EClass_ptr getImports();

        virtual ::ecore::EClass_ptr getPackage();

        virtual ::ecore::EClass_ptr getParameterTo();

        virtual ::ecore::EClass_ptr getTemplateType();

        virtual ::ecore::EClass_ptr getPreprocessorDirective();

        virtual ::ecore::EClass_ptr getMacroDirective();

        virtual ::ecore::EClass_ptr getMacroUnit();

        virtual ::ecore::EClass_ptr getConditionalDirective();

        virtual ::ecore::EClass_ptr getIncludeDirective();

        virtual ::ecore::EEnum_ptr getMacroKind();

        virtual ::ecore::EClass_ptr getVariantTo();

        virtual ::ecore::EClass_ptr getExpands();

        virtual ::ecore::EClass_ptr getRedefines();

        virtual ::ecore::EClass_ptr getGeneratedFrom();

        virtual ::ecore::EClass_ptr getIncludes();

        virtual ::ecore::EClass_ptr getHasValue();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getAbstractCodeElement__source();

        virtual ::ecore::EReference_ptr getAbstractCodeElement__comment();

        virtual ::ecore::EReference_ptr getAbstractCodeElement__codeRelation();

        virtual ::ecore::EReference_ptr getControlElement__type();

        virtual ::ecore::EReference_ptr getControlElement__entryFlow();

        virtual ::ecore::EReference_ptr getControlElement__codeElement();

        virtual ::ecore::EAttribute_ptr getMethodUnit__kind();

        virtual ::ecore::EAttribute_ptr getMethodUnit__export();

        virtual ::ecore::EReference_ptr getModule__codeElement();

        virtual ::ecore::EAttribute_ptr getCallableUnit__kind();

        virtual ::ecore::EReference_ptr getTemplateUnit__codeElement();

        virtual ::ecore::EReference_ptr getInstanceOf__to();

        virtual ::ecore::EReference_ptr getInstanceOf__from();

        virtual ::ecore::EReference_ptr getCodeModel__codeElement();

        virtual ::ecore::EReference_ptr getDerivedType__itemUnit();

        virtual ::ecore::EAttribute_ptr getArrayType__size();

        virtual ::ecore::EReference_ptr getArrayType__indexUnit();

        virtual ::ecore::EAttribute_ptr getClassUnit__isAbstract();

        virtual ::ecore::EReference_ptr getClassUnit__codeElement();

        virtual ::ecore::EReference_ptr getCompositeType__itemUnit();

        virtual ::ecore::EReference_ptr getEnumeratedType__value();

        virtual ::ecore::EReference_ptr getExtends__to();

        virtual ::ecore::EReference_ptr getExtends__from();

        virtual ::ecore::EReference_ptr getHasType__to();

        virtual ::ecore::EReference_ptr getHasType__from();

        virtual ::ecore::EReference_ptr getImplementationOf__to();

        virtual ::ecore::EReference_ptr getImplementationOf__from();

        virtual ::ecore::EReference_ptr getImplements__to();

        virtual ::ecore::EReference_ptr getImplements__from();

        virtual ::ecore::EReference_ptr getInterfaceUnit__codeElement();

        virtual ::ecore::EReference_ptr getDefinedType__type();

        virtual ::ecore::EReference_ptr getDefinedType__codeElement();

        virtual ::ecore::EAttribute_ptr getRangeType__lower();

        virtual ::ecore::EAttribute_ptr getRangeType__upper();

        virtual ::ecore::EReference_ptr getSignature__parameterUnit();

        virtual ::ecore::EReference_ptr getDataElement__type();

        virtual ::ecore::EAttribute_ptr getDataElement__ext();

        virtual ::ecore::EAttribute_ptr getDataElement__size();

        virtual ::ecore::EReference_ptr getDataElement__codeElement();

        virtual ::ecore::EReference_ptr getNamespaceUnit__groupedCode();

        virtual ::ecore::EReference_ptr getVisibleIn__to();

        virtual ::ecore::EReference_ptr getVisibleIn__from();

        virtual ::ecore::EAttribute_ptr getCommentUnit__text();

        virtual ::ecore::EReference_ptr getValueList__valueElement();

        virtual ::ecore::EAttribute_ptr getStorableUnit__kind();

        virtual ::ecore::EAttribute_ptr getMemberUnit__export();

        virtual ::ecore::EAttribute_ptr getParameterUnit__kind();

        virtual ::ecore::EAttribute_ptr getParameterUnit__pos();

        virtual ::ecore::EAttribute_ptr getSequenceType__size();

        virtual ::ecore::EAttribute_ptr getBagType__size();

        virtual ::ecore::EAttribute_ptr getSetType__size();

        virtual ::ecore::EReference_ptr getCodeRelationship__to();

        virtual ::ecore::EReference_ptr getCodeRelationship__from();

        virtual ::ecore::EReference_ptr getImports__to();

        virtual ::ecore::EReference_ptr getImports__from();

        virtual ::ecore::EReference_ptr getParameterTo__to();

        virtual ::ecore::EReference_ptr getParameterTo__from();

        virtual ::ecore::EReference_ptr getPreprocessorDirective__codeElement();

        virtual ::ecore::EAttribute_ptr getMacroUnit__kind();

        virtual ::ecore::EReference_ptr getVariantTo__to();

        virtual ::ecore::EReference_ptr getVariantTo__from();

        virtual ::ecore::EReference_ptr getExpands__to();

        virtual ::ecore::EReference_ptr getExpands__from();

        virtual ::ecore::EReference_ptr getRedefines__to();

        virtual ::ecore::EReference_ptr getRedefines__from();

        virtual ::ecore::EReference_ptr getGeneratedFrom__to();

        virtual ::ecore::EReference_ptr getGeneratedFrom__from();

        virtual ::ecore::EReference_ptr getIncludes__to();

        virtual ::ecore::EReference_ptr getIncludes__from();

        virtual ::ecore::EReference_ptr getHasValue__to();

        virtual ::ecore::EReference_ptr getHasValue__from();

    protected:

        static ::ecore::Ptr< CodePackage > s_instance;

        CodePackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractCodeElementEClass;
        ::ecore::EClass_ptr m_AbstractCodeRelationshipEClass;
        ::ecore::EClass_ptr m_ArrayTypeEClass;
        ::ecore::EClass_ptr m_BagTypeEClass;
        ::ecore::EClass_ptr m_BitTypeEClass;
        ::ecore::EClass_ptr m_BitstringTypeEClass;
        ::ecore::EClass_ptr m_BooleanTypeEClass;
        ::ecore::EEnum_ptr m_CallableKindEEnum;
        ::ecore::EClass_ptr m_CallableUnitEClass;
        ::ecore::EClass_ptr m_CharTypeEClass;
        ::ecore::EClass_ptr m_ChoiceTypeEClass;
        ::ecore::EClass_ptr m_ClassUnitEClass;
        ::ecore::EClass_ptr m_CodeAssemblyEClass;
        ::ecore::EClass_ptr m_CodeElementEClass;
        ::ecore::EClass_ptr m_CodeItemEClass;
        ::ecore::EClass_ptr m_CodeModelEClass;
        ::ecore::EClass_ptr m_CodeRelationshipEClass;
        ::ecore::EClass_ptr m_CommentUnitEClass;
        ::ecore::EClass_ptr m_CompilationUnitEClass;
        ::ecore::EClass_ptr m_CompositeTypeEClass;
        ::ecore::EClass_ptr m_ComputationalObjectEClass;
        ::ecore::EClass_ptr m_ConditionalDirectiveEClass;
        ::ecore::EClass_ptr m_ControlElementEClass;
        ::ecore::EClass_ptr m_DataElementEClass;
        ::ecore::EClass_ptr m_DatatypeEClass;
        ::ecore::EClass_ptr m_DateTypeEClass;
        ::ecore::EClass_ptr m_DecimalTypeEClass;
        ::ecore::EClass_ptr m_DefinedTypeEClass;
        ::ecore::EClass_ptr m_DerivedTypeEClass;
        ::ecore::EClass_ptr m_EnumeratedTypeEClass;
        ::ecore::EClass_ptr m_ExpandsEClass;
        ::ecore::EEnum_ptr m_ExportKindEEnum;
        ::ecore::EClass_ptr m_ExtendsEClass;
        ::ecore::EClass_ptr m_FloatTypeEClass;
        ::ecore::EClass_ptr m_GeneratedFromEClass;
        ::ecore::EClass_ptr m_HasTypeEClass;
        ::ecore::EClass_ptr m_HasValueEClass;
        ::ecore::EClass_ptr m_ImplementationOfEClass;
        ::ecore::EClass_ptr m_ImplementsEClass;
        ::ecore::EClass_ptr m_ImportsEClass;
        ::ecore::EClass_ptr m_IncludeDirectiveEClass;
        ::ecore::EClass_ptr m_IncludesEClass;
        ::ecore::EClass_ptr m_IndexUnitEClass;
        ::ecore::EClass_ptr m_InstanceOfEClass;
        ::ecore::EClass_ptr m_IntegerTypeEClass;
        ::ecore::EClass_ptr m_InterfaceUnitEClass;
        ::ecore::EClass_ptr m_ItemUnitEClass;
        ::ecore::EClass_ptr m_LanguageUnitEClass;
        ::ecore::EClass_ptr m_MacroDirectiveEClass;
        ::ecore::EEnum_ptr m_MacroKindEEnum;
        ::ecore::EClass_ptr m_MacroUnitEClass;
        ::ecore::EClass_ptr m_MemberUnitEClass;
        ::ecore::EEnum_ptr m_MethodKindEEnum;
        ::ecore::EClass_ptr m_MethodUnitEClass;
        ::ecore::EClass_ptr m_ModuleEClass;
        ::ecore::EClass_ptr m_NamespaceUnitEClass;
        ::ecore::EClass_ptr m_OctetTypeEClass;
        ::ecore::EClass_ptr m_OctetstringTypeEClass;
        ::ecore::EClass_ptr m_OrdinalTypeEClass;
        ::ecore::EClass_ptr m_PackageEClass;
        ::ecore::EEnum_ptr m_ParameterKindEEnum;
        ::ecore::EClass_ptr m_ParameterToEClass;
        ::ecore::EClass_ptr m_ParameterUnitEClass;
        ::ecore::EClass_ptr m_PointerTypeEClass;
        ::ecore::EClass_ptr m_PreprocessorDirectiveEClass;
        ::ecore::EClass_ptr m_PrimitiveTypeEClass;
        ::ecore::EClass_ptr m_RangeTypeEClass;
        ::ecore::EClass_ptr m_RecordTypeEClass;
        ::ecore::EClass_ptr m_RedefinesEClass;
        ::ecore::EClass_ptr m_ScaledTypeEClass;
        ::ecore::EClass_ptr m_SequenceTypeEClass;
        ::ecore::EClass_ptr m_SetTypeEClass;
        ::ecore::EClass_ptr m_SharedUnitEClass;
        ::ecore::EClass_ptr m_SignatureEClass;
        ::ecore::EEnum_ptr m_StorableKindEEnum;
        ::ecore::EClass_ptr m_StorableUnitEClass;
        ::ecore::EClass_ptr m_StringTypeEClass;
        ::ecore::EClass_ptr m_SynonymTypeEClass;
        ::ecore::EClass_ptr m_TemplateParameterEClass;
        ::ecore::EClass_ptr m_TemplateTypeEClass;
        ::ecore::EClass_ptr m_TemplateUnitEClass;
        ::ecore::EClass_ptr m_TimeTypeEClass;
        ::ecore::EClass_ptr m_TypeUnitEClass;
        ::ecore::EClass_ptr m_ValueEClass;
        ::ecore::EClass_ptr m_ValueElementEClass;
        ::ecore::EClass_ptr m_ValueListEClass;
        ::ecore::EClass_ptr m_VariantToEClass;
        ::ecore::EClass_ptr m_VisibleInEClass;
        ::ecore::EClass_ptr m_VoidTypeEClass;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_AbstractCodeElement__source;

        ::ecore::EReference_ptr m_AbstractCodeElement__comment;

        ::ecore::EReference_ptr m_AbstractCodeElement__codeRelation;

        ::ecore::EReference_ptr m_ControlElement__type;

        ::ecore::EReference_ptr m_ControlElement__entryFlow;

        ::ecore::EReference_ptr m_ControlElement__codeElement;

        ::ecore::EAttribute_ptr m_MethodUnit__kind;

        ::ecore::EAttribute_ptr m_MethodUnit__export;

        ::ecore::EReference_ptr m_Module__codeElement;

        ::ecore::EAttribute_ptr m_CallableUnit__kind;

        ::ecore::EReference_ptr m_TemplateUnit__codeElement;

        ::ecore::EReference_ptr m_InstanceOf__to;

        ::ecore::EReference_ptr m_InstanceOf__from;

        ::ecore::EReference_ptr m_CodeModel__codeElement;

        ::ecore::EReference_ptr m_DerivedType__itemUnit;

        ::ecore::EAttribute_ptr m_ArrayType__size;

        ::ecore::EReference_ptr m_ArrayType__indexUnit;

        ::ecore::EAttribute_ptr m_ClassUnit__isAbstract;

        ::ecore::EReference_ptr m_ClassUnit__codeElement;

        ::ecore::EReference_ptr m_CompositeType__itemUnit;

        ::ecore::EReference_ptr m_EnumeratedType__value;

        ::ecore::EReference_ptr m_Extends__to;

        ::ecore::EReference_ptr m_Extends__from;

        ::ecore::EReference_ptr m_HasType__to;

        ::ecore::EReference_ptr m_HasType__from;

        ::ecore::EReference_ptr m_ImplementationOf__to;

        ::ecore::EReference_ptr m_ImplementationOf__from;

        ::ecore::EReference_ptr m_Implements__to;

        ::ecore::EReference_ptr m_Implements__from;

        ::ecore::EReference_ptr m_InterfaceUnit__codeElement;

        ::ecore::EReference_ptr m_DefinedType__type;

        ::ecore::EReference_ptr m_DefinedType__codeElement;

        ::ecore::EAttribute_ptr m_RangeType__lower;

        ::ecore::EAttribute_ptr m_RangeType__upper;

        ::ecore::EReference_ptr m_Signature__parameterUnit;

        ::ecore::EReference_ptr m_DataElement__type;

        ::ecore::EAttribute_ptr m_DataElement__ext;

        ::ecore::EAttribute_ptr m_DataElement__size;

        ::ecore::EReference_ptr m_DataElement__codeElement;

        ::ecore::EReference_ptr m_NamespaceUnit__groupedCode;

        ::ecore::EReference_ptr m_VisibleIn__to;

        ::ecore::EReference_ptr m_VisibleIn__from;

        ::ecore::EAttribute_ptr m_CommentUnit__text;

        ::ecore::EReference_ptr m_ValueList__valueElement;

        ::ecore::EAttribute_ptr m_StorableUnit__kind;

        ::ecore::EAttribute_ptr m_MemberUnit__export;

        ::ecore::EAttribute_ptr m_ParameterUnit__kind;

        ::ecore::EAttribute_ptr m_ParameterUnit__pos;

        ::ecore::EAttribute_ptr m_SequenceType__size;

        ::ecore::EAttribute_ptr m_BagType__size;

        ::ecore::EAttribute_ptr m_SetType__size;

        ::ecore::EReference_ptr m_CodeRelationship__to;

        ::ecore::EReference_ptr m_CodeRelationship__from;

        ::ecore::EReference_ptr m_Imports__to;

        ::ecore::EReference_ptr m_Imports__from;

        ::ecore::EReference_ptr m_ParameterTo__to;

        ::ecore::EReference_ptr m_ParameterTo__from;

        ::ecore::EReference_ptr m_PreprocessorDirective__codeElement;

        ::ecore::EAttribute_ptr m_MacroUnit__kind;

        ::ecore::EReference_ptr m_VariantTo__to;

        ::ecore::EReference_ptr m_VariantTo__from;

        ::ecore::EReference_ptr m_Expands__to;

        ::ecore::EReference_ptr m_Expands__from;

        ::ecore::EReference_ptr m_Redefines__to;

        ::ecore::EReference_ptr m_Redefines__from;

        ::ecore::EReference_ptr m_GeneratedFrom__to;

        ::ecore::EReference_ptr m_GeneratedFrom__from;

        ::ecore::EReference_ptr m_Includes__to;

        ::ecore::EReference_ptr m_Includes__from;

        ::ecore::EReference_ptr m_HasValue__to;

        ::ecore::EReference_ptr m_HasValue__from;

    };

}
 // code
}// kdm

#endif // _KDM_CODEPACKAGE_HPP

