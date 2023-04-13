// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/Xpand3PackageImpl.cpp
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

#include <xpand3/Xpand3Package.hpp>
#include <xpand3/Xpand3Factory.hpp>
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
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>

using namespace ::xpand3;

Xpand3Package::Xpand3Package()
{
    m_DeclaredParameter__name = ::ecore::make< ::ecore::EReference >();
    m_DeclaredParameter__type = ::ecore::make< ::ecore::EReference >();
    m_DeclaredParameterEClass = ::ecore::make< ::ecore::EClass >();
    m_File__imports = ::ecore::make< ::ecore::EReference >();
    m_File__declarations = ::ecore::make< ::ecore::EReference >();
    m_FileEClass = ::ecore::make< ::ecore::EClass >();
    m_Identifier__value = ::ecore::make< ::ecore::EAttribute >();
    m_IdentifierEClass = ::ecore::make< ::ecore::EClass >();
    m_ImportStatement__importedId = ::ecore::make< ::ecore::EReference >();
    m_ImportStatement__exported = ::ecore::make< ::ecore::EAttribute >();
    m_ImportStatementEClass = ::ecore::make< ::ecore::EClass >();
    m_SyntaxElement__line = ::ecore::make< ::ecore::EAttribute >();
    m_SyntaxElement__start = ::ecore::make< ::ecore::EAttribute >();
    m_SyntaxElement__end = ::ecore::make< ::ecore::EAttribute >();
    m_SyntaxElement__fileName = ::ecore::make< ::ecore::EAttribute >();
    m_SyntaxElementEClass = ::ecore::make< ::ecore::EClass >();
}

