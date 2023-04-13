// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/base2_forward.hpp
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

#ifndef _BASE_BASE1_BASE2_FORWARD_HPP
#define _BASE_BASE1_BASE2_FORWARD_HPP

#include <ecore_forward.hpp> // for EDataTypes

/*PROTECTED REGION ID(base_base1_base2_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

namespace base
{
    namespace base1
    {
        namespace base2
        {

// EDataType

// EClass

// Base20
            class Base20;
            using Base20_ptr = ::ecore::Ptr<Base20>;

// EEnum

// Package & Factory
            class Base2Factory;
            using Base2Factory_ptr = ::ecore::Ptr<Base2Factory>;
            class Base2Package;
            using Base2Package_ptr = ::ecore::Ptr<Base2Package>;

        } // base2
    } // base1
} // base

#endif // _BASE_BASE1_BASE2_FORWARD_HPP

