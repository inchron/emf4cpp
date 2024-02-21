// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/Base1FactoryImpl.cpp
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

#include <base/base1/Base1Factory.hpp>
#include <base/base1/Base1Package.hpp>
#include <base/base1/Base10.hpp>
#include <base/base1/Base11.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::base::base1;

Base1Factory::Base1Factory()
{
}

::ecore::EObject_ptr Base1Factory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case Base1Package::BASE10:
        return createBase10();
    case Base1Package::BASE11:
        return createBase11();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject Base1Factory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]] ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString Base1Factory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]] ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Base10_ptr Base1Factory::createBase10()
{
    return ::ecore::Ptr < Base10 > (new Base10);
}
Base11_ptr Base1Factory::createBase11()
{
    return ::ecore::Ptr < Base11 > (new Base11);
}

