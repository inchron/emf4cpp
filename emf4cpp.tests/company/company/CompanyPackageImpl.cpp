// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/CompanyPackageImpl.cpp
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

#include <company/CompanyPackage.hpp>
#include <company/CompanyFactory.hpp>
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

using namespace ::company;

CompanyPackage::CompanyPackage()
{
    m_Company__name = ::ecore::make< ::ecore::EAttribute >();
    m_Company__departments = ::ecore::make< ::ecore::EReference >();
    m_CompanyEClass = ::ecore::make< ::ecore::EClass >();
    m_Department__employees = ::ecore::make< ::ecore::EReference >();
    m_Department__manager = ::ecore::make< ::ecore::EReference >();
    m_Department__number = ::ecore::make< ::ecore::EAttribute >();
    m_DepartmentEClass = ::ecore::make< ::ecore::EClass >();
    m_Employee__name = ::ecore::make< ::ecore::EAttribute >();
    m_Employee__phonebookEntry = ::ecore::make< ::ecore::EReference >();
    m_EmployeeEClass = ::ecore::make< ::ecore::EClass >();
    m_PhonebookEntryEClass = ::ecore::make< ::ecore::EClass >();
}

void CompanyPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = CompanyFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Feature name of class Company
        auto &&feature = m_Company__name;

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
        feature->setEType(::ecore::EcorePackage::_instance()->getEString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::company::CompanyPackage::COMPANY__NAME);
        feature->basicsetEContainingClass(m_CompanyEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature departments of class Company
        auto &&feature = m_Company__departments;

        // ENamedElement
        feature->setName("departments");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DepartmentEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::company::CompanyPackage::COMPANY__DEPARTMENTS);
        feature->basicsetEContainingClass(m_CompanyEClass);

        // EReference
        feature->setEReferenceType(m_DepartmentEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Company
        auto &&classifier = m_CompanyEClass;

        // ENamedElement
        classifier->setName("Company");

        // EClassifier
        classifier->setClassifierID(COMPANY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CompanyEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Company__name);
            eStructuralFeatures.basicAdd(m_Company__departments);
        }
    }();

    [this]()
    { // Feature employees of class Department
        auto &&feature = m_Department__employees;

        // ENamedElement
        feature->setName("employees");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EmployeeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::company::CompanyPackage::DEPARTMENT__EMPLOYEES);
        feature->basicsetEContainingClass(m_DepartmentEClass);

        // EReference
        feature->setEReferenceType(m_EmployeeEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature manager of class Department
        auto &&feature = m_Department__manager;

        // ENamedElement
        feature->setName("manager");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_EmployeeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::company::CompanyPackage::DEPARTMENT__MANAGER);
        feature->basicsetEContainingClass(m_DepartmentEClass);

        // EReference
        feature->setEReferenceType(m_EmployeeEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature number of class Department
        auto &&feature = m_Department__number;

        // ENamedElement
        feature->setName("number");

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

        feature->setFeatureID(::company::CompanyPackage::DEPARTMENT__NUMBER);
        feature->basicsetEContainingClass(m_DepartmentEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEInt());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Department
        auto &&classifier = m_DepartmentEClass;

        // ENamedElement
        classifier->setName("Department");

        // EClassifier
        classifier->setClassifierID(DEPARTMENT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DepartmentEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Department__employees);
            eStructuralFeatures.basicAdd(m_Department__manager);
            eStructuralFeatures.basicAdd(m_Department__number);
        }
    }();

    [this]()
    { // Feature name of class Employee
        auto &&feature = m_Employee__name;

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
        feature->setEType(::ecore::EcorePackage::_instance()->getEString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::company::CompanyPackage::EMPLOYEE__NAME);
        feature->basicsetEContainingClass(m_EmployeeEClass);

        // EAttribute
        feature->setEAttributeType(
                ::ecore::EcorePackage::_instance()->getEString());
        feature->setID(false);
    }();

    [this]()
    { // Feature phonebookEntry of class Employee
        auto &&feature = m_Employee__phonebookEntry;

        // ENamedElement
        feature->setName("phonebookEntry");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PhonebookEntryEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(
                ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY);
        feature->basicsetEContainingClass(m_EmployeeEClass);

        // EReference
        feature->setEReferenceType(m_PhonebookEntryEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Employee
        auto &&classifier = m_EmployeeEClass;

        // ENamedElement
        classifier->setName("Employee");

        // EClassifier
        classifier->setClassifierID(EMPLOYEE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_EmployeeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Employee__name);
            eStructuralFeatures.basicAdd(m_Employee__phonebookEntry);
        }
    }();

    [this]()
    { // Classifier PhonebookEntry
        auto &&classifier = m_PhonebookEntryEClass;

        // ENamedElement
        classifier->setName("PhonebookEntry");

        // EClassifier
        classifier->setClassifierID(PHONEBOOKENTRY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    // Initialize package
    setName("company");
    setNsPrefix("company");
    setNsURI("http:///com.example.company.ecore");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_CompanyEClass);
        classifiers.push_back(m_DepartmentEClass);
        classifiers.push_back(m_EmployeeEClass);
        classifiers.push_back(m_PhonebookEntryEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr CompanyPackage::getEmployee()
{
    return m_EmployeeEClass;
}
::ecore::EClass_ptr CompanyPackage::getDepartment()
{
    return m_DepartmentEClass;
}
::ecore::EClass_ptr CompanyPackage::getCompany()
{
    return m_CompanyEClass;
}
::ecore::EClass_ptr CompanyPackage::getPhonebookEntry()
{
    return m_PhonebookEntryEClass;
}

::ecore::EAttribute_ptr CompanyPackage::getEmployee__name()
{
    return m_Employee__name;
}
::ecore::EReference_ptr CompanyPackage::getEmployee__phonebookEntry()
{
    return m_Employee__phonebookEntry;
}
::ecore::EReference_ptr CompanyPackage::getDepartment__employees()
{
    return m_Department__employees;
}
::ecore::EReference_ptr CompanyPackage::getDepartment__manager()
{
    return m_Department__manager;
}
::ecore::EAttribute_ptr CompanyPackage::getDepartment__number()
{
    return m_Department__number;
}
::ecore::EAttribute_ptr CompanyPackage::getCompany__name()
{
    return m_Company__name;
}
::ecore::EReference_ptr CompanyPackage::getCompany__departments()
{
    return m_Company__departments;
}

