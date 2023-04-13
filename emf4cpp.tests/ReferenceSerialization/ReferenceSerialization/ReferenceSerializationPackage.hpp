// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ReferenceSerialization/ReferenceSerializationPackage.hpp
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

#ifndef _REFERENCESERIALIZATIONPACKAGE_HPP
#define _REFERENCESERIALIZATIONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <ReferenceSerialization_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <ReferenceSerialization/dllReferenceSerialization.hpp>

namespace ReferenceSerialization
{

class EXPORT_REFERENCESERIALIZATION_DLL ReferenceSerializationPackage : public virtual ::ecore::EPackage
{
public:

    static ReferenceSerializationPackage_ptr _instance();
    static ReferenceSerializationPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier Child
    static const int CHILD = 0;
    static const int CHILD_FEATURE_COUNT = 0;

    // IDs for classifier Container
    static const int CONTAINER = 1;
    static const int CONTAINER__CONTENTS = 0;
    static const int CONTAINER__REFERENCES = 1;
    static const int CONTAINER__CHILD = 2;
    static const int CONTAINER__CHILDREF = 3;
    static const int CONTAINER_FEATURE_COUNT = 4;

    // IDs for classifier Content
    static const int CONTENT = 2;
    static const int CONTENT__NAME = 0;
    static const int CONTENT_FEATURE_COUNT = 1;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getContainer();

    virtual ::ecore::EClass_ptr getContent();

    virtual ::ecore::EClass_ptr getChild();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getContainer__contents();

    virtual ::ecore::EReference_ptr getContainer__references();

    virtual ::ecore::EReference_ptr getContainer__child();

    virtual ::ecore::EReference_ptr getContainer__childRef();

    virtual ::ecore::EAttribute_ptr getContent__name();

protected:

    static ::ecore::Ptr< ReferenceSerializationPackage > s_instance;

    ReferenceSerializationPackage();
    void _initPackage();

    ::ecore::EClass_ptr m_ChildEClass;
    ::ecore::EClass_ptr m_ContainerEClass;
    ::ecore::EClass_ptr m_ContentEClass;

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_Container__contents;

    ::ecore::EReference_ptr m_Container__references;

    ::ecore::EReference_ptr m_Container__child;

    ::ecore::EReference_ptr m_Container__childRef;

    ::ecore::EAttribute_ptr m_Content__name;

};

}
 // ReferenceSerialization

#endif // _REFERENCESERIALIZATIONPACKAGE_HPP

