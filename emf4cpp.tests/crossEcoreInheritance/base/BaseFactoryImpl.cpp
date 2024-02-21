// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/BaseFactoryImpl.cpp
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

#include <base/BaseFactory.hpp>
#include <base/BasePackage.hpp>
#include <base/Base01.hpp>
#include <base/Base02.hpp>
#include <base/Base03.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::base;

BaseFactory::BaseFactory()
{
}

::ecore::EObject_ptr BaseFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case BasePackage::BASE01:
        return createBase01();
    case BasePackage::BASE02:
        return createBase02();
    case BasePackage::BASE03:
        return createBase03();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject BaseFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]] ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString BaseFactory::convertToString(::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]] ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Base01_ptr BaseFactory::createBase01()
{
    return ::ecore::Ptr < Base01 > (new Base01);
}
Base02_ptr BaseFactory::createBase02()
{
    return ::ecore::Ptr < Base02 > (new Base02);
}
Base03_ptr BaseFactory::createBase03()
{
    return ::ecore::Ptr < Base03 > (new Base03);
}

