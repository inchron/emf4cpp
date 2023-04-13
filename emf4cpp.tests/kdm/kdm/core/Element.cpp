// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/Element.cpp
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

#include "Element.hpp"
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/core/CorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Element.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::core;

// Default constructor
Element::Element()
{
    /*PROTECTED REGION ID(ElementImpl__ElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Element::~Element()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::kdm::Attribute_ptr >& Element::getAttribute() const
{
    if (!m_attribute)
        return const_cast< Element* >(this)->getAttribute();

    return *m_attribute;
}

::ecorecpp::mapping::EList< ::kdm::kdm::Attribute_ptr >& Element::getAttribute()
{
    /*PROTECTED REGION ID(Element__getAttribute) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_attribute)
        m_attribute.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::kdm::Attribute_ptr, -1, true, false >(this,
                        ::kdm::core::CorePackage::_instance()->getElement__attribute()));
    /*PROTECTED REGION END*/
    return *m_attribute;
}

const ::ecorecpp::mapping::EList< ::kdm::kdm::Annotation_ptr >& Element::getAnnotation() const
{
    if (!m_annotation)
        return const_cast< Element* >(this)->getAnnotation();

    return *m_annotation;
}

::ecorecpp::mapping::EList< ::kdm::kdm::Annotation_ptr >& Element::getAnnotation()
{
    /*PROTECTED REGION ID(Element__getAnnotation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_annotation)
        m_annotation.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::kdm::Annotation_ptr, -1, true, false >(this,
                        ::kdm::core::CorePackage::_instance()->getElement__annotation()));
    /*PROTECTED REGION END*/
    return *m_annotation;
}

