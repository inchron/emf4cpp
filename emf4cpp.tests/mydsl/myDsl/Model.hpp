// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/Model.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
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

#ifndef MYDSL_MODEL_HPP
#define MYDSL_MODEL_HPP

#include <myDsl_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <myDsl/dllMyDsl.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(Model_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace myDsl
{

class EXPORT_MYDSL_DLL Model : public virtual ::ecore::EObject

{
public:
    Model();

    virtual ~Model();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::myDsl::Import >& getImports () const;
    virtual ::ecorecpp::mapping::EList< ::myDsl::Import >& getImports ();

    virtual const ::ecorecpp::mapping::EList< ::myDsl::Type >& getElements () const;
    virtual ::ecorecpp::mapping::EList< ::myDsl::Type >& getElements ();

    /*PROTECTED REGION ID(Model) START*/
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

    /*PROTECTED REGION ID(ModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::myDsl::Import >> m_imports;

    std::shared_ptr<::ecorecpp::mapping::EList< ::myDsl::Type >> m_elements;

};

}
 // myDsl

#endif // MYDSL_MODEL_HPP

