// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * nil/NilPackage.hpp
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

#ifndef _NILPACKAGE_HPP
#define _NILPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <nil_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include "dllNil.hpp"

namespace nil
{

class EXPORT_NIL_DLL NilPackage : public virtual ::ecore::EPackage
{
public:

    static NilPackage_ptr _instance();
    static NilPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier Root
    static const int ROOT = 0;
    static const int ROOT__REFERENCE = 0;
    static const int ROOT__MANYREFERENCE = 1;
    static const int ROOT__CONTAINMENTREFERENCE = 2;
    static const int ROOT__MANYCONTAINMENTREFERENCE = 3;
    static const int ROOT_FEATURE_COUNT = 4;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getRoot();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getRoot__reference();

    virtual ::ecore::EReference_ptr getRoot__manyReference();

    virtual ::ecore::EReference_ptr getRoot__containmentReference();

    virtual ::ecore::EReference_ptr getRoot__manyContainmentReference();

protected:

    static ::ecore::Ptr< NilPackage > s_instance;

    NilPackage();
    void _initPackage();

    ::ecore::EClass_ptr m_RootEClass;

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_Root__reference;

    ::ecore::EReference_ptr m_Root__manyReference;

    ::ecore::EReference_ptr m_Root__containmentReference;

    ::ecore::EReference_ptr m_Root__manyContainmentReference;

};

}
 // nil

#endif // _NILPACKAGE_HPP

