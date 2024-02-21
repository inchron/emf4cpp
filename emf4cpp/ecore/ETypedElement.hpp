// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/ETypedElement.hpp
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

#ifndef ECORE_ETYPEDELEMENT_HPP
#define ECORE_ETYPEDELEMENT_HPP

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

#include <ecore/ENamedElement.hpp>

/*PROTECTED REGION ID(ETypedElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL ETypedElement : public virtual ::ecore::ENamedElement
{
public:
    ETypedElement();

    ~ETypedElement() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isOrdered () const;
    virtual void setOrdered (::ecore::EBoolean _ordered);

    virtual ::ecore::EBoolean isUnique () const;
    virtual void setUnique (::ecore::EBoolean _unique);

    virtual ::ecore::EInt getLowerBound () const;
    virtual void setLowerBound (::ecore::EInt _lowerBound);

    virtual ::ecore::EInt getUpperBound () const;
    virtual void setUpperBound (::ecore::EInt _upperBound);

    virtual ::ecore::EBoolean isMany ();
    virtual ::ecore::EBoolean isRequired ();

    // References
    virtual ::ecore::EClassifier_ptr getEType () const;
    virtual void setEType (::ecore::EClassifier_ptr _eType);

    virtual ::ecore::EGenericType_ptr getEGenericType () const;
    virtual void setEGenericType (::ecore::EGenericType_ptr _eGenericType);

    /*PROTECTED REGION ID(ETypedElement) START*/
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

    /*PROTECTED REGION ID(ETypedElementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ETypedElement_ptr _this()
    {   return std::dynamic_pointer_cast<ETypedElement>(shared_from_this());}

    // Attributes

    ::ecore::EBoolean m_ordered
    {   true};

    ::ecore::EBoolean m_unique
    {   true};

    ::ecore::EInt m_lowerBound
    {};

    ::ecore::EInt m_upperBound
    {   1};

    // References

    std::weak_ptr< ::ecore::EClassifier > m_eType;

    ::ecore::EGenericType_ptr m_eGenericType;

};

}
 // ecore

#endif // ECORE_ETYPEDELEMENT_HPP

