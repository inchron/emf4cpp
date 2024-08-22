// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * bintree/BinTreeNodeImpl.cpp
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

#include "BinTreeNode.hpp"
#include <bintree/BintreePackage.hpp>
#include <bintree/BinTreeNode.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(BinTreeNodeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::bintree;

void BinTreeNode::_initialize()
{
    // Supertypes

    // References
    if (m_left)
    {
        m_left->_initialize();
    }
    if (m_right)
    {
        m_right->_initialize();
    }

    /*PROTECTED REGION ID(BinTreeNodeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BinTreeNode::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::bintree::BintreePackage::BINTREENODE__PARENT:
    {
        _any = ::ecore::as < ::ecore::EObject > (getParent());
    }
        return _any;
    case ::bintree::BintreePackage::BINTREENODE__LEFT:
    {
        _any = ::ecore::as < ::ecore::EObject > (getLeft());
    }
        return _any;
    case ::bintree::BintreePackage::BINTREENODE__RIGHT:
    {
        _any = ::ecore::as < ::ecore::EObject > (getRight());
    }
        return _any;
    case ::bintree::BintreePackage::BINTREENODE__DATA:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getData());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void BinTreeNode::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::bintree::BintreePackage::BINTREENODE__PARENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::bintree::BinTreeNode > (_t0);
        setParent(_t1);
    }
        return;
    case ::bintree::BintreePackage::BINTREENODE__LEFT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::bintree::BinTreeNode > (_t0);
        setLeft(_t1);
    }
        return;
    case ::bintree::BintreePackage::BINTREENODE__RIGHT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::bintree::BinTreeNode > (_t0);
        setRight(_t1);
    }
        return;
    case ::bintree::BintreePackage::BINTREENODE__DATA:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setData(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean BinTreeNode::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::bintree::BintreePackage::BINTREENODE__PARENT:
        return getParent().get() != nullptr;
    case ::bintree::BintreePackage::BINTREENODE__LEFT:
        return getLeft().get() != nullptr;
    case ::bintree::BintreePackage::BINTREENODE__RIGHT:
        return getRight().get() != nullptr;
    case ::bintree::BintreePackage::BINTREENODE__DATA:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getData());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void BinTreeNode::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr BinTreeNode::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::bintree::BintreePackage::_instance()->getBinTreeNode();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void BinTreeNode::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::bintree::BintreePackage::BINTREENODE__PARENT:
    {
    }
        return;
    case ::bintree::BintreePackage::BINTREENODE__LEFT:
    {
    }
        return;
    case ::bintree::BintreePackage::BINTREENODE__RIGHT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void BinTreeNode::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::bintree::BintreePackage::BINTREENODE__PARENT:
    {
    }
        return;
    case ::bintree::BintreePackage::BINTREENODE__LEFT:
    {
    }
        return;
    case ::bintree::BintreePackage::BINTREENODE__RIGHT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

