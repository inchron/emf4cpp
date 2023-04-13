// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/ExtensionFamily.cpp
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

#include "ExtensionFamily.hpp"
#include <kdm/core/Element.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/kdm/KdmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ExtensionFamily.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::kdm;

// Default constructor
ExtensionFamily::ExtensionFamily()
{
    /*PROTECTED REGION ID(ExtensionFamilyImpl__ExtensionFamilyImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ExtensionFamily::~ExtensionFamily()
{
}

// Attributes

::kdm::core::String ExtensionFamily::getName() const
{
    return m_name;
}

void ExtensionFamily::setName(::kdm::core::String _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::kdm::KdmPackage::_instance()->getExtensionFamily__name(),
                _old_name,
                m_name
            );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::kdm::kdm::Stereotype_ptr >& ExtensionFamily::getStereotype() const
{
    if (!m_stereotype)
        return const_cast< ExtensionFamily* >(this)->getStereotype();

    return *m_stereotype;
}

::ecorecpp::mapping::EList< ::kdm::kdm::Stereotype_ptr >& ExtensionFamily::getStereotype()
{
    /*PROTECTED REGION ID(ExtensionFamily__getStereotype) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_stereotype)
        m_stereotype.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::kdm::Stereotype_ptr, -1, true, false >(this,
                        ::kdm::kdm::KdmPackage::_instance()->getExtensionFamily__stereotype()));
    /*PROTECTED REGION END*/
    return *m_stereotype;
}

