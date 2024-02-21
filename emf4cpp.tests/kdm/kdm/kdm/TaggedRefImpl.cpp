// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/TaggedRefImpl.cpp
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

#include "TaggedRef.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/TagDefinition.hpp>
#include <kdm/core/ModelElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TaggedRefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::kdm;

void TaggedRef::_initialize()
{
    // Supertypes
    ::kdm::kdm::ExtendedValue::_initialize();

    // References

    /*PROTECTED REGION ID(TaggedRefImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TaggedRef::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::TAGGEDREF__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__TAG:
    {
        _any = ::ecore::as < ::ecore::EObject > (getTag());
    }
        return _any;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getReference());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void TaggedRef::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::TAGGEDREF__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__TAG:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::kdm::kdm::TagDefinition > (_t0);
        setTag(_t1);
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::kdm::core::ModelElement > (_t0);
        setReference(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean TaggedRef::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::TAGGEDREF__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__TAG:
        return getTag().get() != nullptr;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE:
        return getReference().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void TaggedRef::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr TaggedRef::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::kdm::KdmPackage::_instance()->getTaggedRef();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TaggedRef::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::TAGGEDREF__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__ANNOTATION:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__TAG:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TaggedRef::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::TAGGEDREF__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__ANNOTATION:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__TAG:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::TAGGEDREF__REFERENCE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

