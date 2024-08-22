// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Polygon.cpp
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

#include "Polygon.hpp"
#include <SVG/Shape.hpp>
#include <SVG/SvgFile.hpp>
#include <SVG/Use.hpp>
#include <SVG/Attribute.hpp>
#include <SVG/Coordinates.hpp>
#include <SVG/Dimension.hpp>
#include <SVG/Svg.hpp>
#include <SVG/GroupingElement.hpp>
#include <SVG/Marker.hpp>
#include <SVG/Point.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "SVG/SVGPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Polygon.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::SVG;

// Default constructor
Polygon::Polygon()
{
    /*PROTECTED REGION ID(PolygonImpl__PolygonImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Polygon::~Polygon()
{
}

// Attributes

::PrimitiveTypes::String Polygon::getMarkerEnd() const
{
    return m_markerEnd;
}

void Polygon::setMarkerEnd(::PrimitiveTypes::String _markerEnd)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_markerEnd = m_markerEnd;
#endif
    m_markerEnd = _markerEnd;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getPolygon__markerEnd(),
                _old_markerEnd,
                m_markerEnd
            );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String Polygon::getMarkerStart() const
{
    return m_markerStart;
}

void Polygon::setMarkerStart(::PrimitiveTypes::String _markerStart)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_markerStart = m_markerStart;
#endif
    m_markerStart = _markerStart;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getPolygon__markerStart(),
                _old_markerStart,
                m_markerStart
            );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::SVG::Point_ptr >& Polygon::getWaypoints() const
{
    if (!m_waypoints)
        return const_cast< Polygon* >(this)->getWaypoints();

    return *m_waypoints;
}

::ecorecpp::mapping::EList< ::SVG::Point_ptr >& Polygon::getWaypoints()
{
    /*PROTECTED REGION ID(Polygon__getWaypoints) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_waypoints)
        m_waypoints.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Point_ptr,
                        -1, false, false >(this,
                        ::SVG::SVGPackage::_instance()->getPolygon__waypoints()));
    /*PROTECTED REGION END*/
    return *m_waypoints;
}

