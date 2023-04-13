// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/ImageImpl.cpp
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

#include "Image.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/source/InventoryItem.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/AbstractInventoryRelationship.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ImageImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::source;

void Image::_initialize()
{
    // Supertypes
    ::kdm::source::InventoryItem::_initialize();

    // References

    /*PROTECTED REGION ID(ImageImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Image::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::IMAGE__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::IMAGE__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::IMAGE__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::IMAGE__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::IMAGE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::source::SourcePackage::IMAGE__INVENTORYRELATION:
    {
        _any = getInventoryRelation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::IMAGE__VERSION:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getVersion());
    }
        return _any;
    case ::kdm::source::SourcePackage::IMAGE__PATH:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getPath());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Image::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::IMAGE__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__INVENTORYRELATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getInventoryRelation().clear();
        getInventoryRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__VERSION:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setVersion(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__PATH:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setPath(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean Image::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::IMAGE__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::source::SourcePackage::IMAGE__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::source::SourcePackage::IMAGE__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::source::SourcePackage::IMAGE__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::source::SourcePackage::IMAGE__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::source::SourcePackage::IMAGE__INVENTORYRELATION:
        return getInventoryRelation().size() > 0;
    case ::kdm::source::SourcePackage::IMAGE__VERSION:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getVersion());
    case ::kdm::source::SourcePackage::IMAGE__PATH:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getPath());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Image::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Image::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::source::SourcePackage::_instance()->getImage();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Image::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::IMAGE__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__STEREOTYPE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__INVENTORYRELATION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Image::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::IMAGE__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__STEREOTYPE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::IMAGE__INVENTORYRELATION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

