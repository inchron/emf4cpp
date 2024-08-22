// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ControlFlow.hpp
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

#ifndef KDM_ACTION_CONTROLFLOW_HPP
#define KDM_ACTION_CONTROLFLOW_HPP

#include <kdm/dllKdm.hpp>
#include <kdm/action_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include "ActionPackage.hpp"

/*PROTECTED REGION ID(ControlFlow_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace action
    {

    class EXPORT_KDM_DLL ControlFlow : public virtual ::kdm::action::AbstractActionRelationship
    {
    public:
        ControlFlow();

        virtual ~ControlFlow();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        virtual ::kdm::action::ActionElement_ptr getTo () const;
        virtual void setTo (::kdm::action::ActionElement_ptr _to);

        virtual ::kdm::action::ActionElement_ptr getFrom () const;
        virtual void setFrom (::kdm::action::ActionElement_ptr _from);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = ActionPackage::CONTROLFLOW;

        /*PROTECTED REGION ID(ControlFlow) START*/
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

        /*PROTECTED REGION ID(ControlFlowImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        ControlFlow_ptr _this()
        {   return std::dynamic_pointer_cast<ControlFlow>(shared_from_this());}

        // Attributes

        // References

        std::weak_ptr< ::kdm::action::ActionElement > m_to;

        std::weak_ptr< ::kdm::action::ActionElement > m_from;

    };

}
 // action
}// kdm

#endif // KDM_ACTION_CONTROLFLOW_HPP

