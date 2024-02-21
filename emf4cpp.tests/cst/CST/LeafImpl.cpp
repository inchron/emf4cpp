// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * CST/LeafImpl.cpp
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

#include "Leaf.hpp"
#include <CST/CSTPackage.hpp>
#include <CST/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(LeafImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::CST;

void Leaf::_initialize()
{
    // Supertypes
    ::CST::Element::_initialize();

    // References

    /*PROTECTED REGION ID(LeafImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Leaf::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::CST::CSTPackage::LEAF__KIND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getKind());
    }
        return _any;
    case ::CST::CSTPackage::LEAF__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getValue());
    }
        return _any;
    case ::CST::CSTPackage::LEAF__POS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getPos());
    }
        return _any;
    case ::CST::CSTPackage::LEAF__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getLine());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Leaf::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::CST::CSTPackage::LEAF__KIND:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setKind(_t0);
    }
        return;
    case ::CST::CSTPackage::LEAF__VALUE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setValue(_t0);
    }
        return;
    case ::CST::CSTPackage::LEAF__POS:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setPos(_t0);
    }
        return;
    case ::CST::CSTPackage::LEAF__LINE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setLine(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean Leaf::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::CST::CSTPackage::LEAF__KIND:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getKind());
    case ::CST::CSTPackage::LEAF__VALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getValue());
    case ::CST::CSTPackage::LEAF__POS:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getPos());
    case ::CST::CSTPackage::LEAF__LINE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getLine());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Leaf::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Leaf::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::CST::CSTPackage::_instance()->getLeaf();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Leaf::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Leaf::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

