// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * company/Company.cpp
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

#include "Company.hpp"
#include <company/Department.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "company/CompanyPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Company.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::company;

// Default constructor
Company::Company()
{
    /*PROTECTED REGION ID(CompanyImpl__CompanyImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Company::~Company()
{
}

// Attributes

::ecore::EString const& Company::getName() const
{
    return m_name;
}

void Company::setName(::ecore::EString const &_name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::company::CompanyPackage::_instance()->getCompany__name(),
                _old_name,
                m_name
            );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::company::Department_ptr >& Company::getDepartments() const
{
    if (!m_departments)
        return const_cast< Company* >(this)->getDepartments();

    return *m_departments;
}

::ecorecpp::mapping::EList< ::company::Department_ptr >& Company::getDepartments()
{
    /*PROTECTED REGION ID(Company__getDepartments) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_departments)
        m_departments.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::company::Department_ptr, -1, true, false >(this,
                        ::company::CompanyPackage::_instance()->getCompany__departments()));
    /*PROTECTED REGION END*/
    return *m_departments;
}

