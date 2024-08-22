// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/AbstractStructureElement.hpp
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

#ifndef KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT_HPP
#define KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT_HPP

#include <kdm/dllKdm.hpp>
#include <kdm/structure_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/core/KDMEntity.hpp>

#include "StructurePackage.hpp"

/*PROTECTED REGION ID(AbstractStructureElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace structure
    {

    class EXPORT_KDM_DLL AbstractStructureElement : public virtual ::kdm::core::KDMEntity
    {
    public:
        AbstractStructureElement();

        virtual ~AbstractStructureElement();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        virtual const ::ecorecpp::mapping::EList< ::kdm::core::AggregatedRelationship_ptr >& getAggregated () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::core::AggregatedRelationship_ptr >& getAggregated ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::core::KDMEntity_ptr >& getImplementation () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::core::KDMEntity_ptr >& getImplementation ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureElement_ptr >& getStructureElement () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureElement_ptr >& getStructureElement ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureRelationship_ptr >& getStructureRelationship () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureRelationship_ptr >& getStructureRelationship ();

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = StructurePackage::ABSTRACTSTRUCTUREELEMENT;

        /*PROTECTED REGION ID(AbstractStructureElement) START*/
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

        /*PROTECTED REGION ID(AbstractStructureElementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        AbstractStructureElement_ptr _this()
        {   return std::dynamic_pointer_cast<AbstractStructureElement>(shared_from_this());}

        // Attributes

        // References

        ::ecore::EList_ptr< ::kdm::core::AggregatedRelationship_ptr > m_aggregated;

        ::ecore::EList_ptr< ::kdm::core::KDMEntity_ptr > m_implementation;

        ::ecore::EList_ptr< ::kdm::structure::AbstractStructureElement_ptr > m_structureElement;

        ::ecore::EList_ptr< ::kdm::structure::AbstractStructureRelationship_ptr > m_structureRelationship;

    };

}
 // structure
}// kdm

#endif // KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT_HPP

