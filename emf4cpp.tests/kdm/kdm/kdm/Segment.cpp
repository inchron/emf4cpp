// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/Segment.cpp
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

#include "Segment.hpp"
#include <kdm/kdm/KDMFramework.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/kdm/Segment.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/kdm/KdmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Segment.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::kdm;

// Default constructor
Segment::Segment()
{
    /*PROTECTED REGION ID(SegmentImpl__SegmentImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Segment::~Segment()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::kdm::Segment_ptr >& Segment::getSegment() const
{
    if (!m_segment)
        return const_cast< Segment* >(this)->getSegment();

    return *m_segment;
}

::ecorecpp::mapping::EList< ::kdm::kdm::Segment_ptr >& Segment::getSegment()
{
    /*PROTECTED REGION ID(Segment__getSegment) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_segment)
        m_segment.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::kdm::Segment_ptr, -1, true, false >(this,
                        ::kdm::kdm::KdmPackage::_instance()->getSegment__segment()));
    /*PROTECTED REGION END*/
    return *m_segment;
}

const ::ecorecpp::mapping::EList< ::kdm::kdm::KDMModel_ptr >& Segment::getModel() const
{
    if (!m_model)
        return const_cast< Segment* >(this)->getModel();

    return *m_model;
}

::ecorecpp::mapping::EList< ::kdm::kdm::KDMModel_ptr >& Segment::getModel()
{
    /*PROTECTED REGION ID(Segment__getModel) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_model)
        m_model.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::kdm::KDMModel_ptr, -1, true, false >(this,
                        ::kdm::kdm::KdmPackage::_instance()->getSegment__model()));
    /*PROTECTED REGION END*/
    return *m_model;
}

