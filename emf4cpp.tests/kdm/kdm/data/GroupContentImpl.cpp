// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/GroupContentImpl.cpp
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

#include "GroupContent.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/ContentItem.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/data/ComplexContentType.hpp>
#include <kdm/data/AbstractContentElement.hpp>
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

/*PROTECTED REGION ID(GroupContentImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::data;

void GroupContent::_initialize()
{
    // Supertypes
    ::kdm::data::ContentItem::_initialize();

    // References

    /*PROTECTED REGION ID(GroupContentImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject GroupContent::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::data::DataPackage::GROUPCONTENT__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::GROUPCONTENT__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::GROUPCONTENT__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::GROUPCONTENT__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::GROUPCONTENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::data::DataPackage::GROUPCONTENT__SOURCE:
    {
        _any = getSource().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::GROUPCONTENT__DATARELATION:
    {
        _any = getDataRelation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::GROUPCONTENT__ABSTRACTION:
    {
        _any = getAbstraction().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::GROUPCONTENT__TYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getType());
    }
        return _any;
    case ::kdm::data::DataPackage::GROUPCONTENT__CONTENTELEMENT:
    {
        _any = getContentElement().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void GroupContent::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::data::DataPackage::GROUPCONTENT__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__SOURCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getSource().clear();
        getSource().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__DATARELATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getDataRelation().clear();
        getDataRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__ABSTRACTION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAbstraction().clear();
        getAbstraction().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__TYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::kdm::data::ComplexContentType > (_t0);
        setType(_t1);
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__CONTENTELEMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getContentElement().clear();
        getContentElement().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean GroupContent::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::data::DataPackage::GROUPCONTENT__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::data::DataPackage::GROUPCONTENT__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::data::DataPackage::GROUPCONTENT__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::data::DataPackage::GROUPCONTENT__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::data::DataPackage::GROUPCONTENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::data::DataPackage::GROUPCONTENT__SOURCE:
        return getSource().size() > 0;
    case ::kdm::data::DataPackage::GROUPCONTENT__DATARELATION:
        return getDataRelation().size() > 0;
    case ::kdm::data::DataPackage::GROUPCONTENT__ABSTRACTION:
        return getAbstraction().size() > 0;
    case ::kdm::data::DataPackage::GROUPCONTENT__TYPE:
        return getType().get() != nullptr;
    case ::kdm::data::DataPackage::GROUPCONTENT__CONTENTELEMENT:
        return getContentElement().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void GroupContent::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr GroupContent::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::data::DataPackage::_instance()->getGroupContent();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void GroupContent::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::data::DataPackage::GROUPCONTENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__SOURCE:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__DATARELATION:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__ABSTRACTION:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__TYPE:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__CONTENTELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void GroupContent::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::data::DataPackage::GROUPCONTENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__SOURCE:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__DATARELATION:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__ABSTRACTION:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__TYPE:
    {
    }
        return;
    case ::kdm::data::DataPackage::GROUPCONTENT__CONTENTELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

