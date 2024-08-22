// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/Stereotype.hpp
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

#ifndef KDM_KDM_STEREOTYPE_HPP
#define KDM_KDM_STEREOTYPE_HPP

#include <kdm/dllKdm.hpp>
#include <kdm/kdm_forward.hpp>

#include <kdm/core_forward.hpp>
#include <kdm/core/Element.hpp>

#include "KdmPackage.hpp"

/*PROTECTED REGION ID(Stereotype_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace kdm
    {

    class EXPORT_KDM_DLL Stereotype : public virtual ::kdm::core::Element
    {
    public:
        Stereotype();

        virtual ~Stereotype();

        virtual void _initialize();

        // Operations

        // Attributes
        virtual ::kdm::core::String getName () const;
        virtual void setName (::kdm::core::String _name);

        virtual ::kdm::core::String getType () const;
        virtual void setType (::kdm::core::String _type);

        // References
        virtual const ::ecorecpp::mapping::EList< ::kdm::kdm::TagDefinition_ptr >& getTag () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::kdm::TagDefinition_ptr >& getTag ();

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = KdmPackage::STEREOTYPE;

        /*PROTECTED REGION ID(Stereotype) START*/
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

        /*PROTECTED REGION ID(StereotypeImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Stereotype_ptr _this()
        {   return std::dynamic_pointer_cast<Stereotype>(shared_from_this());}

        // Attributes

        ::kdm::core::String m_name
        {};

        ::kdm::core::String m_type
        {};

        // References

        ::ecore::EList_ptr< ::kdm::kdm::TagDefinition_ptr > m_tag;

    };

}
 // kdm
}// kdm

#endif // KDM_KDM_STEREOTYPE_HPP

