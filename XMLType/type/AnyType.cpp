// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/AnyType.cpp
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

#include "AnyType.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "type/TypePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AnyType.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::type;

// Default constructor
AnyType::AnyType()
{
    /*PROTECTED REGION ID(AnyTypeImpl__AnyTypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AnyType::~AnyType()
{
}

// Attributes

std::vector< ::ecore::EFeatureMapEntry > const& AnyType::getMixed() const
{
    return m_mixed;
}

void AnyType::setMixed(std::vector< ::ecore::EFeatureMapEntry > _mixed)
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
                ::type::TypePackage::_instance()->getAnyType__mixed(),
                _old_mixed,
                m_mixed
            );
        eNotify(&notification);
    }
#endif
}

void AnyType::addMixed(::ecore::EFeatureMapEntry const &_new_element_in_mixed)
{
    m_mixed.push_back(_new_element_in_mixed);
}

void AnyType::setMixedAt(size_t _position,
        ::ecore::EFeatureMapEntry const &_new_element_in_mixed)
{
    if (_position >= m_mixed.size())
        m_mixed.resize(_position + 1, ::ecore::EFeatureMapEntry());

    m_mixed[_position] = _new_element_in_mixed;
}

void AnyType::deleteMixedAt(size_t _position)
{
    if (_position >= m_mixed.size())
        throw "Attribute counter out of bounds!";

    // TODO: This is not actually quite true
    if (_position == m_mixed.size() - 1)
        m_mixed.resize(_position);
}

std::vector< ::ecore::EFeatureMapEntry > AnyType::getAny()
{
    /*PROTECTED REGION ID(AnyTypeImpl_Getter_any) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: type::AnyType::any";
    /*PROTECTED REGION END*/
}

std::vector< ::ecore::EFeatureMapEntry > const& AnyType::getAnyAttribute() const
{
    return m_anyAttribute;
}

void AnyType::setAnyAttribute(
        std::vector< ::ecore::EFeatureMapEntry > _anyAttribute)
{
#ifdef ECORECPP_NOTIFICATION_API
    std::vector< ::ecore::EFeatureMapEntry > _old_anyAttribute = m_anyAttribute;
#endif
    m_anyAttribute = _anyAttribute;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::type::TypePackage::_instance()->getAnyType__anyAttribute(),
                _old_anyAttribute,
                m_anyAttribute
            );
        eNotify(&notification);
    }
#endif
}

void AnyType::addAnyAttribute(
        ::ecore::EFeatureMapEntry const &_new_element_in_anyAttribute)
{
    m_anyAttribute.push_back(_new_element_in_anyAttribute);
}

void AnyType::setAnyAttributeAt(size_t _position,
        ::ecore::EFeatureMapEntry const &_new_element_in_anyAttribute)
{
    if (_position >= m_anyAttribute.size())
        m_anyAttribute.resize(_position + 1, ::ecore::EFeatureMapEntry());

    m_anyAttribute[_position] = _new_element_in_anyAttribute;
}

void AnyType::deleteAnyAttributeAt(size_t _position)
{
    if (_position >= m_anyAttribute.size())
        throw "Attribute counter out of bounds!";

    // TODO: This is not actually quite true
    if (_position == m_anyAttribute.size() - 1)
        m_anyAttribute.resize(_position);
}

// References

