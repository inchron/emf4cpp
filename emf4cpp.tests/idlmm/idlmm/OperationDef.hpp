// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/OperationDef.hpp
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

#ifndef IDLMM_OPERATIONDEF_HPP
#define IDLMM_OPERATIONDEF_HPP

#include <idlmm/dllIdlmm.hpp>
#include <idlmm_forward.hpp>

#include <ecore_forward.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>

#include "IdlmmPackage.hpp"

/*PROTECTED REGION ID(OperationDef_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace idlmm
{

class EXPORT_IDLMM_DLL OperationDef : public virtual ::idlmm::Contained, public virtual ::idlmm::Typed
{
public:
    OperationDef();

    virtual ~OperationDef();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isIsOneway () const;
    virtual void setIsOneway (::ecore::EBoolean _isOneway);

    virtual std::vector< ::ecore::EString > const& getContexts () const;
    virtual void setContexts (std::vector< ::ecore::EString > const& _contexts);

    virtual void addContexts (::ecore::EString const& _new_element_in_contexts);
    virtual void setContextsAt ( size_t _position, ::ecore::EString const& _new_element_in_contexts);
    virtual void deleteContextsAt ( size_t _position );

    // References
    virtual const ::ecorecpp::mapping::EList< ::idlmm::ParameterDef_ptr >& getParameters () const;
    virtual ::ecorecpp::mapping::EList< ::idlmm::ParameterDef_ptr >& getParameters ();

    virtual const ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef_ptr >& getCanRaise () const;
    virtual ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef_ptr >& getCanRaise ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = IdlmmPackage::OPERATIONDEF;

    /*PROTECTED REGION ID(OperationDef) START*/
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

    /*PROTECTED REGION ID(OperationDefImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    OperationDef_ptr _this()
    {   return std::dynamic_pointer_cast<OperationDef>(shared_from_this());}

    // Attributes

    ::ecore::EBoolean m_isOneway
    {};

    std::vector< ::ecore::EString > m_contexts
    {};

    // References

    ::ecore::EList_ptr< ::idlmm::ParameterDef_ptr > m_parameters;

    ::ecore::EList_ptr< ::idlmm::ExceptionDef_ptr > m_canRaise;

};

}
 // idlmm

#endif // IDLMM_OPERATIONDEF_HPP

