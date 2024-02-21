// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ExitFlowImpl.cpp
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

#include "ExitFlow.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ExitFlowImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::action;

void ExitFlow::_initialize()
{
    // Supertypes
    ::kdm::action::AbstractActionRelationship::_initialize();

    // References

    /*PROTECTED REGION ID(ExitFlowImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ExitFlow::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::action::ActionPackage::EXITFLOW__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::action::ActionPackage::EXITFLOW__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::action::ActionPackage::EXITFLOW__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::action::ActionPackage::EXITFLOW__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::action::ActionPackage::EXITFLOW__TO:
    {
        _any = ::ecore::as < ::ecore::EObject > (getTo());
    }
        return _any;
    case ::kdm::action::ActionPackage::EXITFLOW__FROM:
    {
        _any = ::ecore::as < ::ecore::EObject > (getFrom());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void ExitFlow::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::action::ActionPackage::EXITFLOW__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__TO:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::kdm::action::ActionElement > (_t0);
        setTo(_t1);
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__FROM:
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

::ecore::EBoolean ExitFlow::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::action::ActionPackage::EXITFLOW__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::action::ActionPackage::EXITFLOW__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::action::ActionPackage::EXITFLOW__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::action::ActionPackage::EXITFLOW__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::action::ActionPackage::EXITFLOW__TO:
        return getTo().get() != nullptr;
    case ::kdm::action::ActionPackage::EXITFLOW__FROM:
        return getFrom().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void ExitFlow::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr ExitFlow::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::action::ActionPackage::_instance()->getExitFlow();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ExitFlow::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::action::ActionPackage::EXITFLOW__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__ANNOTATION:
    {
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__STEREOTYPE:
    {
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__TO:
    {
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__FROM:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ExitFlow::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::action::ActionPackage::EXITFLOW__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__ANNOTATION:
    {
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__STEREOTYPE:
    {
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__TO:
    {
    }
        return;
    case ::kdm::action::ActionPackage::EXITFLOW__FROM:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

