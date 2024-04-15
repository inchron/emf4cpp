// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/IdlmmItemDispatcher.hpp
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

#ifndef IDLMM_ITEMDISPATCHER_HPP
#define IDLMM_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <idlmm.hpp>

namespace idlmm
{

    template< class T >
    class IdlmmItemDispatcher
    {
    public:
        IdlmmItemDispatcher() = default;
        ~IdlmmItemDispatcher() = default;

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
            if (eClass->getEPackage() != IdlmmPackage::_instance())
            {
                assert(
                        !"The package of the eclass does not match the package of the dispatcher!");
                return;
            }

            switch (eClass->getClassifierID())
            {
            case IdlmmPackage::ALIASDEF:
            {
                auto derived = ::ecore::as < AliasDef > (obj);
                _this()->T::work(derived, (AliasDef*) nullptr);
            }
                break;
            case IdlmmPackage::ARRAYDEF:
            {
                auto derived = ::ecore::as < ArrayDef > (obj);
                _this()->T::work(derived, (ArrayDef*) nullptr);
            }
                break;
            case IdlmmPackage::ATTRIBUTEDEF:
            {
                auto derived = ::ecore::as < AttributeDef > (obj);
                _this()->T::work(derived, (AttributeDef*) nullptr);
            }
                break;
            case IdlmmPackage::CONSTANTDEF:
            {
                auto derived = ::ecore::as < ConstantDef > (obj);
                _this()->T::work(derived, (ConstantDef*) nullptr);
            }
                break;
            case IdlmmPackage::CONTAINED:
            {
                auto derived = ::ecore::as < Contained > (obj);
                _this()->T::work(derived, (Contained*) nullptr);
            }
                break;
            case IdlmmPackage::CONTAINER:
            {
                auto derived = ::ecore::as < Container > (obj);
                _this()->T::work(derived, (Container*) nullptr);
            }
                break;
            case IdlmmPackage::ENUMDEF:
            {
                auto derived = ::ecore::as < EnumDef > (obj);
                _this()->T::work(derived, (EnumDef*) nullptr);
            }
                break;
            case IdlmmPackage::EXCEPTIONDEF:
            {
                auto derived = ::ecore::as < ExceptionDef > (obj);
                _this()->T::work(derived, (ExceptionDef*) nullptr);
            }
                break;
            case IdlmmPackage::FIELD:
            {
                auto derived = ::ecore::as < Field > (obj);
                _this()->T::work(derived, (Field*) nullptr);
            }
                break;
            case IdlmmPackage::FIXEDDEF:
            {
                auto derived = ::ecore::as < FixedDef > (obj);
                _this()->T::work(derived, (FixedDef*) nullptr);
            }
                break;
            case IdlmmPackage::IDLTYPE:
            {
                auto derived = ::ecore::as < IDLType > (obj);
                _this()->T::work(derived, (IDLType*) nullptr);
            }
                break;
            case IdlmmPackage::INCLUDE:
            {
                auto derived = ::ecore::as < Include > (obj);
                _this()->T::work(derived, (Include*) nullptr);
            }
                break;
            case IdlmmPackage::INTERFACEDEF:
            {
                auto derived = ::ecore::as < InterfaceDef > (obj);
                _this()->T::work(derived, (InterfaceDef*) nullptr);
            }
                break;
            case IdlmmPackage::MODULEDEF:
            {
                auto derived = ::ecore::as < ModuleDef > (obj);
                _this()->T::work(derived, (ModuleDef*) nullptr);
            }
                break;
            case IdlmmPackage::OPERATIONDEF:
            {
                auto derived = ::ecore::as < OperationDef > (obj);
                _this()->T::work(derived, (OperationDef*) nullptr);
            }
                break;
            case IdlmmPackage::PARAMETERDEF:
            {
                auto derived = ::ecore::as < ParameterDef > (obj);
                _this()->T::work(derived, (ParameterDef*) nullptr);
            }
                break;
            case IdlmmPackage::PRIMITIVEDEF:
            {
                auto derived = ::ecore::as < PrimitiveDef > (obj);
                _this()->T::work(derived, (PrimitiveDef*) nullptr);
            }
                break;
            case IdlmmPackage::SEQUENCEDEF:
            {
                auto derived = ::ecore::as < SequenceDef > (obj);
                _this()->T::work(derived, (SequenceDef*) nullptr);
            }
                break;
            case IdlmmPackage::STRINGDEF:
            {
                auto derived = ::ecore::as < StringDef > (obj);
                _this()->T::work(derived, (StringDef*) nullptr);
            }
                break;
            case IdlmmPackage::STRUCTDEF:
            {
                auto derived = ::ecore::as < StructDef > (obj);
                _this()->T::work(derived, (StructDef*) nullptr);
            }
                break;
            case IdlmmPackage::TRANSLATIONUNIT:
            {
                auto derived = ::ecore::as < TranslationUnit > (obj);
                _this()->T::work(derived, (TranslationUnit*) nullptr);
            }
                break;
            case IdlmmPackage::TYPED:
            {
                auto derived = ::ecore::as < Typed > (obj);
                _this()->T::work(derived, (Typed*) nullptr);
            }
                break;
            case IdlmmPackage::TYPEDEFDEF:
            {
                auto derived = ::ecore::as < TypedefDef > (obj);
                _this()->T::work(derived, (TypedefDef*) nullptr);
            }
                break;
            case IdlmmPackage::UNIONDEF:
            {
                auto derived = ::ecore::as < UnionDef > (obj);
                _this()->T::work(derived, (UnionDef*) nullptr);
            }
                break;
            case IdlmmPackage::UNIONFIELD:
            {
                auto derived = ::ecore::as < UnionField > (obj);
                _this()->T::work(derived, (UnionField*) nullptr);
            }
                break;
            case IdlmmPackage::WSTRINGDEF:
            {
                auto derived = ::ecore::as < WstringDef > (obj);
                _this()->T::work(derived, (WstringDef*) nullptr);
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

} // idlmm

#endif // IDLMM_ITEMDISPATCHER_HPP
