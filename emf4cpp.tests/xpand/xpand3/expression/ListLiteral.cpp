// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/ListLiteral.cpp
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

#include "ListLiteral.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/expression/ExpressionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ListLiteral.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::expression;

// Default constructor
ListLiteral::ListLiteral()
{
    /*PROTECTED REGION ID(ListLiteralImpl__ListLiteralImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ListLiteral::~ListLiteral()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::xpand3::expression::AbstractExpression_ptr >& ListLiteral::getElements() const
{
    if (!m_elements)
        return const_cast< ListLiteral* >(this)->getElements();

    return *m_elements;
}

::ecorecpp::mapping::EList< ::xpand3::expression::AbstractExpression_ptr >& ListLiteral::getElements()
{
    /*PROTECTED REGION ID(ListLiteral__getElements) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_elements)
        m_elements.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::xpand3::expression::AbstractExpression_ptr, -1, true,
                        false >(this,
                        ::xpand3::expression::ExpressionPackage::_instance()->getListLiteral__elements()));
    /*PROTECTED REGION END*/
    return *m_elements;
}

