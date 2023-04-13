// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * derived_forward.hpp
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

#ifndef _DERIVED_FORWARD_HPP
#define _DERIVED_FORWARD_HPP

#include <ecore_forward.hpp> // for EDataTypes

/*PROTECTED REGION ID(derived_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

namespace derived
{

// EDataType

// EClass

// Derived01
    class Derived01;
    using Derived01_ptr = ::ecore::Ptr<Derived01>;

// Derived02
    class Derived02;
    using Derived02_ptr = ::ecore::Ptr<Derived02>;

// EEnum

// Package & Factory
    class DerivedFactory;
    using DerivedFactory_ptr = ::ecore::Ptr<DerivedFactory>;
    class DerivedPackage;
    using DerivedPackage_ptr = ::ecore::Ptr<DerivedPackage>;

} // derived

#endif // _DERIVED_FORWARD_HPP

