// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/ExceptionDef.hpp
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

#ifndef IDLMM_EXCEPTIONDEF_HPP
#define IDLMM_EXCEPTIONDEF_HPP

#include <idlmm/dllIdlmm.hpp>
#include <idlmm_forward.hpp>

#include <ecore_forward.hpp>
#include <idlmm/Contained.hpp>

#include "IdlmmPackage.hpp"

/*PROTECTED REGION ID(ExceptionDef_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace idlmm
{

class EXPORT_IDLMM_DLL ExceptionDef : public virtual ::idlmm::Contained
{
public:
    ExceptionDef();

    ~ExceptionDef() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual ::idlmm::ETypeCode getTypeCode () const;
    virtual void setTypeCode (::idlmm::ETypeCode _typeCode);

    // References
    virtual const ::ecorecpp::mapping::EList< ::idlmm::Field_ptr >& getMembers () const;
    virtual ::ecorecpp::mapping::EList< ::idlmm::Field_ptr >& getMembers ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = IdlmmPackage::EXCEPTIONDEF;

    /*PROTECTED REGION ID(ExceptionDef) START*/
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

    /*PROTECTED REGION ID(ExceptionDefImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ExceptionDef_ptr _this()
    {   return std::dynamic_pointer_cast<ExceptionDef>(shared_from_this());}

    // Attributes

    ::idlmm::ETypeCode m_typeCode
    {};

    // References

    ::ecore::EList_ptr< ::idlmm::Field_ptr > m_members;

};

}
 // idlmm

#endif // IDLMM_EXCEPTIONDEF_HPP

