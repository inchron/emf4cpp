// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/DeclarationFactoryImpl.cpp
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

#include <xpand3/declaration/DeclarationFactory.hpp>
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>
#include <xpand3/declaration/AbstractNamedDeclaration.hpp>
#include <xpand3/declaration/Definition.hpp>
#include <xpand3/declaration/Extension.hpp>
#include <xpand3/declaration/AbstractAspect.hpp>
#include <xpand3/declaration/ExtensionAspect.hpp>
#include <xpand3/declaration/DefinitionAspect.hpp>
#include <xpand3/declaration/Check.hpp>
#include <xpand3/declaration/CreateExtension.hpp>
#include <xpand3/declaration/JavaExtension.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::xpand3::declaration;

DeclarationFactory::DeclarationFactory()
{
}

::ecore::EObject_ptr DeclarationFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case DeclarationPackage::ABSTRACTDECLARATION:
        return createAbstractDeclaration();
    case DeclarationPackage::ABSTRACTNAMEDDECLARATION:
        return createAbstractNamedDeclaration();
    case DeclarationPackage::DEFINITION:
        return createDefinition();
    case DeclarationPackage::EXTENSION:
        return createExtension();
    case DeclarationPackage::ABSTRACTASPECT:
        return createAbstractAspect();
    case DeclarationPackage::EXTENSIONASPECT:
        return createExtensionAspect();
    case DeclarationPackage::DEFINITIONASPECT:
        return createDefinitionAspect();
    case DeclarationPackage::CHECK:
        return createCheck();
    case DeclarationPackage::CREATEEXTENSION:
        return createCreateExtension();
    case DeclarationPackage::JAVAEXTENSION:
        return createJavaExtension();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject DeclarationFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString DeclarationFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

AbstractDeclaration_ptr DeclarationFactory::createAbstractDeclaration()
{
    return ::ecore::Ptr < AbstractDeclaration > (new AbstractDeclaration);
}
AbstractNamedDeclaration_ptr DeclarationFactory::createAbstractNamedDeclaration()
{
    return ::ecore::Ptr < AbstractNamedDeclaration
            > (new AbstractNamedDeclaration);
}
Definition_ptr DeclarationFactory::createDefinition()
{
    return ::ecore::Ptr < Definition > (new Definition);
}
Extension_ptr DeclarationFactory::createExtension()
{
    return ::ecore::Ptr < Extension > (new Extension);
}
AbstractAspect_ptr DeclarationFactory::createAbstractAspect()
{
    return ::ecore::Ptr < AbstractAspect > (new AbstractAspect);
}
ExtensionAspect_ptr DeclarationFactory::createExtensionAspect()
{
    return ::ecore::Ptr < ExtensionAspect > (new ExtensionAspect);
}
DefinitionAspect_ptr DeclarationFactory::createDefinitionAspect()
{
    return ::ecore::Ptr < DefinitionAspect > (new DefinitionAspect);
}
Check_ptr DeclarationFactory::createCheck()
{
    return ::ecore::Ptr < Check > (new Check);
}
CreateExtension_ptr DeclarationFactory::createCreateExtension()
{
    return ::ecore::Ptr < CreateExtension > (new CreateExtension);
}
JavaExtension_ptr DeclarationFactory::createJavaExtension()
{
    return ::ecore::Ptr < JavaExtension > (new JavaExtension);
}

