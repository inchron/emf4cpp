// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/Machine.cpp
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

#include "Machine.hpp"
#include <kdm/platform/AbstractPlatformElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/platform/DeployedComponent.hpp>
#include <kdm/platform/DeployedResource.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/platform/PlatformPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Machine.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::platform;

// Default constructor
Machine::Machine()
{
    /*PROTECTED REGION ID(MachineImpl__MachineImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Machine::~Machine()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::platform::DeployedComponent_ptr >& Machine::getDeployedComponent() const
{
    if (!m_deployedComponent)
        return const_cast< Machine* >(this)->getDeployedComponent();

    return *m_deployedComponent;
}

::ecorecpp::mapping::EList< ::kdm::platform::DeployedComponent_ptr >& Machine::getDeployedComponent()
{
    /*PROTECTED REGION ID(Machine__getDeployedComponent) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_deployedComponent)
        m_deployedComponent.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::platform::DeployedComponent_ptr, -1, true, false >(
                        this,
                        ::kdm::platform::PlatformPackage::_instance()->getMachine__deployedComponent()));
    /*PROTECTED REGION END*/
    return *m_deployedComponent;
}

const ::ecorecpp::mapping::EList< ::kdm::platform::DeployedResource_ptr >& Machine::getDeployedResource() const
{
    if (!m_deployedResource)
        return const_cast< Machine* >(this)->getDeployedResource();

    return *m_deployedResource;
}

::ecorecpp::mapping::EList< ::kdm::platform::DeployedResource_ptr >& Machine::getDeployedResource()
{
    /*PROTECTED REGION ID(Machine__getDeployedResource) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_deployedResource)
        m_deployedResource.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::platform::DeployedResource_ptr, -1, true, false >(
                        this,
                        ::kdm::platform::PlatformPackage::_instance()->getMachine__deployedResource()));
    /*PROTECTED REGION END*/
    return *m_deployedResource;
}

