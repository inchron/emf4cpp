// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/SegmentImpl.cpp
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

#include "Segment.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/KDMFramework.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/kdm/Segment.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SegmentImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::kdm;

void Segment::_initialize()
{
    // Supertypes
    ::kdm::kdm::KDMFramework::_initialize();

    // References
    for (const auto &ref : getSegment())
    {
        ref->_initialize();
    }
    for (const auto &ref : getModel())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(SegmentImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Segment::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::SEGMENT__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::SEGMENT__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::SEGMENT__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::SEGMENT__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::SEGMENT__AUDIT:
    {
        _any = getAudit().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::SEGMENT__EXTENSIONFAMILY:
    {
        _any = getExtensionFamily().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::SEGMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::kdm::KdmPackage::SEGMENT__SEGMENT:
    {
        _any = getSegment().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::SEGMENT__MODEL:
    {
        _any = getModel().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Segment::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::SEGMENT__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__AUDIT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAudit().clear();
        getAudit().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__EXTENSIONFAMILY:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getExtensionFamily().clear();
        getExtensionFamily().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__SEGMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getSegment().clear();
        getSegment().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__MODEL:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getModel().clear();
        getModel().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean Segment::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::SEGMENT__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::kdm::KdmPackage::SEGMENT__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::kdm::KdmPackage::SEGMENT__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::kdm::KdmPackage::SEGMENT__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::kdm::KdmPackage::SEGMENT__AUDIT:
        return getAudit().size() > 0;
    case ::kdm::kdm::KdmPackage::SEGMENT__EXTENSIONFAMILY:
        return getExtensionFamily().size() > 0;
    case ::kdm::kdm::KdmPackage::SEGMENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::kdm::KdmPackage::SEGMENT__SEGMENT:
        return getSegment().size() > 0;
    case ::kdm::kdm::KdmPackage::SEGMENT__MODEL:
        return getModel().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Segment::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Segment::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::kdm::KdmPackage::_instance()->getSegment();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Segment::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::SEGMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__AUDIT:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__EXTENSIONFAMILY:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__SEGMENT:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__MODEL:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Segment::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::kdm::KdmPackage::SEGMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__AUDIT:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__EXTENSIONFAMILY:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__SEGMENT:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::SEGMENT__MODEL:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

