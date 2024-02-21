// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/ProcessingInstructionImpl.cpp
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

#include "ProcessingInstruction.hpp"
#include <type/TypePackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ProcessingInstructionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::type;

void ProcessingInstruction::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ProcessingInstructionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ProcessingInstruction::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::type::TypePackage::PROCESSINGINSTRUCTION__DATA:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, getData());
    }
        return _any;
    case ::type::TypePackage::PROCESSINGINSTRUCTION__TARGET:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, getTarget());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void ProcessingInstruction::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::type::TypePackage::PROCESSINGINSTRUCTION__DATA:
    {
        ::type::String _t0;
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, _t0);
        setData(_t0);
    }
        return;
    case ::type::TypePackage::PROCESSINGINSTRUCTION__TARGET:
    {
        ::type::String _t0;
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, _t0);
        setTarget(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean ProcessingInstruction::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::type::TypePackage::PROCESSINGINSTRUCTION__DATA:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(getData());
    case ::type::TypePackage::PROCESSINGINSTRUCTION__TARGET:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(getTarget());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void ProcessingInstruction::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr ProcessingInstruction::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::type::TypePackage::_instance()->getProcessingInstruction();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ProcessingInstruction::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ProcessingInstruction::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

