// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enumeration/EnumerationPackageImpl.cpp
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

#include <enumeration/EnumerationPackage.hpp>
#include <enumeration/EnumerationFactory.hpp>
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

using namespace ::enumeration;

EnumerationPackage::EnumerationPackage()
{
    m_Bird__type = ::ecore::make< ::ecore::EAttribute >();
    m_Bird__name = ::ecore::make< ::ecore::EAttribute >();
    m_BirdEClass = ::ecore::make< ::ecore::EClass >();
    m_BirdTypeEEnum = ::ecore::make< ::ecore::EEnum >();
}

void EnumerationPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = EnumerationFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature type of class Bird
        auto &&feature = m_Bird__type;

        // ENamedElement
        feature->setName("type");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("blackbird");
        feature->setDerived(false);
        feature->setEType(m_BirdTypeEEnum);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::enumeration::EnumerationPackage::BIRD__TYPE);
        feature->basicsetEContainingClass(m_BirdEClass);

        // EAttribute
        feature->setEAttributeType(m_BirdTypeEEnum);
        feature->setID(false);
    }();

    [this]()
    { // Feature name of class Bird
        auto &&feature = m_Bird__name;

        // ENamedElement
        feature->setName("name");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("Birdy");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::enumeration::EnumerationPackage::BIRD__NAME);
        feature->basicsetEContainingClass(m_BirdEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Bird
        auto &&classifier = m_BirdEClass;

        // ENamedElement
        classifier->setName("Bird");

        // EClassifier
        classifier->setClassifierID(BIRD);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BirdEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Bird__type);
            eStructuralFeatures.basicAdd(m_Bird__name);
        }
    }();

    [this]()
    { // Classifier BirdType
        auto &&classifier = m_BirdTypeEEnum;

        // ENamedElement
        classifier->setName("BirdType");

        // EClassifier
        classifier->setClassifierID(BIRDTYPE);

        // EDataType
        classifier->setSerializable(true);
    }();

    // Initialize package
    setName("enumeration");
    setNsPrefix("enumeration");
    setNsURI("http://inchron.com/tests/enumeration");

    // TODO: bounds for type parameters

    [this]()
    { // EEnum BirdType
        auto &&eEnum = m_BirdTypeEEnum;
        { // Literals
            auto &&eLiterals = eEnum->getELiterals();
            { // Literal unknown
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("unknown");
                _el->setValue(-1);
                _el->setLiteral("unknown");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal blackbird
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("blackbird");
                _el->setValue(eLiterals.size());
                _el->setLiteral("blackbird");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal thrush
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("thrush");
                _el->setValue(1);
                _el->setLiteral("thrush");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal finch
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("finch");
                _el->setValue(2);
                _el->setLiteral("finch");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal starling
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("starling");
                _el->setValue(3);
                _el->setLiteral("starling");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
            { // Literal stork
                auto _el = ::ecore::make< ::ecore::EEnumLiteral >();
                _el->setName("stork");
                _el->setValue(7);
                _el->setLiteral("stork");
                _el->setEEnum(eEnum);
                eLiterals.push_back(_el);
            }
        }
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_BirdEClass);
        classifiers.push_back(m_BirdTypeEEnum);
    }();

    _initialize();
}

::ecore::EClass_ptr EnumerationPackage::getBird()
{
    return m_BirdEClass;
}
::ecore::EEnum_ptr EnumerationPackage::getBirdType()
{
    return m_BirdTypeEEnum;
}

::ecore::EAttribute_ptr EnumerationPackage::getBird__type()
{
    return m_Bird__type;
}
::ecore::EAttribute_ptr EnumerationPackage::getBird__name()
{
    return m_Bird__name;
}

