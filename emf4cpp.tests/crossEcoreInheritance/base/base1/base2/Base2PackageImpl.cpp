// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/base2/Base2PackageImpl.cpp
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

#include <base/base1/base2/Base2Package.hpp>
#include <base/base1/base2/Base2Factory.hpp>
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
#include <derived/DerivedPackage.hpp>
#include <derived/Derived02.hpp>

using namespace ::base::base1::base2;

Base2Package::Base2Package()
{
    m_Base20__valBase20 = ::ecore::make< ::ecore::EAttribute >();
    m_Base20EClass = ::ecore::make< ::ecore::EClass >();
}

void Base2Package::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = Base2Factory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature valBase20 of class Base20
        auto &&feature = m_Base20__valBase20;

        // ENamedElement
        feature->setName("valBase20");

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
                ::base::base1::base2::Base2Package::BASE20__VALBASE20);
        feature->basicsetEContainingClass(m_Base20EClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Base20
        auto &&classifier = m_Base20EClass;

        // ENamedElement
        classifier->setName("Base20");

        // EClassifier
        classifier->setClassifierID(BASE20);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_Base20EClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Base20__valBase20);
        }
    }();

    // Initialize package
    setName("base2");
    setNsPrefix("base2");
    setNsURI("http:///com.example.base.ecore/base/base1/base2");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_Base20EClass->getESuperTypes().push_back(
                ::base::base1::Base1Package::_instance()->getBase10());
        m_Base20EClass->getESuperTypes().push_back(
                ::base::base1::Base1Package::_instance()->getBase11());
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_Base20EClass);
    }();

    _initialize();
}

::ecore::EClass_ptr Base2Package::getBase20()
{
    return m_Base20EClass;
}

::ecore::EAttribute_ptr Base2Package::getBase20__valBase20()
{
    return m_Base20__valBase20;
}

