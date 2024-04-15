// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/StatementItemDispatcher.hpp
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

#ifndef XPAND3_STATEMENT_ITEMDISPATCHER_HPP
#define XPAND3_STATEMENT_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <xpand3/statement.hpp>

namespace xpand3
{
    namespace statement
    {

        template< class T >
        class StatementItemDispatcher
        {
        public:
            StatementItemDispatcher() = default;
            ~StatementItemDispatcher() = default;

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
                if (eClass->getEPackage() != StatementPackage::_instance())
                {
                    assert(
                            !"The package of the eclass does not match the package of the dispatcher!");
                    return;
                }

                switch (eClass->getClassifierID())
                {
                case StatementPackage::ABSTRACTSTATEMENT:
                {
                    auto derived = ::ecore::as < AbstractStatement > (obj);
                    _this()->T::work(derived, (AbstractStatement*) nullptr);
                }
                    break;
                case StatementPackage::ABSTRACTSTATEMENTWITHBODY:
                {
                    auto derived = ::ecore::as < AbstractStatementWithBody
                            > (obj);
                    _this()->T::work(derived,
                            (AbstractStatementWithBody*) nullptr);
                }
                    break;
                case StatementPackage::ERRORSTATEMENT:
                {
                    auto derived = ::ecore::as < ErrorStatement > (obj);
                    _this()->T::work(derived, (ErrorStatement*) nullptr);
                }
                    break;
                case StatementPackage::EXPANDSTATEMENT:
                {
                    auto derived = ::ecore::as < ExpandStatement > (obj);
                    _this()->T::work(derived, (ExpandStatement*) nullptr);
                }
                    break;
                case StatementPackage::EXPRESSIONSTATEMENT:
                {
                    auto derived = ::ecore::as < ExpressionStatement > (obj);
                    _this()->T::work(derived, (ExpressionStatement*) nullptr);
                }
                    break;
                case StatementPackage::FILESTATEMENT:
                {
                    auto derived = ::ecore::as < FileStatement > (obj);
                    _this()->T::work(derived, (FileStatement*) nullptr);
                }
                    break;
                case StatementPackage::FOREACHSTATEMENT:
                {
                    auto derived = ::ecore::as < ForEachStatement > (obj);
                    _this()->T::work(derived, (ForEachStatement*) nullptr);
                }
                    break;
                case StatementPackage::IFSTATEMENT:
                {
                    auto derived = ::ecore::as < IfStatement > (obj);
                    _this()->T::work(derived, (IfStatement*) nullptr);
                }
                    break;
                case StatementPackage::LETSTATEMENT:
                {
                    auto derived = ::ecore::as < LetStatement > (obj);
                    _this()->T::work(derived, (LetStatement*) nullptr);
                }
                    break;
                case StatementPackage::PROTECTSTATEMENT:
                {
                    auto derived = ::ecore::as < ProtectStatement > (obj);
                    _this()->T::work(derived, (ProtectStatement*) nullptr);
                }
                    break;
                case StatementPackage::TEXTSTATEMENT:
                {
                    auto derived = ::ecore::as < TextStatement > (obj);
                    _this()->T::work(derived, (TextStatement*) nullptr);
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

    } // statement
} // xpand3

#endif // XPAND3_STATEMENT_ITEMDISPATCHER_HPP
