// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/TopLevel.cpp
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

#include "TopLevel.hpp"
#include <eopposite/NamedObject.hpp>
#include <eopposite/LeftHand.hpp>
#include <eopposite/RightHand.hpp>
#include <eopposite/RightMultiple.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "eopposite/EoppositePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TopLevel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::eopposite;

// Default constructor
TopLevel::TopLevel()
{
    /*PROTECTED REGION ID(TopLevelImpl__TopLevelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

TopLevel::~TopLevel()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::eopposite::LeftHand_ptr >& TopLevel::getLeftees() const
{
    if (!m_leftees)
        return const_cast< TopLevel* >(this)->getLeftees();

    return *m_leftees;
}

::ecorecpp::mapping::EList< ::eopposite::LeftHand_ptr >& TopLevel::getLeftees()
{
    /*PROTECTED REGION ID(TopLevel__getLeftees) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_leftees)
        m_leftees.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::eopposite::LeftHand_ptr, -1, true, false >(this,
                        ::eopposite::EoppositePackage::_instance()->getTopLevel__leftees()));
    /*PROTECTED REGION END*/
    return *m_leftees;
}

const ::ecorecpp::mapping::EList< ::eopposite::RightHand_ptr >& TopLevel::getRightees() const
{
    if (!m_rightees)
        return const_cast< TopLevel* >(this)->getRightees();

    return *m_rightees;
}

::ecorecpp::mapping::EList< ::eopposite::RightHand_ptr >& TopLevel::getRightees()
{
    /*PROTECTED REGION ID(TopLevel__getRightees) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_rightees)
        m_rightees.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::eopposite::RightHand_ptr, -1, true, false >(this,
                        ::eopposite::EoppositePackage::_instance()->getTopLevel__rightees()));
    /*PROTECTED REGION END*/
    return *m_rightees;
}

const ::ecorecpp::mapping::EList< ::eopposite::RightMultiple_ptr >& TopLevel::getRightMultiples() const
{
    if (!m_rightMultiples)
        return const_cast< TopLevel* >(this)->getRightMultiples();

    return *m_rightMultiples;
}

::ecorecpp::mapping::EList< ::eopposite::RightMultiple_ptr >& TopLevel::getRightMultiples()
{
    /*PROTECTED REGION ID(TopLevel__getRightMultiples) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_rightMultiples)
        m_rightMultiples.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::eopposite::RightMultiple_ptr, -1, true, false >(this,
                        ::eopposite::EoppositePackage::_instance()->getTopLevel__rightMultiples()));
    /*PROTECTED REGION END*/
    return *m_rightMultiples;
}

