// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * tree_forward.hpp
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

#ifndef _TREE_FORWARD_HPP
#define _TREE_FORWARD_HPP

#include <ecore_forward.hpp> // for EDataTypes

/*PROTECTED REGION ID(tree_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

namespace tree
{

// EDataType

// EClass

// TreeNode
    class TreeNode;
    using TreeNode_ptr = ::ecore::Ptr<TreeNode>;

// Leaf
    class Leaf;
    using Leaf_ptr = ::ecore::Ptr<Leaf>;

// NonTerminal
    class NonTerminal;
    using NonTerminal_ptr = ::ecore::Ptr<NonTerminal>;

// EEnum

// Package & Factory
    class TreeFactory;
    using TreeFactory_ptr = ::ecore::Ptr<TreeFactory>;
    class TreePackage;
    using TreePackage_ptr = ::ecore::Ptr<TreePackage>;

} // tree

#endif // _TREE_FORWARD_HPP

