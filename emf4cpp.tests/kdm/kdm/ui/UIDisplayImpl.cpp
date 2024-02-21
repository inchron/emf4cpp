// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UIDisplayImpl.cpp
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

#include "UIDisplay.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/UIResource.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/ui/AbstractUIElement.hpp>
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

/*PROTECTED REGION ID(UIDisplayImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::ui;

void UIDisplay::_initialize()
{
    // Supertypes
    ::kdm::ui::UIResource::_initialize();

    // References

    /*PROTECTED REGION ID(UIDisplayImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject UIDisplay::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::ui::UiPackage::UIDISPLAY__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::ui::UiPackage::UIDISPLAY__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::ui::UiPackage::UIDISPLAY__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::ui::UiPackage::UIDISPLAY__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::ui::UiPackage::UIDISPLAY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::ui::UiPackage::UIDISPLAY__SOURCE:
    {
        _any = getSource().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::ui::UiPackage::UIDISPLAY__UIRELATION:
    {
        _any = getUIRelation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::ui::UiPackage::UIDISPLAY__IMPLEMENTATION:
    {
        _any = getImplementation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::ui::UiPackage::UIDISPLAY__ABSTRACTION:
    {
        _any = getAbstraction().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::ui::UiPackage::UIDISPLAY__UIELEMENT:
    {
        _any = getUIElement().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void UIDisplay::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::ui::UiPackage::UIDISPLAY__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__SOURCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getSource().clear();
        getSource().insert_all(*_t0);
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__UIRELATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getUIRelation().clear();
        getUIRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__IMPLEMENTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getImplementation().clear();
        getImplementation().insert_all(*_t0);
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__ABSTRACTION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAbstraction().clear();
        getAbstraction().insert_all(*_t0);
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__UIELEMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getUIElement().clear();
        getUIElement().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean UIDisplay::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::ui::UiPackage::UIDISPLAY__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::ui::UiPackage::UIDISPLAY__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::ui::UiPackage::UIDISPLAY__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::ui::UiPackage::UIDISPLAY__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::ui::UiPackage::UIDISPLAY__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::ui::UiPackage::UIDISPLAY__SOURCE:
        return getSource().size() > 0;
    case ::kdm::ui::UiPackage::UIDISPLAY__UIRELATION:
        return getUIRelation().size() > 0;
    case ::kdm::ui::UiPackage::UIDISPLAY__IMPLEMENTATION:
        return getImplementation().size() > 0;
    case ::kdm::ui::UiPackage::UIDISPLAY__ABSTRACTION:
        return getAbstraction().size() > 0;
    case ::kdm::ui::UiPackage::UIDISPLAY__UIELEMENT:
        return getUIElement().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void UIDisplay::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr UIDisplay::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::ui::UiPackage::_instance()->getUIDisplay();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void UIDisplay::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::ui::UiPackage::UIDISPLAY__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__ANNOTATION:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__STEREOTYPE:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__SOURCE:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__UIRELATION:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__IMPLEMENTATION:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__ABSTRACTION:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__UIELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void UIDisplay::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::ui::UiPackage::UIDISPLAY__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__ANNOTATION:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__STEREOTYPE:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__SOURCE:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__UIRELATION:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__IMPLEMENTATION:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__ABSTRACTION:
    {
    }
        return;
    case ::kdm::ui::UiPackage::UIDISPLAY__UIELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

