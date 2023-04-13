// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/dllXpand3.hpp
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

#ifndef DLL_XPAND3_HPP
#define DLL_XPAND3_HPP
/*
 * To use or build the library as a static or shared one, define at most one of
 * - USE_XPAND3_STATIC, MAKE_XPAND3_STATIC,
 * - USE_XPAND3_DLL, or MAKE_XPAND3_DLL.
 * When none of these macros are defined, then USE_XPAND3_DLL
 * is implicitly considered as defined.
 *
 * The definition of one those 4 macros implies the value of the macros
 * - EXPORT_XPAND3_DLL and
 * - EXTERN_XPAND3_DLL.
 * These must be used to correctly use or build the library as a shared one.
 *
 */

#if defined(MAKE_XPAND3_STATIC) +\
    defined(USE_XPAND3_STATIC) +\
    defined(MAKE_XPAND3_DLL) +\
    defined(USE_XPAND3_DLL) > 1
#   error "Please define at most one of MAKE_XPAND3_STATIC, USE_XPAND3_STATIC, MAKE_XPAND3_DLL, or USE_XPAND3_DLL"
#endif

#if defined(__WIN32__) || defined(_WIN32)
#   if defined(MAKE_XPAND3_STATIC) || defined(USE_XPAND3_STATIC)
#       define EXPORT_XPAND3_DLL
#       define EXTERN_XPAND3_DLL
#   elif defined(MAKE_XPAND3_DLL)
#       define EXPORT_XPAND3_DLL __declspec(dllexport)
#       define EXTERN_XPAND3_DLL __declspec(dllimport)
#   else
#       define EXPORT_XPAND3_DLL __declspec(dllimport)
#       define EXTERN_XPAND3_DLL __declspec(dllexport)
#   endif
#else
#   if defined(MAKE_XPAND3_STATIC) || defined(USE_XPAND3_STATIC)
#      define EXPORT_XPAND3_DLL
#   else
#      define EXPORT_XPAND3_DLL __attribute__ ((visibility ("default")))
#   endif
#   define EXTERN_XPAND3_DLL
#endif

#endif // DLL_XPAND3_HPP
