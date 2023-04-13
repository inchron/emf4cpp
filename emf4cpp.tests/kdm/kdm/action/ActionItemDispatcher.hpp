// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ActionItemDispatcher.hpp
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

#ifndef KDM_ACTION_ITEMDISPATCHER_HPP
#define KDM_ACTION_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <kdm/action.hpp>
#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace action
    {

        template<class T>
        class EXPORT_KDM_DLL
    ActionItemDispatcher
    {
    public:
        ActionItemDispatcher() = default;
        ~ActionItemDispatcher() = default;

        /** Clients need to overload and reimplement this work() method for every
         * class they want to handle. The second argument is a dummy argument to
         * disambiguate work methods in case of an inheritance hirarchy and
         * always contains a nullptr.
         * Note that in a class hierarchy classes may be shadowed by derived classes. */
        void work(const ::ecore::EObject_ptr&, ::ecore::EObject*)
        {}

        /** Entry function for the dispatch mechanism. */
        void enter(const ::ecore::EObject_ptr& obj)
        {
            auto eClass = obj->eClass();
            if (eClass->getEPackage() != ActionPackage::_instance())
            {
                assert(!"The package of the eclass does not match the package of the dispatcher!");
                return;
            }

            switch (eClass->getClassifierID())
            {
                case ActionPackage::ABSTRACTACTIONRELATIONSHIP:
                {
                    auto derived = ::ecore::as< AbstractActionRelationship >(obj);
                    _this()->T::work(derived, (AbstractActionRelationship*)nullptr);
                }break;
                case ActionPackage::ACTIONELEMENT:
                {
                    auto derived = ::ecore::as< ActionElement >(obj);
                    _this()->T::work(derived, (ActionElement*)nullptr);
                }break;
                case ActionPackage::ACTIONRELATIONSHIP:
                {
                    auto derived = ::ecore::as< ActionRelationship >(obj);
                    _this()->T::work(derived, (ActionRelationship*)nullptr);
                }break;
                case ActionPackage::ADDRESSES:
                {
                    auto derived = ::ecore::as< Addresses >(obj);
                    _this()->T::work(derived, (Addresses*)nullptr);
                }break;
                case ActionPackage::BLOCKUNIT:
                {
                    auto derived = ::ecore::as< BlockUnit >(obj);
                    _this()->T::work(derived, (BlockUnit*)nullptr);
                }break;
                case ActionPackage::CALLS:
                {
                    auto derived = ::ecore::as< Calls >(obj);
                    _this()->T::work(derived, (Calls*)nullptr);
                }break;
                case ActionPackage::CATCHUNIT:
                {
                    auto derived = ::ecore::as< CatchUnit >(obj);
                    _this()->T::work(derived, (CatchUnit*)nullptr);
                }break;
                case ActionPackage::COMPLIESTO:
                {
                    auto derived = ::ecore::as< CompliesTo >(obj);
                    _this()->T::work(derived, (CompliesTo*)nullptr);
                }break;
                case ActionPackage::CONTROLFLOW:
                {
                    auto derived = ::ecore::as< ControlFlow >(obj);
                    _this()->T::work(derived, (ControlFlow*)nullptr);
                }break;
                case ActionPackage::CREATES:
                {
                    auto derived = ::ecore::as< Creates >(obj);
                    _this()->T::work(derived, (Creates*)nullptr);
                }break;
                case ActionPackage::DISPATCHES:
                {
                    auto derived = ::ecore::as< Dispatches >(obj);
                    _this()->T::work(derived, (Dispatches*)nullptr);
                }break;
                case ActionPackage::ENTRYFLOW:
                {
                    auto derived = ::ecore::as< EntryFlow >(obj);
                    _this()->T::work(derived, (EntryFlow*)nullptr);
                }break;
                case ActionPackage::EXCEPTIONFLOW:
                {
                    auto derived = ::ecore::as< ExceptionFlow >(obj);
                    _this()->T::work(derived, (ExceptionFlow*)nullptr);
                }break;
                case ActionPackage::EXCEPTIONUNIT:
                {
                    auto derived = ::ecore::as< ExceptionUnit >(obj);
                    _this()->T::work(derived, (ExceptionUnit*)nullptr);
                }break;
                case ActionPackage::EXITFLOW:
                {
                    auto derived = ::ecore::as< ExitFlow >(obj);
                    _this()->T::work(derived, (ExitFlow*)nullptr);
                }break;
                case ActionPackage::FALSEFLOW:
                {
                    auto derived = ::ecore::as< FalseFlow >(obj);
                    _this()->T::work(derived, (FalseFlow*)nullptr);
                }break;
                case ActionPackage::FINALLYUNIT:
                {
                    auto derived = ::ecore::as< FinallyUnit >(obj);
                    _this()->T::work(derived, (FinallyUnit*)nullptr);
                }break;
                case ActionPackage::FLOW:
                {
                    auto derived = ::ecore::as< Flow >(obj);
                    _this()->T::work(derived, (Flow*)nullptr);
                }break;
                case ActionPackage::GUARDEDFLOW:
                {
                    auto derived = ::ecore::as< GuardedFlow >(obj);
                    _this()->T::work(derived, (GuardedFlow*)nullptr);
                }break;
                case ActionPackage::READS:
                {
                    auto derived = ::ecore::as< Reads >(obj);
                    _this()->T::work(derived, (Reads*)nullptr);
                }break;
                case ActionPackage::THROWS:
                {
                    auto derived = ::ecore::as< Throws >(obj);
                    _this()->T::work(derived, (Throws*)nullptr);
                }break;
                case ActionPackage::TRUEFLOW:
                {
                    auto derived = ::ecore::as< TrueFlow >(obj);
                    _this()->T::work(derived, (TrueFlow*)nullptr);
                }break;
                case ActionPackage::TRYUNIT:
                {
                    auto derived = ::ecore::as< TryUnit >(obj);
                    _this()->T::work(derived, (TryUnit*)nullptr);
                }break;
                case ActionPackage::USESTYPE:
                {
                    auto derived = ::ecore::as< UsesType >(obj);
                    _this()->T::work(derived, (UsesType*)nullptr);
                }break;
                case ActionPackage::WRITES:
                {
                    auto derived = ::ecore::as< Writes >(obj);
                    _this()->T::work(derived, (Writes*)nullptr);
                }break;
                default:
                break;
            }
        }

    private:
        /** Inline helper, should compile to simple offset adjustment. */
        T* _this()
        {   return static_cast<T*>(this);}

        /** Inline helper, should compile to simple offset adjustment. */
        const T* _this() const
        {   return static_cast<const T*>(this);}
    };

}
 // action
}// kdm

#endif // KDM_ACTION_ITEMDISPATCHER_HPP
