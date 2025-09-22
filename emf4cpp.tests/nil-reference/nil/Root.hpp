// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * nil/Root.hpp
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

#ifndef NIL_ROOT_HPP
#define NIL_ROOT_HPP

#include <ecore/EObject.hpp>

#include <nil_forward.hpp>

#include "NilPackage.hpp"

#include "dllNil.hpp"

/*PROTECTED REGION ID(Root_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace nil
{

class EXPORT_NIL_DLL Root : public virtual ::ecore::EObject
{
public:
    Root();

    ~Root() override;

    void _initialize() override;

    // Operations

    // Attributes

    // References
    virtual ::nil::Root_ptr getReference () const;
    virtual void setReference (::nil::Root_ptr _reference);

    virtual const ::ecorecpp::mapping::EList< ::nil::Root_ptr >& getManyReference () const;
    virtual ::ecorecpp::mapping::EList< ::nil::Root_ptr >& getManyReference ();

    virtual ::nil::Root_ptr getContainmentReference () const;
    virtual void setContainmentReference (::nil::Root_ptr _containmentReference);

    virtual const ::ecorecpp::mapping::EList< ::nil::Root_ptr >& getManyContainmentReference () const;
    virtual ::ecorecpp::mapping::EList< ::nil::Root_ptr >& getManyContainmentReference ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = NilPackage::ROOT;

    /*PROTECTED REGION ID(Root) START*/
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

    /*PROTECTED REGION ID(RootImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Root_ptr _this()
    {   return std::dynamic_pointer_cast<Root>(shared_from_this());}

    // Attributes

    // References

    std::weak_ptr< ::nil::Root > m_reference;

    ::ecore::EList_ptr< ::nil::Root_ptr > m_manyReference;

    ::nil::Root_ptr m_containmentReference;

    ::ecore::EList_ptr< ::nil::Root_ptr > m_manyContainmentReference;

};

}
 // nil

#endif // NIL_ROOT_HPP

