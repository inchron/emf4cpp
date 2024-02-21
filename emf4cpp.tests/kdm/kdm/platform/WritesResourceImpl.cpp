// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/WritesResourceImpl.cpp
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

#include "WritesResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/platform/ResourceType.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(WritesResourceImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::platform;

void WritesResource::_initialize()
{
    // Supertypes
    ::kdm::action::AbstractActionRelationship::_initialize();

    // References

    /*PROTECTED REGION ID(WritesResourceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject WritesResource::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__TO:
    {
        _any = ::ecore::as < ::ecore::EObject > (getTo());
    }
        return _any;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__FROM:
    {
        _any = ::ecore::as < ::ecore::EObject > (getFrom());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void WritesResource::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__TO:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::kdm::platform::ResourceType > (_t0);
        setTo(_t1);
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__FROM:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::kdm::action::ActionElement > (_t0);
        setFrom(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean WritesResource::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__TO:
        return getTo().get() != nullptr;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__FROM:
        return getFrom().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void WritesResource::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr WritesResource::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::platform::PlatformPackage::_instance()->getWritesResource();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void WritesResource::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__ANNOTATION:
    {
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__STEREOTYPE:
    {
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__TO:
    {
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__FROM:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void WritesResource::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__ANNOTATION:
    {
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__STEREOTYPE:
    {
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__TO:
    {
    }
        return;
    case ::kdm::platform::PlatformPackage::WRITESRESOURCE__FROM:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

