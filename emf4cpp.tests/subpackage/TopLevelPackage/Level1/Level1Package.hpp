// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level1Package.hpp
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

#ifndef _TOPLEVELPACKAGE_LEVEL1PACKAGE_HPP
#define _TOPLEVELPACKAGE_LEVEL1PACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <TopLevelPackage/Level1_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include "../dllTopLevelPackage.hpp"

namespace TopLevelPackage
{
    namespace Level1
    {

    class EXPORT_TOPLEVELPACKAGE_DLL Level1Package : public virtual ::ecore::EPackage
    {
    public:

        static Level1Package_ptr _instance();
        static Level1Package_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier Level1Class
        static const int LEVEL1CLASS = 0;
        static const int LEVEL1CLASS_FEATURE_COUNT = 0;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getLevel1Class();

        // EStructuralFeatures methods

    protected:

        static ::ecore::Ptr< Level1Package > s_instance;

        Level1Package();
        void _initPackage();

        ::ecore::EClass_ptr m_Level1ClassEClass;

        // EStructuralFeatures instances

    };

}
 // Level1
}// TopLevelPackage

#endif // _TOPLEVELPACKAGE_LEVEL1PACKAGE_HPP

