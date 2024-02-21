// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/AggregatedRelationshipImpl.cpp
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

#include "AggregatedRelationship.hpp"
#include <kdm/core/CorePackage.hpp>
#include <kdm/core/ModelElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AggregatedRelationshipImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::core;

void AggregatedRelationship::_initialize()
{
    // Supertypes
    ::kdm::core::ModelElement::_initialize();

    // References

    /*PROTECTED REGION ID(AggregatedRelationshipImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AggregatedRelationship::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__FROM:
    {
        _any = ::ecore::as < ::ecore::EObject > (getFrom());
    }
        return _any;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TO:
    {
        _any = ::ecore::as < ::ecore::EObject > (getTo());
    }
        return _any;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__RELATION:
    {
        _any = getRelation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__DENSITY:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::toAny(_any, getDensity());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void AggregatedRelationship::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__FROM:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::kdm::core::KDMEntity > (_t0);
        setFrom(_t1);
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TO:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::kdm::core::KDMEntity > (_t0);
        setTo(_t1);
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__RELATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getRelation().clear();
        getRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__DENSITY:
    {
        ::kdm::core::Integer _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::fromAny(_newValue, _t0);
        setDensity(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean AggregatedRelationship::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__FROM:
        return getFrom().get() != nullptr;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TO:
        return getTo().get() != nullptr;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__RELATION:
        return getRelation().size() > 0;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__DENSITY:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::Integer
                > ::is_set(getDensity());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void AggregatedRelationship::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr AggregatedRelationship::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::core::CorePackage::_instance()->getAggregatedRelationship();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AggregatedRelationship::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__ANNOTATION:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__STEREOTYPE:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__FROM:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TO:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__RELATION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AggregatedRelationship::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__ANNOTATION:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__STEREOTYPE:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__FROM:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__TO:
    {
    }
        return;
    case ::kdm::core::CorePackage::AGGREGATEDRELATIONSHIP__RELATION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

