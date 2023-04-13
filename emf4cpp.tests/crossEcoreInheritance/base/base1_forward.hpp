// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1_forward.hpp
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

#ifndef _BASE_BASE1_FORWARD_HPP
#define _BASE_BASE1_FORWARD_HPP

#include <ecore_forward.hpp> // for EDataTypes

/*PROTECTED REGION ID(base_base1_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage
#include <base/base1/base2_forward.hpp>

namespace base
{
    namespace base1
    {

// EDataType

// EClass

// Base10
        class Base10;
        using Base10_ptr = ::ecore::Ptr<Base10>;

// Base11
        class Base11;
        using Base11_ptr = ::ecore::Ptr<Base11>;

// EEnum

// Package & Factory
        class Base1Factory;
        using Base1Factory_ptr = ::ecore::Ptr<Base1Factory>;
        class Base1Package;
        using Base1Package_ptr = ::ecore::Ptr<Base1Package>;

    } // base1
} // base

#endif // _BASE_BASE1_FORWARD_HPP

