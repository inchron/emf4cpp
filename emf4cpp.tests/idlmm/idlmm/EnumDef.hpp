// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/EnumDef.hpp
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

#ifndef IDLMM_ENUMDEF_HPP
#define IDLMM_ENUMDEF_HPP

#include <idlmm/dllIdlmm.hpp>
#include <idlmm_forward.hpp>

#include <ecore_forward.hpp>
#include <idlmm/TypedefDef.hpp>

#include "IdlmmPackage.hpp"

/*PROTECTED REGION ID(EnumDef_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace idlmm
{

class EXPORT_IDLMM_DLL EnumDef : public virtual ::idlmm::TypedefDef
{
public:
    EnumDef();

    virtual ~EnumDef();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual std::vector< ::ecore::EString > const& getMembers () const;
    virtual void setMembers (std::vector< ::ecore::EString > const& _members);

    virtual void addMembers (::ecore::EString const& _new_element_in_members);
    virtual void setMembersAt ( size_t _position, ::ecore::EString const& _new_element_in_members);
    virtual void deleteMembersAt ( size_t _position );

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = IdlmmPackage::ENUMDEF;

    /*PROTECTED REGION ID(EnumDef) START*/
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

    /*PROTECTED REGION ID(EnumDefImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EnumDef_ptr _this()
    {   return std::dynamic_pointer_cast<EnumDef>(shared_from_this());}

    // Attributes

    std::vector< ::ecore::EString > m_members
    {};

    // References

};

}
 // idlmm

#endif // IDLMM_ENUMDEF_HPP

