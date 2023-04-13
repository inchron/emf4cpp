// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * v_3_0/edate/EdateFactoryImpl.cpp
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

#include <v_3_0/edate/EdateFactory.hpp>
#include <v_3_0/edate/EdatePackage.hpp>
#include <v_3_0/edate/Person.hpp>
#include <v_3_0/edate/Apollo11.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::v_3_0::edate;

EdateFactory::EdateFactory()
{
}

::ecore::EObject_ptr EdateFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case EdatePackage::PERSON:
        return createPerson();
    case EdatePackage::APOLLO11:
        return createApollo11();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject EdateFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString EdateFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Person_ptr EdateFactory::createPerson()
{
    return ::ecore::Ptr < Person > (new Person);
}
Apollo11_ptr EdateFactory::createApollo11()
{
    return ::ecore::Ptr < Apollo11 > (new Apollo11);
}

