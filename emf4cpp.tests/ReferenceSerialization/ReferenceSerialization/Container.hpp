// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ReferenceSerialization/Container.hpp
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

#ifndef REFERENCESERIALIZATION_CONTAINER_HPP
#define REFERENCESERIALIZATION_CONTAINER_HPP

#include <ecore/EObject.hpp>

#include <ReferenceSerialization_forward.hpp>

#include "ReferenceSerializationPackage.hpp"

#include "dllReferenceSerialization.hpp"

/*PROTECTED REGION ID(Container_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ReferenceSerialization
{

class EXPORT_REFERENCESERIALIZATION_DLL Container : public virtual ::ecore::EObject
{
public:
    Container();

    ~Container() override;

    void _initialize() override;

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::ReferenceSerialization::Content_ptr >& getContents () const;
    virtual ::ecorecpp::mapping::EList< ::ReferenceSerialization::Content_ptr >& getContents ();

    virtual const ::ecorecpp::mapping::EList< ::ReferenceSerialization::Content_ptr >& getReferences () const;
    virtual ::ecorecpp::mapping::EList< ::ReferenceSerialization::Content_ptr >& getReferences ();

    virtual ::ReferenceSerialization::Child_ptr getChild () const;
    virtual void setChild (::ReferenceSerialization::Child_ptr _child);

    virtual ::ReferenceSerialization::Child_ptr getChildRef () const;
    virtual void setChildRef (::ReferenceSerialization::Child_ptr _childRef);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ReferenceSerializationPackage::CONTAINER;

    /*PROTECTED REGION ID(Container) START*/
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

    /*PROTECTED REGION ID(ContainerImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Container_ptr _this()
    {   return std::dynamic_pointer_cast<Container>(shared_from_this());}

    // Attributes

    // References

    ::ecore::EList_ptr< ::ReferenceSerialization::Content_ptr > m_contents;

    ::ecore::EList_ptr< ::ReferenceSerialization::Content_ptr > m_references;

    ::ReferenceSerialization::Child_ptr m_child;

    std::weak_ptr< ::ReferenceSerialization::Child > m_childRef;

};

}
 // ReferenceSerialization

#endif // REFERENCESERIALIZATION_CONTAINER_HPP

