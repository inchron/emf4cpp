// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/ExpressionPackage.hpp
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

#ifndef _XPAND3_EXPRESSIONPACKAGE_HPP
#define _XPAND3_EXPRESSIONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <xpand3/expression_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <xpand3/Xpand3Package.hpp>

#include <xpand3/dllXpand3.hpp>

namespace xpand3
{
    namespace expression
    {

    class EXPORT_XPAND3_DLL ExpressionPackage : public virtual ::ecore::EPackage
    {
    public:

        static ExpressionPackage_ptr _instance();
        static ExpressionPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractExpression
        static const int ABSTRACTEXPRESSION = 0;
        static const int ABSTRACTEXPRESSION__LINE = 0;
        static const int ABSTRACTEXPRESSION__START = 1;
        static const int ABSTRACTEXPRESSION__END = 2;
        static const int ABSTRACTEXPRESSION__FILENAME = 3;
        static const int ABSTRACTEXPRESSION_FEATURE_COUNT = 4;

        // IDs for classifier BinaryOperation
        static const int BINARYOPERATION = 1;
        static const int BINARYOPERATION__LINE = 0;
        static const int BINARYOPERATION__START = 1;
        static const int BINARYOPERATION__END = 2;
        static const int BINARYOPERATION__FILENAME = 3;
        static const int BINARYOPERATION__LEFT = 4;
        static const int BINARYOPERATION__RIGHT = 5;
        static const int BINARYOPERATION__OPERATOR = 6;
        static const int BINARYOPERATION_FEATURE_COUNT = 7;

        // IDs for classifier BooleanLiteral
        static const int BOOLEANLITERAL = 2;
        static const int BOOLEANLITERAL__LINE = 0;
        static const int BOOLEANLITERAL__START = 1;
        static const int BOOLEANLITERAL__END = 2;
        static const int BOOLEANLITERAL__FILENAME = 3;
        static const int BOOLEANLITERAL__LITERALVALUE = 4;
        static const int BOOLEANLITERAL_FEATURE_COUNT = 5;

        // IDs for classifier BooleanOperation
        static const int BOOLEANOPERATION = 3;
        static const int BOOLEANOPERATION__LINE = 0;
        static const int BOOLEANOPERATION__START = 1;
        static const int BOOLEANOPERATION__END = 2;
        static const int BOOLEANOPERATION__FILENAME = 3;
        static const int BOOLEANOPERATION__LEFT = 4;
        static const int BOOLEANOPERATION__RIGHT = 5;
        static const int BOOLEANOPERATION__OPERATOR = 6;
        static const int BOOLEANOPERATION_FEATURE_COUNT = 7;

        // IDs for classifier Case
        static const int CASE = 4;
        static const int CASE__LINE = 0;
        static const int CASE__START = 1;
        static const int CASE__END = 2;
        static const int CASE__FILENAME = 3;
        static const int CASE__CONDITION = 4;
        static const int CASE__THENPART = 5;
        static const int CASE_FEATURE_COUNT = 6;

        // IDs for classifier Cast
        static const int CAST = 5;
        static const int CAST__LINE = 0;
        static const int CAST__START = 1;
        static const int CAST__END = 2;
        static const int CAST__FILENAME = 3;
        static const int CAST__TYPE = 4;
        static const int CAST__TARGET = 5;
        static const int CAST_FEATURE_COUNT = 6;

        // IDs for classifier ChainExpression
        static const int CHAINEXPRESSION = 6;
        static const int CHAINEXPRESSION__LINE = 0;
        static const int CHAINEXPRESSION__START = 1;
        static const int CHAINEXPRESSION__END = 2;
        static const int CHAINEXPRESSION__FILENAME = 3;
        static const int CHAINEXPRESSION__FIRST = 4;
        static const int CHAINEXPRESSION__NEXT = 5;
        static const int CHAINEXPRESSION_FEATURE_COUNT = 6;

