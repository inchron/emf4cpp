// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests/ResourceTestsFactoryImpl.cpp
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

#include <ResourceTests/ResourceTestsFactory.hpp>
#include <ResourceTests/ResourceTestsPackage.hpp>
#include <ResourceTests/Root.hpp>
#include <ResourceTests/ReferenceTarget.hpp>
#include <ResourceTests/Referrer.hpp>
#include <ResourceTests/ETypes.hpp>
#include <ResourceTests/NamedObject.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ResourceTests;

ResourceTestsFactory::ResourceTestsFactory()
{
}

::ecore::EObject_ptr ResourceTestsFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case ResourceTestsPackage::ROOT:
        return createRoot();
    case ResourceTestsPackage::REFERENCETARGET:
        return createReferenceTarget();
    case ResourceTestsPackage::REFERRER:
        return createReferrer();
    case ResourceTestsPackage::ETYPES:
        return createETypes();
    case ResourceTestsPackage::NAMEDOBJECT:
        return createNamedObject();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject ResourceTestsFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]] ::ecore::EString const &_literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString ResourceTestsFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]] ::ecore::EJavaObject const &_instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Root_ptr ResourceTestsFactory::createRoot()
{
    return ::ecore::Ptr < Root > (new Root);
}
ReferenceTarget_ptr ResourceTestsFactory::createReferenceTarget()
{
    return ::ecore::Ptr < ReferenceTarget > (new ReferenceTarget);
}
Referrer_ptr ResourceTestsFactory::createReferrer()
{
    return ::ecore::Ptr < Referrer > (new Referrer);
}
ETypes_ptr ResourceTestsFactory::createETypes()
{
    return ::ecore::Ptr < ETypes > (new ETypes);
}
NamedObject_ptr ResourceTestsFactory::createNamedObject()
{
    return ::ecore::Ptr < NamedObject > (new NamedObject);
}

