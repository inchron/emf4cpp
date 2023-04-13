// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level1PackageImpl.cpp
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

#include <TopLevelPackage/Level1/Level1Package.hpp>
#include <TopLevelPackage/Level1/Level1Factory.hpp>
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

using namespace ::TopLevelPackage::Level1;

Level1Package::Level1Package()
{
    m_Level1ClassEClass = ::ecore::make< ::ecore::EClass >();
}

void Level1Package::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = Level1Factory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Classifier Level1Class
        auto &&classifier = m_Level1ClassEClass;

        // ENamedElement
        classifier->setName("Level1Class");

        // EClassifier
        classifier->setClassifierID(LEVEL1CLASS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Subpackages of this package
        auto &&eSubpackages = getESubpackages();
        eSubpackages.push_back(
                ::TopLevelPackage::Level1::Level2::Level2Package::_getInstanceAndRemoveOwnership());
    }();

    // Initialize package
    setName("Level1");
    setNsPrefix("Level1");
    setNsURI("http:///com.example.subpackage/TopLevelPackage/Level1");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_Level1ClassEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr Level1Package::getLevel1Class()
{
    return m_Level1ClassEClass;
}

