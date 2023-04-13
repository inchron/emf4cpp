// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/TopLevelPackagePackageImpl.cpp
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

#include <TopLevelPackage/TopLevelPackagePackage.hpp>
#include <TopLevelPackage/TopLevelPackageFactory.hpp>
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
#include <ecore/EObject.hpp>

using namespace ::TopLevelPackage;

TopLevelPackagePackage::TopLevelPackagePackage()
{
    m_TopLevelClass__reference = ::ecore::make< ::ecore::EReference >();
    m_TopLevelClassEClass = ::ecore::make< ::ecore::EClass >();
}

void TopLevelPackagePackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = TopLevelPackageFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature reference of class TopLevelClass
        auto &&feature = m_TopLevelClass__reference;

        // ENamedElement
        feature->setName("reference");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(::ecore::EcorePackage::_instance()->getEObject());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::TopLevelPackage::TopLevelPackagePackage::TOPLEVELCLASS__REFERENCE);
        feature->basicsetEContainingClass(m_TopLevelClassEClass);

        // EReference
        feature->setEReferenceType(
                ::ecore::EcorePackage::_instance()->getEObject());
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier TopLevelClass
        auto &&classifier = m_TopLevelClassEClass;

        // ENamedElement
        classifier->setName("TopLevelClass");

        // EClassifier
        classifier->setClassifierID(TOPLEVELCLASS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TopLevelClassEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TopLevelClass__reference);
        }
    }();

    [this]()
    { // Subpackages of this package
        auto &&eSubpackages = getESubpackages();
        eSubpackages.push_back(
                ::TopLevelPackage::Level1::Level1Package::_getInstanceAndRemoveOwnership());
    }();

    // Initialize package
    setName("TopLevelPackage");
    setNsPrefix("TopLevelPackage");
    setNsURI("http:///com.example.subpackage/TopLevelPackage");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_TopLevelClassEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr TopLevelPackagePackage::getTopLevelClass()
{
    return m_TopLevelClassEClass;
}

::ecore::EReference_ptr TopLevelPackagePackage::getTopLevelClass__reference()
{
    return m_TopLevelClass__reference;
}

