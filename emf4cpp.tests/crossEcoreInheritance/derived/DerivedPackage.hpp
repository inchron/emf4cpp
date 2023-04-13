// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * derived/DerivedPackage.hpp
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

#ifndef _DERIVEDPACKAGE_HPP
#define _DERIVEDPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <derived_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <base/BasePackage.hpp>
#include <base/base1/Base1Package.hpp>
#include <base/base1/base2/Base2Package.hpp>

#include <derived/dllDerived.hpp>

namespace derived
{

class EXPORT_DERIVED_DLL DerivedPackage : public virtual ::ecore::EPackage
{
public:

    static DerivedPackage_ptr _instance();
    static DerivedPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier Derived01
    static const int DERIVED01 = 0;
    static const int DERIVED01__VALBASE01 = 0;
    static const int DERIVED01__DERIVED02REF = 1;
    static const int DERIVED01__VALBASE10 = 2;
    static const int DERIVED01__VALBASE02 = 3;
    static const int DERIVED01__VALBASE03 = 4;
    static const int DERIVED01__VALBASE11 = 5;
    static const int DERIVED01__VALBASE20 = 6;
    static const int DERIVED01__VALDERIVED01 = 7;
    static const int DERIVED01_FEATURE_COUNT = 8;

    // IDs for classifier Derived02
    static const int DERIVED02 = 1;
    static const int DERIVED02__VALBASE01 = 0;
    static const int DERIVED02__DERIVED02REF = 1;
    static const int DERIVED02__VALBASE10 = 2;
    static const int DERIVED02__VALBASE02 = 3;
    static const int DERIVED02__VALBASE03 = 4;
    static const int DERIVED02__VALBASE11 = 5;
    static const int DERIVED02__VALBASE20 = 6;
    static const int DERIVED02__VALDERIVED01 = 7;
    static const int DERIVED02__VALDERIVED02 = 8;
    static const int DERIVED02__BASE01REF = 9;
    static const int DERIVED02_FEATURE_COUNT = 10;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getDerived01();

    virtual ::ecore::EClass_ptr getDerived02();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getDerived01__valDerived01();

    virtual ::ecore::EAttribute_ptr getDerived02__valDerived02();

    virtual ::ecore::EReference_ptr getDerived02__base01ref();

protected:

    static ::ecore::Ptr< DerivedPackage > s_instance;

    DerivedPackage();
    void _initPackage();

    ::ecore::EClass_ptr m_Derived01EClass;
    ::ecore::EClass_ptr m_Derived02EClass;

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_Derived01__valDerived01;

    ::ecore::EAttribute_ptr m_Derived02__valDerived02;

    ::ecore::EReference_ptr m_Derived02__base01ref;

};

}
 // derived

#endif // _DERIVEDPACKAGE_HPP

