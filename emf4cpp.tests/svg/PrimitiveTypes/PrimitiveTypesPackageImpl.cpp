// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * PrimitiveTypes/PrimitiveTypesPackageImpl.cpp
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

#include <PrimitiveTypes/PrimitiveTypesPackage.hpp>
#include <PrimitiveTypes/PrimitiveTypesFactory.hpp>
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

using namespace ::PrimitiveTypes;

PrimitiveTypesPackage::PrimitiveTypesPackage()
{
    m_BooleanEDataType = ::ecore::make< ::ecore::EDataType >();
    m_DoubleEDataType = ::ecore::make< ::ecore::EDataType >();
    m_IntegerEDataType = ::ecore::make< ::ecore::EDataType >();
    m_StringEDataType = ::ecore::make< ::ecore::EDataType >();
}

void PrimitiveTypesPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = PrimitiveTypesFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Classifier Boolean
        auto &&classifier = m_BooleanEDataType;

        // ENamedElement
        classifier->setName("Boolean");

        // EClassifier
        classifier->setClassifierID(BOOLEAN);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Double
        auto &&classifier = m_DoubleEDataType;

        // ENamedElement
        classifier->setName("Double");

        // EClassifier
        classifier->setClassifierID(DOUBLE);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier Integer
        auto &&classifier = m_IntegerEDataType;

        // ENamedElement
        classifier->setName("Integer");

        // EClassifier
        classifier->setClassifierID(INTEGER);

        // EDataType
        classifier->setSerializable(true);
    }();

    [this]()
    { // Classifier String
        auto &&classifier = m_StringEDataType;

        // ENamedElement
        classifier->setName("String");

        // EClassifier
        classifier->setClassifierID(STRING);

        // EDataType
        classifier->setSerializable(true);
    }();

    // Initialize package
    setName("PrimitiveTypes");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_BooleanEDataType);
        classifiers.push_back(m_DoubleEDataType);
        classifiers.push_back(m_IntegerEDataType);
        classifiers.push_back(m_StringEDataType);
    }();

    _initialize();
}

::ecore::EDataType_ptr PrimitiveTypesPackage::getBoolean()
{
    return m_BooleanEDataType;
}
::ecore::EDataType_ptr PrimitiveTypesPackage::getInteger()
{
    return m_IntegerEDataType;
}
::ecore::EDataType_ptr PrimitiveTypesPackage::getString()
{
    return m_StringEDataType;
}
::ecore::EDataType_ptr PrimitiveTypesPackage::getDouble()
{
    return m_DoubleEDataType;
}

