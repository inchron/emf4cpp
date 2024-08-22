// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildDescription.cpp
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

#include "BuildDescription.hpp"
#include <kdm/build/BuildResource.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/build/AbstractBuildElement.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/build/BuildPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(BuildDescription.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::build;

// Default constructor
BuildDescription::BuildDescription()
{
    /*PROTECTED REGION ID(BuildDescriptionImpl__BuildDescriptionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

BuildDescription::~BuildDescription()
{
}

// Attributes

::kdm::core::String BuildDescription::getText() const
{
    return m_text;
}

void BuildDescription::setText(::kdm::core::String _text)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_text = m_text;
#endif
    m_text = _text;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::build::BuildPackage::_instance()->getBuildDescription__text(),
                _old_text,
                m_text
            );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& BuildDescription::getSource() const
{
    if (!m_source)
        return const_cast< BuildDescription* >(this)->getSource();

    return *m_source;
}

::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& BuildDescription::getSource()
{
    /*PROTECTED REGION ID(BuildDescription__getSource) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_source)
        m_source.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::source::SourceRef_ptr, -1, true, false >(this,
                        ::kdm::build::BuildPackage::_instance()->getBuildDescription__source()));
    /*PROTECTED REGION END*/
    return *m_source;
}

