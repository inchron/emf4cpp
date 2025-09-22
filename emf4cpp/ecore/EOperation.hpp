// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EOperation.hpp
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

#ifndef ECORE_EOPERATION_HPP
#define ECORE_EOPERATION_HPP

#include <ecore_forward.hpp>

#include <ecore/ETypedElement.hpp>

#include "dllEcore.hpp"

/*PROTECTED REGION ID(EOperation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EOperation : public virtual ::ecore::ETypedElement
{
public:
    EOperation();

    ~EOperation() override;

    void _initialize() override;

    // Operations

    virtual ::ecore::EInt getOperationID ();

    virtual ::ecore::EBoolean isOverrideOf ( [[maybe_unused]]::ecore::EOperation_ptr _someOperation);

    // Attributes

    // References
    virtual ::ecore::EClass_ptr getEContainingClass () const;
    virtual void setEContainingClass (::ecore::EClass_ptr _eContainingClass);
    virtual ::ecore::EClass_ptr basicgetEContainingClass ();
    virtual void basicsetEContainingClass (::ecore::EClass_ptr _eContainingClass);

    virtual const ::ecorecpp::mapping::EList< ::ecore::ETypeParameter_ptr >& getETypeParameters () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::ETypeParameter_ptr >& getETypeParameters ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EParameter_ptr >& getEParameters () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EParameter_ptr >& getEParameters ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EClassifier_ptr >& getEExceptions () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EClassifier_ptr >& getEExceptions ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& getEGenericExceptions () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& getEGenericExceptions ();

    /*PROTECTED REGION ID(EOperation) START*/
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

    /*PROTECTED REGION ID(EOperationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EOperation_ptr _this()
    {   return std::dynamic_pointer_cast<EOperation>(shared_from_this());}

    // Attributes

    // References

    std::weak_ptr< ::ecore::EClass > m_eContainingClass;

    ::ecore::EList_ptr< ::ecore::ETypeParameter_ptr > m_eTypeParameters;

    ::ecore::EList_ptr< ::ecore::EParameter_ptr > m_eParameters;

    ::ecore::EList_ptr< ::ecore::EClassifier_ptr > m_eExceptions;

    ::ecore::EList_ptr< ::ecore::EGenericType_ptr > m_eGenericExceptions;

};

}
 // ecore

#endif // ECORE_EOPERATION_HPP

