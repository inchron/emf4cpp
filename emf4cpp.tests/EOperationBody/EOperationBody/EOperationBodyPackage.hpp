// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * EOperationBody/EOperationBodyPackage.hpp
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

#ifndef _EOPERATIONBODYPACKAGE_HPP
#define _EOPERATIONBODYPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <EOperationBody_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include "dllEOperationBody.hpp"

namespace EOperationBody
{

class EXPORT_EOPERATIONBODY_DLL EOperationBodyPackage : public virtual ::ecore::EPackage
{
public:

    static EOperationBodyPackage_ptr _instance();
    static EOperationBodyPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier Integer
    static const int INTEGER = 0;
    static const int INTEGER__VALUE = 0;
    static const int INTEGER_FEATURE_COUNT = 1;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getInteger();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getInteger__value();

protected:

    static ::ecore::Ptr< EOperationBodyPackage > s_instance;

    EOperationBodyPackage();
    void _initPackage();

    ::ecore::EClass_ptr m_IntegerEClass;

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_Integer__value;

};

}
 // EOperationBody

#endif // _EOPERATIONBODYPACKAGE_HPP

