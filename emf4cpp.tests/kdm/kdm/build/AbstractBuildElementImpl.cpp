// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/AbstractBuildElementImpl.cpp
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

#include "AbstractBuildElement.hpp"
#include <kdm/build/BuildPackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AbstractBuildElementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::build;

void AbstractBuildElement::_initialize()
{
    // Supertypes
    ::kdm::core::KDMEntity::_initialize();

    // References
    for (const auto &ref : getBuildRelation())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(AbstractBuildElementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AbstractBuildElement::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__BUILDRELATION:
    {
        _any = getBuildRelation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void AbstractBuildElement::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__BUILDRELATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getBuildRelation().clear();
        getBuildRelation().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean AbstractBuildElement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__BUILDRELATION:
        return getBuildRelation().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void AbstractBuildElement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr AbstractBuildElement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::build::BuildPackage::_instance()->getAbstractBuildElement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AbstractBuildElement::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__BUILDRELATION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AbstractBuildElement::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::build::BuildPackage::ABSTRACTBUILDELEMENT__BUILDRELATION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