        // IDs for classifier CollectionExpression
        static const int COLLECTIONEXPRESSION = 7;
        static const int COLLECTIONEXPRESSION__LINE = 0;
        static const int COLLECTIONEXPRESSION__START = 1;
        static const int COLLECTIONEXPRESSION__END = 2;
        static const int COLLECTIONEXPRESSION__FILENAME = 3;
        static const int COLLECTIONEXPRESSION__TARGET = 4;
        static const int COLLECTIONEXPRESSION__NAME = 5;
        static const int COLLECTIONEXPRESSION__CLOSURE = 6;
        static const int COLLECTIONEXPRESSION__ELENAME = 7;
        static const int COLLECTIONEXPRESSION_FEATURE_COUNT = 8;

        // IDs for classifier ConstructorCallExpression
        static const int CONSTRUCTORCALLEXPRESSION = 8;
        static const int CONSTRUCTORCALLEXPRESSION__LINE = 0;
        static const int CONSTRUCTORCALLEXPRESSION__START = 1;
        static const int CONSTRUCTORCALLEXPRESSION__END = 2;
        static const int CONSTRUCTORCALLEXPRESSION__FILENAME = 3;
        static const int CONSTRUCTORCALLEXPRESSION__TYPE = 4;
        static const int CONSTRUCTORCALLEXPRESSION_FEATURE_COUNT = 5;

        // IDs for classifier FeatureCall
        static const int FEATURECALL = 9;
        static const int FEATURECALL__LINE = 0;
        static const int FEATURECALL__START = 1;
        static const int FEATURECALL__END = 2;
        static const int FEATURECALL__FILENAME = 3;
        static const int FEATURECALL__TARGET = 4;
        static const int FEATURECALL__NAME = 5;
        static const int FEATURECALL_FEATURE_COUNT = 6;

        // IDs for classifier GlobalVarExpression
        static const int GLOBALVAREXPRESSION = 10;
        static const int GLOBALVAREXPRESSION__LINE = 0;
        static const int GLOBALVAREXPRESSION__START = 1;
        static const int GLOBALVAREXPRESSION__END = 2;
        static const int GLOBALVAREXPRESSION__FILENAME = 3;
        static const int GLOBALVAREXPRESSION__GLOBALVARNAME = 4;
        static const int GLOBALVAREXPRESSION_FEATURE_COUNT = 5;

        // IDs for classifier IfExpression
        static const int IFEXPRESSION = 11;
        static const int IFEXPRESSION__LINE = 0;
        static const int IFEXPRESSION__START = 1;
        static const int IFEXPRESSION__END = 2;
        static const int IFEXPRESSION__FILENAME = 3;
        static const int IFEXPRESSION__CONDITION = 4;
        static const int IFEXPRESSION__THENPART = 5;
        static const int IFEXPRESSION__ELSEPART = 6;
        static const int IFEXPRESSION_FEATURE_COUNT = 7;

        // IDs for classifier IntegerLiteral
        static const int INTEGERLITERAL = 12;
        static const int INTEGERLITERAL__LINE = 0;
        static const int INTEGERLITERAL__START = 1;
        static const int INTEGERLITERAL__END = 2;
        static const int INTEGERLITERAL__FILENAME = 3;
        static const int INTEGERLITERAL__LITERALVALUE = 4;
        static const int INTEGERLITERAL_FEATURE_COUNT = 5;

        // IDs for classifier LetExpression
        static const int LETEXPRESSION = 13;
        static const int LETEXPRESSION__LINE = 0;
        static const int LETEXPRESSION__START = 1;
        static const int LETEXPRESSION__END = 2;
        static const int LETEXPRESSION__FILENAME = 3;
        static const int LETEXPRESSION__VAREXPRESSION = 4;
        static const int LETEXPRESSION__TARGETEXPRESSION = 5;
        static const int LETEXPRESSION__VARNAME = 6;
        static const int LETEXPRESSION_FEATURE_COUNT = 7;

