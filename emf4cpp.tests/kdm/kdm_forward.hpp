// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm_forward.hpp
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

#ifndef _KDM_FORWARD_HPP
#define _KDM_FORWARD_HPP

#include <ecore_forward.hpp> // for EDataTypes

/*PROTECTED REGION ID(kdm_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage
#include <kdm/action_forward.hpp>
#include <kdm/build_forward.hpp>
#include <kdm/code_forward.hpp>
#include <kdm/conceptual_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/data_forward.hpp>
#include <kdm/event_forward.hpp>
#include <kdm/source_forward.hpp>
#include <kdm/platform_forward.hpp>
#include <kdm/structure_forward.hpp>
#include <kdm/kdm_forward.hpp>
#include <kdm/ui_forward.hpp>

namespace kdm
{

// EDataType

// EClass

// EEnum

// Package & Factory
    class KdmFactory;
    using KdmFactory_ptr = ::ecore::Ptr<KdmFactory>;
    class KdmPackage;
    using KdmPackage_ptr = ::ecore::Ptr<KdmPackage>;

} // kdm

#endif // _KDM_FORWARD_HPP

