// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/Audit.hpp
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

#ifndef KDM_KDM_AUDIT_HPP
#define KDM_KDM_AUDIT_HPP

#include <kdm/dllKdm.hpp>
#include <kdm/kdm_forward.hpp>

#include <kdm/core_forward.hpp>
#include <kdm/core/Element.hpp>

#include "KdmPackage.hpp"

/*PROTECTED REGION ID(Audit_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace kdm
    {

    class EXPORT_KDM_DLL Audit : public virtual ::kdm::core::Element
    {
    public:
        Audit();

        virtual ~Audit();

        virtual void _initialize();

        // Operations

        // Attributes
        virtual ::kdm::core::String getDescription () const;
        virtual void setDescription (::kdm::core::String _description);

        virtual ::kdm::core::String getAuthor () const;
        virtual void setAuthor (::kdm::core::String _author);

        virtual ::kdm::core::String getDate () const;
        virtual void setDate (::kdm::core::String _date);

        // References

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = KdmPackage::AUDIT;

        /*PROTECTED REGION ID(Audit) START*/
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

        /*PROTECTED REGION ID(AuditImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Audit_ptr _this()
        {   return std::dynamic_pointer_cast<Audit>(shared_from_this());}

        // Attributes

        ::kdm::core::String m_description
        {};

        ::kdm::core::String m_author
        {};

        ::kdm::core::String m_date
        {};

        // References

    };

}
 // kdm
}// kdm

#endif // KDM_KDM_AUDIT_HPP