        // IDs for classifier ListLiteral
        static const int LISTLITERAL = 14;
        static const int LISTLITERAL__LINE = 0;
        static const int LISTLITERAL__START = 1;
        static const int LISTLITERAL__END = 2;
        static const int LISTLITERAL__FILENAME = 3;
        static const int LISTLITERAL__ELEMENTS = 4;
        static const int LISTLITERAL_FEATURE_COUNT = 5;

        // IDs for classifier Literal
        static const int LITERAL = 15;
        static const int LITERAL__LINE = 0;
        static const int LITERAL__START = 1;
        static const int LITERAL__END = 2;
        static const int LITERAL__FILENAME = 3;
        static const int LITERAL__LITERALVALUE = 4;
        static const int LITERAL_FEATURE_COUNT = 5;

        // IDs for classifier NullLiteral
        static const int NULLLITERAL = 16;
        static const int NULLLITERAL__LINE = 0;
        static const int NULLLITERAL__START = 1;
        static const int NULLLITERAL__END = 2;
        static const int NULLLITERAL__FILENAME = 3;
        static const int NULLLITERAL__LITERALVALUE = 4;
        static const int NULLLITERAL_FEATURE_COUNT = 5;

        // IDs for classifier OperationCall
        static const int OPERATIONCALL = 17;
        static const int OPERATIONCALL__LINE = 0;
        static const int OPERATIONCALL__START = 1;
        static const int OPERATIONCALL__END = 2;
        static const int OPERATIONCALL__FILENAME = 3;
        static const int OPERATIONCALL__TARGET = 4;
        static const int OPERATIONCALL__NAME = 5;
        static const int OPERATIONCALL__PARAMS = 6;
        static const int OPERATIONCALL_FEATURE_COUNT = 7;

        // IDs for classifier RealLiteral
        static const int REALLITERAL = 18;
        static const int REALLITERAL__LINE = 0;
        static const int REALLITERAL__START = 1;
        static const int REALLITERAL__END = 2;
        static const int REALLITERAL__FILENAME = 3;
        static const int REALLITERAL__LITERALVALUE = 4;
        static const int REALLITERAL_FEATURE_COUNT = 5;

        // IDs for classifier StringLiteral
        static const int STRINGLITERAL = 19;
        static const int STRINGLITERAL__LINE = 0;
        static const int STRINGLITERAL__START = 1;
        static const int STRINGLITERAL__END = 2;
        static const int STRINGLITERAL__FILENAME = 3;
        static const int STRINGLITERAL__LITERALVALUE = 4;
        static const int STRINGLITERAL_FEATURE_COUNT = 5;

        // IDs for classifier SwitchExpression
        static const int SWITCHEXPRESSION = 20;
        static const int SWITCHEXPRESSION__LINE = 0;
        static const int SWITCHEXPRESSION__START = 1;
        static const int SWITCHEXPRESSION__END = 2;
        static const int SWITCHEXPRESSION__FILENAME = 3;
        static const int SWITCHEXPRESSION__SWITCHEXPR = 4;
        static const int SWITCHEXPRESSION__DEFAULTEXPR = 5;
        static const int SWITCHEXPRESSION__CASES = 6;
        static const int SWITCHEXPRESSION_FEATURE_COUNT = 7;

        // IDs for classifier TypeSelectExpression
        static const int TYPESELECTEXPRESSION = 21;
        static const int TYPESELECTEXPRESSION__LINE = 0;
        static const int TYPESELECTEXPRESSION__START = 1;
        static const int TYPESELECTEXPRESSION__END = 2;
        static const int TYPESELECTEXPRESSION__FILENAME = 3;
        static const int TYPESELECTEXPRESSION__TARGET = 4;
        static const int TYPESELECTEXPRESSION__NAME = 5;
        static const int TYPESELECTEXPRESSION__TYPELITERAL = 6;
        static const int TYPESELECTEXPRESSION_FEATURE_COUNT = 7;

