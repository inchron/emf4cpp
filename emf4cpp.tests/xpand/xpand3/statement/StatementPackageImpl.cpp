// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/StatementPackageImpl.cpp
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

#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/statement/StatementFactory.hpp>
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
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/Xpand3Package.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace ::xpand3::statement;

StatementPackage::StatementPackage()
{
    m_AbstractStatementEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractStatementWithBody__body = ::ecore::make< ::ecore::EReference >();
    m_AbstractStatementWithBodyEClass = ::ecore::make< ::ecore::EClass >();
    m_ErrorStatement__message = ::ecore::make< ::ecore::EReference >();
    m_ErrorStatementEClass = ::ecore::make< ::ecore::EClass >();
    m_ExpandStatement__foreach = ::ecore::make< ::ecore::EAttribute >();
    m_ExpandStatement__parameters = ::ecore::make< ::ecore::EReference >();
    m_ExpandStatement__separator = ::ecore::make< ::ecore::EReference >();
    m_ExpandStatement__target = ::ecore::make< ::ecore::EReference >();
    m_ExpandStatement__definition = ::ecore::make< ::ecore::EReference >();
    m_ExpandStatementEClass = ::ecore::make< ::ecore::EClass >();
    m_ExpressionStatement__expression = ::ecore::make< ::ecore::EReference >();
    m_ExpressionStatementEClass = ::ecore::make< ::ecore::EClass >();
    m_FileStatement__fileNameExpression =
            ::ecore::make< ::ecore::EReference >();
    m_FileStatement__outletNameIdentifier =
            ::ecore::make< ::ecore::EReference >();
    m_FileStatement__once = ::ecore::make< ::ecore::EAttribute >();
    m_FileStatementEClass = ::ecore::make< ::ecore::EClass >();
    m_ForEachStatement__target = ::ecore::make< ::ecore::EReference >();
    m_ForEachStatement__separator = ::ecore::make< ::ecore::EReference >();
    m_ForEachStatement__variable = ::ecore::make< ::ecore::EReference >();
    m_ForEachStatement__iteratorName = ::ecore::make< ::ecore::EReference >();
    m_ForEachStatementEClass = ::ecore::make< ::ecore::EClass >();
    m_IfStatement__condition = ::ecore::make< ::ecore::EReference >();
    m_IfStatement__elseIf = ::ecore::make< ::ecore::EReference >();
    m_IfStatementEClass = ::ecore::make< ::ecore::EClass >();
    m_LetStatement__varName = ::ecore::make< ::ecore::EReference >();
    m_LetStatement__varValue = ::ecore::make< ::ecore::EReference >();
    m_LetStatementEClass = ::ecore::make< ::ecore::EClass >();
    m_ProtectStatement__commentStart = ::ecore::make< ::ecore::EReference >();
    m_ProtectStatement__commentEnd = ::ecore::make< ::ecore::EReference >();
    m_ProtectStatement__id = ::ecore::make< ::ecore::EReference >();
    m_ProtectStatement__disable = ::ecore::make< ::ecore::EAttribute >();
    m_ProtectStatementEClass = ::ecore::make< ::ecore::EClass >();
    m_TextStatement__value = ::ecore::make< ::ecore::EAttribute >();
    m_TextStatement__deleteLine = ::ecore::make< ::ecore::EAttribute >();
    m_TextStatementEClass = ::ecore::make< ::ecore::EClass >();
}

void StatementPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = StatementFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Classifier AbstractStatement
        auto &&classifier = m_AbstractStatementEClass;

        // ENamedElement
        classifier->setName("AbstractStatement");

        // EClassifier
        classifier->setClassifierID(ABSTRACTSTATEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature body of class AbstractStatementWithBody
        auto &&feature = m_AbstractStatementWithBody__body;

        // ENamedElement
        feature->setName("body");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AbstractStatementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::ABSTRACTSTATEMENTWITHBODY__BODY);
        feature->basicsetEContainingClass(m_AbstractStatementWithBodyEClass);

        // EReference
        feature->setEReferenceType(m_AbstractStatementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractStatementWithBody
        auto &&classifier = m_AbstractStatementWithBodyEClass;

        // ENamedElement
        classifier->setName("AbstractStatementWithBody");

        // EClassifier
        classifier->setClassifierID(ABSTRACTSTATEMENTWITHBODY);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractStatementWithBodyEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AbstractStatementWithBody__body);
        }
    }();

    [this]()
    { // Feature message of class ErrorStatement
        auto &&feature = m_ErrorStatement__message;

        // ENamedElement
        feature->setName("message");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::ERRORSTATEMENT__MESSAGE);
        feature->basicsetEContainingClass(m_ErrorStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ErrorStatement
        auto &&classifier = m_ErrorStatementEClass;

        // ENamedElement
        classifier->setName("ErrorStatement");

        // EClassifier
        classifier->setClassifierID(ERRORSTATEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ErrorStatementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ErrorStatement__message);
        }
    }();

    [this]()
    { // Feature foreach of class ExpandStatement
        auto &&feature = m_ExpandStatement__foreach;

        // ENamedElement
        feature->setName("foreach");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__FOREACH);
        feature->basicsetEContainingClass(m_ExpandStatementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Feature parameters of class ExpandStatement
        auto &&feature = m_ExpandStatement__parameters;

        // ENamedElement
        feature->setName("parameters");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__PARAMETERS);
        feature->basicsetEContainingClass(m_ExpandStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature separator of class ExpandStatement
        auto &&feature = m_ExpandStatement__separator;

        // ENamedElement
        feature->setName("separator");

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
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__SEPARATOR);
        feature->basicsetEContainingClass(m_ExpandStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature target of class ExpandStatement
        auto &&feature = m_ExpandStatement__target;

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
        feature->setEType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__TARGET);
        feature->basicsetEContainingClass(m_ExpandStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature definition of class ExpandStatement
        auto &&feature = m_ExpandStatement__definition;

        // ENamedElement
        feature->setName("definition");

        // ETypedElement
        feature->setLowerBound(1);
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
                ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__DEFINITION);
        feature->basicsetEContainingClass(m_ExpandStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ExpandStatement
        auto &&classifier = m_ExpandStatementEClass;

        // ENamedElement
        classifier->setName("ExpandStatement");

        // EClassifier
        classifier->setClassifierID(EXPANDSTATEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExpandStatementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ExpandStatement__foreach);
            eStructuralFeatures.basicAdd(m_ExpandStatement__parameters);
            eStructuralFeatures.basicAdd(m_ExpandStatement__separator);
            eStructuralFeatures.basicAdd(m_ExpandStatement__target);
            eStructuralFeatures.basicAdd(m_ExpandStatement__definition);
        }
    }();

    [this]()
    { // Feature expression of class ExpressionStatement
        auto &&feature = m_ExpressionStatement__expression;

        // ENamedElement
        feature->setName("expression");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::EXPRESSIONSTATEMENT__EXPRESSION);
        feature->basicsetEContainingClass(m_ExpressionStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ExpressionStatement
        auto &&classifier = m_ExpressionStatementEClass;

        // ENamedElement
        classifier->setName("ExpressionStatement");

        // EClassifier
        classifier->setClassifierID(EXPRESSIONSTATEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExpressionStatementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ExpressionStatement__expression);
        }
    }();

    [this]()
    { // Feature fileNameExpression of class FileStatement
        auto &&feature = m_FileStatement__fileNameExpression;

        // ENamedElement
        feature->setName("fileNameExpression");

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
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::FILESTATEMENT__FILENAMEEXPRESSION);
        feature->basicsetEContainingClass(m_FileStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature outletNameIdentifier of class FileStatement
        auto &&feature = m_FileStatement__outletNameIdentifier;

        // ENamedElement
        feature->setName("outletNameIdentifier");

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
                ::xpand3::statement::StatementPackage::FILESTATEMENT__OUTLETNAMEIDENTIFIER);
        feature->basicsetEContainingClass(m_FileStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature once of class FileStatement
        auto &&feature = m_FileStatement__once;

        // ENamedElement
        feature->setName("once");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::FILESTATEMENT__ONCE);
        feature->basicsetEContainingClass(m_FileStatementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Classifier FileStatement
        auto &&classifier = m_FileStatementEClass;

        // ENamedElement
        classifier->setName("FileStatement");

        // EClassifier
        classifier->setClassifierID(FILESTATEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FileStatementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_FileStatement__fileNameExpression);
            eStructuralFeatures.basicAdd(m_FileStatement__outletNameIdentifier);
            eStructuralFeatures.basicAdd(m_FileStatement__once);
        }
    }();

    [this]()
    { // Feature target of class ForEachStatement
        auto &&feature = m_ForEachStatement__target;

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
        feature->setEType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__TARGET);
        feature->basicsetEContainingClass(m_ForEachStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature separator of class ForEachStatement
        auto &&feature = m_ForEachStatement__separator;

        // ENamedElement
        feature->setName("separator");

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
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__SEPARATOR);
        feature->basicsetEContainingClass(m_ForEachStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature variable of class ForEachStatement
        auto &&feature = m_ForEachStatement__variable;

        // ENamedElement
        feature->setName("variable");

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
                ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__VARIABLE);
        feature->basicsetEContainingClass(m_ForEachStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature iteratorName of class ForEachStatement
        auto &&feature = m_ForEachStatement__iteratorName;

        // ENamedElement
        feature->setName("iteratorName");

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
                ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__ITERATORNAME);
        feature->basicsetEContainingClass(m_ForEachStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ForEachStatement
        auto &&classifier = m_ForEachStatementEClass;

        // ENamedElement
        classifier->setName("ForEachStatement");

        // EClassifier
        classifier->setClassifierID(FOREACHSTATEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ForEachStatementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ForEachStatement__target);
            eStructuralFeatures.basicAdd(m_ForEachStatement__separator);
            eStructuralFeatures.basicAdd(m_ForEachStatement__variable);
            eStructuralFeatures.basicAdd(m_ForEachStatement__iteratorName);
        }
    }();

    [this]()
    { // Feature condition of class IfStatement
        auto &&feature = m_IfStatement__condition;

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
        feature->setEType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::IFSTATEMENT__CONDITION);
        feature->basicsetEContainingClass(m_IfStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature elseIf of class IfStatement
        auto &&feature = m_IfStatement__elseIf;

        // ENamedElement
        feature->setName("elseIf");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_IfStatementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::IFSTATEMENT__ELSEIF);
        feature->basicsetEContainingClass(m_IfStatementEClass);

        // EReference
        feature->setEReferenceType(m_IfStatementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier IfStatement
        auto &&classifier = m_IfStatementEClass;

        // ENamedElement
        classifier->setName("IfStatement");

        // EClassifier
        classifier->setClassifierID(IFSTATEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_IfStatementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_IfStatement__condition);
            eStructuralFeatures.basicAdd(m_IfStatement__elseIf);
        }
    }();

    [this]()
    { // Feature varName of class LetStatement
        auto &&feature = m_LetStatement__varName;

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
                ::xpand3::statement::StatementPackage::LETSTATEMENT__VARNAME);
        feature->basicsetEContainingClass(m_LetStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature varValue of class LetStatement
        auto &&feature = m_LetStatement__varValue;

        // ENamedElement
        feature->setName("varValue");

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
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::LETSTATEMENT__VARVALUE);
        feature->basicsetEContainingClass(m_LetStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier LetStatement
        auto &&classifier = m_LetStatementEClass;

        // ENamedElement
        classifier->setName("LetStatement");

        // EClassifier
        classifier->setClassifierID(LETSTATEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LetStatementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_LetStatement__varName);
            eStructuralFeatures.basicAdd(m_LetStatement__varValue);
        }
    }();

    [this]()
    { // Feature commentStart of class ProtectStatement
        auto &&feature = m_ProtectStatement__commentStart;

        // ENamedElement
        feature->setName("commentStart");

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
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART);
        feature->basicsetEContainingClass(m_ProtectStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature commentEnd of class ProtectStatement
        auto &&feature = m_ProtectStatement__commentEnd;

        // ENamedElement
        feature->setName("commentEnd");

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
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND);
        feature->basicsetEContainingClass(m_ProtectStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature id of class ProtectStatement
        auto &&feature = m_ProtectStatement__id;

        // ENamedElement
        feature->setName("id");

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
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID);
        feature->basicsetEContainingClass(m_ProtectStatementEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature disable of class ProtectStatement
        auto &&feature = m_ProtectStatement__disable;

        // ENamedElement
        feature->setName("disable");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__DISABLE);
        feature->basicsetEContainingClass(m_ProtectStatementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Classifier ProtectStatement
        auto &&classifier = m_ProtectStatementEClass;

        // ENamedElement
        classifier->setName("ProtectStatement");

        // EClassifier
        classifier->setClassifierID(PROTECTSTATEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ProtectStatementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ProtectStatement__commentStart);
            eStructuralFeatures.basicAdd(m_ProtectStatement__commentEnd);
            eStructuralFeatures.basicAdd(m_ProtectStatement__id);
            eStructuralFeatures.basicAdd(m_ProtectStatement__disable);
        }
    }();

    [this]()
    { // Feature value of class TextStatement
        auto &&feature = m_TextStatement__value;

        // ENamedElement
        feature->setName("value");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::TEXTSTATEMENT__VALUE);
        feature->basicsetEContainingClass(m_TextStatementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature deleteLine of class TextStatement
        auto &&feature = m_TextStatement__deleteLine;

        // ENamedElement
        feature->setName("deleteLine");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::statement::StatementPackage::TEXTSTATEMENT__DELETELINE);
        feature->basicsetEContainingClass(m_TextStatementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Classifier TextStatement
        auto &&classifier = m_TextStatementEClass;

        // ENamedElement
        classifier->setName("TextStatement");

        // EClassifier
        classifier->setClassifierID(TEXTSTATEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TextStatementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TextStatement__value);
            eStructuralFeatures.basicAdd(m_TextStatement__deleteLine);
        }
    }();

    // Initialize package
    setName("statement");
    setNsPrefix("statement");
    setNsURI("http://www.eclipse.org/m2t/xpand/xpand3/statement");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_AbstractStatementEClass->getESuperTypes().push_back(
                ::xpand3::Xpand3Package::_instance()->getSyntaxElement());
        m_ExpandStatementEClass->getESuperTypes().push_back(
                m_AbstractStatementEClass);
        m_ExpressionStatementEClass->getESuperTypes().push_back(
                m_AbstractStatementEClass);
        m_ErrorStatementEClass->getESuperTypes().push_back(
                m_AbstractStatementEClass);
        m_AbstractStatementWithBodyEClass->getESuperTypes().push_back(
                m_AbstractStatementEClass);
        m_FileStatementEClass->getESuperTypes().push_back(
                m_AbstractStatementWithBodyEClass);
        m_ForEachStatementEClass->getESuperTypes().push_back(
                m_AbstractStatementWithBodyEClass);
        m_IfStatementEClass->getESuperTypes().push_back(
                m_AbstractStatementWithBodyEClass);
        m_LetStatementEClass->getESuperTypes().push_back(
                m_AbstractStatementWithBodyEClass);
        m_ProtectStatementEClass->getESuperTypes().push_back(
                m_AbstractStatementWithBodyEClass);
        m_TextStatementEClass->getESuperTypes().push_back(
                m_AbstractStatementEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractStatementEClass);
        classifiers.push_back(m_AbstractStatementWithBodyEClass);
        classifiers.push_back(m_ErrorStatementEClass);
        classifiers.push_back(m_ExpandStatementEClass);
        classifiers.push_back(m_ExpressionStatementEClass);
        classifiers.push_back(m_FileStatementEClass);
        classifiers.push_back(m_ForEachStatementEClass);
        classifiers.push_back(m_IfStatementEClass);
        classifiers.push_back(m_LetStatementEClass);
        classifiers.push_back(m_ProtectStatementEClass);
        classifiers.push_back(m_TextStatementEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr StatementPackage::getAbstractStatement()
{
    return m_AbstractStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getExpandStatement()
{
    return m_ExpandStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getExpressionStatement()
{
    return m_ExpressionStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getErrorStatement()
{
    return m_ErrorStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getAbstractStatementWithBody()
{
    return m_AbstractStatementWithBodyEClass;
}
::ecore::EClass_ptr StatementPackage::getFileStatement()
{
    return m_FileStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getForEachStatement()
{
    return m_ForEachStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getIfStatement()
{
    return m_IfStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getLetStatement()
{
    return m_LetStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getProtectStatement()
{
    return m_ProtectStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getTextStatement()
{
    return m_TextStatementEClass;
}

::ecore::EAttribute_ptr StatementPackage::getExpandStatement__foreach()
{
    return m_ExpandStatement__foreach;
}
::ecore::EReference_ptr StatementPackage::getExpandStatement__parameters()
{
    return m_ExpandStatement__parameters;
}
::ecore::EReference_ptr StatementPackage::getExpandStatement__separator()
{
    return m_ExpandStatement__separator;
}
::ecore::EReference_ptr StatementPackage::getExpandStatement__target()
{
    return m_ExpandStatement__target;
}
::ecore::EReference_ptr StatementPackage::getExpandStatement__definition()
{
    return m_ExpandStatement__definition;
}
::ecore::EReference_ptr StatementPackage::getExpressionStatement__expression()
{
    return m_ExpressionStatement__expression;
}
::ecore::EReference_ptr StatementPackage::getErrorStatement__message()
{
    return m_ErrorStatement__message;
}
::ecore::EReference_ptr StatementPackage::getAbstractStatementWithBody__body()
{
    return m_AbstractStatementWithBody__body;
}
::ecore::EReference_ptr StatementPackage::getFileStatement__fileNameExpression()
{
    return m_FileStatement__fileNameExpression;
}
::ecore::EReference_ptr StatementPackage::getFileStatement__outletNameIdentifier()
{
    return m_FileStatement__outletNameIdentifier;
}
::ecore::EAttribute_ptr StatementPackage::getFileStatement__once()
{
    return m_FileStatement__once;
}
::ecore::EReference_ptr StatementPackage::getForEachStatement__target()
{
    return m_ForEachStatement__target;
}
::ecore::EReference_ptr StatementPackage::getForEachStatement__separator()
{
    return m_ForEachStatement__separator;
}
::ecore::EReference_ptr StatementPackage::getForEachStatement__variable()
{
    return m_ForEachStatement__variable;
}
::ecore::EReference_ptr StatementPackage::getForEachStatement__iteratorName()
{
    return m_ForEachStatement__iteratorName;
}
::ecore::EReference_ptr StatementPackage::getIfStatement__condition()
{
    return m_IfStatement__condition;
}
::ecore::EReference_ptr StatementPackage::getIfStatement__elseIf()
{
    return m_IfStatement__elseIf;
}
::ecore::EReference_ptr StatementPackage::getLetStatement__varName()
{
    return m_LetStatement__varName;
}
::ecore::EReference_ptr StatementPackage::getLetStatement__varValue()
{
    return m_LetStatement__varValue;
}
::ecore::EReference_ptr StatementPackage::getProtectStatement__commentStart()
{
    return m_ProtectStatement__commentStart;
}
::ecore::EReference_ptr StatementPackage::getProtectStatement__commentEnd()
{
    return m_ProtectStatement__commentEnd;
}
::ecore::EReference_ptr StatementPackage::getProtectStatement__id()
{
    return m_ProtectStatement__id;
}
::ecore::EAttribute_ptr StatementPackage::getProtectStatement__disable()
{
    return m_ProtectStatement__disable;
}
::ecore::EAttribute_ptr StatementPackage::getTextStatement__value()
{
    return m_TextStatement__value;
}
::ecore::EAttribute_ptr StatementPackage::getTextStatement__deleteLine()
{
    return m_TextStatement__deleteLine;
}

