// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualContainer.cpp
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

#include "ConceptualContainer.hpp"
#include <kdm/conceptual/AbstractConceptualElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/conceptual/ConceptualPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ConceptualContainer.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::conceptual;

// Default constructor
ConceptualContainer::ConceptualContainer()
{
    /*PROTECTED REGION ID(ConceptualContainerImpl__ConceptualContainerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ConceptualContainer::~ConceptualContainer()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList<
        ::kdm::conceptual::AbstractConceptualElement_ptr >& ConceptualContainer::getConceptualElement() const
{
    if (!m_conceptualElement)
        return const_cast< ConceptualContainer* >(this)->getConceptualElement();

    return *m_conceptualElement;
}

::ecorecpp::mapping::EList< ::kdm::conceptual::AbstractConceptualElement_ptr >& ConceptualContainer::getConceptualElement()
{
    /*PROTECTED REGION ID(ConceptualContainer__getConceptualElement) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_conceptualElement)
        m_conceptualElement.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::conceptual::AbstractConceptualElement_ptr, -1,
                        true, false >(this,
                        ::kdm::conceptual::ConceptualPackage::_instance()->getConceptualContainer__conceptualElement()));
    /*PROTECTED REGION END*/
    return *m_conceptualElement;
}

