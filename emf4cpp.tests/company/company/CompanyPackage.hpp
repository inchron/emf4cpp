// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/CompanyPackage.hpp
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

#ifndef _COMPANYPACKAGE_HPP
#define _COMPANYPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <company_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include "dllCompany.hpp"

namespace company
{

class EXPORT_COMPANY_DLL CompanyPackage : public virtual ::ecore::EPackage
{
public:

    static CompanyPackage_ptr _instance();
    static CompanyPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier Company
    static const int COMPANY = 0;
    static const int COMPANY__NAME = 0;
    static const int COMPANY__DEPARTMENTS = 1;
    static const int COMPANY_FEATURE_COUNT = 2;

    // IDs for classifier Department
    static const int DEPARTMENT = 1;
    static const int DEPARTMENT__EMPLOYEES = 0;
    static const int DEPARTMENT__MANAGER = 1;
    static const int DEPARTMENT__NUMBER = 2;
    static const int DEPARTMENT_FEATURE_COUNT = 3;

    // IDs for classifier Employee
    static const int EMPLOYEE = 2;
    static const int EMPLOYEE__NAME = 0;
    static const int EMPLOYEE__PHONEBOOKENTRY = 1;
    static const int EMPLOYEE_FEATURE_COUNT = 2;

    // IDs for classifier PhonebookEntry
    static const int PHONEBOOKENTRY = 3;
    static const int PHONEBOOKENTRY_FEATURE_COUNT = 0;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getEmployee();

    virtual ::ecore::EClass_ptr getDepartment();

    virtual ::ecore::EClass_ptr getCompany();

    virtual ::ecore::EClass_ptr getPhonebookEntry();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getEmployee__name();

    virtual ::ecore::EReference_ptr getEmployee__phonebookEntry();

    virtual ::ecore::EReference_ptr getDepartment__employees();

    virtual ::ecore::EReference_ptr getDepartment__manager();

    virtual ::ecore::EAttribute_ptr getDepartment__number();

    virtual ::ecore::EAttribute_ptr getCompany__name();

    virtual ::ecore::EReference_ptr getCompany__departments();

protected:

    static ::ecore::Ptr< CompanyPackage > s_instance;

    CompanyPackage();
    void _initPackage();

    ::ecore::EClass_ptr m_CompanyEClass;
    ::ecore::EClass_ptr m_DepartmentEClass;
    ::ecore::EClass_ptr m_EmployeeEClass;
    ::ecore::EClass_ptr m_PhonebookEntryEClass;

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_Employee__name;

    ::ecore::EReference_ptr m_Employee__phonebookEntry;

    ::ecore::EReference_ptr m_Department__employees;

    ::ecore::EReference_ptr m_Department__manager;

    ::ecore::EAttribute_ptr m_Department__number;

    ::ecore::EAttribute_ptr m_Company__name;

    ::ecore::EReference_ptr m_Company__departments;

};

}
 // company

#endif // _COMPANYPACKAGE_HPP

