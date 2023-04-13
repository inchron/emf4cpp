// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base_forward.hpp
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

#ifndef _BASE_FORWARD_HPP
#define _BASE_FORWARD_HPP

#include <ecore_forward.hpp> // for EDataTypes

/*PROTECTED REGION ID(base_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage
#include <base/base1_forward.hpp>

namespace base
{

// EDataType

// EClass

// Base01
    class Base01;
    using Base01_ptr = ::ecore::Ptr<Base01>;

// Base02
    class Base02;
    using Base02_ptr = ::ecore::Ptr<Base02>;

// Base03
    class Base03;
    using Base03_ptr = ::ecore::Ptr<Base03>;

// EEnum

// Package & Factory
    class BaseFactory;
    using BaseFactory_ptr = ::ecore::Ptr<BaseFactory>;
    class BasePackage;
    using BasePackage_ptr = ::ecore::Ptr<BasePackage>;

} // base

#endif // _BASE_FORWARD_HPP

