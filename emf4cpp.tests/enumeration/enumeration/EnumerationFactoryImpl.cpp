// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enumeration/EnumerationFactoryImpl.cpp
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

#include <enumeration/EnumerationFactory.hpp>
#include <enumeration/EnumerationPackage.hpp>
#include <enumeration/Bird.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::enumeration;

EnumerationFactory::EnumerationFactory()
{
}

::ecore::EObject_ptr EnumerationFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case EnumerationPackage::BIRD:
        return createBird();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject EnumerationFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]] ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    case EnumerationPackage::BIRDTYPE:
    {
        ::ecore::EJavaObject _any;
        EnumerationPackage_ptr _epkg = std::dynamic_pointer_cast
                < ::enumeration::EnumerationPackage > (getEPackage());
        return _epkg->getBirdType()->getEEnumLiteralByLiteral(_literalValue)->getValue();
    }
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString EnumerationFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]] ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    case EnumerationPackage::BIRDTYPE:
    {
        EnumerationPackage_ptr _epkg = ::ecore::as
                < ::enumeration::EnumerationPackage > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getBirdType()->getEEnumLiteral(_value)->getLiteral();
    }
    default:
        throw "IllegalArgumentException";
    }
}

Bird_ptr EnumerationFactory::createBird()
{
    return ::ecore::Ptr < Bird > (new Bird);
}

