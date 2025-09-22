// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/HasValue.hpp
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

#ifndef KDM_CODE_HASVALUE_HPP
#define KDM_CODE_HASVALUE_HPP

#include <kdm/code_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>

#include "CodePackage.hpp"

#include "../dllKdm.hpp"

/*PROTECTED REGION ID(HasValue_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace code
    {

    class EXPORT_KDM_DLL HasValue : public virtual ::kdm::code::AbstractCodeRelationship
    {
    public:
        HasValue();

        ~HasValue() override;

        void _initialize() override;

        // Operations

        // Attributes

        // References
        virtual ::kdm::code::CodeItem_ptr getTo () const;
        virtual void setTo (::kdm::code::CodeItem_ptr _to);

        virtual ::kdm::code::CodeItem_ptr getFrom () const;
        virtual void setFrom (::kdm::code::CodeItem_ptr _from);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = CodePackage::HASVALUE;

        /*PROTECTED REGION ID(HasValue) START*/
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

        /*PROTECTED REGION ID(HasValueImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        HasValue_ptr _this()
        {   return std::dynamic_pointer_cast<HasValue>(shared_from_this());}

        // Attributes

        // References

        std::weak_ptr< ::kdm::code::CodeItem > m_to;

        std::weak_ptr< ::kdm::code::CodeItem > m_from;

    };

}
 // code
}// kdm

#endif // KDM_CODE_HASVALUE_HPP

