// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enumeration/Bird.hpp
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

#ifndef ENUMERATION_BIRD_HPP
#define ENUMERATION_BIRD_HPP

#include <ecore/EObject.hpp>

#include <enumeration/dllEnumeration.hpp>
#include <enumeration_forward.hpp>

#include <ecore_forward.hpp>
#include <enumeration/BirdType.hpp>

#include "EnumerationPackage.hpp"

/*PROTECTED REGION ID(Bird_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace enumeration
{

class EXPORT_ENUMERATION_DLL Bird : public virtual ::ecore::EObject
{
public:
    Bird();

    virtual ~Bird();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::enumeration::BirdType getType () const;
    virtual void setType (::enumeration::BirdType _type);

    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = EnumerationPackage::BIRD;

    /*PROTECTED REGION ID(Bird) START*/
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

    /*PROTECTED REGION ID(BirdImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Bird_ptr _this()
    {   return std::dynamic_pointer_cast<Bird>(shared_from_this());}

    // Attributes

    ::enumeration::BirdType m_type
    {   ::enumeration::BirdType::blackbird};

    ::ecore::EString m_name
    {   "Birdy"};

    // References

};

}
 // enumeration

#endif // ENUMERATION_BIRD_HPP

