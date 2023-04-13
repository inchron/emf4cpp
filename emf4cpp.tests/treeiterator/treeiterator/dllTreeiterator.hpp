// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * treeiterator/dllTreeiterator.hpp
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

#ifndef DLL_TREEITERATOR_HPP
#define DLL_TREEITERATOR_HPP
/*
 * To use or build the library as a static or shared one, define at most one of
 * - USE_TREEITERATOR_STATIC, MAKE_TREEITERATOR_STATIC,
 * - USE_TREEITERATOR_DLL, or MAKE_TREEITERATOR_DLL.
 * When none of these macros are defined, then USE_TREEITERATOR_DLL
 * is implicitly considered as defined.
 *
 * The definition of one those 4 macros implies the value of the macros
 * - EXPORT_TREEITERATOR_DLL and
 * - EXTERN_TREEITERATOR_DLL.
 * These must be used to correctly use or build the library as a shared one.
 *
 */

#if defined(MAKE_TREEITERATOR_STATIC) +\
    defined(USE_TREEITERATOR_STATIC) +\
    defined(MAKE_TREEITERATOR_DLL) +\
    defined(USE_TREEITERATOR_DLL) > 1
#   error "Please define at most one of MAKE_TREEITERATOR_STATIC, USE_TREEITERATOR_STATIC, MAKE_TREEITERATOR_DLL, or USE_TREEITERATOR_DLL"
#endif

#if defined(__WIN32__) || defined(_WIN32)
#   if defined(MAKE_TREEITERATOR_STATIC) || defined(USE_TREEITERATOR_STATIC)
#       define EXPORT_TREEITERATOR_DLL
#       define EXTERN_TREEITERATOR_DLL
#   elif defined(MAKE_TREEITERATOR_DLL)
#       define EXPORT_TREEITERATOR_DLL __declspec(dllexport)
#       define EXTERN_TREEITERATOR_DLL __declspec(dllimport)
#   else
#       define EXPORT_TREEITERATOR_DLL __declspec(dllimport)
#       define EXTERN_TREEITERATOR_DLL __declspec(dllexport)
#   endif
#else
#   if defined(MAKE_TREEITERATOR_STATIC) || defined(USE_TREEITERATOR_STATIC)
#      define EXPORT_TREEITERATOR_DLL
#   else
#      define EXPORT_TREEITERATOR_DLL __attribute__ ((visibility ("default")))
#   endif
#   define EXTERN_TREEITERATOR_DLL
#endif

#endif // DLL_TREEITERATOR_HPP
