// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/RightMultiple.cpp
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

#include "RightMultiple.hpp"
#include <eopposite/NamedObject.hpp>
#include <eopposite/LeftHand.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "eopposite/EoppositePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RightMultiple.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::eopposite;

// Default constructor
RightMultiple::RightMultiple()
{
    /*PROTECTED REGION ID(RightMultipleImpl__RightMultipleImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

RightMultiple::~RightMultiple()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::eopposite::LeftHand_ptr >& RightMultiple::getLeftees() const
{
    if (!m_leftees)
        return const_cast< RightMultiple* >(this)->getLeftees();

    return *m_leftees;
}

::ecorecpp::mapping::EList< ::eopposite::LeftHand_ptr >& RightMultiple::getLeftees()
{
    /*PROTECTED REGION ID(RightMultiple__getLeftees) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_leftees)
        m_leftees.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::eopposite::LeftHand_ptr, -1, false, true >(this,
                        ::eopposite::EoppositePackage::_instance()->getRightMultiple__leftees(),
                        ::eopposite::EoppositePackage::_instance()->getLeftHand__rightMultiple()));
    /*PROTECTED REGION END*/
    return *m_leftees;
}

