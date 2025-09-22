// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EFactory.hpp
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

#ifndef ECORE_EFACTORY_HPP
#define ECORE_EFACTORY_HPP

#include <ecore_forward.hpp>

#include <ecore/EModelElement.hpp>

#include "dllEcore.hpp"

/*PROTECTED REGION ID(EFactory_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EFactory : public virtual ::ecore::EModelElement
{
public:
    EFactory();

    ~EFactory() override;

    void _initialize() override;

    // Operations

    virtual ::ecore::EObject_ptr create ( [[maybe_unused]]::ecore::EClass_ptr _eClass);

    virtual ::ecore::EJavaObject createFromString ( [[maybe_unused]]::ecore::EDataType_ptr _eDataType, [[maybe_unused]]::ecore::EString const& _literalValue);

    virtual ::ecore::EString convertToString ( [[maybe_unused]]::ecore::EDataType_ptr _eDataType, [[maybe_unused]]::ecore::EJavaObject const& _instanceValue);

    // Attributes

    // References
    virtual ::ecore::EPackage_ptr getEPackage () const;
    virtual void setEPackage (::ecore::EPackage_ptr _ePackage);
    virtual ::ecore::EPackage_ptr basicgetEPackage ();
    virtual void basicsetEPackage (::ecore::EPackage_ptr _ePackage);

    /*PROTECTED REGION ID(EFactory) START*/
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

    /*PROTECTED REGION ID(EFactoryImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EFactory_ptr _this()
    {   return std::dynamic_pointer_cast<EFactory>(shared_from_this());}

    // Attributes

    // References

    std::weak_ptr< ::ecore::EPackage > m_ePackage;

};

}
 // ecore

#endif // ECORE_EFACTORY_HPP

