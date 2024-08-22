// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * tree/NonTerminal.cpp
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
#include <tree/TreeNode.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "tree/TreePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(NonTerminal.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::tree;

// Default constructor
NonTerminal::NonTerminal()
{
    /*PROTECTED REGION ID(NonTerminalImpl__NonTerminalImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

NonTerminal::~NonTerminal()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::tree::TreeNode_ptr >& NonTerminal::getChildren() const
{
    if (!m_children)
        return const_cast< NonTerminal* >(this)->getChildren();

    return *m_children;
}

::ecorecpp::mapping::EList< ::tree::TreeNode_ptr >& NonTerminal::getChildren()
{
    /*PROTECTED REGION ID(NonTerminal__getChildren) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_children)
        m_children.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::tree::TreeNode_ptr, -1, true, false >(this,
                        ::tree::TreePackage::_instance()->getNonTerminal__children()));
    /*PROTECTED REGION END*/
    return *m_children;
}

