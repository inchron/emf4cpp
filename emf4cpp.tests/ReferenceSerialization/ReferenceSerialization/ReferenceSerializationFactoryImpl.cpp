// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ReferenceSerialization/ReferenceSerializationFactoryImpl.cpp
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

#include <ReferenceSerialization/ReferenceSerializationFactory.hpp>
#include <ReferenceSerialization/ReferenceSerializationPackage.hpp>
#include <ReferenceSerialization/Container.hpp>
#include <ReferenceSerialization/Content.hpp>
#include <ReferenceSerialization/Child.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ReferenceSerialization;

ReferenceSerializationFactory::ReferenceSerializationFactory()
{
}

::ecore::EObject_ptr ReferenceSerializationFactory::create(
        ::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case ReferenceSerializationPackage::CONTAINER:
        return createContainer();
    case ReferenceSerializationPackage::CONTENT:
        return createContent();
    case ReferenceSerializationPackage::CHILD:
        return createChild();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject ReferenceSerializationFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString ReferenceSerializationFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Container_ptr ReferenceSerializationFactory::createContainer()
{
    return ::ecore::Ptr < Container > (new Container);
}
Content_ptr ReferenceSerializationFactory::createContent()
{
    return ::ecore::Ptr < Content > (new Content);
}
Child_ptr ReferenceSerializationFactory::createChild()
{
    return ::ecore::Ptr < Child > (new Child);
}

