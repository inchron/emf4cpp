// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Svg.cpp
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

#include "Svg.hpp"
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

/*PROTECTED REGION ID(Svg.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::SVG;

// Default constructor
Svg::Svg()
{
    /*PROTECTED REGION ID(SvgImpl__SvgImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Svg::~Svg()
{
}

// Attributes

::PrimitiveTypes::String Svg::getNamespace() const
{
    return m_namespace;
}

void Svg::setNamespace(::PrimitiveTypes::String _namespace)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_namespace = m_namespace;
#endif
    m_namespace = _namespace;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getSvg__namespace(),
                _old_namespace,
                m_namespace
            );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String Svg::getVersion() const
{
    return m_version;
}

void Svg::setVersion(::PrimitiveTypes::String _version)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_version = m_version;
#endif
    m_version = _version;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getSvg__version(),
                _old_version,
                m_version
            );
        eNotify(&notification);
    }
#endif
}

::PrimitiveTypes::String Svg::getBaseProfile() const
{
    return m_baseProfile;
}

void Svg::setBaseProfile(::PrimitiveTypes::String _baseProfile)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::PrimitiveTypes::String _old_baseProfile = m_baseProfile;
#endif
    m_baseProfile = _baseProfile;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::SVG::SVGPackage::_instance()->getSvg__baseProfile(),
                _old_baseProfile,
                m_baseProfile
            );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::SVG::SvgFile_ptr >& Svg::getOwner_SVG() const
{
    if (!m_owner_SVG)
        return const_cast< Svg* >(this)->getOwner_SVG();

    return *m_owner_SVG;
}

::ecorecpp::mapping::EList< ::SVG::SvgFile_ptr >& Svg::getOwner_SVG()
{
    /*PROTECTED REGION ID(Svg__getOwner_SVG) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_owner_SVG)
        m_owner_SVG.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl< ::SVG::SvgFile_ptr,
                        -1, false, true >(this,
                        ::SVG::SVGPackage::_instance()->getSvg__owner_SVG(),
                        ::SVG::SVGPackage::_instance()->getSvgFile__tag()));
    /*PROTECTED REGION END*/
    return *m_owner_SVG;
}

const ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& Svg::getChildren() const
{
    if (!m_children)
        return const_cast< Svg* >(this)->getChildren();

    return *m_children;
}

::ecorecpp::mapping::EList< ::SVG::Element_ptr >& Svg::getChildren()
{
    /*PROTECTED REGION ID(Svg__getChildren) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_children)
        m_children.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Element_ptr,
                        -1, true, true >(this,
                        ::SVG::SVGPackage::_instance()->getSvg__children(),
                        ::SVG::SVGPackage::_instance()->getElement__root()));
    /*PROTECTED REGION END*/
    return *m_children;
}

