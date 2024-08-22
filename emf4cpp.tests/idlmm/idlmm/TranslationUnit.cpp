// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/TranslationUnit.cpp
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

#include "TranslationUnit.hpp"
#include <idlmm/Contained.hpp>
#include <idlmm/Include.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(TranslationUnit.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

// Default constructor
TranslationUnit::TranslationUnit()
{
    /*PROTECTED REGION ID(TranslationUnitImpl__TranslationUnitImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

TranslationUnit::~TranslationUnit()
{
}

// Attributes

::ecore::EString const& TranslationUnit::getIdentifier() const
{
    return m_identifier;
}

void TranslationUnit::setIdentifier(::ecore::EString const &_identifier)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_identifier = m_identifier;
#endif
    m_identifier = _identifier;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::idlmm::IdlmmPackage::_instance()->getTranslationUnit__identifier(),
                _old_identifier,
                m_identifier
            );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::idlmm::Contained_ptr >& TranslationUnit::getContains() const
{
    if (!m_contains)
        return const_cast< TranslationUnit* >(this)->getContains();

    return *m_contains;
}

::ecorecpp::mapping::EList< ::idlmm::Contained_ptr >& TranslationUnit::getContains()
{
    /*PROTECTED REGION ID(TranslationUnit__getContains) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_contains)
        m_contains.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::idlmm::Contained_ptr, -1, true, false >(this,
                        ::idlmm::IdlmmPackage::_instance()->getTranslationUnit__contains()));
    /*PROTECTED REGION END*/
    return *m_contains;
}

const ::ecorecpp::mapping::EList< ::idlmm::Include_ptr >& TranslationUnit::getIncludes() const
{
    if (!m_includes)
        return const_cast< TranslationUnit* >(this)->getIncludes();

    return *m_includes;
}

::ecorecpp::mapping::EList< ::idlmm::Include_ptr >& TranslationUnit::getIncludes()
{
    /*PROTECTED REGION ID(TranslationUnit__getIncludes) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_includes)
        m_includes.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::idlmm::Include_ptr, -1, true, false >(this,
                        ::idlmm::IdlmmPackage::_instance()->getTranslationUnit__includes()));
    /*PROTECTED REGION END*/
    return *m_includes;
}

