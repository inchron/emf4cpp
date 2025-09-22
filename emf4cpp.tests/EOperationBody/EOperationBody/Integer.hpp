// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * EOperationBody/Integer.hpp
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

#ifndef EOPERATIONBODY_INTEGER_HPP
#define EOPERATIONBODY_INTEGER_HPP

#include <ecore/EObject.hpp>

#include <EOperationBody_forward.hpp>

#include <ecore_forward.hpp>

#include "EOperationBodyPackage.hpp"

#include "dllEOperationBody.hpp"

/*PROTECTED REGION ID(Integer_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace EOperationBody
{

class EXPORT_EOPERATIONBODY_DLL Integer : public virtual ::ecore::EObject
{
public:
    Integer();

    ~Integer() override;

    void _initialize() override;

    // Operations

    virtual ::EOperationBody::Integer_ptr increment ();

    virtual ::EOperationBody::Integer_ptr add ( [[maybe_unused]]::EOperationBody::Integer_ptr _lhs, [[maybe_unused]]::EOperationBody::Integer_ptr _rhs);

    // Attributes
    virtual ::ecore::EInt getValue () const;
    virtual void setValue (::ecore::EInt _value);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = EOperationBodyPackage::INTEGER;

    /*PROTECTED REGION ID(Integer) START*/
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

    /*PROTECTED REGION ID(IntegerImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Integer_ptr _this()
    {   return std::dynamic_pointer_cast<Integer>(shared_from_this());}

    // Attributes

    ::ecore::EInt m_value
    {};

    // References

};

}
 // EOperationBody

#endif // EOPERATIONBODY_INTEGER_HPP

