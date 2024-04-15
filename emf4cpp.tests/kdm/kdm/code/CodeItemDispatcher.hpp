// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/CodeItemDispatcher.hpp
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

#ifndef KDM_CODE_ITEMDISPATCHER_HPP
#define KDM_CODE_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <kdm/code.hpp>

namespace kdm
{
    namespace code
    {

        template< class T >
        class CodeItemDispatcher
        {
        public:
            CodeItemDispatcher() = default;
            ~CodeItemDispatcher() = default;

            /** Clients need to overload and reimplement this work() method for every
             * class they want to handle. The second argument is a dummy argument to
             * disambiguate work methods in case of an inheritance hirarchy and
             * always contains a nullptr.
             * Note that in a class hierarchy classes may be shadowed by derived classes. */
            void work(const ::ecore::EObject_ptr&, ::ecore::EObject*)
            {
            }

            /** Entry function for the dispatch mechanism. */
            void enter(const ::ecore::EObject_ptr &obj)
            {
                auto eClass = obj->eClass();
                if (eClass->getEPackage() != CodePackage::_instance())
                {
                    assert(
                            !"The package of the eclass does not match the package of the dispatcher!");
                    return;
                }

                switch (eClass->getClassifierID())
                {
                case CodePackage::ABSTRACTCODEELEMENT:
                {
                    auto derived = ::ecore::as < AbstractCodeElement > (obj);
                    _this()->T::work(derived, (AbstractCodeElement*) nullptr);
                }
                    break;
                case CodePackage::ABSTRACTCODERELATIONSHIP:
                {
                    auto derived = ::ecore::as < AbstractCodeRelationship
                            > (obj);
                    _this()->T::work(derived,
                            (AbstractCodeRelationship*) nullptr);
                }
                    break;
                case CodePackage::ARRAYTYPE:
                {
                    auto derived = ::ecore::as < ArrayType > (obj);
                    _this()->T::work(derived, (ArrayType*) nullptr);
                }
                    break;
                case CodePackage::BAGTYPE:
                {
                    auto derived = ::ecore::as < BagType > (obj);
                    _this()->T::work(derived, (BagType*) nullptr);
                }
                    break;
                case CodePackage::BITSTRINGTYPE:
                {
                    auto derived = ::ecore::as < BitstringType > (obj);
                    _this()->T::work(derived, (BitstringType*) nullptr);
                }
                    break;
                case CodePackage::BITTYPE:
                {
                    auto derived = ::ecore::as < BitType > (obj);
                    _this()->T::work(derived, (BitType*) nullptr);
                }
                    break;
                case CodePackage::BOOLEANTYPE:
                {
                    auto derived = ::ecore::as < BooleanType > (obj);
                    _this()->T::work(derived, (BooleanType*) nullptr);
                }
                    break;
                case CodePackage::CALLABLEUNIT:
                {
                    auto derived = ::ecore::as < CallableUnit > (obj);
                    _this()->T::work(derived, (CallableUnit*) nullptr);
                }
                    break;
                case CodePackage::CHARTYPE:
                {
                    auto derived = ::ecore::as < CharType > (obj);
                    _this()->T::work(derived, (CharType*) nullptr);
                }
                    break;
                case CodePackage::CHOICETYPE:
                {
                    auto derived = ::ecore::as < ChoiceType > (obj);
                    _this()->T::work(derived, (ChoiceType*) nullptr);
                }
                    break;
                case CodePackage::CLASSUNIT:
                {
                    auto derived = ::ecore::as < ClassUnit > (obj);
                    _this()->T::work(derived, (ClassUnit*) nullptr);
                }
                    break;
                case CodePackage::CODEASSEMBLY:
                {
                    auto derived = ::ecore::as < CodeAssembly > (obj);
                    _this()->T::work(derived, (CodeAssembly*) nullptr);
                }
                    break;
                case CodePackage::CODEELEMENT:
                {
                    auto derived = ::ecore::as < CodeElement > (obj);
                    _this()->T::work(derived, (CodeElement*) nullptr);
                }
                    break;
                case CodePackage::CODEITEM:
                {
                    auto derived = ::ecore::as < CodeItem > (obj);
                    _this()->T::work(derived, (CodeItem*) nullptr);
                }
                    break;
                case CodePackage::CODEMODEL:
                {
                    auto derived = ::ecore::as < CodeModel > (obj);
                    _this()->T::work(derived, (CodeModel*) nullptr);
                }
                    break;
                case CodePackage::CODERELATIONSHIP:
                {
                    auto derived = ::ecore::as < CodeRelationship > (obj);
                    _this()->T::work(derived, (CodeRelationship*) nullptr);
                }
                    break;
                case CodePackage::COMMENTUNIT:
                {
                    auto derived = ::ecore::as < CommentUnit > (obj);
                    _this()->T::work(derived, (CommentUnit*) nullptr);
                }
                    break;
                case CodePackage::COMPILATIONUNIT:
                {
                    auto derived = ::ecore::as < CompilationUnit > (obj);
                    _this()->T::work(derived, (CompilationUnit*) nullptr);
                }
                    break;
                case CodePackage::COMPOSITETYPE:
                {
                    auto derived = ::ecore::as < CompositeType > (obj);
                    _this()->T::work(derived, (CompositeType*) nullptr);
                }
                    break;
                case CodePackage::COMPUTATIONALOBJECT:
                {
                    auto derived = ::ecore::as < ComputationalObject > (obj);
                    _this()->T::work(derived, (ComputationalObject*) nullptr);
                }
                    break;
                case CodePackage::CONDITIONALDIRECTIVE:
                {
                    auto derived = ::ecore::as < ConditionalDirective > (obj);
                    _this()->T::work(derived, (ConditionalDirective*) nullptr);
                }
                    break;
                case CodePackage::CONTROLELEMENT:
                {
                    auto derived = ::ecore::as < ControlElement > (obj);
                    _this()->T::work(derived, (ControlElement*) nullptr);
                }
                    break;
                case CodePackage::DATAELEMENT:
                {
                    auto derived = ::ecore::as < DataElement > (obj);
                    _this()->T::work(derived, (DataElement*) nullptr);
                }
                    break;
                case CodePackage::DATATYPE:
                {
                    auto derived = ::ecore::as < Datatype > (obj);
                    _this()->T::work(derived, (Datatype*) nullptr);
                }
                    break;
                case CodePackage::DATETYPE:
                {
                    auto derived = ::ecore::as < DateType > (obj);
                    _this()->T::work(derived, (DateType*) nullptr);
                }
                    break;
                case CodePackage::DECIMALTYPE:
                {
                    auto derived = ::ecore::as < DecimalType > (obj);
                    _this()->T::work(derived, (DecimalType*) nullptr);
                }
                    break;
                case CodePackage::DEFINEDTYPE:
                {
                    auto derived = ::ecore::as < DefinedType > (obj);
                    _this()->T::work(derived, (DefinedType*) nullptr);
                }
                    break;
                case CodePackage::DERIVEDTYPE:
                {
                    auto derived = ::ecore::as < DerivedType > (obj);
                    _this()->T::work(derived, (DerivedType*) nullptr);
                }
                    break;
                case CodePackage::ENUMERATEDTYPE:
                {
                    auto derived = ::ecore::as < EnumeratedType > (obj);
                    _this()->T::work(derived, (EnumeratedType*) nullptr);
                }
                    break;
                case CodePackage::EXPANDS:
                {
                    auto derived = ::ecore::as < Expands > (obj);
                    _this()->T::work(derived, (Expands*) nullptr);
                }
                    break;
                case CodePackage::EXTENDS:
                {
                    auto derived = ::ecore::as < Extends > (obj);
                    _this()->T::work(derived, (Extends*) nullptr);
                }
                    break;
                case CodePackage::FLOATTYPE:
                {
                    auto derived = ::ecore::as < FloatType > (obj);
                    _this()->T::work(derived, (FloatType*) nullptr);
                }
                    break;
                case CodePackage::GENERATEDFROM:
                {
                    auto derived = ::ecore::as < GeneratedFrom > (obj);
                    _this()->T::work(derived, (GeneratedFrom*) nullptr);
                }
                    break;
                case CodePackage::HASTYPE:
                {
                    auto derived = ::ecore::as < HasType > (obj);
                    _this()->T::work(derived, (HasType*) nullptr);
                }
                    break;
                case CodePackage::HASVALUE:
                {
                    auto derived = ::ecore::as < HasValue > (obj);
                    _this()->T::work(derived, (HasValue*) nullptr);
                }
                    break;
                case CodePackage::IMPLEMENTATIONOF:
                {
                    auto derived = ::ecore::as < ImplementationOf > (obj);
                    _this()->T::work(derived, (ImplementationOf*) nullptr);
                }
                    break;
                case CodePackage::IMPLEMENTS:
                {
                    auto derived = ::ecore::as < Implements > (obj);
                    _this()->T::work(derived, (Implements*) nullptr);
                }
                    break;
                case CodePackage::IMPORTS:
                {
                    auto derived = ::ecore::as < Imports > (obj);
                    _this()->T::work(derived, (Imports*) nullptr);
                }
                    break;
                case CodePackage::INCLUDEDIRECTIVE:
                {
                    auto derived = ::ecore::as < IncludeDirective > (obj);
                    _this()->T::work(derived, (IncludeDirective*) nullptr);
                }
                    break;
                case CodePackage::INCLUDES:
                {
                    auto derived = ::ecore::as < Includes > (obj);
                    _this()->T::work(derived, (Includes*) nullptr);
                }
                    break;
                case CodePackage::INDEXUNIT:
                {
                    auto derived = ::ecore::as < IndexUnit > (obj);
                    _this()->T::work(derived, (IndexUnit*) nullptr);
                }
                    break;
                case CodePackage::INSTANCEOF:
                {
                    auto derived = ::ecore::as < InstanceOf > (obj);
                    _this()->T::work(derived, (InstanceOf*) nullptr);
                }
                    break;
                case CodePackage::INTEGERTYPE:
                {
                    auto derived = ::ecore::as < IntegerType > (obj);
                    _this()->T::work(derived, (IntegerType*) nullptr);
                }
                    break;
                case CodePackage::INTERFACEUNIT:
                {
                    auto derived = ::ecore::as < InterfaceUnit > (obj);
                    _this()->T::work(derived, (InterfaceUnit*) nullptr);
                }
                    break;
                case CodePackage::ITEMUNIT:
                {
                    auto derived = ::ecore::as < ItemUnit > (obj);
                    _this()->T::work(derived, (ItemUnit*) nullptr);
                }
                    break;
                case CodePackage::LANGUAGEUNIT:
                {
                    auto derived = ::ecore::as < LanguageUnit > (obj);
                    _this()->T::work(derived, (LanguageUnit*) nullptr);
                }
                    break;
                case CodePackage::MACRODIRECTIVE:
                {
                    auto derived = ::ecore::as < MacroDirective > (obj);
                    _this()->T::work(derived, (MacroDirective*) nullptr);
                }
                    break;
                case CodePackage::MACROUNIT:
                {
                    auto derived = ::ecore::as < MacroUnit > (obj);
                    _this()->T::work(derived, (MacroUnit*) nullptr);
                }
                    break;
                case CodePackage::MEMBERUNIT:
                {
                    auto derived = ::ecore::as < MemberUnit > (obj);
                    _this()->T::work(derived, (MemberUnit*) nullptr);
                }
                    break;
                case CodePackage::METHODUNIT:
                {
                    auto derived = ::ecore::as < MethodUnit > (obj);
                    _this()->T::work(derived, (MethodUnit*) nullptr);
                }
                    break;
                case CodePackage::MODULE:
                {
                    auto derived = ::ecore::as < Module > (obj);
                    _this()->T::work(derived, (Module*) nullptr);
                }
                    break;
                case CodePackage::NAMESPACEUNIT:
                {
                    auto derived = ::ecore::as < NamespaceUnit > (obj);
                    _this()->T::work(derived, (NamespaceUnit*) nullptr);
                }
                    break;
                case CodePackage::OCTETSTRINGTYPE:
                {
                    auto derived = ::ecore::as < OctetstringType > (obj);
                    _this()->T::work(derived, (OctetstringType*) nullptr);
                }
                    break;
                case CodePackage::OCTETTYPE:
                {
                    auto derived = ::ecore::as < OctetType > (obj);
                    _this()->T::work(derived, (OctetType*) nullptr);
                }
                    break;
                case CodePackage::ORDINALTYPE:
                {
                    auto derived = ::ecore::as < OrdinalType > (obj);
                    _this()->T::work(derived, (OrdinalType*) nullptr);
                }
                    break;
                case CodePackage::PACKAGE:
                {
                    auto derived = ::ecore::as < Package > (obj);
                    _this()->T::work(derived, (Package*) nullptr);
                }
                    break;
                case CodePackage::PARAMETERTO:
                {
                    auto derived = ::ecore::as < ParameterTo > (obj);
                    _this()->T::work(derived, (ParameterTo*) nullptr);
                }
                    break;
                case CodePackage::PARAMETERUNIT:
                {
                    auto derived = ::ecore::as < ParameterUnit > (obj);
                    _this()->T::work(derived, (ParameterUnit*) nullptr);
                }
                    break;
                case CodePackage::POINTERTYPE:
                {
                    auto derived = ::ecore::as < PointerType > (obj);
                    _this()->T::work(derived, (PointerType*) nullptr);
                }
                    break;
                case CodePackage::PREPROCESSORDIRECTIVE:
                {
                    auto derived = ::ecore::as < PreprocessorDirective > (obj);
                    _this()->T::work(derived, (PreprocessorDirective*) nullptr);
                }
                    break;
                case CodePackage::PRIMITIVETYPE:
                {
                    auto derived = ::ecore::as < PrimitiveType > (obj);
                    _this()->T::work(derived, (PrimitiveType*) nullptr);
                }
                    break;
                case CodePackage::RANGETYPE:
                {
                    auto derived = ::ecore::as < RangeType > (obj);
                    _this()->T::work(derived, (RangeType*) nullptr);
                }
                    break;
                case CodePackage::RECORDTYPE:
                {
                    auto derived = ::ecore::as < RecordType > (obj);
                    _this()->T::work(derived, (RecordType*) nullptr);
                }
                    break;
                case CodePackage::REDEFINES:
                {
                    auto derived = ::ecore::as < Redefines > (obj);
                    _this()->T::work(derived, (Redefines*) nullptr);
                }
                    break;
                case CodePackage::SCALEDTYPE:
                {
                    auto derived = ::ecore::as < ScaledType > (obj);
                    _this()->T::work(derived, (ScaledType*) nullptr);
                }
                    break;
                case CodePackage::SEQUENCETYPE:
                {
                    auto derived = ::ecore::as < SequenceType > (obj);
                    _this()->T::work(derived, (SequenceType*) nullptr);
                }
                    break;
                case CodePackage::SETTYPE:
                {
                    auto derived = ::ecore::as < SetType > (obj);
                    _this()->T::work(derived, (SetType*) nullptr);
                }
                    break;
                case CodePackage::SHAREDUNIT:
                {
                    auto derived = ::ecore::as < SharedUnit > (obj);
                    _this()->T::work(derived, (SharedUnit*) nullptr);
                }
                    break;
                case CodePackage::SIGNATURE:
                {
                    auto derived = ::ecore::as < Signature > (obj);
                    _this()->T::work(derived, (Signature*) nullptr);
                }
                    break;
                case CodePackage::STORABLEUNIT:
                {
                    auto derived = ::ecore::as < StorableUnit > (obj);
                    _this()->T::work(derived, (StorableUnit*) nullptr);
                }
                    break;
                case CodePackage::STRINGTYPE:
                {
                    auto derived = ::ecore::as < StringType > (obj);
                    _this()->T::work(derived, (StringType*) nullptr);
                }
                    break;
                case CodePackage::SYNONYMTYPE:
                {
                    auto derived = ::ecore::as < SynonymType > (obj);
                    _this()->T::work(derived, (SynonymType*) nullptr);
                }
                    break;
                case CodePackage::TEMPLATEPARAMETER:
                {
                    auto derived = ::ecore::as < TemplateParameter > (obj);
                    _this()->T::work(derived, (TemplateParameter*) nullptr);
                }
                    break;
                case CodePackage::TEMPLATETYPE:
                {
                    auto derived = ::ecore::as < TemplateType > (obj);
                    _this()->T::work(derived, (TemplateType*) nullptr);
                }
                    break;
                case CodePackage::TEMPLATEUNIT:
                {
                    auto derived = ::ecore::as < TemplateUnit > (obj);
                    _this()->T::work(derived, (TemplateUnit*) nullptr);
                }
                    break;
                case CodePackage::TIMETYPE:
                {
                    auto derived = ::ecore::as < TimeType > (obj);
                    _this()->T::work(derived, (TimeType*) nullptr);
                }
                    break;
                case CodePackage::TYPEUNIT:
                {
                    auto derived = ::ecore::as < TypeUnit > (obj);
                    _this()->T::work(derived, (TypeUnit*) nullptr);
                }
                    break;
                case CodePackage::VALUE:
                {
                    auto derived = ::ecore::as < Value > (obj);
                    _this()->T::work(derived, (Value*) nullptr);
                }
                    break;
                case CodePackage::VALUEELEMENT:
                {
                    auto derived = ::ecore::as < ValueElement > (obj);
                    _this()->T::work(derived, (ValueElement*) nullptr);
                }
                    break;
                case CodePackage::VALUELIST:
                {
                    auto derived = ::ecore::as < ValueList > (obj);
                    _this()->T::work(derived, (ValueList*) nullptr);
                }
                    break;
                case CodePackage::VARIANTTO:
                {
                    auto derived = ::ecore::as < VariantTo > (obj);
                    _this()->T::work(derived, (VariantTo*) nullptr);
                }
                    break;
                case CodePackage::VISIBLEIN:
                {
                    auto derived = ::ecore::as < VisibleIn > (obj);
                    _this()->T::work(derived, (VisibleIn*) nullptr);
                }
                    break;
                case CodePackage::VOIDTYPE:
                {
                    auto derived = ::ecore::as < VoidType > (obj);
                    _this()->T::work(derived, (VoidType*) nullptr);
                }
                    break;
                default:
                    break;
                }
            }

        private:
            /** Inline helper, should compile to simple offset adjustment. */
            T* _this()
            {
                return static_cast< T* >(this);
            }

            /** Inline helper, should compile to simple offset adjustment. */
            const T* _this() const
            {
                return static_cast< const T* >(this);
            }
        };

    } // code
} // kdm

#endif // KDM_CODE_ITEMDISPATCHER_HPP
