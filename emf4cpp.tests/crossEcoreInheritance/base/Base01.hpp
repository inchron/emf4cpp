// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/Base01.hpp
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

#ifndef BASE_BASE01_HPP
#define BASE_BASE01_HPP

#include <ecore/EObject.hpp>

#include <base/dllBase.hpp>
#include <base_forward.hpp>

#include <ecore_forward.hpp>
#include <derived_forward.hpp>

#include "BasePackage.hpp"

/*PROTECTED REGION ID(Base01_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace base
{

class EXPORT_BASE_DLL Base01 : public virtual ::ecore::EObject
{
public:
    Base01();

    ~Base01() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual ::ecore::EInt getValBase01 () const;
    virtual void setValBase01 (::ecore::EInt _valBase01);

    // References
    virtual ::derived::Derived02_ptr getDerived02ref () const;
    virtual void setDerived02ref (::derived::Derived02_ptr _derived02ref);
    virtual ::derived::Derived02_ptr basicgetDerived02ref ();
    virtual void basicsetDerived02ref (::derived::Derived02_ptr _derived02ref);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = BasePackage::BASE01;

    /*PROTECTED REGION ID(Base01) START*/
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

    /*PROTECTED REGION ID(Base01Impl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Base01_ptr _this()
    {   return std::dynamic_pointer_cast<Base01>(shared_from_this());}

    // Attributes

    ::ecore::EInt m_valBase01
    {};

    // References

    std::weak_ptr< ::derived::Derived02 > m_derived02ref;

};

}
 // base

#endif // BASE_BASE01_HPP

