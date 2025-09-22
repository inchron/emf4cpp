// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/Base1Package.hpp
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

#ifndef _BASE_BASE1PACKAGE_HPP
#define _BASE_BASE1PACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <base/base1_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <base/BasePackage.hpp>

#include "../dllBase.hpp"

namespace base
{
    namespace base1
    {

    class EXPORT_BASE_DLL Base1Package : public virtual ::ecore::EPackage
    {
    public:

        static Base1Package_ptr _instance();
        static Base1Package_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier Base10
        static const int BASE10 = 0;
        static const int BASE10__VALBASE01 = 0;
        static const int BASE10__DERIVED02REF = 1;
        static const int BASE10__VALBASE10 = 2;
        static const int BASE10_FEATURE_COUNT = 3;

        // IDs for classifier Base11
        static const int BASE11 = 1;
        static const int BASE11__VALBASE01 = 0;
        static const int BASE11__DERIVED02REF = 1;
        static const int BASE11__VALBASE10 = 2;
        static const int BASE11__VALBASE02 = 3;
        static const int BASE11__VALBASE03 = 4;
        static const int BASE11__VALBASE11 = 5;
        static const int BASE11_FEATURE_COUNT = 6;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getBase10();

        virtual ::ecore::EClass_ptr getBase11();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getBase10__valBase10();

        virtual ::ecore::EAttribute_ptr getBase11__valBase11();

    protected:

        static ::ecore::Ptr< Base1Package > s_instance;

        Base1Package();
        void _initPackage();

        ::ecore::EClass_ptr m_Base10EClass;
        ::ecore::EClass_ptr m_Base11EClass;

        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_Base10__valBase10;

        ::ecore::EAttribute_ptr m_Base11__valBase11;

    };

}
 // base1
}// base

#endif // _BASE_BASE1PACKAGE_HPP

