// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/EventModel.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016-2019 <emf4cpp@inchron.com>
 * Copyright (C) INCHRON AG 2019-2021 <emf4cpp@inchron.com>
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

#include "EventModel.hpp"
#include <kdm/kdm/KDMModel.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/event/AbstractEventElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/event/EventPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EventModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::event;

// Default constructor
EventModel::EventModel()
{
    /*PROTECTED REGION ID(EventModelImpl__EventModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EventModel::~EventModel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::event::AbstractEventElement_ptr >& EventModel::getEventElement() const
{
    if (!m_eventElement)
        return const_cast< EventModel* >(this)->getEventElement();

    return *m_eventElement;
}

::ecorecpp::mapping::EList< ::kdm::event::AbstractEventElement_ptr >& EventModel::getEventElement()
{
    /*PROTECTED REGION ID(EventModel__getEventElement) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eventElement)
        m_eventElement.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::event::AbstractEventElement_ptr, -1, true, false >(
                        this,
                        ::kdm::event::EventPackage::_instance()->getEventModel__eventElement()));
    /*PROTECTED REGION END*/
    return *m_eventElement;
}

