// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * v_3_0/edate/Apollo11.hpp
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

#ifndef V_3_0_EDATE_APOLLO11_HPP
#define V_3_0_EDATE_APOLLO11_HPP

#include <ecore/EObject.hpp>

#include <v_3_0/edate/dllEdate.hpp>
#include <v_3_0/edate_forward.hpp>

#include <ecore_forward.hpp>

#include "EdatePackage.hpp"

/*PROTECTED REGION ID(Apollo11_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace v_3_0
{
    namespace edate
    {

    class EXPORT_V_3_0_EDATE_DLL Apollo11 : public virtual ::ecore::EObject
    {
    public:
        Apollo11();

        ~Apollo11() override;

        void _initialize() override;

        // Operations

        // Attributes
        virtual ::ecore::EDate getFirstManOnMoonDate () const;
        virtual void setFirstManOnMoonDate (::ecore::EDate _FirstManOnMoonDate);

        // References
        virtual ::v_3_0::edate::Person_ptr getMember () const;
        virtual void setMember (::v_3_0::edate::Person_ptr _Member);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = EdatePackage::APOLLO11;

        /*PROTECTED REGION ID(Apollo11) START*/
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

        /*PROTECTED REGION ID(Apollo11Impl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Apollo11_ptr _this()
        {   return std::dynamic_pointer_cast<Apollo11>(shared_from_this());}

        // Attributes

        ::ecore::EDate m_FirstManOnMoonDate
        {   "1969-07-20T20:18:00.000+0000"};

        // References

        ::v_3_0::edate::Person_ptr m_Member;

    };

}
 // edate
}// v_3_0

#endif // V_3_0_EDATE_APOLLO11_HPP

