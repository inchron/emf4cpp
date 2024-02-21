// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/Base10.hpp
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

#ifndef BASE_BASE1_BASE10_HPP
#define BASE_BASE1_BASE10_HPP

#include <base/dllBase.hpp>
#include <base/base1_forward.hpp>

#include <ecore_forward.hpp>
#include <derived_forward.hpp>
#include <base/Base01.hpp>

#include "Base1Package.hpp"

/*PROTECTED REGION ID(Base10_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace base
{
    namespace base1
    {

    class EXPORT_BASE_DLL Base10 : public virtual ::base::Base01
    {
    public:
        Base10();

        ~Base10() override;

        void _initialize() override;

        // Operations

        // Attributes
        virtual ::ecore::EInt getValBase10 () const;
        virtual void setValBase10 (::ecore::EInt _valBase10);

        // References

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = Base1Package::BASE10;

        /*PROTECTED REGION ID(Base10) START*/
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

        /*PROTECTED REGION ID(Base10Impl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Base10_ptr _this()
        {   return std::dynamic_pointer_cast<Base10>(shared_from_this());}

        // Attributes

        ::ecore::EInt m_valBase10
        {};

        // References

    };

}
 // base1
}// base

#endif // BASE_BASE1_BASE10_HPP

