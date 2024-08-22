// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/RightHand.hpp
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

#ifndef EOPPOSITE_RIGHTHAND_HPP
#define EOPPOSITE_RIGHTHAND_HPP

#include <eopposite/dllEopposite.hpp>
#include <eopposite_forward.hpp>

#include <ecore_forward.hpp>
#include <eopposite/NamedObject.hpp>

#include "EoppositePackage.hpp"

/*PROTECTED REGION ID(RightHand_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace eopposite
{

class EXPORT_EOPPOSITE_DLL RightHand : public virtual ::eopposite::NamedObject
{
public:
    RightHand();

    virtual ~RightHand();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::eopposite::LeftHand_ptr getLeftee () const;
    virtual void setLeftee (::eopposite::LeftHand_ptr _leftee);
    virtual ::eopposite::LeftHand_ptr basicgetLeftee ();
    virtual void basicsetLeftee (::eopposite::LeftHand_ptr _leftee);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = EoppositePackage::RIGHTHAND;

    /*PROTECTED REGION ID(RightHand) START*/
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

    /*PROTECTED REGION ID(RightHandImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    RightHand_ptr _this()
    {   return std::dynamic_pointer_cast<RightHand>(shared_from_this());}

    // Attributes

    // References

    std::weak_ptr< ::eopposite::LeftHand > m_leftee;

};

}
 // eopposite

#endif // EOPPOSITE_RIGHTHAND_HPP

