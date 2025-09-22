// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/Include.hpp
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

#ifndef IDLMM_INCLUDE_HPP
#define IDLMM_INCLUDE_HPP

#include <ecore/EObject.hpp>

#include <idlmm_forward.hpp>

#include <ecore_forward.hpp>

#include "IdlmmPackage.hpp"

#include "dllIdlmm.hpp"

/*PROTECTED REGION ID(Include_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace idlmm
{

class EXPORT_IDLMM_DLL Include : public virtual ::ecore::EObject
{
public:
    Include();

    ~Include() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual ::ecore::EString const& getImportURI () const;
    virtual void setImportURI (::ecore::EString const& _importURI);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = IdlmmPackage::INCLUDE;

    /*PROTECTED REGION ID(Include) START*/
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

    /*PROTECTED REGION ID(IncludeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Include_ptr _this()
    {   return std::dynamic_pointer_cast<Include>(shared_from_this());}

    // Attributes

    ::ecore::EString m_importURI
    {};

    // References

};

}
 // idlmm

#endif // IDLMM_INCLUDE_HPP

