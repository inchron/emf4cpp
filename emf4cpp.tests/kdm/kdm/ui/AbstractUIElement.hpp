// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/AbstractUIElement.hpp
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

#ifndef KDM_UI_ABSTRACTUIELEMENT_HPP
#define KDM_UI_ABSTRACTUIELEMENT_HPP

#include <kdm/dllKdm.hpp>
#include <kdm/ui_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/source_forward.hpp>
#include <kdm/code_forward.hpp>
#include <kdm/action_forward.hpp>
#include <kdm/core/KDMEntity.hpp>

#include "UiPackage.hpp"

/*PROTECTED REGION ID(AbstractUIElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace ui
    {

    class EXPORT_KDM_DLL AbstractUIElement : public virtual ::kdm::core::KDMEntity
    {
    public:
        AbstractUIElement();

        virtual ~AbstractUIElement();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        virtual const ::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& getSource () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& getSource ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::ui::AbstractUIRelationship_ptr >& getUIRelation () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::ui::AbstractUIRelationship_ptr >& getUIRelation ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement_ptr >& getImplementation () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement_ptr >& getImplementation ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& getAbstraction () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& getAbstraction ();

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = UiPackage::ABSTRACTUIELEMENT;

        /*PROTECTED REGION ID(AbstractUIElement) START*/
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

        /*PROTECTED REGION ID(AbstractUIElementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        AbstractUIElement_ptr _this()
        {   return std::dynamic_pointer_cast<AbstractUIElement>(shared_from_this());}

        // Attributes

        // References

        ::ecore::EList_ptr< ::kdm::source::SourceRef_ptr > m_source;

        ::ecore::EList_ptr< ::kdm::ui::AbstractUIRelationship_ptr > m_UIRelation;

        ::ecore::EList_ptr< ::kdm::code::AbstractCodeElement_ptr > m_implementation;

        ::ecore::EList_ptr< ::kdm::action::ActionElement_ptr > m_abstraction;

    };

}
 // ui
}// kdm

#endif // KDM_UI_ABSTRACTUIELEMENT_HPP

