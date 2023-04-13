// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/ExpressionPackageImpl.cpp
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

#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/ExpressionFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EcorePackage.hpp>
#include <xpand3/Xpand3Package.hpp>
#include <xpand3/Identifier.hpp>

using namespace ::xpand3::expression;

ExpressionPackage::ExpressionPackage()
{
    m_AbstractExpressionEClass = ::ecore::make< ::ecore::EClass >();
    m_BinaryOperation__left = ::ecore::make< ::ecore::EReference >();
    m_BinaryOperation__right = ::ecore::make< ::ecore::EReference >();
    m_BinaryOperation__operator = ::ecore::make< ::ecore::EReference >();
    m_BinaryOperationEClass = ::ecore::make< ::ecore::EClass >();
    m_BooleanLiteralEClass = ::ecore::make< ::ecore::EClass >();
    m_BooleanOperationEClass = ::ecore::make< ::ecore::EClass >();
    m_Case__condition = ::ecore::make< ::ecore::EReference >();
    m_Case__thenPart = ::ecore::make< ::ecore::EReference >();
    m_CaseEClass = ::ecore::make< ::ecore::EClass >();
    m_Cast__type = ::ecore::make< ::ecore::EReference >();
    m_Cast__target = ::ecore::make< ::ecore::EReference >();
    m_CastEClass = ::ecore::make< ::ecore::EClass >();
    m_ChainExpression__first = ::ecore::make< ::ecore::EReference >();
    m_ChainExpression__next = ::ecore::make< ::ecore::EReference >();
    m_ChainExpressionEClass = ::ecore::make< ::ecore::EClass >();
    m_CollectionExpression__closure = ::ecore::make< ::ecore::EReference >();
    m_CollectionExpression__eleName = ::ecore::make< ::ecore::EReference >();
    m_CollectionExpressionEClass = ::ecore::make< ::ecore::EClass >();
    m_ConstructorCallExpression__type = ::ecore::make< ::ecore::EReference >();
    m_ConstructorCallExpressionEClass = ::ecore::make< ::ecore::EClass >();
    m_FeatureCall__target = ::ecore::make< ::ecore::EReference >();
    m_FeatureCall__name = ::ecore::make< ::ecore::EReference >();
    m_FeatureCallEClass = ::ecore::make< ::ecore::EClass >();
    m_GlobalVarExpression__globalVarName =
            ::ecore::make< ::ecore::EReference >();
    m_GlobalVarExpressionEClass = ::ecore::make< ::ecore::EClass >();
    m_IfExpression__condition = ::ecore::make< ::ecore::EReference >();
    m_IfExpression__thenPart = ::ecore::make< ::ecore::EReference >();
    m_IfExpression__elsePart = ::ecore::make< ::ecore::EReference >();
    m_IfExpressionEClass = ::ecore::make< ::ecore::EClass >();
    m_IntegerLiteralEClass = ::ecore::make< ::ecore::EClass >();
    m_LetExpression__varExpression = ::ecore::make< ::ecore::EReference >();
    m_LetExpression__targetExpression = ::ecore::make< ::ecore::EReference >();
    m_LetExpression__varName = ::ecore::make< ::ecore::EReference >();
    m_LetExpressionEClass = ::ecore::make< ::ecore::EClass >();
    m_ListLiteral__elements = ::ecore::make< ::ecore::EReference >();
    m_ListLiteralEClass = ::ecore::make< ::ecore::EClass >();
    m_Literal__literalValue = ::ecore::make< ::ecore::EReference >();
    m_LiteralEClass = ::ecore::make< ::ecore::EClass >();
    m_NullLiteralEClass = ::ecore::make< ::ecore::EClass >();
    m_OperationCall__params = ::ecore::make< ::ecore::EReference >();
    m_OperationCallEClass = ::ecore::make< ::ecore::EClass >();
    m_RealLiteralEClass = ::ecore::make< ::ecore::EClass >();
    m_StringLiteralEClass = ::ecore::make< ::ecore::EClass >();
    m_SwitchExpression__switchExpr = ::ecore::make< ::ecore::EReference >();
    m_SwitchExpression__defaultExpr = ::ecore::make< ::ecore::EReference >();
    m_SwitchExpression__cases = ::ecore::make< ::ecore::EReference >();
    m_SwitchExpressionEClass = ::ecore::make< ::ecore::EClass >();
    m_TypeSelectExpression__typeLiteral =
            ::ecore::make< ::ecore::EReference >();
    m_TypeSelectExpressionEClass = ::ecore::make< ::ecore::EClass >();
    m_UnaryOperation__operator = ::ecore::make< ::ecore::EReference >();
    m_UnaryOperation__operand = ::ecore::make< ::ecore::EReference >();
    m_UnaryOperationEClass = ::ecore::make< ::ecore::EClass >();
}

void ExpressionPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = ExpressionFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Classifier AbstractExpression
        auto &&classifier = m_AbstractExpressionEClass;

        // ENamedElement
        classifier->setName("AbstractExpression");

        // EClassifier
        classifier->setClassifierID(ABSTRACTEXPRESSION);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature left of class BinaryOperation
        auto &&feature = m_BinaryOperation__left;

        // ENamedElement
        feature->setName("left");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::BINARYOPERATION__LEFT);
        feature->basicsetEContainingClass(m_BinaryOperationEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature right of class BinaryOperation
        auto &&feature = m_BinaryOperation__right;

        // ENamedElement
        feature->setName("right");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::BINARYOPERATION__RIGHT);
        feature->basicsetEContainingClass(m_BinaryOperationEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature operator of class BinaryOperation
        auto &&feature = m_BinaryOperation__operator;

        // ENamedElement
        feature->setName("operator");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::BINARYOPERATION__OPERATOR);
        feature->basicsetEContainingClass(m_BinaryOperationEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier BinaryOperation
        auto &&classifier = m_BinaryOperationEClass;

        // ENamedElement
        classifier->setName("BinaryOperation");

        // EClassifier
        classifier->setClassifierID(BINARYOPERATION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BinaryOperationEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_BinaryOperation__left);
            eStructuralFeatures.basicAdd(m_BinaryOperation__right);
            eStructuralFeatures.basicAdd(m_BinaryOperation__operator);
        }
    }();

    [this]()
    { // Classifier BooleanLiteral
        auto &&classifier = m_BooleanLiteralEClass;

        // ENamedElement
        classifier->setName("BooleanLiteral");

        // EClassifier
        classifier->setClassifierID(BOOLEANLITERAL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier BooleanOperation
        auto &&classifier = m_BooleanOperationEClass;

        // ENamedElement
        classifier->setName("BooleanOperation");

        // EClassifier
        classifier->setClassifierID(BOOLEANOPERATION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature condition of class Case
        auto &&feature = m_Case__condition;

        // ENamedElement
        feature->setName("condition");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::CASE__CONDITION);
        feature->basicsetEContainingClass(m_CaseEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature thenPart of class Case
        auto &&feature = m_Case__thenPart;

        // ENamedElement
        feature->setName("thenPart");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::CASE__THENPART);
        feature->basicsetEContainingClass(m_CaseEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Case
        auto &&classifier = m_CaseEClass;

        // ENamedElement
        classifier->setName("Case");

        // EClassifier
        classifier->setClassifierID(CASE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CaseEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Case__condition);
            eStructuralFeatures.basicAdd(m_Case__thenPart);
        }
    }();

    [this]()
    { // Feature type of class Cast
        auto &&feature = m_Cast__type;

        // ENamedElement
        feature->setName("type");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::CAST__TYPE);
        feature->basicsetEContainingClass(m_CastEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature target of class Cast
        auto &&feature = m_Cast__target;

        // ENamedElement
        feature->setName("target");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::CAST__TARGET);
        feature->basicsetEContainingClass(m_CastEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Cast
        auto &&classifier = m_CastEClass;

        // ENamedElement
        classifier->setName("Cast");

        // EClassifier
        classifier->setClassifierID(CAST);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CastEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Cast__type);
            eStructuralFeatures.basicAdd(m_Cast__target);
        }
    }();

    [this]()
    { // Feature first of class ChainExpression
        auto &&feature = m_ChainExpression__first;

        // ENamedElement
        feature->setName("first");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::CHAINEXPRESSION__FIRST);
        feature->basicsetEContainingClass(m_ChainExpressionEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature next of class ChainExpression
        auto &&feature = m_ChainExpression__next;

        // ENamedElement
        feature->setName("next");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::CHAINEXPRESSION__NEXT);
        feature->basicsetEContainingClass(m_ChainExpressionEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ChainExpression
        auto &&classifier = m_ChainExpressionEClass;

        // ENamedElement
        classifier->setName("ChainExpression");

        // EClassifier
        classifier->setClassifierID(CHAINEXPRESSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ChainExpressionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ChainExpression__first);
            eStructuralFeatures.basicAdd(m_ChainExpression__next);
        }
    }();

    [this]()
    { // Feature closure of class CollectionExpression
        auto &&feature = m_CollectionExpression__closure;

        // ENamedElement
        feature->setName("closure");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__CLOSURE);
        feature->basicsetEContainingClass(m_CollectionExpressionEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature eleName of class CollectionExpression
        auto &&feature = m_CollectionExpression__eleName;

        // ENamedElement
        feature->setName("eleName");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::COLLECTIONEXPRESSION__ELENAME);
        feature->basicsetEContainingClass(m_CollectionExpressionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier CollectionExpression
        auto &&classifier = m_CollectionExpressionEClass;

        // ENamedElement
        classifier->setName("CollectionExpression");

        // EClassifier
        classifier->setClassifierID(COLLECTIONEXPRESSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CollectionExpressionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_CollectionExpression__closure);
            eStructuralFeatures.basicAdd(m_CollectionExpression__eleName);
        }
    }();

    [this]()
    { // Feature type of class ConstructorCallExpression
        auto &&feature = m_ConstructorCallExpression__type;

        // ENamedElement
        feature->setName("type");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::CONSTRUCTORCALLEXPRESSION__TYPE);
        feature->basicsetEContainingClass(m_ConstructorCallExpressionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ConstructorCallExpression
        auto &&classifier = m_ConstructorCallExpressionEClass;

        // ENamedElement
        classifier->setName("ConstructorCallExpression");

        // EClassifier
        classifier->setClassifierID(CONSTRUCTORCALLEXPRESSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ConstructorCallExpressionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ConstructorCallExpression__type);
        }
    }();

    [this]()
    { // Feature target of class FeatureCall
        auto &&feature = m_FeatureCall__target;

        // ENamedElement
        feature->setName("target");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::FEATURECALL__TARGET);
        feature->basicsetEContainingClass(m_FeatureCallEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature name of class FeatureCall
        auto &&feature = m_FeatureCall__name;

        // ENamedElement
        feature->setName("name");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::FEATURECALL__NAME);
        feature->basicsetEContainingClass(m_FeatureCallEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier FeatureCall
        auto &&classifier = m_FeatureCallEClass;

        // ENamedElement
        classifier->setName("FeatureCall");

        // EClassifier
        classifier->setClassifierID(FEATURECALL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FeatureCallEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_FeatureCall__target);
            eStructuralFeatures.basicAdd(m_FeatureCall__name);
        }
    }();

    [this]()
    { // Feature globalVarName of class GlobalVarExpression
        auto &&feature = m_GlobalVarExpression__globalVarName;

        // ENamedElement
        feature->setName("globalVarName");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::GLOBALVAREXPRESSION__GLOBALVARNAME);
        feature->basicsetEContainingClass(m_GlobalVarExpressionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier GlobalVarExpression
        auto &&classifier = m_GlobalVarExpressionEClass;

        // ENamedElement
        classifier->setName("GlobalVarExpression");

        // EClassifier
        classifier->setClassifierID(GLOBALVAREXPRESSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_GlobalVarExpressionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_GlobalVarExpression__globalVarName);
        }
    }();

    [this]()
    { // Feature condition of class IfExpression
        auto &&feature = m_IfExpression__condition;

        // ENamedElement
        feature->setName("condition");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::IFEXPRESSION__CONDITION);
        feature->basicsetEContainingClass(m_IfExpressionEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature thenPart of class IfExpression
        auto &&feature = m_IfExpression__thenPart;

        // ENamedElement
        feature->setName("thenPart");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::IFEXPRESSION__THENPART);
        feature->basicsetEContainingClass(m_IfExpressionEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature elsePart of class IfExpression
        auto &&feature = m_IfExpression__elsePart;

        // ENamedElement
        feature->setName("elsePart");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::IFEXPRESSION__ELSEPART);
        feature->basicsetEContainingClass(m_IfExpressionEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier IfExpression
        auto &&classifier = m_IfExpressionEClass;

        // ENamedElement
        classifier->setName("IfExpression");

        // EClassifier
        classifier->setClassifierID(IFEXPRESSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_IfExpressionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_IfExpression__condition);
            eStructuralFeatures.basicAdd(m_IfExpression__thenPart);
            eStructuralFeatures.basicAdd(m_IfExpression__elsePart);
        }
    }();

    [this]()
    { // Classifier IntegerLiteral
        auto &&classifier = m_IntegerLiteralEClass;

        // ENamedElement
        classifier->setName("IntegerLiteral");

        // EClassifier
        classifier->setClassifierID(INTEGERLITERAL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature varExpression of class LetExpression
        auto &&feature = m_LetExpression__varExpression;

        // ENamedElement
        feature->setName("varExpression");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::LETEXPRESSION__VAREXPRESSION);
        feature->basicsetEContainingClass(m_LetExpressionEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature targetExpression of class LetExpression
        auto &&feature = m_LetExpression__targetExpression;

        // ENamedElement
        feature->setName("targetExpression");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::LETEXPRESSION__TARGETEXPRESSION);
        feature->basicsetEContainingClass(m_LetExpressionEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature varName of class LetExpression
        auto &&feature = m_LetExpression__varName;

        // ENamedElement
        feature->setName("varName");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::LETEXPRESSION__VARNAME);
        feature->basicsetEContainingClass(m_LetExpressionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier LetExpression
        auto &&classifier = m_LetExpressionEClass;

        // ENamedElement
        classifier->setName("LetExpression");

        // EClassifier
        classifier->setClassifierID(LETEXPRESSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LetExpressionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_LetExpression__varExpression);
            eStructuralFeatures.basicAdd(m_LetExpression__targetExpression);
            eStructuralFeatures.basicAdd(m_LetExpression__varName);
        }
    }();

    [this]()
    { // Feature elements of class ListLiteral
        auto &&feature = m_ListLiteral__elements;

        // ENamedElement
        feature->setName("elements");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::LISTLITERAL__ELEMENTS);
        feature->basicsetEContainingClass(m_ListLiteralEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ListLiteral
        auto &&classifier = m_ListLiteralEClass;

        // ENamedElement
        classifier->setName("ListLiteral");

        // EClassifier
        classifier->setClassifierID(LISTLITERAL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ListLiteralEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ListLiteral__elements);
        }
    }();

    [this]()
    { // Feature literalValue of class Literal
        auto &&feature = m_Literal__literalValue;

        // ENamedElement
        feature->setName("literalValue");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::LITERAL__LITERALVALUE);
        feature->basicsetEContainingClass(m_LiteralEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Literal
        auto &&classifier = m_LiteralEClass;

        // ENamedElement
        classifier->setName("Literal");

        // EClassifier
        classifier->setClassifierID(LITERAL);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LiteralEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Literal__literalValue);
        }
    }();

    [this]()
    { // Classifier NullLiteral
        auto &&classifier = m_NullLiteralEClass;

        // ENamedElement
        classifier->setName("NullLiteral");

        // EClassifier
        classifier->setClassifierID(NULLLITERAL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature params of class OperationCall
        auto &&feature = m_OperationCall__params;

        // ENamedElement
        feature->setName("params");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::OPERATIONCALL__PARAMS);
        feature->basicsetEContainingClass(m_OperationCallEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier OperationCall
        auto &&classifier = m_OperationCallEClass;

        // ENamedElement
        classifier->setName("OperationCall");

        // EClassifier
        classifier->setClassifierID(OPERATIONCALL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_OperationCallEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_OperationCall__params);
        }
    }();

    [this]()
    { // Classifier RealLiteral
        auto &&classifier = m_RealLiteralEClass;

        // ENamedElement
        classifier->setName("RealLiteral");

        // EClassifier
        classifier->setClassifierID(REALLITERAL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier StringLiteral
        auto &&classifier = m_StringLiteralEClass;

        // ENamedElement
        classifier->setName("StringLiteral");

        // EClassifier
        classifier->setClassifierID(STRINGLITERAL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature switchExpr of class SwitchExpression
        auto &&feature = m_SwitchExpression__switchExpr;

        // ENamedElement
        feature->setName("switchExpr");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__SWITCHEXPR);
        feature->basicsetEContainingClass(m_SwitchExpressionEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature defaultExpr of class SwitchExpression
        auto &&feature = m_SwitchExpression__defaultExpr;

        // ENamedElement
        feature->setName("defaultExpr");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__DEFAULTEXPR);
        feature->basicsetEContainingClass(m_SwitchExpressionEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature cases of class SwitchExpression
        auto &&feature = m_SwitchExpression__cases;

        // ENamedElement
        feature->setName("cases");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CaseEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::SWITCHEXPRESSION__CASES);
        feature->basicsetEContainingClass(m_SwitchExpressionEClass);

        // EReference
        feature->setEReferenceType(m_CaseEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier SwitchExpression
        auto &&classifier = m_SwitchExpressionEClass;

        // ENamedElement
        classifier->setName("SwitchExpression");

        // EClassifier
        classifier->setClassifierID(SWITCHEXPRESSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SwitchExpressionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SwitchExpression__switchExpr);
            eStructuralFeatures.basicAdd(m_SwitchExpression__defaultExpr);
            eStructuralFeatures.basicAdd(m_SwitchExpression__cases);
        }
    }();

    [this]()
    { // Feature typeLiteral of class TypeSelectExpression
        auto &&feature = m_TypeSelectExpression__typeLiteral;

        // ENamedElement
        feature->setName("typeLiteral");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::TYPESELECTEXPRESSION__TYPELITERAL);
        feature->basicsetEContainingClass(m_TypeSelectExpressionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier TypeSelectExpression
        auto &&classifier = m_TypeSelectExpressionEClass;

        // ENamedElement
        classifier->setName("TypeSelectExpression");

        // EClassifier
        classifier->setClassifierID(TYPESELECTEXPRESSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TypeSelectExpressionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TypeSelectExpression__typeLiteral);
        }
    }();

    [this]()
    { // Feature operator of class UnaryOperation
        auto &&feature = m_UnaryOperation__operator;

        // ENamedElement
        feature->setName("operator");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::UNARYOPERATION__OPERATOR);
        feature->basicsetEContainingClass(m_UnaryOperationEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature operand of class UnaryOperation
        auto &&feature = m_UnaryOperation__operand;

        // ENamedElement
        feature->setName("operand");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractExpressionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::expression::ExpressionPackage::UNARYOPERATION__OPERAND);
        feature->basicsetEContainingClass(m_UnaryOperationEClass);

        // EReference
        feature->setEReferenceType(m_AbstractExpressionEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier UnaryOperation
        auto &&classifier = m_UnaryOperationEClass;

        // ENamedElement
        classifier->setName("UnaryOperation");

        // EClassifier
        classifier->setClassifierID(UNARYOPERATION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UnaryOperationEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_UnaryOperation__operator);
            eStructuralFeatures.basicAdd(m_UnaryOperation__operand);
        }
    }();

    // Initialize package
    setName("expression");
    setNsPrefix("expression");
    setNsURI("http://www.eclipse.org/m2t/xpand/xpand3/expression");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_AbstractExpressionEClass->getESuperTypes().push_back(
                ::xpand3::Xpand3Package::_instance()->getSyntaxElement());
        m_BooleanOperationEClass->getESuperTypes().push_back(
                m_BinaryOperationEClass);
        m_CastEClass->getESuperTypes().push_back(m_AbstractExpressionEClass);
        m_ChainExpressionEClass->getESuperTypes().push_back(
                m_AbstractExpressionEClass);
        m_ConstructorCallExpressionEClass->getESuperTypes().push_back(
                m_AbstractExpressionEClass);
        m_FeatureCallEClass->getESuperTypes().push_back(
                m_AbstractExpressionEClass);
        m_CollectionExpressionEClass->getESuperTypes().push_back(
                m_FeatureCallEClass);
        m_OperationCallEClass->getESuperTypes().push_back(m_FeatureCallEClass);
        m_TypeSelectExpressionEClass->getESuperTypes().push_back(
                m_FeatureCallEClass);
        m_GlobalVarExpressionEClass->getESuperTypes().push_back(
                m_AbstractExpressionEClass);
        m_IfExpressionEClass->getESuperTypes().push_back(
                m_AbstractExpressionEClass);
        m_LetExpressionEClass->getESuperTypes().push_back(
                m_AbstractExpressionEClass);
        m_ListLiteralEClass->getESuperTypes().push_back(
                m_AbstractExpressionEClass);
        m_LiteralEClass->getESuperTypes().push_back(m_AbstractExpressionEClass);
        m_BooleanLiteralEClass->getESuperTypes().push_back(m_LiteralEClass);
        m_IntegerLiteralEClass->getESuperTypes().push_back(m_LiteralEClass);
        m_NullLiteralEClass->getESuperTypes().push_back(m_LiteralEClass);
        m_RealLiteralEClass->getESuperTypes().push_back(m_LiteralEClass);
        m_StringLiteralEClass->getESuperTypes().push_back(m_LiteralEClass);
        m_SwitchExpressionEClass->getESuperTypes().push_back(
                m_AbstractExpressionEClass);
        m_CaseEClass->getESuperTypes().push_back(
                ::xpand3::Xpand3Package::_instance()->getSyntaxElement());
        m_BinaryOperationEClass->getESuperTypes().push_back(
                m_AbstractExpressionEClass);
        m_UnaryOperationEClass->getESuperTypes().push_back(
                m_AbstractExpressionEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractExpressionEClass);
        classifiers.push_back(m_BinaryOperationEClass);
        classifiers.push_back(m_BooleanLiteralEClass);
        classifiers.push_back(m_BooleanOperationEClass);
        classifiers.push_back(m_CaseEClass);
        classifiers.push_back(m_CastEClass);
        classifiers.push_back(m_ChainExpressionEClass);
        classifiers.push_back(m_CollectionExpressionEClass);
        classifiers.push_back(m_ConstructorCallExpressionEClass);
        classifiers.push_back(m_FeatureCallEClass);
        classifiers.push_back(m_GlobalVarExpressionEClass);
        classifiers.push_back(m_IfExpressionEClass);
        classifiers.push_back(m_IntegerLiteralEClass);
        classifiers.push_back(m_LetExpressionEClass);
        classifiers.push_back(m_ListLiteralEClass);
        classifiers.push_back(m_LiteralEClass);
        classifiers.push_back(m_NullLiteralEClass);
        classifiers.push_back(m_OperationCallEClass);
        classifiers.push_back(m_RealLiteralEClass);
        classifiers.push_back(m_StringLiteralEClass);
        classifiers.push_back(m_SwitchExpressionEClass);
        classifiers.push_back(m_TypeSelectExpressionEClass);
        classifiers.push_back(m_UnaryOperationEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr ExpressionPackage::getAbstractExpression()
{
    return m_AbstractExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getBooleanOperation()
{
    return m_BooleanOperationEClass;
}
::ecore::EClass_ptr ExpressionPackage::getCast()
{
    return m_CastEClass;
}
::ecore::EClass_ptr ExpressionPackage::getChainExpression()
{
    return m_ChainExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getConstructorCallExpression()
{
    return m_ConstructorCallExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getFeatureCall()
{
    return m_FeatureCallEClass;
}
::ecore::EClass_ptr ExpressionPackage::getCollectionExpression()
{
    return m_CollectionExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getOperationCall()
{
    return m_OperationCallEClass;
}
::ecore::EClass_ptr ExpressionPackage::getTypeSelectExpression()
{
    return m_TypeSelectExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getGlobalVarExpression()
{
    return m_GlobalVarExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getIfExpression()
{
    return m_IfExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getLetExpression()
{
    return m_LetExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getListLiteral()
{
    return m_ListLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getLiteral()
{
    return m_LiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getBooleanLiteral()
{
    return m_BooleanLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getIntegerLiteral()
{
    return m_IntegerLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getNullLiteral()
{
    return m_NullLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getRealLiteral()
{
    return m_RealLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getStringLiteral()
{
    return m_StringLiteralEClass;
}
::ecore::EClass_ptr ExpressionPackage::getSwitchExpression()
{
    return m_SwitchExpressionEClass;
}
::ecore::EClass_ptr ExpressionPackage::getCase()
{
    return m_CaseEClass;
}
::ecore::EClass_ptr ExpressionPackage::getBinaryOperation()
{
    return m_BinaryOperationEClass;
}
::ecore::EClass_ptr ExpressionPackage::getUnaryOperation()
{
    return m_UnaryOperationEClass;
}

::ecore::EReference_ptr ExpressionPackage::getCast__type()
{
    return m_Cast__type;
}
::ecore::EReference_ptr ExpressionPackage::getCast__target()
{
    return m_Cast__target;
}
::ecore::EReference_ptr ExpressionPackage::getChainExpression__first()
{
    return m_ChainExpression__first;
}
::ecore::EReference_ptr ExpressionPackage::getChainExpression__next()
{
    return m_ChainExpression__next;
}
::ecore::EReference_ptr ExpressionPackage::getConstructorCallExpression__type()
{
    return m_ConstructorCallExpression__type;
}
::ecore::EReference_ptr ExpressionPackage::getFeatureCall__target()
{
    return m_FeatureCall__target;
}
::ecore::EReference_ptr ExpressionPackage::getFeatureCall__name()
{
    return m_FeatureCall__name;
}
::ecore::EReference_ptr ExpressionPackage::getCollectionExpression__closure()
{
    return m_CollectionExpression__closure;
}
::ecore::EReference_ptr ExpressionPackage::getCollectionExpression__eleName()
{
    return m_CollectionExpression__eleName;
}
::ecore::EReference_ptr ExpressionPackage::getOperationCall__params()
{
    return m_OperationCall__params;
}
::ecore::EReference_ptr ExpressionPackage::getTypeSelectExpression__typeLiteral()
{
    return m_TypeSelectExpression__typeLiteral;
}
::ecore::EReference_ptr ExpressionPackage::getGlobalVarExpression__globalVarName()
{
    return m_GlobalVarExpression__globalVarName;
}
::ecore::EReference_ptr ExpressionPackage::getIfExpression__condition()
{
    return m_IfExpression__condition;
}
::ecore::EReference_ptr ExpressionPackage::getIfExpression__thenPart()
{
    return m_IfExpression__thenPart;
}
::ecore::EReference_ptr ExpressionPackage::getIfExpression__elsePart()
{
    return m_IfExpression__elsePart;
}
::ecore::EReference_ptr ExpressionPackage::getLetExpression__varExpression()
{
    return m_LetExpression__varExpression;
}
::ecore::EReference_ptr ExpressionPackage::getLetExpression__targetExpression()
{
    return m_LetExpression__targetExpression;
}
::ecore::EReference_ptr ExpressionPackage::getLetExpression__varName()
{
    return m_LetExpression__varName;
}
::ecore::EReference_ptr ExpressionPackage::getListLiteral__elements()
{
    return m_ListLiteral__elements;
}
::ecore::EReference_ptr ExpressionPackage::getLiteral__literalValue()
{
    return m_Literal__literalValue;
}
::ecore::EReference_ptr ExpressionPackage::getSwitchExpression__switchExpr()
{
    return m_SwitchExpression__switchExpr;
}
::ecore::EReference_ptr ExpressionPackage::getSwitchExpression__defaultExpr()
{
    return m_SwitchExpression__defaultExpr;
}
::ecore::EReference_ptr ExpressionPackage::getSwitchExpression__cases()
{
    return m_SwitchExpression__cases;
}
::ecore::EReference_ptr ExpressionPackage::getCase__condition()
{
    return m_Case__condition;
}
::ecore::EReference_ptr ExpressionPackage::getCase__thenPart()
{
    return m_Case__thenPart;
}
::ecore::EReference_ptr ExpressionPackage::getBinaryOperation__left()
{
    return m_BinaryOperation__left;
}
::ecore::EReference_ptr ExpressionPackage::getBinaryOperation__right()
{
    return m_BinaryOperation__right;
}
::ecore::EReference_ptr ExpressionPackage::getBinaryOperation__operator()
{
    return m_BinaryOperation__operator;
}
::ecore::EReference_ptr ExpressionPackage::getUnaryOperation__operator()
{
    return m_UnaryOperation__operator;
}
::ecore::EReference_ptr ExpressionPackage::getUnaryOperation__operand()
{
    return m_UnaryOperation__operand;
}

