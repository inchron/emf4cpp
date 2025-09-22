// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/Segment.hpp
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

#ifndef KDM_KDM_SEGMENT_HPP
#define KDM_KDM_SEGMENT_HPP

#include <kdm/kdm_forward.hpp>

#include <kdm/core_forward.hpp>
#include <kdm/kdm/KDMFramework.hpp>

#include "KdmPackage.hpp"

#include "../dllKdm.hpp"

/*PROTECTED REGION ID(Segment_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace kdm
    {

    class EXPORT_KDM_DLL Segment : public virtual ::kdm::kdm::KDMFramework
    {
    public:
        Segment();

        ~Segment() override;

        void _initialize() override;

        // Operations

        // Attributes

        // References
        virtual const ::ecorecpp::mapping::EList< ::kdm::kdm::Segment_ptr >& getSegment () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::kdm::Segment_ptr >& getSegment ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::kdm::KDMModel_ptr >& getModel () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::kdm::KDMModel_ptr >& getModel ();

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = KdmPackage::SEGMENT;

        /*PROTECTED REGION ID(Segment) START*/
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

        /*PROTECTED REGION ID(SegmentImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Segment_ptr _this()
        {   return std::dynamic_pointer_cast<Segment>(shared_from_this());}

        // Attributes

        // References

        ::ecore::EList_ptr< ::kdm::kdm::Segment_ptr > m_segment;

        ::ecore::EList_ptr< ::kdm::kdm::KDMModel_ptr > m_model;

    };

}
 // kdm
}// kdm

#endif // KDM_KDM_SEGMENT_HPP