void Xpand3Package::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = Xpand3Factory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature name of class DeclaredParameter
        auto &&feature = m_DeclaredParameter__name;

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
        feature->setEType(m_IdentifierEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::xpand3::Xpand3Package::DECLAREDPARAMETER__NAME);
        feature->basicsetEContainingClass(m_DeclaredParameterEClass);

        // EReference
        feature->setEReferenceType(m_IdentifierEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature type of class DeclaredParameter
        auto &&feature = m_DeclaredParameter__type;

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
        feature->setEType(m_IdentifierEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::xpand3::Xpand3Package::DECLAREDPARAMETER__TYPE);
        feature->basicsetEContainingClass(m_DeclaredParameterEClass);

        // EReference
        feature->setEReferenceType(m_IdentifierEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier DeclaredParameter
        auto &&classifier = m_DeclaredParameterEClass;

        // ENamedElement
        classifier->setName("DeclaredParameter");

        // EClassifier
        classifier->setClassifierID(DECLAREDPARAMETER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DeclaredParameterEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_DeclaredParameter__name);
            eStructuralFeatures.basicAdd(m_DeclaredParameter__type);
        }
    }();

    [this]()
    { // Feature imports of class File
        auto &&feature = m_File__imports;

        // ENamedElement
        feature->setName("imports");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ImportStatementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::xpand3::Xpand3Package::FILE__IMPORTS);
        feature->basicsetEContainingClass(m_FileEClass);

        // EReference
        feature->setEReferenceType(m_ImportStatementEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature declarations of class File
        auto &&feature = m_File__declarations;

        // ENamedElement
        feature->setName("declarations");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::xpand3::declaration::DeclarationPackage::_instance()->getAbstractDeclaration());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::xpand3::Xpand3Package::FILE__DECLARATIONS);
        feature->basicsetEContainingClass(m_FileEClass);

        // EReference
        feature->setEReferenceType(
                ::xpand3::declaration::DeclarationPackage::_instance()->getAbstractDeclaration());
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier File
        auto &&classifier = m_FileEClass;

        // ENamedElement
        classifier->setName("File");

        // EClassifier
        classifier->setClassifierID(FILE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FileEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_File__imports);
            eStructuralFeatures.basicAdd(m_File__declarations);
        }
    }();

    [this]()
    { // Feature value of class Identifier
        auto &&feature = m_Identifier__value;

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

        feature->setFeatureID(::xpand3::Xpand3Package::IDENTIFIER__VALUE);
        feature->basicsetEContainingClass(m_IdentifierEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Identifier
        auto &&classifier = m_IdentifierEClass;

        // ENamedElement
        classifier->setName("Identifier");

        // EClassifier
        classifier->setClassifierID(IDENTIFIER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_IdentifierEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Identifier__value);
        }
    }();

    [this]()
    { // Feature importedId of class ImportStatement
        auto &&feature = m_ImportStatement__importedId;

        // ENamedElement
        feature->setName("importedId");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_IdentifierEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::xpand3::Xpand3Package::IMPORTSTATEMENT__IMPORTEDID);
        feature->basicsetEContainingClass(m_ImportStatementEClass);

        // EReference
        feature->setEReferenceType(m_IdentifierEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature exported of class ImportStatement
        auto &&feature = m_ImportStatement__exported;

        // ENamedElement
        feature->setName("exported");

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
                ::xpand3::Xpand3Package::IMPORTSTATEMENT__EXPORTED);
        feature->basicsetEContainingClass(m_ImportStatementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Classifier ImportStatement
        auto &&classifier = m_ImportStatementEClass;

        // ENamedElement
        classifier->setName("ImportStatement");

        // EClassifier
        classifier->setClassifierID(IMPORTSTATEMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ImportStatementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ImportStatement__importedId);
            eStructuralFeatures.basicAdd(m_ImportStatement__exported);
        }
    }();

    [this]()
    { // Feature line of class SyntaxElement
        auto &&feature = m_SyntaxElement__line;

        // ENamedElement
        feature->setName("line");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEInt());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::xpand3::Xpand3Package::SYNTAXELEMENT__LINE);
        feature->basicsetEContainingClass(m_SyntaxElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Feature start of class SyntaxElement
        auto &&feature = m_SyntaxElement__start;

        // ENamedElement
        feature->setName("start");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEInt());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::xpand3::Xpand3Package::SYNTAXELEMENT__START);
        feature->basicsetEContainingClass(m_SyntaxElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Feature end of class SyntaxElement
        auto &&feature = m_SyntaxElement__end;

        // ENamedElement
        feature->setName("end");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEInt());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::xpand3::Xpand3Package::SYNTAXELEMENT__END);
        feature->basicsetEContainingClass(m_SyntaxElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Feature fileName of class SyntaxElement
        auto &&feature = m_SyntaxElement__fileName;

        // ENamedElement
        feature->setName("fileName");

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

        feature->setFeatureID(::xpand3::Xpand3Package::SYNTAXELEMENT__FILENAME);
        feature->basicsetEContainingClass(m_SyntaxElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier SyntaxElement
        auto &&classifier = m_SyntaxElementEClass;

        // ENamedElement
        classifier->setName("SyntaxElement");

        // EClassifier
        classifier->setClassifierID(SYNTAXELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SyntaxElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SyntaxElement__line);
            eStructuralFeatures.basicAdd(m_SyntaxElement__start);
            eStructuralFeatures.basicAdd(m_SyntaxElement__end);
            eStructuralFeatures.basicAdd(m_SyntaxElement__fileName);
        }
    }();

    [this]()
    { // Subpackages of this package
        auto &&eSubpackages = getESubpackages();
        eSubpackages.push_back(
                ::xpand3::expression::ExpressionPackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::xpand3::statement::StatementPackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::xpand3::declaration::DeclarationPackage::_getInstanceAndRemoveOwnership());
    }();

    // Initialize package
    setName("xpand3");
    setNsPrefix("xpand3");
    setNsURI("http://www.eclipse.org/m2t/xpand/xpand3");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_FileEClass->getESuperTypes().push_back(m_SyntaxElementEClass);
        m_ImportStatementEClass->getESuperTypes().push_back(
                m_SyntaxElementEClass);
        m_IdentifierEClass->getESuperTypes().push_back(m_SyntaxElementEClass);
        m_DeclaredParameterEClass->getESuperTypes().push_back(
                m_SyntaxElementEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_DeclaredParameterEClass);
        classifiers.push_back(m_FileEClass);
        classifiers.push_back(m_IdentifierEClass);
        classifiers.push_back(m_ImportStatementEClass);
        classifiers.push_back(m_SyntaxElementEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr Xpand3Package::getSyntaxElement()
{
    return m_SyntaxElementEClass;
}
::ecore::EClass_ptr Xpand3Package::getFile()
{
    return m_FileEClass;
}
::ecore::EClass_ptr Xpand3Package::getImportStatement()
{
    return m_ImportStatementEClass;
}
::ecore::EClass_ptr Xpand3Package::getIdentifier()
{
    return m_IdentifierEClass;
}
::ecore::EClass_ptr Xpand3Package::getDeclaredParameter()
{
    return m_DeclaredParameterEClass;
}

::ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__line()
{
    return m_SyntaxElement__line;
}
::ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__start()
{
    return m_SyntaxElement__start;
}
::ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__end()
{
    return m_SyntaxElement__end;
}
::ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__fileName()
{
    return m_SyntaxElement__fileName;
}
::ecore::EReference_ptr Xpand3Package::getFile__imports()
{
    return m_File__imports;
}
::ecore::EReference_ptr Xpand3Package::getFile__declarations()
{
    return m_File__declarations;
}
::ecore::EReference_ptr Xpand3Package::getImportStatement__importedId()
{
    return m_ImportStatement__importedId;
}
::ecore::EAttribute_ptr Xpand3Package::getImportStatement__exported()
{
    return m_ImportStatement__exported;
}
::ecore::EAttribute_ptr Xpand3Package::getIdentifier__value()
{
    return m_Identifier__value;
}
::ecore::EReference_ptr Xpand3Package::getDeclaredParameter__name()
{
    return m_DeclaredParameter__name;
}
::ecore::EReference_ptr Xpand3Package::getDeclaredParameter__type()
{
    return m_DeclaredParameter__type;
}

