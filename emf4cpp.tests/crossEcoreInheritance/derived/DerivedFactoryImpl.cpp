// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * derived/DerivedFactoryImpl.cpp
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

#include <derived/DerivedFactory.hpp>
#include <derived/DerivedPackage.hpp>
#include <derived/Derived01.hpp>
#include <derived/Derived02.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::derived;

DerivedFactory::DerivedFactory()
{
}

::ecore::EObject_ptr DerivedFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case DerivedPackage::DERIVED01:
        return createDerived01();
    case DerivedPackage::DERIVED02:
        return createDerived02();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject DerivedFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString DerivedFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Derived01_ptr DerivedFactory::createDerived01()
{
    return ::ecore::Ptr < Derived01 > (new Derived01);
}
Derived02_ptr DerivedFactory::createDerived02()
{
    return ::ecore::Ptr < Derived02 > (new Derived02);
}

