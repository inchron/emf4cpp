// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/base2/Base2Package.hpp
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

#ifndef _BASE_BASE1_BASE2PACKAGE_HPP
#define _BASE_BASE1_BASE2PACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <base/base1/base2_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <base/BasePackage.hpp>
#include <base/base1/Base1Package.hpp>

#include "../../dllBase.hpp"

namespace base
{
    namespace base1
    {
        namespace base2
        {

        class EXPORT_BASE_DLL Base2Package : public virtual ::ecore::EPackage
        {
        public:

            static Base2Package_ptr _instance();
            static Base2Package_ptr _getInstanceAndRemoveOwnership();

            // IDs for classifier Base20
            static const int BASE20 = 0;
            static const int BASE20__VALBASE01 = 0;
            static const int BASE20__DERIVED02REF = 1;
            static const int BASE20__VALBASE10 = 2;
            static const int BASE20__VALBASE02 = 3;
            static const int BASE20__VALBASE03 = 4;
            static const int BASE20__VALBASE11 = 5;
            static const int BASE20__VALBASE20 = 6;
            static const int BASE20_FEATURE_COUNT = 7;

            // EClassifiers methods

            virtual ::ecore::EClass_ptr getBase20();

            // EStructuralFeatures methods

            virtual ::ecore::EAttribute_ptr getBase20__valBase20();

        protected:

            static ::ecore::Ptr< Base2Package > s_instance;

            Base2Package();
            void _initPackage();

            ::ecore::EClass_ptr m_Base20EClass;

            // EStructuralFeatures instances

            ::ecore::EAttribute_ptr m_Base20__valBase20;

        };

    }
// base2
}// base1
} // base

#endif // _BASE_BASE1_BASE2PACKAGE_HPP

