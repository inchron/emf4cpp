// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/TopLevelPackagePackage.hpp
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

#ifndef _TOPLEVELPACKAGEPACKAGE_HPP
#define _TOPLEVELPACKAGEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <TopLevelPackage_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <TopLevelPackage/dllTopLevelPackage.hpp>

namespace TopLevelPackage
{

class EXPORT_TOPLEVELPACKAGE_DLL TopLevelPackagePackage : public virtual ::ecore::EPackage
{
public:

    static TopLevelPackagePackage_ptr _instance();
    static TopLevelPackagePackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier TopLevelClass
    static const int TOPLEVELCLASS = 0;
    static const int TOPLEVELCLASS__REFERENCE = 0;
    static const int TOPLEVELCLASS_FEATURE_COUNT = 1;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getTopLevelClass();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getTopLevelClass__reference();

protected:

    static ::ecore::Ptr< TopLevelPackagePackage > s_instance;

    TopLevelPackagePackage();
    void _initPackage();

    ::ecore::EClass_ptr m_TopLevelClassEClass;

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_TopLevelClass__reference;

};

}
 // TopLevelPackage

#endif // _TOPLEVELPACKAGEPACKAGE_HPP

