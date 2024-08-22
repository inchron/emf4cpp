// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level2/Level3/Level3Package.hpp
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

#ifndef _TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3PACKAGE_HPP
#define _TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3PACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <TopLevelPackage/Level1/Level2/Level3_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <TopLevelPackage/TopLevelPackagePackage.hpp>

#include <TopLevelPackage/dllTopLevelPackage.hpp>

namespace TopLevelPackage
{
    namespace Level1
    {
        namespace Level2
        {
            namespace Level3
            {

            class EXPORT_TOPLEVELPACKAGE_DLL Level3Package : public virtual ::ecore::EPackage
            {
            public:

                static Level3Package_ptr _instance();
                static Level3Package_ptr _getInstanceAndRemoveOwnership();

                // IDs for classifier Level3Class
                static const int LEVEL3CLASS = 0;
                static const int LEVEL3CLASS__REFERENCE = 0;
                static const int LEVEL3CLASS_FEATURE_COUNT = 1;

                // EClassifiers methods

                virtual ::ecore::EClass_ptr getLevel3Class();

                // EStructuralFeatures methods

            protected:

                static ::ecore::Ptr< Level3Package > s_instance;

                Level3Package();
                void _initPackage();

                ::ecore::EClass_ptr m_Level3ClassEClass;

                // EStructuralFeatures instances

            };

        }
    // Level3
    }// Level2
} // Level1
} // TopLevelPackage

#endif // _TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3PACKAGE_HPP

