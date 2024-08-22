// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/Entity.cpp
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

#include "Entity.hpp"
#include <myDsl/Type.hpp>
#include <myDsl/Entity.hpp>
#include <myDsl/Property.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "myDsl/MyDslPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Entity.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::myDsl;

// Default constructor
Entity::Entity()
{
    /*PROTECTED REGION ID(EntityImpl__EntityImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Entity::~Entity()
{
}

// Attributes

// References

::myDsl::Entity_ptr Entity::getExtends() const
{
    return m_extends.lock();
}

void Entity::setExtends(::myDsl::Entity_ptr _extends)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::myDsl::Entity_ptr _old_extends = m_extends.lock();
#endif
    m_extends = _extends;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::myDsl::MyDslPackage::_instance()->getEntity__extends(),
                _old_extends,
                m_extends.lock()
            );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::myDsl::Property_ptr >& Entity::getProperties() const
{
    if (!m_properties)
        return const_cast< Entity* >(this)->getProperties();

    return *m_properties;
}

::ecorecpp::mapping::EList< ::myDsl::Property_ptr >& Entity::getProperties()
{
    /*PROTECTED REGION ID(Entity__getProperties) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_properties)
        m_properties.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::myDsl::Property_ptr, -1, true, false >(this,
                        ::myDsl::MyDslPackage::_instance()->getEntity__properties()));
    /*PROTECTED REGION END*/
    return *m_properties;
}

