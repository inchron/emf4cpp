// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/AbstractDataElement.cpp
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

#include "AbstractDataElement.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/data/DataPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractDataElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::data;

// Default constructor
AbstractDataElement::AbstractDataElement()
{
    /*PROTECTED REGION ID(AbstractDataElementImpl__AbstractDataElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractDataElement::~AbstractDataElement()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& AbstractDataElement::getSource() const
{
    if (!m_source)
        return const_cast< AbstractDataElement* >(this)->getSource();

    return *m_source;
}

::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& AbstractDataElement::getSource()
{
    /*PROTECTED REGION ID(AbstractDataElement__getSource) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_source)
        m_source.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::source::SourceRef_ptr, -1, true, false >(this,
                        ::kdm::data::DataPackage::_instance()->getAbstractDataElement__source()));
    /*PROTECTED REGION END*/
    return *m_source;
}

const ::ecorecpp::mapping::EList< ::kdm::data::AbstractDataRelationship_ptr >& AbstractDataElement::getDataRelation() const
{
    if (!m_dataRelation)
        return const_cast< AbstractDataElement* >(this)->getDataRelation();

    return *m_dataRelation;
}

::ecorecpp::mapping::EList< ::kdm::data::AbstractDataRelationship_ptr >& AbstractDataElement::getDataRelation()
{
    /*PROTECTED REGION ID(AbstractDataElement__getDataRelation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_dataRelation)
        m_dataRelation.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::data::AbstractDataRelationship_ptr, -1, true,
                        false >(this,
                        ::kdm::data::DataPackage::_instance()->getAbstractDataElement__dataRelation()));
    /*PROTECTED REGION END*/
    return *m_dataRelation;
}

const ::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& AbstractDataElement::getAbstraction() const
{
    if (!m_abstraction)
        return const_cast< AbstractDataElement* >(this)->getAbstraction();

    return *m_abstraction;
}

::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& AbstractDataElement::getAbstraction()
{
    /*PROTECTED REGION ID(AbstractDataElement__getAbstraction) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_abstraction)
        m_abstraction.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::action::ActionElement_ptr, -1, true, false >(
                        this,
                        ::kdm::data::DataPackage::_instance()->getAbstractDataElement__abstraction()));
    /*PROTECTED REGION END*/
    return *m_abstraction;
}

