// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/KdmPackageImpl.cpp
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

#include <kdm/KdmPackage.hpp>
#include <kdm/KdmFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>

using namespace ::kdm;

KdmPackage::KdmPackage()
{
}

void KdmPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = KdmFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Subpackages of this package
        auto &&eSubpackages = getESubpackages();
        eSubpackages.push_back(
                ::kdm::action::ActionPackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::kdm::build::BuildPackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::kdm::code::CodePackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::kdm::conceptual::ConceptualPackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::kdm::core::CorePackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::kdm::data::DataPackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::kdm::event::EventPackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::kdm::source::SourcePackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::kdm::platform::PlatformPackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::kdm::structure::StructurePackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::kdm::kdm::KdmPackage::_getInstanceAndRemoveOwnership());
        eSubpackages.push_back(
                ::kdm::ui::UiPackage::_getInstanceAndRemoveOwnership());
    }();

    // Initialize package
    setName("kdm");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
    }();

    _initialize();
}

