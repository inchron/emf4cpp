// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EModelElement.cpp
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

#include "EModelElement.hpp"
#include <ecore/EAnnotation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EModelElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EModelElement::EModelElement()
{
    /*PROTECTED REGION ID(EModelElementImpl__EModelElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EModelElement::~EModelElement()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::ecore::EAnnotation_ptr >& EModelElement::getEAnnotations() const
{
    if (!m_eAnnotations)
        return const_cast< EModelElement* >(this)->getEAnnotations();

    return *m_eAnnotations;
}

::ecorecpp::mapping::EList< ::ecore::EAnnotation_ptr >& EModelElement::getEAnnotations()
{
    /*PROTECTED REGION ID(EModelElement__getEAnnotations) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_eAnnotations)
        m_eAnnotations.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EAnnotation_ptr, -1, true, true >(this,
                        ::ecore::EcorePackage::_instance()->getEModelElement__eAnnotations(),
                        ::ecore::EcorePackage::_instance()->getEAnnotation__eModelElement()));
    /*PROTECTED REGION END*/
    return *m_eAnnotations;
}

