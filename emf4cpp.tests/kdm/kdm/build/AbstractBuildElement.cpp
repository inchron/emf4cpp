// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/AbstractBuildElement.cpp
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

#include "AbstractBuildElement.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>
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

/*PROTECTED REGION ID(AbstractBuildElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::build;

// Default constructor
AbstractBuildElement::AbstractBuildElement()
{
    /*PROTECTED REGION ID(AbstractBuildElementImpl__AbstractBuildElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractBuildElement::~AbstractBuildElement()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildRelationship_ptr >& AbstractBuildElement::getBuildRelation() const
{
    if (!m_buildRelation)
        return const_cast< AbstractBuildElement* >(this)->getBuildRelation();

    return *m_buildRelation;
}

::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildRelationship_ptr >& AbstractBuildElement::getBuildRelation()
{
    /*PROTECTED REGION ID(AbstractBuildElement__getBuildRelation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_buildRelation)
        m_buildRelation.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::build::AbstractBuildRelationship_ptr, -1, true,
                        false >(this,
                        ::kdm::build::BuildPackage::_instance()->getAbstractBuildElement__buildRelation()));
    /*PROTECTED REGION END*/
    return *m_buildRelation;
}

