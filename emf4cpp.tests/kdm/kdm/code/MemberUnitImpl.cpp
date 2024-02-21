// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/MemberUnitImpl.cpp
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

#include "MemberUnit.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/DataElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/code/Datatype.hpp>
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

/*PROTECTED REGION ID(MemberUnitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::code;

void MemberUnit::_initialize()
{
    // Supertypes
    ::kdm::code::DataElement::_initialize();

    // References

    /*PROTECTED REGION ID(MemberUnitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject MemberUnit::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::code::CodePackage::MEMBERUNIT__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__SOURCE:
    {
        _any = getSource().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__COMMENT:
    {
        _any = getComment().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__CODERELATION:
    {
        _any = getCodeRelation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__TYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getType());
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__EXT:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getExt());
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__SIZE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::toAny(_any, getSize());
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__CODEELEMENT:
    {
        _any = getCodeElement().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::MEMBERUNIT__EXPORT:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::code::ExportKind
                > ::toAny(_any, getExport());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void MemberUnit::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::code::CodePackage::MEMBERUNIT__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__SOURCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getSource().clear();
        getSource().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__COMMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getComment().clear();
        getComment().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__CODERELATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getCodeRelation().clear();
        getCodeRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__TYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::kdm::code::Datatype > (_t0);
        setType(_t1);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__EXT:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setExt(_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__SIZE:
    {
        ::kdm::core::Integer _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::fromAny(_newValue, _t0);
        setSize(_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__CODEELEMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getCodeElement().clear();
        getCodeElement().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__EXPORT:
    {
        ::kdm::code::ExportKind _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::code::ExportKind
                > ::fromAny(_newValue, _t0);
        setExport(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean MemberUnit::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::code::CodePackage::MEMBERUNIT__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::code::CodePackage::MEMBERUNIT__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::code::CodePackage::MEMBERUNIT__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::code::CodePackage::MEMBERUNIT__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::code::CodePackage::MEMBERUNIT__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::code::CodePackage::MEMBERUNIT__SOURCE:
        return getSource().size() > 0;
    case ::kdm::code::CodePackage::MEMBERUNIT__COMMENT:
        return getComment().size() > 0;
    case ::kdm::code::CodePackage::MEMBERUNIT__CODERELATION:
        return getCodeRelation().size() > 0;
    case ::kdm::code::CodePackage::MEMBERUNIT__TYPE:
        return getType().get() != nullptr;
    case ::kdm::code::CodePackage::MEMBERUNIT__EXT:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getExt());
    case ::kdm::code::CodePackage::MEMBERUNIT__SIZE:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::Integer
                > ::is_set(getSize());
    case ::kdm::code::CodePackage::MEMBERUNIT__CODEELEMENT:
        return getCodeElement().size() > 0;
    case ::kdm::code::CodePackage::MEMBERUNIT__EXPORT:
        return ::ecorecpp::mapping::set_traits < ::kdm::code::ExportKind
                > ::is_set(getExport());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void MemberUnit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr MemberUnit::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::code::CodePackage::_instance()->getMemberUnit();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void MemberUnit::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::code::CodePackage::MEMBERUNIT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__ANNOTATION:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__SOURCE:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__COMMENT:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__CODERELATION:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__TYPE:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__CODEELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void MemberUnit::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::code::CodePackage::MEMBERUNIT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__ANNOTATION:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__SOURCE:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__COMMENT:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__CODERELATION:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__TYPE:
    {
    }
        return;
    case ::kdm::code::CodePackage::MEMBERUNIT__CODEELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

