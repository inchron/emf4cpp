// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ReferenceSerialization/ContainerImpl.cpp
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

#include "Container.hpp"
#include <ReferenceSerialization/ReferenceSerializationPackage.hpp>
#include <ReferenceSerialization/Content.hpp>
#include <ReferenceSerialization/Child.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ContainerImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ReferenceSerialization;

void Container::_initialize()
{
    // Supertypes

    // References
    for (const auto &ref : getContents())
    {
        ref->_initialize();
    }
    if (m_child)
    {
        m_child->_initialize();
    }

    /*PROTECTED REGION ID(ContainerImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Container::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CONTENTS:
    {
        _any = getContents().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__REFERENCES:
    {
        _any = getReferences().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILD:
    {
        _any = ::ecore::as < ::ecore::EObject > (getChild());
    }
        return _any;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILDREF:
    {
        _any = ::ecore::as < ::ecore::EObject > (getChildRef());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Container::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CONTENTS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getContents().clear();
        getContents().insert_all(*_t0);
    }
        return;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__REFERENCES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getReferences().clear();
        getReferences().insert_all(*_t0);
    }
        return;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILD:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ReferenceSerialization::Child > (_t0);
        setChild(_t1);
    }
        return;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILDREF:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ReferenceSerialization::Child > (_t0);
        setChildRef(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean Container::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CONTENTS:
        return getContents().size() > 0;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__REFERENCES:
        return getReferences().size() > 0;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILD:
        return getChild().get() != nullptr;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILDREF:
        return getChildRef().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Container::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Container::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::ReferenceSerialization::ReferenceSerializationPackage::_instance()->getContainer();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Container::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CONTENTS:
    {
    }
        return;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__REFERENCES:
    {
    }
        return;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILD:
    {
    }
        return;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILDREF:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Container::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CONTENTS:
    {
    }
        return;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__REFERENCES:
    {
    }
        return;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILD:
    {
    }
        return;
    case ::ReferenceSerialization::ReferenceSerializationPackage::CONTAINER__CHILDREF:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

