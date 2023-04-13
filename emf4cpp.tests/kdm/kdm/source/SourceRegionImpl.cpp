// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceRegionImpl.cpp
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

#include "SourceRegion.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/core/Element.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/source/SourceFile.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SourceRegionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::source;

void SourceRegion::_initialize()
{
    // Supertypes
    ::kdm::core::Element::_initialize();

    // References

    /*PROTECTED REGION ID(SourceRegionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SourceRegion::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEREGION__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__FILE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getFile());
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTLINE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::toAny(_any, getStartLine());
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTPOSITION:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::toAny(_any, getStartPosition());
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDLINE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::toAny(_any, getEndLine());
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDPOSITION:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::toAny(_any, getEndPosition());
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__LANGUAGE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getLanguage());
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREGION__PATH:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getPath());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void SourceRegion::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEREGION__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__FILE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::kdm::source::SourceFile > (_t0);
        setFile(_t1);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTLINE:
    {
        ::kdm::core::Integer _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::fromAny(_newValue, _t0);
        setStartLine(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTPOSITION:
    {
        ::kdm::core::Integer _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::fromAny(_newValue, _t0);
        setStartPosition(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDLINE:
    {
        ::kdm::core::Integer _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::fromAny(_newValue, _t0);
        setEndLine(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDPOSITION:
    {
        ::kdm::core::Integer _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::Integer
                > ::fromAny(_newValue, _t0);
        setEndPosition(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__LANGUAGE:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setLanguage(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__PATH:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setPath(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean SourceRegion::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEREGION__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::source::SourcePackage::SOURCEREGION__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::source::SourcePackage::SOURCEREGION__FILE:
        return getFile().get() != nullptr;
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTLINE:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::Integer
                > ::is_set(getStartLine());
    case ::kdm::source::SourcePackage::SOURCEREGION__STARTPOSITION:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::Integer
                > ::is_set(getStartPosition());
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDLINE:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::Integer
                > ::is_set(getEndLine());
    case ::kdm::source::SourcePackage::SOURCEREGION__ENDPOSITION:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::Integer
                > ::is_set(getEndPosition());
    case ::kdm::source::SourcePackage::SOURCEREGION__LANGUAGE:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getLanguage());
    case ::kdm::source::SourcePackage::SOURCEREGION__PATH:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getPath());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void SourceRegion::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr SourceRegion::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::source::SourcePackage::_instance()->getSourceRegion();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SourceRegion::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEREGION__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__FILE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SourceRegion::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEREGION__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREGION__FILE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

