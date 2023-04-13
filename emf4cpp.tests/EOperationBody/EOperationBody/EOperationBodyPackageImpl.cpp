// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * EOperationBody/EOperationBodyPackageImpl.cpp
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

#include <EOperationBody/EOperationBodyPackage.hpp>
#include <EOperationBody/EOperationBodyFactory.hpp>
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

using namespace ::EOperationBody;

EOperationBodyPackage::EOperationBodyPackage()
{
    m_Integer__value = ::ecore::make< ::ecore::EAttribute >();
    m_IntegerEClass = ::ecore::make< ::ecore::EClass >();
}

void EOperationBodyPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = EOperationBodyFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature value of class Integer
        auto &&feature = m_Integer__value;

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
        feature->setEType(::ecore::EcorePackage::_instance()->getEInt());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::EOperationBody::EOperationBodyPackage::INTEGER__VALUE);
        feature->basicsetEContainingClass(m_IntegerEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Integer
        auto &&classifier = m_IntegerEClass;

        // ENamedElement
        classifier->setName("Integer");

        // EClassifier
        classifier->setClassifierID(INTEGER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_IntegerEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Integer__value);
        }
    }();

    // Initialize package
    setName("EOperationBody");
    setNsPrefix("EOperationBody");
    setNsURI("http://www.example.org/EOperationBody");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
    }();

    [this]()
    { // Class Integer
        auto &&cls = m_IntegerEClass;

        auto &&eOperations = cls->getEOperations();
        { // Operation increment()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            { // Annotations for http://www.eclipse.org/emf/2002/GenModel
                auto &&eAnnotation = _op->getEAnnotation(
                        "http://www.eclipse.org/emf/2002/GenModel");
                eAnnotation->setDetail("body", "m_value++; return _this();");
            }
            _op->setEType(m_IntegerEClass);
            _op->setName("increment");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            eOperations.push_back(_op);
        }
        { // Operation add()
            auto _op = ::ecore::make< ::ecore::EOperation >();
            { // Annotations for http://www.eclipse.org/emf/2002/GenModel
                auto &&eAnnotation = _op->getEAnnotation(
                        "http://www.eclipse.org/emf/2002/GenModel");
                eAnnotation->setDetail("body",
                        "Let us assume this would be some language different than C++");
            }
            _op->setEType(m_IntegerEClass);
            _op->setName("add");
            _op->setLowerBound(0);
            _op->setUpperBound(1);
            _op->setUnique(true);
            _op->setOrdered(true);
            { // lhs
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_IntegerEClass);
                _pa->setName("lhs");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            { // rhs
                auto _pa = ::ecore::make< ::ecore::EParameter >();
                _pa->setEType(m_IntegerEClass);
                _pa->setName("rhs");
                _pa->setLowerBound(0);
                _pa->setUpperBound(1);
                _pa->setUnique(true);
                _pa->setOrdered(true);
                _op->getEParameters().push_back(_pa);
            }
            eOperations.push_back(_op);
        }
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_IntegerEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr EOperationBodyPackage::getInteger()
{
    return m_IntegerEClass;
}

::ecore::EAttribute_ptr EOperationBodyPackage::getInteger__value()
{
    return m_Integer__value;
}

