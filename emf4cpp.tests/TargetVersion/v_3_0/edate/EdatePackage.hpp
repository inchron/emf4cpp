// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * v_3_0/edate/EdatePackage.hpp
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

#ifndef _V_3_0_EDATEPACKAGE_HPP
#define _V_3_0_EDATEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <v_3_0/edate_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <v_3_0/edate/dllEdate.hpp>

namespace v_3_0
{
    namespace edate
    {

    class EXPORT_V_3_0_EDATE_DLL EdatePackage : public virtual ::ecore::EPackage
    {
    public:

        static EdatePackage_ptr _instance();
        static EdatePackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier Apollo11
        static const int APOLLO11 = 0;
        static const int APOLLO11__FIRSTMANONMOONDATE = 0;
        static const int APOLLO11__MEMBER = 1;
        static const int APOLLO11_FEATURE_COUNT = 2;

        // IDs for classifier Person
        static const int PERSON = 1;
        static const int PERSON__BIRTHDAY = 0;
        static const int PERSON__NAME = 1;
        static const int PERSON_FEATURE_COUNT = 2;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getPerson();

        virtual ::ecore::EClass_ptr getApollo11();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getPerson__Birthday();

        virtual ::ecore::EAttribute_ptr getPerson__Name();

        virtual ::ecore::EAttribute_ptr getApollo11__FirstManOnMoonDate();

        virtual ::ecore::EReference_ptr getApollo11__Member();

    protected:

        static ::ecore::Ptr< EdatePackage > s_instance;

        EdatePackage();
        void _initPackage();

        ::ecore::EClass_ptr m_Apollo11EClass;
        ::ecore::EClass_ptr m_PersonEClass;

        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_Person__Birthday;

        ::ecore::EAttribute_ptr m_Person__Name;

        ::ecore::EAttribute_ptr m_Apollo11__FirstManOnMoonDate;

        ::ecore::EReference_ptr m_Apollo11__Member;

    };

}
 // edate
}// v_3_0

#endif // _V_3_0_EDATEPACKAGE_HPP

