// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/EmployeeImpl.cpp
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

#include "Employee.hpp"
#include <company/CompanyPackage.hpp>
#include <company/PhonebookEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EmployeeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::company;

void Employee::_initialize()
{
    // Supertypes

    // References
    if (m_phonebookEntry)
    {
        m_phonebookEntry->_initialize();
    }

    /*PROTECTED REGION ID(EmployeeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Employee::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::company::CompanyPackage::EMPLOYEE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getName());
    }
        return _any;
    case ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY:
    {
        _any = ::ecore::as < ::ecore::EObject > (getPhonebookEntry());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Employee::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::EMPLOYEE__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::company::PhonebookEntry > (_t0);
        setPhonebookEntry(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean Employee::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::EMPLOYEE__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getName());
    case ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY:
        return getPhonebookEntry().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Employee::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Employee::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::company::CompanyPackage::_instance()->getEmployee();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Employee::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Employee::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::company::CompanyPackage::EMPLOYEE__PHONEBOOKENTRY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

