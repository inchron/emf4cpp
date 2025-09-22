// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EClassifier.hpp
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

#ifndef ECORE_ECLASSIFIER_HPP
#define ECORE_ECLASSIFIER_HPP

#include <ecore_forward.hpp>

#include <ecore/ENamedElement.hpp>

#include "dllEcore.hpp"

/*PROTECTED REGION ID(EClassifier_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EClassifier : public virtual ::ecore::ENamedElement
{
public:
    EClassifier();

    ~EClassifier() override;

    void _initialize() override;

    // Operations

    virtual ::ecore::EBoolean isInstance ( [[maybe_unused]]::ecore::EJavaObject const& _object);

    virtual ::ecore::EInt getClassifierID ();

    // Attributes
    virtual ::ecore::EString getInstanceClassName ();
    virtual void setInstanceClassName (::ecore::EString const& _instanceClassName);

    virtual int getInstanceClass ();
    virtual ::ecore::EJavaObject getDefaultValue ();
    virtual ::ecore::EString getInstanceTypeName ();
    virtual void setInstanceTypeName (::ecore::EString const& _instanceTypeName);

    // References
    virtual ::ecore::EPackage_ptr getEPackage () const;
    virtual void setEPackage (::ecore::EPackage_ptr _ePackage);
    virtual ::ecore::EPackage_ptr basicgetEPackage ();
    virtual void basicsetEPackage (::ecore::EPackage_ptr _ePackage);

    virtual const ::ecorecpp::mapping::EList< ::ecore::ETypeParameter_ptr >& getETypeParameters () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::ETypeParameter_ptr >& getETypeParameters ();

    /*PROTECTED REGION ID(EClassifier) START*/
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

    /*PROTECTED REGION ID(EClassifierImpl) ENABLED START*/

public:

    virtual void setClassifierID(::ecore::EInt _id);

protected:

    ::ecore::EInt m_id;

    /*PROTECTED REGION END*/

protected:
    EClassifier_ptr _this()
    {   return std::dynamic_pointer_cast<EClassifier>(shared_from_this());}

    // Attributes

    // References

    std::weak_ptr< ::ecore::EPackage > m_ePackage;

    ::ecore::EList_ptr< ::ecore::ETypeParameter_ptr > m_eTypeParameters;

};

}
 // ecore

#endif // ECORE_ECLASSIFIER_HPP

