// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/BasePackage.hpp
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

#ifndef _BASEPACKAGE_HPP
#define _BASEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <base_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <base/dllBase.hpp>

namespace base
{

class EXPORT_BASE_DLL BasePackage : public virtual ::ecore::EPackage
{
public:

    static BasePackage_ptr _instance();
    static BasePackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier Base01
    static const int BASE01 = 0;
    static const int BASE01__VALBASE01 = 0;
    static const int BASE01__DERIVED02REF = 1;
    static const int BASE01_FEATURE_COUNT = 2;

    // IDs for classifier Base02
    static const int BASE02 = 1;
    static const int BASE02__VALBASE02 = 0;
    static const int BASE02_FEATURE_COUNT = 1;

    // IDs for classifier Base03
    static const int BASE03 = 2;
    static const int BASE03__VALBASE03 = 0;
    static const int BASE03_FEATURE_COUNT = 1;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getBase01();

    virtual ::ecore::EClass_ptr getBase02();

    virtual ::ecore::EClass_ptr getBase03();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getBase01__valBase01();

    virtual ::ecore::EReference_ptr getBase01__derived02ref();

    virtual ::ecore::EAttribute_ptr getBase02__valBase02();

    virtual ::ecore::EAttribute_ptr getBase03__valBase03();

protected:

    static ::ecore::Ptr< BasePackage > s_instance;

    BasePackage();
    void _initPackage();

    ::ecore::EClass_ptr m_Base01EClass;
    ::ecore::EClass_ptr m_Base02EClass;
    ::ecore::EClass_ptr m_Base03EClass;

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_Base01__valBase01;

    ::ecore::EReference_ptr m_Base01__derived02ref;

    ::ecore::EAttribute_ptr m_Base02__valBase02;

    ::ecore::EAttribute_ptr m_Base03__valBase03;

};

}
 // base

#endif // _BASEPACKAGE_HPP

