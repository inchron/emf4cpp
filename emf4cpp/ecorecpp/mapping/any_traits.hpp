// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * mapping/any_traits.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
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

#ifndef ECORECPP_MAPPING_ANYTRAITS_HPP
#define    ECORECPP_MAPPING_ANYTRAITS_HPP

#include <type_traits>
#include <typeinfo>
#include "type_definitions.hpp"

namespace ecorecpp
{
namespace mapping
{

template< typename T >
struct any_traits
{
    static inline void fromAny(const any& _any, T& _t)
    {
		if constexpr ( std::is_enum_v<T> )
			_t = static_cast<T>( any::any_cast<int>( _any ) );
		else
			_t = any::any_cast<T>(_any);
	}

	static inline void toAny(any& _any, const T& _t)
    {
		if constexpr ( std::is_enum_v<T> )
			_any = static_cast<int>(_t);
		else
			_any = _t;
    }
};

} // mapping
} // ecorecpp

#endif // ECORECPP_MAPPING_ANYTRAITS_HPP
