// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EReference.hpp
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

#ifndef ECORE_EREFERENCE_HPP
#define ECORE_EREFERENCE_HPP

#include <ecore_forward.hpp>

#include <ecore/EStructuralFeature.hpp>

#include "dllEcore.hpp"

/*PROTECTED REGION ID(EReference_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EReference : public virtual ::ecore::EStructuralFeature
{
public:
    EReference();

    ~EReference() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isContainment () const;
    virtual void setContainment (::ecore::EBoolean _containment);

    virtual ::ecore::EBoolean isContainer ();
    virtual ::ecore::EBoolean isResolveProxies () const;
    virtual void setResolveProxies (::ecore::EBoolean _resolveProxies);

    // References
    virtual ::ecore::EReference_ptr getEOpposite () const;
    virtual void setEOpposite (::ecore::EReference_ptr _eOpposite);

    virtual ::ecore::EClass_ptr getEReferenceType () const;
    virtual void setEReferenceType (::ecore::EClass_ptr _eReferenceType);

    virtual const ::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& getEKeys () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& getEKeys ();

    /*PROTECTED REGION ID(EReference) START*/
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

    /*PROTECTED REGION ID(EReferenceImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EReference_ptr _this()
    {   return std::dynamic_pointer_cast<EReference>(shared_from_this());}

    // Attributes

    ::ecore::EBoolean m_containment
    {};

    ::ecore::EBoolean m_resolveProxies
    {   true};

    // References

    std::weak_ptr< ::ecore::EReference > m_eOpposite;

    std::weak_ptr< ::ecore::EClass > m_eReferenceType;

    ::ecore::EList_ptr< ::ecore::EAttribute_ptr > m_eKeys;

};

}
 // ecore

#endif // ECORE_EREFERENCE_HPP

