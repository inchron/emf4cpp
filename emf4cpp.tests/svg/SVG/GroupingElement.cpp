// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/GroupingElement.cpp
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

#include "GroupingElement.hpp"
#include <SVG/StructuralElement.hpp>
#include <SVG/SvgFile.hpp>
#include <SVG/Use.hpp>
#include <SVG/Attribute.hpp>
#include <SVG/Coordinates.hpp>
#include <SVG/Dimension.hpp>
#include <SVG/Svg.hpp>
#include <SVG/GroupingElement.hpp>
#include <SVG/Marker.hpp>
#include <SVG/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "SVG/SVGPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(GroupingElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::SVG;

// Default constructor
GroupingElement::GroupingElement()
{
    /*PROTECTED REGION ID(GroupingElementImpl__GroupingElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

GroupingElement::~GroupingElement()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& GroupingElement::getGroupContent() const
{
    if (!m_groupContent)
        return const_cast< GroupingElement* >(this)->getGroupContent();

    return *m_groupContent;
}

::ecorecpp::mapping::EList< ::SVG::Element_ptr >& GroupingElement::getGroupContent()
{
    /*PROTECTED REGION ID(GroupingElement__getGroupContent) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_groupContent)
        m_groupContent.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Element_ptr,
                        -1, true, true >(this,
                        ::SVG::SVGPackage::_instance()->getGroupingElement__groupContent(),
                        ::SVG::SVGPackage::_instance()->getElement__group()));
    /*PROTECTED REGION END*/
    return *m_groupContent;
}

