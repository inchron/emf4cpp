// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/AbstractPlatformElement.cpp
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

#include "AbstractPlatformElement.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/platform/PlatformPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractPlatformElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::platform;

// Default constructor
AbstractPlatformElement::AbstractPlatformElement()
{
    /*PROTECTED REGION ID(AbstractPlatformElementImpl__AbstractPlatformElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractPlatformElement::~AbstractPlatformElement()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& AbstractPlatformElement::getSource() const
{
    if (!m_source)
        return const_cast< AbstractPlatformElement* >(this)->getSource();

    return *m_source;
}

::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& AbstractPlatformElement::getSource()
{
    /*PROTECTED REGION ID(AbstractPlatformElement__getSource) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_source)
        m_source.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::source::SourceRef_ptr, -1, true, false >(this,
                        ::kdm::platform::PlatformPackage::_instance()->getAbstractPlatformElement__source()));
    /*PROTECTED REGION END*/
    return *m_source;
}

const ::ecorecpp::mapping::EList<
        ::kdm::platform::AbstractPlatformRelationship_ptr >& AbstractPlatformElement::getRelation() const
{
    if (!m_relation)
        return const_cast< AbstractPlatformElement* >(this)->getRelation();

    return *m_relation;
}

::ecorecpp::mapping::EList< ::kdm::platform::AbstractPlatformRelationship_ptr >& AbstractPlatformElement::getRelation()
{
    /*PROTECTED REGION ID(AbstractPlatformElement__getRelation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_relation)
        m_relation.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::platform::AbstractPlatformRelationship_ptr, -1,
                        true, false >(this,
                        ::kdm::platform::PlatformPackage::_instance()->getAbstractPlatformElement__relation()));
    /*PROTECTED REGION END*/
    return *m_relation;
}

const ::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& AbstractPlatformElement::getAbstraction() const
{
    if (!m_abstraction)
        return const_cast< AbstractPlatformElement* >(this)->getAbstraction();

    return *m_abstraction;
}

::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& AbstractPlatformElement::getAbstraction()
{
    /*PROTECTED REGION ID(AbstractPlatformElement__getAbstraction) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_abstraction)
        m_abstraction.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::action::ActionElement_ptr, -1, true, false >(
                        this,
                        ::kdm::platform::PlatformPackage::_instance()->getAbstractPlatformElement__abstraction()));
    /*PROTECTED REGION END*/
    return *m_abstraction;
}

const ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement_ptr >& AbstractPlatformElement::getImplementation() const
{
    if (!m_implementation)
        return const_cast< AbstractPlatformElement* >(this)->getImplementation();

    return *m_implementation;
}

::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement_ptr >& AbstractPlatformElement::getImplementation()
{
    /*PROTECTED REGION ID(AbstractPlatformElement__getImplementation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_implementation)
        m_implementation.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::code::AbstractCodeElement_ptr, -1, false, false >(
                        this,
                        ::kdm::platform::PlatformPackage::_instance()->getAbstractPlatformElement__implementation()));
    /*PROTECTED REGION END*/
    return *m_implementation;
}

