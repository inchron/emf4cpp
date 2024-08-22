// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level2/Level3_forward.hpp
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

#ifndef _TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3_FORWARD_HPP
#define _TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3_FORWARD_HPP

#include <ecore_forward.hpp> // for EDataTypes

/*PROTECTED REGION ID(TopLevelPackage_Level1_Level2_Level3_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

namespace TopLevelPackage
{
    namespace Level1
    {
        namespace Level2
        {
            namespace Level3
            {

// EDataType

// EClass

// Level3Class
                class Level3Class;
                using Level3Class_ptr = ::ecore::Ptr<Level3Class>;

// EEnum

// Package & Factory
                class Level3Factory;
                using Level3Factory_ptr = ::ecore::Ptr<Level3Factory>;
                class Level3Package;
                using Level3Package_ptr = ::ecore::Ptr<Level3Package>;

            } // Level3
        } // Level2
    } // Level1
} // TopLevelPackage

#endif // _TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3_FORWARD_HPP

