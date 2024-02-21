// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * tree/NonTerminalImpl.cpp
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

#include "NonTerminal.hpp"
#include <tree/TreePackage.hpp>
#include <tree/TreeNode.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(NonTerminalImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::tree;

void NonTerminal::_initialize()
{
    // Supertypes
    ::tree::TreeNode::_initialize();

    // References
    for (const auto &ref : getChildren())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(NonTerminalImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject NonTerminal::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::tree::TreePackage::NONTERMINAL__DATA:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getData());
    }
        return _any;
    case ::tree::TreePackage::NONTERMINAL__PARENT:
    {
        _any = ::ecore::as < ::ecore::EObject > (getParent());
    }
        return _any;
    case ::tree::TreePackage::NONTERMINAL__CHILDREN:
    {
        _any = getChildren().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void NonTerminal::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::tree::TreePackage::NONTERMINAL__DATA:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setData(_t0);
    }
        return;
    case ::tree::TreePackage::NONTERMINAL__PARENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::tree::TreeNode > (_t0);
        setParent(_t1);
    }
        return;
    case ::tree::TreePackage::NONTERMINAL__CHILDREN:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getChildren().clear();
        getChildren().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean NonTerminal::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::tree::TreePackage::NONTERMINAL__DATA:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getData());
    case ::tree::TreePackage::NONTERMINAL__PARENT:
        return getParent().get() != nullptr;
    case ::tree::TreePackage::NONTERMINAL__CHILDREN:
        return getChildren().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void NonTerminal::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr NonTerminal::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::tree::TreePackage::_instance()->getNonTerminal();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void NonTerminal::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::tree::TreePackage::NONTERMINAL__PARENT:
    {
    }
        return;
    case ::tree::TreePackage::NONTERMINAL__CHILDREN:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void NonTerminal::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::tree::TreePackage::NONTERMINAL__PARENT:
    {
    }
        return;
    case ::tree::TreePackage::NONTERMINAL__CHILDREN:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

