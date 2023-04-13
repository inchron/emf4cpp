// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/ExpressionItemDispatcher.hpp
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

#ifndef XPAND3_EXPRESSION_ITEMDISPATCHER_HPP
#define XPAND3_EXPRESSION_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <xpand3/expression.hpp>
#include <xpand3/dllXpand3.hpp>

namespace xpand3
{
    namespace expression
    {

        template<class T>
        class EXPORT_XPAND3_DLL
    ExpressionItemDispatcher
    {
    public:
        ExpressionItemDispatcher() = default;
        ~ExpressionItemDispatcher() = default;

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
            if (eClass->getEPackage() != ExpressionPackage::_instance())
            {
                assert(!"The package of the eclass does not match the package of the dispatcher!");
                return;
            }

            switch (eClass->getClassifierID())
            {
                case ExpressionPackage::ABSTRACTEXPRESSION:
                {
                    auto derived = ::ecore::as< AbstractExpression >(obj);
                    _this()->T::work(derived, (AbstractExpression*)nullptr);
                }break;
                case ExpressionPackage::BINARYOPERATION:
                {
                    auto derived = ::ecore::as< BinaryOperation >(obj);
                    _this()->T::work(derived, (BinaryOperation*)nullptr);
                }break;
                case ExpressionPackage::BOOLEANLITERAL:
                {
                    auto derived = ::ecore::as< BooleanLiteral >(obj);
                    _this()->T::work(derived, (BooleanLiteral*)nullptr);
                }break;
                case ExpressionPackage::BOOLEANOPERATION:
                {
                    auto derived = ::ecore::as< BooleanOperation >(obj);
                    _this()->T::work(derived, (BooleanOperation*)nullptr);
                }break;
                case ExpressionPackage::CASE:
                {
                    auto derived = ::ecore::as< Case >(obj);
                    _this()->T::work(derived, (Case*)nullptr);
                }break;
                case ExpressionPackage::CAST:
                {
                    auto derived = ::ecore::as< Cast >(obj);
                    _this()->T::work(derived, (Cast*)nullptr);
                }break;
                case ExpressionPackage::CHAINEXPRESSION:
                {
                    auto derived = ::ecore::as< ChainExpression >(obj);
                    _this()->T::work(derived, (ChainExpression*)nullptr);
                }break;
                case ExpressionPackage::COLLECTIONEXPRESSION:
                {
                    auto derived = ::ecore::as< CollectionExpression >(obj);
                    _this()->T::work(derived, (CollectionExpression*)nullptr);
                }break;
                case ExpressionPackage::CONSTRUCTORCALLEXPRESSION:
                {
                    auto derived = ::ecore::as< ConstructorCallExpression >(obj);
                    _this()->T::work(derived, (ConstructorCallExpression*)nullptr);
                }break;
                case ExpressionPackage::FEATURECALL:
                {
                    auto derived = ::ecore::as< FeatureCall >(obj);
                    _this()->T::work(derived, (FeatureCall*)nullptr);
                }break;
                case ExpressionPackage::GLOBALVAREXPRESSION:
                {
                    auto derived = ::ecore::as< GlobalVarExpression >(obj);
                    _this()->T::work(derived, (GlobalVarExpression*)nullptr);
                }break;
                case ExpressionPackage::IFEXPRESSION:
                {
                    auto derived = ::ecore::as< IfExpression >(obj);
                    _this()->T::work(derived, (IfExpression*)nullptr);
                }break;
                case ExpressionPackage::INTEGERLITERAL:
                {
                    auto derived = ::ecore::as< IntegerLiteral >(obj);
                    _this()->T::work(derived, (IntegerLiteral*)nullptr);
                }break;
                case ExpressionPackage::LETEXPRESSION:
                {
                    auto derived = ::ecore::as< LetExpression >(obj);
                    _this()->T::work(derived, (LetExpression*)nullptr);
                }break;
                case ExpressionPackage::LISTLITERAL:
                {
                    auto derived = ::ecore::as< ListLiteral >(obj);
                    _this()->T::work(derived, (ListLiteral*)nullptr);
                }break;
                case ExpressionPackage::LITERAL:
                {
                    auto derived = ::ecore::as< Literal >(obj);
                    _this()->T::work(derived, (Literal*)nullptr);
                }break;
                case ExpressionPackage::NULLLITERAL:
                {
                    auto derived = ::ecore::as< NullLiteral >(obj);
                    _this()->T::work(derived, (NullLiteral*)nullptr);
                }break;
                case ExpressionPackage::OPERATIONCALL:
                {
                    auto derived = ::ecore::as< OperationCall >(obj);
                    _this()->T::work(derived, (OperationCall*)nullptr);
                }break;
                case ExpressionPackage::REALLITERAL:
                {
                    auto derived = ::ecore::as< RealLiteral >(obj);
                    _this()->T::work(derived, (RealLiteral*)nullptr);
                }break;
                case ExpressionPackage::STRINGLITERAL:
                {
                    auto derived = ::ecore::as< StringLiteral >(obj);
                    _this()->T::work(derived, (StringLiteral*)nullptr);
                }break;
                case ExpressionPackage::SWITCHEXPRESSION:
                {
                    auto derived = ::ecore::as< SwitchExpression >(obj);
                    _this()->T::work(derived, (SwitchExpression*)nullptr);
                }break;
                case ExpressionPackage::TYPESELECTEXPRESSION:
                {
                    auto derived = ::ecore::as< TypeSelectExpression >(obj);
                    _this()->T::work(derived, (TypeSelectExpression*)nullptr);
                }break;
                case ExpressionPackage::UNARYOPERATION:
                {
                    auto derived = ::ecore::as< UnaryOperation >(obj);
                    _this()->T::work(derived, (UnaryOperation*)nullptr);
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
 // expression
}// xpand3

#endif // XPAND3_EXPRESSION_ITEMDISPATCHER_HPP
