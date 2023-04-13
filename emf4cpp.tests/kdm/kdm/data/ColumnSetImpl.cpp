// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/ColumnSetImpl.cpp
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

#include "ColumnSet.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/DataContainer.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/data/DataResource.hpp>
#include <kdm/code/ItemUnit.hpp>
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

/*PROTECTED REGION ID(ColumnSetImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::data;

void ColumnSet::_initialize()
{
    // Supertypes
    ::kdm::data::DataContainer::_initialize();

    // References
    for (const auto &ref : getItemUnit())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(ColumnSetImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ColumnSet::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::data::DataPackage::COLUMNSET__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::COLUMNSET__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::COLUMNSET__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::COLUMNSET__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::COLUMNSET__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::data::DataPackage::COLUMNSET__SOURCE:
    {
        _any = getSource().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::COLUMNSET__DATARELATION:
    {
        _any = getDataRelation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::COLUMNSET__ABSTRACTION:
    {
        _any = getAbstraction().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::COLUMNSET__DATAELEMENT:
    {
        _any = getDataElement().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::COLUMNSET__ITEMUNIT:
    {
        _any = getItemUnit().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void ColumnSet::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::data::DataPackage::COLUMNSET__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__SOURCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getSource().clear();
        getSource().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__DATARELATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getDataRelation().clear();
        getDataRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ABSTRACTION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAbstraction().clear();
        getAbstraction().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__DATAELEMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getDataElement().clear();
        getDataElement().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ITEMUNIT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getItemUnit().clear();
        getItemUnit().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean ColumnSet::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::data::DataPackage::COLUMNSET__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::data::DataPackage::COLUMNSET__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::data::DataPackage::COLUMNSET__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::data::DataPackage::COLUMNSET__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::data::DataPackage::COLUMNSET__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::data::DataPackage::COLUMNSET__SOURCE:
        return getSource().size() > 0;
    case ::kdm::data::DataPackage::COLUMNSET__DATARELATION:
        return getDataRelation().size() > 0;
    case ::kdm::data::DataPackage::COLUMNSET__ABSTRACTION:
        return getAbstraction().size() > 0;
    case ::kdm::data::DataPackage::COLUMNSET__DATAELEMENT:
        return getDataElement().size() > 0;
    case ::kdm::data::DataPackage::COLUMNSET__ITEMUNIT:
        return getItemUnit().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void ColumnSet::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr ColumnSet::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::data::DataPackage::_instance()->getColumnSet();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ColumnSet::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::data::DataPackage::COLUMNSET__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ANNOTATION:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__STEREOTYPE:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__SOURCE:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__DATARELATION:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ABSTRACTION:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__DATAELEMENT:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ITEMUNIT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ColumnSet::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::data::DataPackage::COLUMNSET__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ANNOTATION:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__STEREOTYPE:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__SOURCE:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__DATARELATION:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ABSTRACTION:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__DATAELEMENT:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ITEMUNIT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

