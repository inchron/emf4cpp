// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceRefImpl.cpp
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

#include "SourceRef.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/core/Element.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/source/SourceRegion.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SourceRefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::source;

void SourceRef::_initialize()
{
    // Supertypes
    ::kdm::core::Element::_initialize();

    // References
    for (const auto &ref : getRegion())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(SourceRefImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SourceRef::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEREF__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREF__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREF__REGION:
    {
        _any = getRegion().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREF__LANGUAGE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getLanguage());
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEREF__SNIPPET:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getSnippet());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void SourceRef::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEREF__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREF__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREF__REGION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getRegion().clear();
        getRegion().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREF__LANGUAGE:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setLanguage(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREF__SNIPPET:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setSnippet(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean SourceRef::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEREF__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::source::SourcePackage::SOURCEREF__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::source::SourcePackage::SOURCEREF__REGION:
        return getRegion().size() > 0;
    case ::kdm::source::SourcePackage::SOURCEREF__LANGUAGE:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getLanguage());
    case ::kdm::source::SourcePackage::SOURCEREF__SNIPPET:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getSnippet());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void SourceRef::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr SourceRef::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::source::SourcePackage::_instance()->getSourceRef();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SourceRef::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEREF__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREF__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREF__REGION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SourceRef::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEREF__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREF__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEREF__REGION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

