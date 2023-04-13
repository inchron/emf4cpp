// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/AbstractCodeElement.cpp
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

#include "AbstractCodeElement.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/code/CodePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractCodeElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::code;

// Default constructor
AbstractCodeElement::AbstractCodeElement()
{
    /*PROTECTED REGION ID(AbstractCodeElementImpl__AbstractCodeElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractCodeElement::~AbstractCodeElement()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& AbstractCodeElement::getSource() const
{
    if (!m_source)
        return const_cast< AbstractCodeElement* >(this)->getSource();

    return *m_source;
}

::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& AbstractCodeElement::getSource()
{
    /*PROTECTED REGION ID(AbstractCodeElement__getSource) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_source)
        m_source.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::source::SourceRef_ptr, -1, true, false >(this,
                        ::kdm::code::CodePackage::_instance()->getAbstractCodeElement__source()));
    /*PROTECTED REGION END*/
    return *m_source;
}

const ::ecorecpp::mapping::EList< ::kdm::code::CommentUnit_ptr >& AbstractCodeElement::getComment() const
{
    if (!m_comment)
        return const_cast< AbstractCodeElement* >(this)->getComment();

    return *m_comment;
}

::ecorecpp::mapping::EList< ::kdm::code::CommentUnit_ptr >& AbstractCodeElement::getComment()
{
    /*PROTECTED REGION ID(AbstractCodeElement__getComment) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_comment)
        m_comment.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::code::CommentUnit_ptr, -1, true, false >(this,
                        ::kdm::code::CodePackage::_instance()->getAbstractCodeElement__comment()));
    /*PROTECTED REGION END*/
    return *m_comment;
}

const ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeRelationship_ptr >& AbstractCodeElement::getCodeRelation() const
{
    if (!m_codeRelation)
        return const_cast< AbstractCodeElement* >(this)->getCodeRelation();

    return *m_codeRelation;
}

::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeRelationship_ptr >& AbstractCodeElement::getCodeRelation()
{
    /*PROTECTED REGION ID(AbstractCodeElement__getCodeRelation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_codeRelation)
        m_codeRelation.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::code::AbstractCodeRelationship_ptr, -1, true,
                        false >(this,
                        ::kdm::code::CodePackage::_instance()->getAbstractCodeElement__codeRelation()));
    /*PROTECTED REGION END*/
    return *m_codeRelation;
}

