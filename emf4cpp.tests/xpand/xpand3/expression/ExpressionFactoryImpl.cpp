// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/ExpressionFactoryImpl.cpp
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

#include <xpand3/expression/ExpressionFactory.hpp>
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/expression/BooleanOperation.hpp>
#include <xpand3/expression/Cast.hpp>
#include <xpand3/expression/ChainExpression.hpp>
#include <xpand3/expression/ConstructorCallExpression.hpp>
#include <xpand3/expression/FeatureCall.hpp>
#include <xpand3/expression/CollectionExpression.hpp>
#include <xpand3/expression/OperationCall.hpp>
#include <xpand3/expression/TypeSelectExpression.hpp>
#include <xpand3/expression/GlobalVarExpression.hpp>
#include <xpand3/expression/IfExpression.hpp>
#include <xpand3/expression/LetExpression.hpp>
#include <xpand3/expression/ListLiteral.hpp>
#include <xpand3/expression/Literal.hpp>
#include <xpand3/expression/BooleanLiteral.hpp>
#include <xpand3/expression/IntegerLiteral.hpp>
#include <xpand3/expression/NullLiteral.hpp>
#include <xpand3/expression/RealLiteral.hpp>
#include <xpand3/expression/StringLiteral.hpp>
#include <xpand3/expression/SwitchExpression.hpp>
#include <xpand3/expression/Case.hpp>
#include <xpand3/expression/BinaryOperation.hpp>
#include <xpand3/expression/UnaryOperation.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3::expression;

ExpressionFactory::ExpressionFactory()
{
}

::ecore::EObject_ptr ExpressionFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case ExpressionPackage::ABSTRACTEXPRESSION:
        return createAbstractExpression();
    case ExpressionPackage::BOOLEANOPERATION:
        return createBooleanOperation();
    case ExpressionPackage::CAST:
        return createCast();
    case ExpressionPackage::CHAINEXPRESSION:
        return createChainExpression();
    case ExpressionPackage::CONSTRUCTORCALLEXPRESSION:
        return createConstructorCallExpression();
    case ExpressionPackage::FEATURECALL:
        return createFeatureCall();
    case ExpressionPackage::COLLECTIONEXPRESSION:
        return createCollectionExpression();
    case ExpressionPackage::OPERATIONCALL:
        return createOperationCall();
    case ExpressionPackage::TYPESELECTEXPRESSION:
        return createTypeSelectExpression();
    case ExpressionPackage::GLOBALVAREXPRESSION:
        return createGlobalVarExpression();
    case ExpressionPackage::IFEXPRESSION:
        return createIfExpression();
    case ExpressionPackage::LETEXPRESSION:
        return createLetExpression();
    case ExpressionPackage::LISTLITERAL:
        return createListLiteral();
    case ExpressionPackage::LITERAL:
        return createLiteral();
    case ExpressionPackage::BOOLEANLITERAL:
        return createBooleanLiteral();
    case ExpressionPackage::INTEGERLITERAL:
        return createIntegerLiteral();
    case ExpressionPackage::NULLLITERAL:
        return createNullLiteral();
    case ExpressionPackage::REALLITERAL:
        return createRealLiteral();
    case ExpressionPackage::STRINGLITERAL:
        return createStringLiteral();
    case ExpressionPackage::SWITCHEXPRESSION:
        return createSwitchExpression();
    case ExpressionPackage::CASE:
        return createCase();
    case ExpressionPackage::BINARYOPERATION:
        return createBinaryOperation();
    case ExpressionPackage::UNARYOPERATION:
        return createUnaryOperation();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject ExpressionFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString ExpressionFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

AbstractExpression_ptr ExpressionFactory::createAbstractExpression()
{
    return ::ecore::Ptr < AbstractExpression > (new AbstractExpression);
}
BooleanOperation_ptr ExpressionFactory::createBooleanOperation()
{
    return ::ecore::Ptr < BooleanOperation > (new BooleanOperation);
}
Cast_ptr ExpressionFactory::createCast()
{
    return ::ecore::Ptr < Cast > (new Cast);
}
ChainExpression_ptr ExpressionFactory::createChainExpression()
{
    return ::ecore::Ptr < ChainExpression > (new ChainExpression);
}
ConstructorCallExpression_ptr ExpressionFactory::createConstructorCallExpression()
{
    return ::ecore::Ptr < ConstructorCallExpression
            > (new ConstructorCallExpression);
}
FeatureCall_ptr ExpressionFactory::createFeatureCall()
{
    return ::ecore::Ptr < FeatureCall > (new FeatureCall);
}
CollectionExpression_ptr ExpressionFactory::createCollectionExpression()
{
    return ::ecore::Ptr < CollectionExpression > (new CollectionExpression);
}
OperationCall_ptr ExpressionFactory::createOperationCall()
{
    return ::ecore::Ptr < OperationCall > (new OperationCall);
}
TypeSelectExpression_ptr ExpressionFactory::createTypeSelectExpression()
{
    return ::ecore::Ptr < TypeSelectExpression > (new TypeSelectExpression);
}
GlobalVarExpression_ptr ExpressionFactory::createGlobalVarExpression()
{
    return ::ecore::Ptr < GlobalVarExpression > (new GlobalVarExpression);
}
IfExpression_ptr ExpressionFactory::createIfExpression()
{
    return ::ecore::Ptr < IfExpression > (new IfExpression);
}
LetExpression_ptr ExpressionFactory::createLetExpression()
{
    return ::ecore::Ptr < LetExpression > (new LetExpression);
}
ListLiteral_ptr ExpressionFactory::createListLiteral()
{
    return ::ecore::Ptr < ListLiteral > (new ListLiteral);
}
Literal_ptr ExpressionFactory::createLiteral()
{
    return ::ecore::Ptr < Literal > (new Literal);
}
BooleanLiteral_ptr ExpressionFactory::createBooleanLiteral()
{
    return ::ecore::Ptr < BooleanLiteral > (new BooleanLiteral);
}
IntegerLiteral_ptr ExpressionFactory::createIntegerLiteral()
{
    return ::ecore::Ptr < IntegerLiteral > (new IntegerLiteral);
}
NullLiteral_ptr ExpressionFactory::createNullLiteral()
{
    return ::ecore::Ptr < NullLiteral > (new NullLiteral);
}
RealLiteral_ptr ExpressionFactory::createRealLiteral()
{
    return ::ecore::Ptr < RealLiteral > (new RealLiteral);
}
StringLiteral_ptr ExpressionFactory::createStringLiteral()
{
    return ::ecore::Ptr < StringLiteral > (new StringLiteral);
}
SwitchExpression_ptr ExpressionFactory::createSwitchExpression()
{
    return ::ecore::Ptr < SwitchExpression > (new SwitchExpression);
}
Case_ptr ExpressionFactory::createCase()
{
    return ::ecore::Ptr < Case > (new Case);
}
BinaryOperation_ptr ExpressionFactory::createBinaryOperation()
{
    return ::ecore::Ptr < BinaryOperation > (new BinaryOperation);
}
UnaryOperation_ptr ExpressionFactory::createUnaryOperation()
{
    return ::ecore::Ptr < UnaryOperation > (new UnaryOperation);
}

