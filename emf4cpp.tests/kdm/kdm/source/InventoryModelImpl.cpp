// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/InventoryModelImpl.cpp
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

#include "InventoryModel.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(InventoryModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::source;

void InventoryModel::_initialize()
{
    // Supertypes
    ::kdm::kdm::KDMModel::_initialize();

    // References
    for (const auto &ref : getInventoryElement())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(InventoryModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InventoryModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::INVENTORYMODEL__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__AUDIT:
    {
        _any = getAudit().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__EXTENSIONFAMILY:
    {
        _any = getExtensionFamily().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__INVENTORYELEMENT:
    {
        _any = getInventoryElement().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void InventoryModel::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::INVENTORYMODEL__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__AUDIT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAudit().clear();
        getAudit().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__EXTENSIONFAMILY:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getExtensionFamily().clear();
        getExtensionFamily().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__INVENTORYELEMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getInventoryElement().clear();
        getInventoryElement().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean InventoryModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::INVENTORYMODEL__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__AUDIT:
        return getAudit().size() > 0;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__EXTENSIONFAMILY:
        return getExtensionFamily().size() > 0;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::source::SourcePackage::INVENTORYMODEL__INVENTORYELEMENT:
        return getInventoryElement().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void InventoryModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr InventoryModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::source::SourcePackage::_instance()->getInventoryModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void InventoryModel::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::INVENTORYMODEL__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__STEREOTYPE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__AUDIT:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__EXTENSIONFAMILY:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__INVENTORYELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void InventoryModel::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::INVENTORYMODEL__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__STEREOTYPE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__AUDIT:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__EXTENSIONFAMILY:
    {
    }
        return;
    case ::kdm::source::SourcePackage::INVENTORYMODEL__INVENTORYELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

