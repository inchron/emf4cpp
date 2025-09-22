// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/SimpleAnyType.hpp
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

#ifndef TYPE_SIMPLEANYTYPE_HPP
#define TYPE_SIMPLEANYTYPE_HPP

#include <type_forward.hpp>

#include <ecore_forward.hpp>
#include <type/AnyType.hpp>

#include "TypePackage.hpp"

#include "dllType.hpp"

/*PROTECTED REGION ID(SimpleAnyType_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace type
{

class EXPORT_TYPE_DLL SimpleAnyType : public virtual ::type::AnyType
{
public:
    SimpleAnyType();

    ~SimpleAnyType() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual ::type::String getRawValue ();
    virtual ::type::AnySimpleType getValue ();

    // References
    virtual ::ecore::EDataType_ptr getInstanceType () const;
    virtual void setInstanceType (::ecore::EDataType_ptr _instanceType);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = TypePackage::SIMPLEANYTYPE;

    /*PROTECTED REGION ID(SimpleAnyType) START*/
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

    /*PROTECTED REGION ID(SimpleAnyTypeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    SimpleAnyType_ptr _this()
    {   return std::dynamic_pointer_cast<SimpleAnyType>(shared_from_this());}

    // Attributes

    // References

    std::weak_ptr< ::ecore::EDataType > m_instanceType;

};

}
 // type

#endif // TYPE_SIMPLEANYTYPE_HPP

