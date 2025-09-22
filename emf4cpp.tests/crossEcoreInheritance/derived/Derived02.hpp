// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * derived/Derived02.hpp
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

#ifndef DERIVED_DERIVED02_HPP
#define DERIVED_DERIVED02_HPP

#include <derived_forward.hpp>

#include <ecore_forward.hpp>
#include <base_forward.hpp>
#include <derived/Derived01.hpp>

#include "DerivedPackage.hpp"

#include "dllDerived.hpp"

/*PROTECTED REGION ID(Derived02_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace derived
{

class EXPORT_DERIVED_DLL Derived02 : public virtual ::derived::Derived01
{
public:
    Derived02();

    ~Derived02() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual ::ecore::EInt getValDerived02 () const;
    virtual void setValDerived02 (::ecore::EInt _valDerived02);

    // References
    virtual ::base::Base01_ptr getBase01ref () const;
    virtual void setBase01ref (::base::Base01_ptr _base01ref);
    virtual ::base::Base01_ptr basicgetBase01ref ();
    virtual void basicsetBase01ref (::base::Base01_ptr _base01ref);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = DerivedPackage::DERIVED02;

    /*PROTECTED REGION ID(Derived02) START*/
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

    /*PROTECTED REGION ID(Derived02Impl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Derived02_ptr _this()
    {   return std::dynamic_pointer_cast<Derived02>(shared_from_this());}

    // Attributes

    ::ecore::EInt m_valDerived02
    {};

    // References

    std::weak_ptr< ::base::Base01 > m_base01ref;

};

}
 // derived

#endif // DERIVED_DERIVED02_HPP

