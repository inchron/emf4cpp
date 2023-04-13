// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/TopLevelClass.hpp
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

#ifndef TOPLEVELPACKAGE_TOPLEVELCLASS_HPP
#define TOPLEVELPACKAGE_TOPLEVELCLASS_HPP

#include <ecore/EObject.hpp>

#include <TopLevelPackage/dllTopLevelPackage.hpp>
#include <TopLevelPackage_forward.hpp>

#include <ecore_forward.hpp>

#include "TopLevelPackagePackage.hpp"

/*PROTECTED REGION ID(TopLevelClass_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace TopLevelPackage
{

class EXPORT_TOPLEVELPACKAGE_DLL TopLevelClass : public virtual ::ecore::EObject
{
public:
    TopLevelClass();

    virtual ~TopLevelClass();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::ecore::EObject_ptr getReference () const;
    virtual void setReference (::ecore::EObject_ptr _reference);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = TopLevelPackagePackage::TOPLEVELCLASS;

    /*PROTECTED REGION ID(TopLevelClass) START*/
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

    /*PROTECTED REGION ID(TopLevelClassImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TopLevelClass_ptr _this()
    {   return std::dynamic_pointer_cast<TopLevelClass>(shared_from_this());}

    // Attributes

    // References

    std::weak_ptr< ::ecore::EObject > m_reference;

};

}
 // TopLevelPackage

#endif // TOPLEVELPACKAGE_TOPLEVELCLASS_HPP

