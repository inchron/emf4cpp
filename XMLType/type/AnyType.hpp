// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/AnyType.hpp
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

#ifndef TYPE_ANYTYPE_HPP
#define TYPE_ANYTYPE_HPP

#include <ecore/EObject.hpp>

#include <type/dllType.hpp>
#include <type_forward.hpp>

#include <ecore_forward.hpp>

#include "TypePackage.hpp"

/*PROTECTED REGION ID(AnyType_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace type
{

class EXPORT_TYPE_DLL AnyType : public virtual ::ecore::EObject
{
public:
    AnyType();

    virtual ~AnyType();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual std::vector< ::ecore::EFeatureMapEntry > const& getMixed () const;
    virtual void setMixed (std::vector< ::ecore::EFeatureMapEntry > _mixed);

    virtual void addMixed (::ecore::EFeatureMapEntry const& _new_element_in_mixed);
    virtual void setMixedAt ( size_t _position, ::ecore::EFeatureMapEntry const& _new_element_in_mixed);
    virtual void deleteMixedAt ( size_t _position );

    virtual std::vector< ::ecore::EFeatureMapEntry > getAny ();
    virtual std::vector< ::ecore::EFeatureMapEntry > const& getAnyAttribute () const;
    virtual void setAnyAttribute (std::vector< ::ecore::EFeatureMapEntry > _anyAttribute);

    virtual void addAnyAttribute (::ecore::EFeatureMapEntry const& _new_element_in_anyAttribute);
    virtual void setAnyAttributeAt ( size_t _position, ::ecore::EFeatureMapEntry const& _new_element_in_anyAttribute);
    virtual void deleteAnyAttributeAt ( size_t _position );

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = TypePackage::ANYTYPE;

    /*PROTECTED REGION ID(AnyType) START*/
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

    /*PROTECTED REGION ID(AnyTypeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    AnyType_ptr _this()
    {   return std::dynamic_pointer_cast<AnyType>(shared_from_this());}

    // Attributes

    std::vector< ::ecore::EFeatureMapEntry > m_mixed
    {};

    std::vector< ::ecore::EFeatureMapEntry > m_anyAttribute
    {};

    // References

};

}
 // type

#endif // TYPE_ANYTYPE_HPP

