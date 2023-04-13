// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/DeclarationPackageImpl.cpp
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

#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/declaration/DeclarationFactory.hpp>
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
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/File.hpp>
#include <xpand3/DeclaredParameter.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

using namespace ::xpand3::declaration;

DeclarationPackage::DeclarationPackage()
{
    m_AbstractAspect__pointcut = ::ecore::make< ::ecore::EReference >();
    m_AbstractAspect__wildparams = ::ecore::make< ::ecore::EAttribute >();
    m_AbstractAspectEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractDeclaration__owner = ::ecore::make< ::ecore::EReference >();
    m_AbstractDeclaration__params = ::ecore::make< ::ecore::EReference >();
    m_AbstractDeclaration__isPrivate = ::ecore::make< ::ecore::EAttribute >();
    m_AbstractDeclaration__guard = ::ecore::make< ::ecore::EReference >();
    m_AbstractDeclarationEClass = ::ecore::make< ::ecore::EClass >();
    m_AbstractNamedDeclaration__name = ::ecore::make< ::ecore::EReference >();
    m_AbstractNamedDeclarationEClass = ::ecore::make< ::ecore::EClass >();
    m_Check__errorSeverity = ::ecore::make< ::ecore::EAttribute >();
    m_Check__msg = ::ecore::make< ::ecore::EReference >();
    m_Check__constraint = ::ecore::make< ::ecore::EReference >();
    m_Check__feature = ::ecore::make< ::ecore::EAttribute >();
    m_CheckEClass = ::ecore::make< ::ecore::EClass >();
    m_CreateExtension__toBeCreated = ::ecore::make< ::ecore::EReference >();
    m_CreateExtensionEClass = ::ecore::make< ::ecore::EClass >();
    m_Definition__body = ::ecore::make< ::ecore::EReference >();
    m_DefinitionEClass = ::ecore::make< ::ecore::EClass >();
    m_DefinitionAspect__body = ::ecore::make< ::ecore::EReference >();
    m_DefinitionAspectEClass = ::ecore::make< ::ecore::EClass >();
    m_Extension__cached = ::ecore::make< ::ecore::EAttribute >();
    m_Extension__body = ::ecore::make< ::ecore::EReference >();
    m_Extension__returnType = ::ecore::make< ::ecore::EReference >();
    m_ExtensionEClass = ::ecore::make< ::ecore::EClass >();
    m_ExtensionAspect__expression = ::ecore::make< ::ecore::EReference >();
    m_ExtensionAspectEClass = ::ecore::make< ::ecore::EClass >();
    m_JavaExtension__javaType = ::ecore::make< ::ecore::EReference >();
    m_JavaExtension__javaMethod = ::ecore::make< ::ecore::EReference >();
    m_JavaExtension__javaParamTypes = ::ecore::make< ::ecore::EReference >();
    m_JavaExtensionEClass = ::ecore::make< ::ecore::EClass >();
}

void DeclarationPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = DeclarationFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature pointcut of class AbstractAspect
        auto &&feature = m_AbstractAspect__pointcut;

        // ENamedElement
        feature->setName("pointcut");

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
                ::xpand3::declaration::DeclarationPackage::ABSTRACTASPECT__POINTCUT);
        feature->basicsetEContainingClass(m_AbstractAspectEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature wildparams of class AbstractAspect
        auto &&feature = m_AbstractAspect__wildparams;

        // ENamedElement
        feature->setName("wildparams");

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
                ::xpand3::declaration::DeclarationPackage::ABSTRACTASPECT__WILDPARAMS);
        feature->basicsetEContainingClass(m_AbstractAspectEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Classifier AbstractAspect
        auto &&classifier = m_AbstractAspectEClass;

        // ENamedElement
        classifier->setName("AbstractAspect");

        // EClassifier
        classifier->setClassifierID(ABSTRACTASPECT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractAspectEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AbstractAspect__pointcut);
            eStructuralFeatures.basicAdd(m_AbstractAspect__wildparams);
        }
    }();

    [this]()
    { // Feature owner of class AbstractDeclaration
        auto &&feature = m_AbstractDeclaration__owner;

        // ENamedElement
        feature->setName("owner");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::xpand3::Xpand3Package::_instance()->getFile());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__OWNER);
        feature->basicsetEContainingClass(m_AbstractDeclarationEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getFile());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature params of class AbstractDeclaration
        auto &&feature = m_AbstractDeclaration__params;

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
        feature->setEType(
                ::xpand3::Xpand3Package::_instance()->getDeclaredParameter());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__PARAMS);
        feature->basicsetEContainingClass(m_AbstractDeclarationEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getDeclaredParameter());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature isPrivate of class AbstractDeclaration
        auto &&feature = m_AbstractDeclaration__isPrivate;

        // ENamedElement
        feature->setName("isPrivate");

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
                ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__ISPRIVATE);
        feature->basicsetEContainingClass(m_AbstractDeclarationEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Feature guard of class AbstractDeclaration
        auto &&feature = m_AbstractDeclaration__guard;

        // ENamedElement
        feature->setName("guard");

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
                ::xpand3::declaration::DeclarationPackage::ABSTRACTDECLARATION__GUARD);
        feature->basicsetEContainingClass(m_AbstractDeclarationEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractDeclaration
        auto &&classifier = m_AbstractDeclarationEClass;

        // ENamedElement
        classifier->setName("AbstractDeclaration");

        // EClassifier
        classifier->setClassifierID(ABSTRACTDECLARATION);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractDeclarationEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AbstractDeclaration__owner);
            eStructuralFeatures.basicAdd(m_AbstractDeclaration__params);
            eStructuralFeatures.basicAdd(m_AbstractDeclaration__isPrivate);
            eStructuralFeatures.basicAdd(m_AbstractDeclaration__guard);
        }
    }();

    [this]()
    { // Feature name of class AbstractNamedDeclaration
        auto &&feature = m_AbstractNamedDeclaration__name;

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
                ::xpand3::declaration::DeclarationPackage::ABSTRACTNAMEDDECLARATION__NAME);
        feature->basicsetEContainingClass(m_AbstractNamedDeclarationEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier AbstractNamedDeclaration
        auto &&classifier = m_AbstractNamedDeclarationEClass;

        // ENamedElement
        classifier->setName("AbstractNamedDeclaration");

        // EClassifier
        classifier->setClassifierID(ABSTRACTNAMEDDECLARATION);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractNamedDeclarationEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_AbstractNamedDeclaration__name);
        }
    }();

    [this]()
    { // Feature errorSeverity of class Check
        auto &&feature = m_Check__errorSeverity;

        // ENamedElement
        feature->setName("errorSeverity");

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
                ::xpand3::declaration::DeclarationPackage::CHECK__ERRORSEVERITY);
        feature->basicsetEContainingClass(m_CheckEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Feature msg of class Check
        auto &&feature = m_Check__msg;

        // ENamedElement
        feature->setName("msg");

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
                ::xpand3::declaration::DeclarationPackage::CHECK__MSG);
        feature->basicsetEContainingClass(m_CheckEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature constraint of class Check
        auto &&feature = m_Check__constraint;

        // ENamedElement
        feature->setName("constraint");

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
                ::xpand3::declaration::DeclarationPackage::CHECK__CONSTRAINT);
        feature->basicsetEContainingClass(m_CheckEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature feature of class Check
        auto &&feature = m_Check__feature;

        // ENamedElement
        feature->setName("feature");

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
                ::xpand3::declaration::DeclarationPackage::CHECK__FEATURE);
        feature->basicsetEContainingClass(m_CheckEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Check
        auto &&classifier = m_CheckEClass;

        // ENamedElement
        classifier->setName("Check");

        // EClassifier
        classifier->setClassifierID(CHECK);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CheckEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Check__errorSeverity);
            eStructuralFeatures.basicAdd(m_Check__msg);
            eStructuralFeatures.basicAdd(m_Check__constraint);
            eStructuralFeatures.basicAdd(m_Check__feature);
        }
    }();

    [this]()
    { // Feature toBeCreated of class CreateExtension
        auto &&feature = m_CreateExtension__toBeCreated;

        // ENamedElement
        feature->setName("toBeCreated");

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
                ::xpand3::Xpand3Package::_instance()->getDeclaredParameter());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::declaration::DeclarationPackage::CREATEEXTENSION__TOBECREATED);
        feature->basicsetEContainingClass(m_CreateExtensionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getDeclaredParameter());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier CreateExtension
        auto &&classifier = m_CreateExtensionEClass;

        // ENamedElement
        classifier->setName("CreateExtension");

        // EClassifier
        classifier->setClassifierID(CREATEEXTENSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CreateExtensionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_CreateExtension__toBeCreated);
        }
    }();

    [this]()
    { // Feature body of class Definition
        auto &&feature = m_Definition__body;

        // ENamedElement
        feature->setName("body");

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
                ::xpand3::statement::StatementPackage::_instance()->getAbstractStatement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::declaration::DeclarationPackage::DEFINITION__BODY);
        feature->basicsetEContainingClass(m_DefinitionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::statement::StatementPackage::_instance()->getAbstractStatement());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Definition
        auto &&classifier = m_DefinitionEClass;

        // ENamedElement
        classifier->setName("Definition");

        // EClassifier
        classifier->setClassifierID(DEFINITION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DefinitionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Definition__body);
        }
    }();

    [this]()
    { // Feature body of class DefinitionAspect
        auto &&feature = m_DefinitionAspect__body;

        // ENamedElement
        feature->setName("body");

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
                ::xpand3::statement::StatementPackage::_instance()->getAbstractStatement());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::declaration::DeclarationPackage::DEFINITIONASPECT__BODY);
        feature->basicsetEContainingClass(m_DefinitionAspectEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::statement::StatementPackage::_instance()->getAbstractStatement());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DefinitionAspect
        auto &&classifier = m_DefinitionAspectEClass;

        // ENamedElement
        classifier->setName("DefinitionAspect");

        // EClassifier
        classifier->setClassifierID(DEFINITIONASPECT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DefinitionAspectEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DefinitionAspect__body);
        }
    }();

    [this]()
    { // Feature cached of class Extension
        auto &&feature = m_Extension__cached;

        // ENamedElement
        feature->setName("cached");

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
                ::xpand3::declaration::DeclarationPackage::EXTENSION__CACHED);
        feature->basicsetEContainingClass(m_ExtensionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Feature body of class Extension
        auto &&feature = m_Extension__body;

        // ENamedElement
        feature->setName("body");

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
                ::xpand3::declaration::DeclarationPackage::EXTENSION__BODY);
        feature->basicsetEContainingClass(m_ExtensionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature returnType of class Extension
        auto &&feature = m_Extension__returnType;

        // ENamedElement
        feature->setName("returnType");

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
                ::xpand3::declaration::DeclarationPackage::EXTENSION__RETURNTYPE);
        feature->basicsetEContainingClass(m_ExtensionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Extension
        auto &&classifier = m_ExtensionEClass;

        // ENamedElement
        classifier->setName("Extension");

        // EClassifier
        classifier->setClassifierID(EXTENSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExtensionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Extension__cached);
            eStructuralFeatures.basicAdd(m_Extension__body);
            eStructuralFeatures.basicAdd(m_Extension__returnType);
        }
    }();

    [this]()
    { // Feature expression of class ExtensionAspect
        auto &&feature = m_ExtensionAspect__expression;

        // ENamedElement
        feature->setName("expression");

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
                ::xpand3::declaration::DeclarationPackage::EXTENSIONASPECT__EXPRESSION);
        feature->basicsetEContainingClass(m_ExtensionAspectEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::expression::ExpressionPackage::_instance()->getAbstractExpression());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier ExtensionAspect
        auto &&classifier = m_ExtensionAspectEClass;

        // ENamedElement
        classifier->setName("ExtensionAspect");

        // EClassifier
        classifier->setClassifierID(EXTENSIONASPECT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExtensionAspectEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ExtensionAspect__expression);
        }
    }();

    [this]()
    { // Feature javaType of class JavaExtension
        auto &&feature = m_JavaExtension__javaType;

        // ENamedElement
        feature->setName("javaType");

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
                ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVATYPE);
        feature->basicsetEContainingClass(m_JavaExtensionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature javaMethod of class JavaExtension
        auto &&feature = m_JavaExtension__javaMethod;

        // ENamedElement
        feature->setName("javaMethod");

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
                ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAMETHOD);
        feature->basicsetEContainingClass(m_JavaExtensionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature javaParamTypes of class JavaExtension
        auto &&feature = m_JavaExtension__javaParamTypes;

        // ENamedElement
        feature->setName("javaParamTypes");

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
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::declaration::DeclarationPackage::JAVAEXTENSION__JAVAPARAMTYPES);
        feature->basicsetEContainingClass(m_JavaExtensionEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::Xpand3Package::_instance()->getIdentifier());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier JavaExtension
        auto &&classifier = m_JavaExtensionEClass;

        // ENamedElement
        classifier->setName("JavaExtension");

        // EClassifier
        classifier->setClassifierID(JAVAEXTENSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_JavaExtensionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_JavaExtension__javaType);
            eStructuralFeatures.basicAdd(m_JavaExtension__javaMethod);
            eStructuralFeatures.basicAdd(m_JavaExtension__javaParamTypes);
        }
    }();

    // Initialize package
    setName("declaration");
    setNsPrefix("declaration");
    setNsURI("http://www.eclipse.org/m2t/xpand/xpand3/declaration");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_AbstractDeclarationEClass->getESuperTypes().push_back(
                ::xpand3::Xpand3Package::_instance()->getSyntaxElement());
        m_AbstractNamedDeclarationEClass->getESuperTypes().push_back(
                m_AbstractDeclarationEClass);
        m_DefinitionEClass->getESuperTypes().push_back(
                m_AbstractNamedDeclarationEClass);
        m_ExtensionEClass->getESuperTypes().push_back(
                m_AbstractNamedDeclarationEClass);
        m_AbstractAspectEClass->getESuperTypes().push_back(
                m_AbstractDeclarationEClass);
        m_ExtensionAspectEClass->getESuperTypes().push_back(
                m_AbstractAspectEClass);
        m_DefinitionAspectEClass->getESuperTypes().push_back(
                m_AbstractAspectEClass);
        m_CheckEClass->getESuperTypes().push_back(m_AbstractDeclarationEClass);
        m_CreateExtensionEClass->getESuperTypes().push_back(m_ExtensionEClass);
        m_JavaExtensionEClass->getESuperTypes().push_back(
                m_AbstractNamedDeclarationEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbstractAspectEClass);
        classifiers.push_back(m_AbstractDeclarationEClass);
        classifiers.push_back(m_AbstractNamedDeclarationEClass);
        classifiers.push_back(m_CheckEClass);
        classifiers.push_back(m_CreateExtensionEClass);
        classifiers.push_back(m_DefinitionEClass);
        classifiers.push_back(m_DefinitionAspectEClass);
        classifiers.push_back(m_ExtensionEClass);
        classifiers.push_back(m_ExtensionAspectEClass);
        classifiers.push_back(m_JavaExtensionEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr DeclarationPackage::getAbstractDeclaration()
{
    return m_AbstractDeclarationEClass;
}
::ecore::EClass_ptr DeclarationPackage::getAbstractNamedDeclaration()
{
    return m_AbstractNamedDeclarationEClass;
}
::ecore::EClass_ptr DeclarationPackage::getDefinition()
{
    return m_DefinitionEClass;
}
::ecore::EClass_ptr DeclarationPackage::getExtension()
{
    return m_ExtensionEClass;
}
::ecore::EClass_ptr DeclarationPackage::getAbstractAspect()
{
    return m_AbstractAspectEClass;
}
::ecore::EClass_ptr DeclarationPackage::getExtensionAspect()
{
    return m_ExtensionAspectEClass;
}
::ecore::EClass_ptr DeclarationPackage::getDefinitionAspect()
{
    return m_DefinitionAspectEClass;
}
::ecore::EClass_ptr DeclarationPackage::getCheck()
{
    return m_CheckEClass;
}
::ecore::EClass_ptr DeclarationPackage::getCreateExtension()
{
    return m_CreateExtensionEClass;
}
::ecore::EClass_ptr DeclarationPackage::getJavaExtension()
{
    return m_JavaExtensionEClass;
}

::ecore::EReference_ptr DeclarationPackage::getAbstractDeclaration__owner()
{
    return m_AbstractDeclaration__owner;
}
::ecore::EReference_ptr DeclarationPackage::getAbstractDeclaration__params()
{
    return m_AbstractDeclaration__params;
}
::ecore::EAttribute_ptr DeclarationPackage::getAbstractDeclaration__isPrivate()
{
    return m_AbstractDeclaration__isPrivate;
}
::ecore::EReference_ptr DeclarationPackage::getAbstractDeclaration__guard()
{
    return m_AbstractDeclaration__guard;
}
::ecore::EReference_ptr DeclarationPackage::getAbstractNamedDeclaration__name()
{
    return m_AbstractNamedDeclaration__name;
}
::ecore::EReference_ptr DeclarationPackage::getDefinition__body()
{
    return m_Definition__body;
}
::ecore::EAttribute_ptr DeclarationPackage::getExtension__cached()
{
    return m_Extension__cached;
}
::ecore::EReference_ptr DeclarationPackage::getExtension__body()
{
    return m_Extension__body;
}
::ecore::EReference_ptr DeclarationPackage::getExtension__returnType()
{
    return m_Extension__returnType;
}
::ecore::EReference_ptr DeclarationPackage::getAbstractAspect__pointcut()
{
    return m_AbstractAspect__pointcut;
}
::ecore::EAttribute_ptr DeclarationPackage::getAbstractAspect__wildparams()
{
    return m_AbstractAspect__wildparams;
}
::ecore::EReference_ptr DeclarationPackage::getExtensionAspect__expression()
{
    return m_ExtensionAspect__expression;
}
::ecore::EReference_ptr DeclarationPackage::getDefinitionAspect__body()
{
    return m_DefinitionAspect__body;
}
::ecore::EAttribute_ptr DeclarationPackage::getCheck__errorSeverity()
{
    return m_Check__errorSeverity;
}
::ecore::EReference_ptr DeclarationPackage::getCheck__msg()
{
    return m_Check__msg;
}
::ecore::EReference_ptr DeclarationPackage::getCheck__constraint()
{
    return m_Check__constraint;
}
::ecore::EAttribute_ptr DeclarationPackage::getCheck__feature()
{
    return m_Check__feature;
}
::ecore::EReference_ptr DeclarationPackage::getCreateExtension__toBeCreated()
{
    return m_CreateExtension__toBeCreated;
}
::ecore::EReference_ptr DeclarationPackage::getJavaExtension__javaType()
{
    return m_JavaExtension__javaType;
}
::ecore::EReference_ptr DeclarationPackage::getJavaExtension__javaMethod()
{
    return m_JavaExtension__javaMethod;
}
::ecore::EReference_ptr DeclarationPackage::getJavaExtension__javaParamTypes()
{
    return m_JavaExtension__javaParamTypes;
}

