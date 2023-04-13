// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * EOperationBody/IntegerImpl.cpp
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

#include "Integer.hpp"
#include <EOperationBody/EOperationBodyPackage.hpp>
#include <EOperationBody/Integer.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IntegerImpl.cpp) ENABLED START*/
#include "EOperationBodyFactory.hpp"
/*PROTECTED REGION END*/

using namespace ::EOperationBody;

void Integer::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(IntegerImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::EOperationBody::Integer_ptr Integer::increment()
{
#if 0
    // This is the original body of the EOperation as specified in
    // the ecore. If you want to replace it by C++ code, enable
    // the following protected region and implement it there.
    m_value++; return _this();
#endif
    /*PROTECTED REGION ID(IntegerImpl_increment) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    m_value++;
    return _this();
    /*PROTECTED REGION END*/
}

::EOperationBody::Integer_ptr Integer::add(::EOperationBody::Integer_ptr _lhs,
        ::EOperationBody::Integer_ptr _rhs)
{
#if 0
    // This is the original body of the EOperation as specified in
    // the ecore. If you want to replace it by C++ code, enable
    // the following protected region and implement it there.
    Let us assume this would be some language different than C++
#endif
    /*PROTECTED REGION ID(IntegerImpl_add) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    auto i = create< Integer >();
    i->m_value = _lhs->getValue() + _rhs->getValue();
    return i;
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject Integer::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::EOperationBody::EOperationBodyPackage::INTEGER__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getValue());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Integer::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::EOperationBody::EOperationBodyPackage::INTEGER__VALUE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setValue(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean Integer::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::EOperationBody::EOperationBodyPackage::INTEGER__VALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getValue());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Integer::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Integer::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::EOperationBody::EOperationBodyPackage::_instance()->getInteger();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Integer::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Integer::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

