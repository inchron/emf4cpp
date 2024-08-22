// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * enumeration/EnumerationPackage.hpp
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

#ifndef _ENUMERATIONPACKAGE_HPP
#define _ENUMERATIONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <enumeration_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <enumeration/dllEnumeration.hpp>

namespace enumeration
{

class EXPORT_ENUMERATION_DLL EnumerationPackage : public virtual ::ecore::EPackage
{
public:

    static EnumerationPackage_ptr _instance();
    static EnumerationPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier Bird
    static const int BIRD = 0;
    static const int BIRD__TYPE = 0;
    static const int BIRD__NAME = 1;
    static const int BIRD_FEATURE_COUNT = 2;

    // IDs for classifier BirdType
    static const int BIRDTYPE = 1;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getBird();

    virtual ::ecore::EEnum_ptr getBirdType();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getBird__type();

    virtual ::ecore::EAttribute_ptr getBird__name();

protected:

    static ::ecore::Ptr< EnumerationPackage > s_instance;

    EnumerationPackage();
    void _initPackage();

    ::ecore::EClass_ptr m_BirdEClass;
    ::ecore::EEnum_ptr m_BirdTypeEEnum;

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_Bird__type;

    ::ecore::EAttribute_ptr m_Bird__name;

};

}
 // enumeration

#endif // _ENUMERATIONPACKAGE_HPP

