// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/base2/Base20.hpp
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

#ifndef BASE_BASE1_BASE2_BASE20_HPP
#define BASE_BASE1_BASE2_BASE20_HPP

#include <base/dllBase.hpp>
#include <base/base1/base2_forward.hpp>

#include <ecore_forward.hpp>
#include <derived_forward.hpp>
#include <base/base1/Base10.hpp>
#include <base/base1/Base11.hpp>

#include "Base2Package.hpp"

/*PROTECTED REGION ID(Base20_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace base
{
    namespace base1
    {
        namespace base2
        {

        class EXPORT_BASE_DLL Base20 : public virtual ::base::base1::Base10, public virtual ::base::base1::Base11
        {
        public:
            Base20();

            virtual ~Base20();

            virtual void _initialize();

            // Operations

            // Attributes
            virtual ::ecore::EInt getValBase20 () const;
            virtual void setValBase20 (::ecore::EInt _valBase20);

            // References

            /* This is the same value as getClassifierId() returns, but as a static
             * value it can be used in template expansions. */
            static const int classifierId = Base2Package::BASE20;

            /*PROTECTED REGION ID(Base20) START*/
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

            /*PROTECTED REGION ID(Base20Impl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            Base20_ptr _this()
            {   return std::dynamic_pointer_cast<Base20>(shared_from_this());}

            // Attributes

            ::ecore::EInt m_valBase20
            {};

            // References

        };

    }
// base2
}// base1
} // base

#endif // BASE_BASE1_BASE2_BASE20_HPP

