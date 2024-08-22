// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/DataAction.cpp
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

#include "DataAction.hpp"
#include <kdm/data/AbstractDataElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/data/DataEvent.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/data/DataPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DataAction.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::data;

// Default constructor
DataAction::DataAction()
{
    /*PROTECTED REGION ID(DataActionImpl__DataActionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

DataAction::~DataAction()
{
}

// Attributes

::kdm::core::String DataAction::getKind() const
{
    return m_kind;
}

void DataAction::setKind(::kdm::core::String _kind)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_kind = m_kind;
#endif
    m_kind = _kind;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::data::DataPackage::_instance()->getDataAction__kind(),
                _old_kind,
                m_kind
            );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& DataAction::getImplementation() const
{
    if (!m_implementation)
        return const_cast< DataAction* >(this)->getImplementation();

    return *m_implementation;
}

::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& DataAction::getImplementation()
{
    /*PROTECTED REGION ID(DataAction__getImplementation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_implementation)
        m_implementation.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::action::ActionElement_ptr, -1, false, false >(
                        this,
                        ::kdm::data::DataPackage::_instance()->getDataAction__implementation()));
    /*PROTECTED REGION END*/
    return *m_implementation;
}

const ::ecorecpp::mapping::EList< ::kdm::data::DataEvent_ptr >& DataAction::getDataElement() const
{
    if (!m_dataElement)
        return const_cast< DataAction* >(this)->getDataElement();

    return *m_dataElement;
}

::ecorecpp::mapping::EList< ::kdm::data::DataEvent_ptr >& DataAction::getDataElement()
{
    /*PROTECTED REGION ID(DataAction__getDataElement) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_dataElement)
        m_dataElement.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::data::DataEvent_ptr, -1, true, false >(this,
                        ::kdm::data::DataPackage::_instance()->getDataAction__dataElement()));
    /*PROTECTED REGION END*/
    return *m_dataElement;
}

