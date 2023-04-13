// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/AnyTypeImpl.cpp
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

#include "AnyType.hpp"
#include <type/TypePackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AnyTypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::type;

void AnyType::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(AnyTypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AnyType::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::type::TypePackage::ANYTYPE__MIXED:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(getMixed().size());
        for (size_t _i = 0; _i < getMixed().size(); _i++)
            ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                    > ::toAny(_anys[_i], getMixed()[_i]);
        _any = _anys;
    }
        return _any;
    case ::type::TypePackage::ANYTYPE__ANY:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(getAny().size());
        for (size_t _i = 0; _i < getAny().size(); _i++)
            ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                    > ::toAny(_anys[_i], getAny()[_i]);
        _any = _anys;
    }
        return _any;
    case ::type::TypePackage::ANYTYPE__ANYATTRIBUTE:
    {
        std::vector < ::ecorecpp::mapping::any
                > _anys(getAnyAttribute().size());
        for (size_t _i = 0; _i < getAnyAttribute().size(); _i++)
            ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                    > ::toAny(_anys[_i], getAnyAttribute()[_i]);
        _any = _anys;
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void AnyType::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::type::TypePackage::ANYTYPE__MIXED:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < std::vector
                < ::ecorecpp::mapping::any >> (_newValue);
        std::vector < ::ecore::EFeatureMapEntry > _t1;
        _t1.reserve(_t0.size());
        for (const auto &anyValue : _t0)
        {
            ecore::EFeatureMapEntry value;
            ::ecorecpp::mapping::any_traits < ecore::EFeatureMapEntry
                    > ::fromAny(anyValue, value);
            _t1.push_back(value);
        }
        setMixed (_t1);
    }
        return;
    case ::type::TypePackage::ANYTYPE__ANYATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < std::vector
                < ::ecorecpp::mapping::any >> (_newValue);
        std::vector < ::ecore::EFeatureMapEntry > _t1;
        _t1.reserve(_t0.size());
        for (const auto &anyValue : _t0)
        {
            ecore::EFeatureMapEntry value;
            ::ecorecpp::mapping::any_traits < ecore::EFeatureMapEntry
                    > ::fromAny(anyValue, value);
            _t1.push_back(value);
        }
        setAnyAttribute (_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean AnyType::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::type::TypePackage::ANYTYPE__MIXED:
        return getMixed().size() > 0;
    case ::type::TypePackage::ANYTYPE__ANY:
        return getAny().size() > 0;
    case ::type::TypePackage::ANYTYPE__ANYATTRIBUTE:
        return getAnyAttribute().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void AnyType::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr AnyType::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::type::TypePackage::_instance()->getAnyType();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AnyType::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AnyType::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

