// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/XMLTypeDocumentRoot.cpp
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

#include "XMLTypeDocumentRoot.hpp"
#include <ecore/EStringToStringMapEntry.hpp>
#include <type/ProcessingInstruction.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "type/TypePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(XMLTypeDocumentRoot.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::type;

// Default constructor
XMLTypeDocumentRoot::XMLTypeDocumentRoot()
{
    /*PROTECTED REGION ID(XMLTypeDocumentRootImpl__XMLTypeDocumentRootImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

XMLTypeDocumentRoot::~XMLTypeDocumentRoot()
{
}

// Attributes

std::vector< ::ecore::EFeatureMapEntry > const& XMLTypeDocumentRoot::getMixed() const
{
    return m_mixed;
}

void XMLTypeDocumentRoot::setMixed(
        std::vector< ::ecore::EFeatureMapEntry > _mixed)
{
#ifdef ECORECPP_NOTIFICATION_API
    std::vector< ::ecore::EFeatureMapEntry > _old_mixed = m_mixed;
#endif
    m_mixed = _mixed;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::type::TypePackage::_instance()->getXMLTypeDocumentRoot__mixed(),
                _old_mixed,
                m_mixed
            );
        eNotify(&notification);
    }
#endif
}

void XMLTypeDocumentRoot::addMixed(
        ::ecore::EFeatureMapEntry const &_new_element_in_mixed)
{
    m_mixed.push_back(_new_element_in_mixed);
}

void XMLTypeDocumentRoot::setMixedAt(size_t _position,
        ::ecore::EFeatureMapEntry const &_new_element_in_mixed)
{
    if (_position >= m_mixed.size())
        m_mixed.resize(_position + 1, ::ecore::EFeatureMapEntry());

    m_mixed[_position] = _new_element_in_mixed;
}

void XMLTypeDocumentRoot::deleteMixedAt(size_t _position)
{
    if (_position >= m_mixed.size())
        throw "Attribute counter out of bounds!";

    // TODO: This is not actually quite true
    if (_position == m_mixed.size() - 1)
        m_mixed.resize(_position);
}

std::vector< ::type::String > XMLTypeDocumentRoot::getCDATA()
{
    /*PROTECTED REGION ID(XMLTypeDocumentRootImpl_Getter_cDATA) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: type::XMLTypeDocumentRoot::cDATA";
    /*PROTECTED REGION END*/
}

std::vector< ::type::String > XMLTypeDocumentRoot::getComment()
{
    /*PROTECTED REGION ID(XMLTypeDocumentRootImpl_Getter_comment) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: type::XMLTypeDocumentRoot::comment";
    /*PROTECTED REGION END*/
}

std::vector< ::type::String > XMLTypeDocumentRoot::getText()
{
    /*PROTECTED REGION ID(XMLTypeDocumentRootImpl_Getter_text) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: type::XMLTypeDocumentRoot::text";
    /*PROTECTED REGION END*/
}

// References

const ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& XMLTypeDocumentRoot::getXMLNSPrefixMap() const
{
    if (!m_xMLNSPrefixMap)
        return const_cast< XMLTypeDocumentRoot* >(this)->getXMLNSPrefixMap();

    return *m_xMLNSPrefixMap;
}

::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& XMLTypeDocumentRoot::getXMLNSPrefixMap()
{
    /*PROTECTED REGION ID(XMLTypeDocumentRoot__getXMLNSPrefixMap) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_xMLNSPrefixMap)
        m_xMLNSPrefixMap.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EStringToStringMapEntry_ptr, -1, true, false >(
                        this,
                        ::type::TypePackage::_instance()->getXMLTypeDocumentRoot__xMLNSPrefixMap()));
    /*PROTECTED REGION END*/
    return *m_xMLNSPrefixMap;
}

const ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& XMLTypeDocumentRoot::getXSISchemaLocation() const
{
    if (!m_xSISchemaLocation)
        return const_cast< XMLTypeDocumentRoot* >(this)->getXSISchemaLocation();

    return *m_xSISchemaLocation;
}

::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& XMLTypeDocumentRoot::getXSISchemaLocation()
{
    /*PROTECTED REGION ID(XMLTypeDocumentRoot__getXSISchemaLocation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_xSISchemaLocation)
        m_xSISchemaLocation.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EStringToStringMapEntry_ptr, -1, true, false >(
                        this,
                        ::type::TypePackage::_instance()->getXMLTypeDocumentRoot__xSISchemaLocation()));
    /*PROTECTED REGION END*/
    return *m_xSISchemaLocation;
}

const ::ecorecpp::mapping::EList< ::type::ProcessingInstruction_ptr >& XMLTypeDocumentRoot::getProcessingInstruction() const
{
    if (!m_processingInstruction)
        return const_cast< XMLTypeDocumentRoot* >(this)->getProcessingInstruction();

    return *m_processingInstruction;
}

::ecorecpp::mapping::EList< ::type::ProcessingInstruction_ptr >& XMLTypeDocumentRoot::getProcessingInstruction()
{
    /*PROTECTED REGION ID(XMLTypeDocumentRoot__getProcessingInstruction) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_processingInstruction)
        m_processingInstruction.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::type::ProcessingInstruction_ptr, -2, true, false >(
                        this,
                        ::type::TypePackage::_instance()->getXMLTypeDocumentRoot__processingInstruction()));
    /*PROTECTED REGION END*/
    return *m_processingInstruction;
}

