// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/AbstractEventElement.hpp
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

#ifndef KDM_EVENT_ABSTRACTEVENTELEMENT_HPP
#define KDM_EVENT_ABSTRACTEVENTELEMENT_HPP

#include <kdm/event_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/source_forward.hpp>
#include <kdm/action_forward.hpp>
#include <kdm/code_forward.hpp>
#include <kdm/core/KDMEntity.hpp>

#include "EventPackage.hpp"

#include "../dllKdm.hpp"

/*PROTECTED REGION ID(AbstractEventElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace event
    {

    class EXPORT_KDM_DLL AbstractEventElement : public virtual ::kdm::core::KDMEntity
    {
    public:
        AbstractEventElement();

        ~AbstractEventElement() override;

        void _initialize() override;

        // Operations

        // Attributes

        // References
        virtual const ::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& getSource () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& getSource ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::event::AbstractEventRelationship_ptr >& getEventRelation () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::event::AbstractEventRelationship_ptr >& getEventRelation ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& getAbstraction () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& getAbstraction ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement_ptr >& getImplementation () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement_ptr >& getImplementation ();

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = EventPackage::ABSTRACTEVENTELEMENT;

        /*PROTECTED REGION ID(AbstractEventElement) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve) override;
        void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
        ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID) override;
        void eUnset ( ::ecore::EInt _featureID) override;
        ::ecore::EClass_ptr _eClass () override;
        void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
        void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue) override;

        /*PROTECTED REGION ID(AbstractEventElementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        AbstractEventElement_ptr _this()
        {   return std::dynamic_pointer_cast<AbstractEventElement>(shared_from_this());}

        // Attributes

        // References

        ::ecore::EList_ptr< ::kdm::source::SourceRef_ptr > m_source;

        ::ecore::EList_ptr< ::kdm::event::AbstractEventRelationship_ptr > m_eventRelation;

        ::ecore::EList_ptr< ::kdm::action::ActionElement_ptr > m_abstraction;

        ::ecore::EList_ptr< ::kdm::code::AbstractCodeElement_ptr > m_implementation;

    };

}
 // event
}// kdm

#endif // KDM_EVENT_ABSTRACTEVENTELEMENT_HPP