        // IDs for classifier UnaryOperation
        static const int UNARYOPERATION = 22;
        static const int UNARYOPERATION__LINE = 0;
        static const int UNARYOPERATION__START = 1;
        static const int UNARYOPERATION__END = 2;
        static const int UNARYOPERATION__FILENAME = 3;
        static const int UNARYOPERATION__OPERATOR = 4;
        static const int UNARYOPERATION__OPERAND = 5;
        static const int UNARYOPERATION_FEATURE_COUNT = 6;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractExpression();

        virtual ::ecore::EClass_ptr getBooleanOperation();

        virtual ::ecore::EClass_ptr getCast();

        virtual ::ecore::EClass_ptr getChainExpression();

        virtual ::ecore::EClass_ptr getConstructorCallExpression();

        virtual ::ecore::EClass_ptr getFeatureCall();

        virtual ::ecore::EClass_ptr getCollectionExpression();

        virtual ::ecore::EClass_ptr getOperationCall();

        virtual ::ecore::EClass_ptr getTypeSelectExpression();

        virtual ::ecore::EClass_ptr getGlobalVarExpression();

        virtual ::ecore::EClass_ptr getIfExpression();

        virtual ::ecore::EClass_ptr getLetExpression();

        virtual ::ecore::EClass_ptr getListLiteral();

        virtual ::ecore::EClass_ptr getLiteral();

        virtual ::ecore::EClass_ptr getBooleanLiteral();

        virtual ::ecore::EClass_ptr getIntegerLiteral();

        virtual ::ecore::EClass_ptr getNullLiteral();

        virtual ::ecore::EClass_ptr getRealLiteral();

        virtual ::ecore::EClass_ptr getStringLiteral();

        virtual ::ecore::EClass_ptr getSwitchExpression();

        virtual ::ecore::EClass_ptr getCase();

        virtual ::ecore::EClass_ptr getBinaryOperation();

        virtual ::ecore::EClass_ptr getUnaryOperation();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getCast__type();

        virtual ::ecore::EReference_ptr getCast__target();

        virtual ::ecore::EReference_ptr getChainExpression__first();

        virtual ::ecore::EReference_ptr getChainExpression__next();

        virtual ::ecore::EReference_ptr getConstructorCallExpression__type();

        virtual ::ecore::EReference_ptr getFeatureCall__target();

        virtual ::ecore::EReference_ptr getFeatureCall__name();

        virtual ::ecore::EReference_ptr getCollectionExpression__closure();

        virtual ::ecore::EReference_ptr getCollectionExpression__eleName();

        virtual ::ecore::EReference_ptr getOperationCall__params();

        virtual ::ecore::EReference_ptr getTypeSelectExpression__typeLiteral();

        virtual ::ecore::EReference_ptr getGlobalVarExpression__globalVarName();

        virtual ::ecore::EReference_ptr getIfExpression__condition();

        virtual ::ecore::EReference_ptr getIfExpression__thenPart();

        virtual ::ecore::EReference_ptr getIfExpression__elsePart();

        virtual ::ecore::EReference_ptr getLetExpression__varExpression();

        virtual ::ecore::EReference_ptr getLetExpression__targetExpression();

        virtual ::ecore::EReference_ptr getLetExpression__varName();

        virtual ::ecore::EReference_ptr getListLiteral__elements();

        virtual ::ecore::EReference_ptr getLiteral__literalValue();

        virtual ::ecore::EReference_ptr getSwitchExpression__switchExpr();

        virtual ::ecore::EReference_ptr getSwitchExpression__defaultExpr();

        virtual ::ecore::EReference_ptr getSwitchExpression__cases();

        virtual ::ecore::EReference_ptr getCase__condition();

        virtual ::ecore::EReference_ptr getCase__thenPart();

        virtual ::ecore::EReference_ptr getBinaryOperation__left();

        virtual ::ecore::EReference_ptr getBinaryOperation__right();

        virtual ::ecore::EReference_ptr getBinaryOperation__operator();

