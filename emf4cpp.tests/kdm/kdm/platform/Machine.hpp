// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/Machine.hpp
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

#ifndef KDM_PLATFORM_MACHINE_HPP
#define KDM_PLATFORM_MACHINE_HPP

#include <kdm/dllKdm.hpp>
#include <kdm/platform_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/source_forward.hpp>
#include <kdm/action_forward.hpp>
#include <kdm/code_forward.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include "PlatformPackage.hpp"

/*PROTECTED REGION ID(Machine_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace platform
    {

    class EXPORT_KDM_DLL Machine : public virtual ::kdm::platform::AbstractPlatformElement
    {
    public:
        Machine();

        virtual ~Machine();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        virtual const ::ecorecpp::mapping::EList< ::kdm::platform::DeployedComponent_ptr >& getDeployedComponent () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::platform::DeployedComponent_ptr >& getDeployedComponent ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::platform::DeployedResource_ptr >& getDeployedResource () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::platform::DeployedResource_ptr >& getDeployedResource ();

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = PlatformPackage::MACHINE;

        /*PROTECTED REGION ID(Machine) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
        virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
        virtual void eUnset ( ::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass ();
        virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
        virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

        /*PROTECTED REGION ID(MachineImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Machine_ptr _this()
        {   return std::dynamic_pointer_cast<Machine>(shared_from_this());}

        // Attributes

        // References

        ::ecore::EList_ptr< ::kdm::platform::DeployedComponent_ptr > m_deployedComponent;

        ::ecore::EList_ptr< ::kdm::platform::DeployedResource_ptr > m_deployedResource;

    };

}
 // platform
}// kdm

#endif // KDM_PLATFORM_MACHINE_HPP

