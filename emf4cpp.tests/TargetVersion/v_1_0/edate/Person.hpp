// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * v_1_0/edate/Person.hpp
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

#ifndef V_1_0_EDATE_PERSON_HPP
#define V_1_0_EDATE_PERSON_HPP

#include <ecore/EObject.hpp>

#include <v_1_0/edate/dllEdate.hpp>
#include <v_1_0/edate_forward.hpp>

#include <ecore_forward.hpp>

#include "EdatePackage.hpp"

/*PROTECTED REGION ID(Person_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace v_1_0
{
    namespace edate
    {

    class EXPORT_V_1_0_EDATE_DLL Person : public virtual ::ecore::EObject
    {
    public:
        Person();

        ~Person() override;

        void _initialize() override;

        // Operations

        // Attributes
        virtual ::ecore::EDate getBirthday () const;
        virtual void setBirthday (::ecore::EDate _Birthday);

        virtual ::ecore::EString const& getName () const;
        virtual void setName (::ecore::EString const& _Name);

        // References

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = EdatePackage::PERSON;

        /*PROTECTED REGION ID(Person) START*/
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

        /*PROTECTED REGION ID(PersonImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Person_ptr _this()
        {   return std::dynamic_pointer_cast<Person>(shared_from_this());}

        // Attributes

        ::ecore::EDate m_Birthday
        {};

        ::ecore::EString m_Name
        {};

        // References

    };

}
 // edate
}// v_1_0

#endif // V_1_0_EDATE_PERSON_HPP

