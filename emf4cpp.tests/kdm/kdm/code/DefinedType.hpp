// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/DefinedType.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#ifndef KDM_CODE_DEFINEDTYPE_HPP
#define KDM_CODE_DEFINEDTYPE_HPP

#include <kdm/code_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/source_forward.hpp>
#include <kdm/code/Datatype.hpp>

/*PROTECTED REGION ID(DefinedType_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace code
    {

        class DefinedType: public virtual ::kdm::code::Datatype
        {
        public:
            DefinedType();

            virtual ~DefinedType();

            virtual void _initialize();

            // Operations

            // Attributes

            // References
            ::kdm::code::Datatype_ptr getType();
            void setType(::kdm::code::Datatype_ptr _type);

            ::kdm::code::Datatype_ptr getCodeElement();
            void setCodeElement(::kdm::code::Datatype_ptr _codeElement);

            /*PROTECTED REGION ID(DefinedType) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

            // EObjectImpl
            virtual ::ecore::EJavaObject eGet(::ecore::EInt _featureID,
                    ::ecore::EBoolean _resolve);
            virtual void eSet(::ecore::EInt _featureID,
                    ::ecore::EJavaObject const& _newValue);
            virtual ::ecore::EBoolean eIsSet(::ecore::EInt _featureID);
            virtual void eUnset(::ecore::EInt _featureID);
            virtual ::ecore::EClass_ptr _eClass();
            virtual void _inverseAdd(::ecore::EInt _featureID,
                    ::ecore::EJavaObject const& _newValue);
            virtual void _inverseRemove(::ecore::EInt _featureID,
                    ::ecore::EJavaObject const& _oldValue);

            /*PROTECTED REGION ID(DefinedTypeImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes

            // References

            ::kdm::code::Datatype_ptr m_type;

            ::kdm::code::Datatype_ptr m_codeElement;

        };

    } // code
} // kdm

#endif // KDM_CODE_DEFINEDTYPE_HPP

