// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/AggregatedRelationship.cpp
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

#include "AggregatedRelationship.hpp"
#include <kdm/core/ModelElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/core/CorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AggregatedRelationship.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::core;

// Default constructor
AggregatedRelationship::AggregatedRelationship()
{
    /*PROTECTED REGION ID(AggregatedRelationshipImpl__AggregatedRelationshipImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AggregatedRelationship::~AggregatedRelationship()
{
}

// Attributes

::kdm::core::Integer AggregatedRelationship::getDensity() const
{
    return m_density;
}

void AggregatedRelationship::setDensity(::kdm::core::Integer _density)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::Integer _old_density = m_density;
#endif
    m_density = _density;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::core::CorePackage::_instance()->getAggregatedRelationship__density(),
                _old_density,
                m_density
            );
        eNotify(&notification);
    }
#endif
}

// References

::kdm::core::KDMEntity_ptr AggregatedRelationship::getFrom() const
{
    return m_from.lock();
}

void AggregatedRelationship::setFrom(::kdm::core::KDMEntity_ptr _from)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::KDMEntity_ptr _old_from = m_from.lock();
#endif
    m_from = _from;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::core::CorePackage::_instance()->getAggregatedRelationship__from(),
                _old_from,
                m_from.lock()
            );
        eNotify(&notification);
    }
#endif
}

::kdm::core::KDMEntity_ptr AggregatedRelationship::getTo() const
{
    return m_to.lock();
}

void AggregatedRelationship::setTo(::kdm::core::KDMEntity_ptr _to)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::KDMEntity_ptr _old_to = m_to.lock();
#endif
    m_to = _to;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::core::CorePackage::_instance()->getAggregatedRelationship__to(),
                _old_to,
                m_to.lock()
            );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::kdm::core::KDMRelationship_ptr >& AggregatedRelationship::getRelation() const
{
    if (!m_relation)
        return const_cast< AggregatedRelationship* >(this)->getRelation();

    return *m_relation;
}

::ecorecpp::mapping::EList< ::kdm::core::KDMRelationship_ptr >& AggregatedRelationship::getRelation()
{
    /*PROTECTED REGION ID(AggregatedRelationship__getRelation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_relation)
        m_relation.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::core::KDMRelationship_ptr, -1, false, false >(
                        this,
                        ::kdm::core::CorePackage::_instance()->getAggregatedRelationship__relation()));
    /*PROTECTED REGION END*/
    return *m_relation;
}