        virtual ::ecore::EReference_ptr getUnaryOperation__operator();

        virtual ::ecore::EReference_ptr getUnaryOperation__operand();

    protected:

        static ::ecore::Ptr< ExpressionPackage > s_instance;

        ExpressionPackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractExpressionEClass;
        ::ecore::EClass_ptr m_BinaryOperationEClass;
        ::ecore::EClass_ptr m_BooleanLiteralEClass;
        ::ecore::EClass_ptr m_BooleanOperationEClass;
        ::ecore::EClass_ptr m_CaseEClass;
        ::ecore::EClass_ptr m_CastEClass;
        ::ecore::EClass_ptr m_ChainExpressionEClass;
        ::ecore::EClass_ptr m_CollectionExpressionEClass;
        ::ecore::EClass_ptr m_ConstructorCallExpressionEClass;
        ::ecore::EClass_ptr m_FeatureCallEClass;
        ::ecore::EClass_ptr m_GlobalVarExpressionEClass;
        ::ecore::EClass_ptr m_IfExpressionEClass;
        ::ecore::EClass_ptr m_IntegerLiteralEClass;
        ::ecore::EClass_ptr m_LetExpressionEClass;
        ::ecore::EClass_ptr m_ListLiteralEClass;
        ::ecore::EClass_ptr m_LiteralEClass;
        ::ecore::EClass_ptr m_NullLiteralEClass;
        ::ecore::EClass_ptr m_OperationCallEClass;
        ::ecore::EClass_ptr m_RealLiteralEClass;
        ::ecore::EClass_ptr m_StringLiteralEClass;
        ::ecore::EClass_ptr m_SwitchExpressionEClass;
        ::ecore::EClass_ptr m_TypeSelectExpressionEClass;
        ::ecore::EClass_ptr m_UnaryOperationEClass;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_Cast__type;

        ::ecore::EReference_ptr m_Cast__target;

        ::ecore::EReference_ptr m_ChainExpression__first;

        ::ecore::EReference_ptr m_ChainExpression__next;

        ::ecore::EReference_ptr m_ConstructorCallExpression__type;

        ::ecore::EReference_ptr m_FeatureCall__target;

        ::ecore::EReference_ptr m_FeatureCall__name;

        ::ecore::EReference_ptr m_CollectionExpression__closure;

        ::ecore::EReference_ptr m_CollectionExpression__eleName;

        ::ecore::EReference_ptr m_OperationCall__params;

        ::ecore::EReference_ptr m_TypeSelectExpression__typeLiteral;

        ::ecore::EReference_ptr m_GlobalVarExpression__globalVarName;

        ::ecore::EReference_ptr m_IfExpression__condition;

        ::ecore::EReference_ptr m_IfExpression__thenPart;

        ::ecore::EReference_ptr m_IfExpression__elsePart;

        ::ecore::EReference_ptr m_LetExpression__varExpression;

        ::ecore::EReference_ptr m_LetExpression__targetExpression;

        ::ecore::EReference_ptr m_LetExpression__varName;

        ::ecore::EReference_ptr m_ListLiteral__elements;

        ::ecore::EReference_ptr m_Literal__literalValue;

        ::ecore::EReference_ptr m_SwitchExpression__switchExpr;

        ::ecore::EReference_ptr m_SwitchExpression__defaultExpr;

        ::ecore::EReference_ptr m_SwitchExpression__cases;

        ::ecore::EReference_ptr m_Case__condition;

        ::ecore::EReference_ptr m_Case__thenPart;

        ::ecore::EReference_ptr m_BinaryOperation__left;

        ::ecore::EReference_ptr m_BinaryOperation__right;

        ::ecore::EReference_ptr m_BinaryOperation__operator;

        ::ecore::EReference_ptr m_UnaryOperation__operator;

        ::ecore::EReference_ptr m_UnaryOperation__operand;

    };

}
 // expression
}// xpand3

#endif // _XPAND3_EXPRESSIONPACKAGE_HPP

