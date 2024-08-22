// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/MyDslPackage.hpp
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

#ifndef _MYDSLPACKAGE_HPP
#define _MYDSLPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <myDsl_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <myDsl/dllMyDsl.hpp>

namespace myDsl
{

class EXPORT_MYDSL_DLL MyDslPackage : public virtual ::ecore::EPackage
{
public:

    static MyDslPackage_ptr _instance();
    static MyDslPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier Entity
    static const int ENTITY = 0;
    static const int ENTITY__NAME = 0;
    static const int ENTITY__EXTENDS = 1;
    static const int ENTITY__PROPERTIES = 2;
    static const int ENTITY_FEATURE_COUNT = 3;

    // IDs for classifier Import
    static const int IMPORT = 1;
    static const int IMPORT__IMPORTURI = 0;
    static const int IMPORT_FEATURE_COUNT = 1;

    // IDs for classifier Model
    static const int MODEL = 2;
    static const int MODEL__IMPORTS = 0;
    static const int MODEL__ELEMENTS = 1;
    static const int MODEL_FEATURE_COUNT = 2;

    // IDs for classifier Property
    static const int PROPERTY = 3;
    static const int PROPERTY__NAME = 0;
    static const int PROPERTY__TYPE = 1;
    static const int PROPERTY__MANY = 2;
    static const int PROPERTY_FEATURE_COUNT = 3;

    // IDs for classifier SimpleType
    static const int SIMPLETYPE = 4;
    static const int SIMPLETYPE__NAME = 0;
    static const int SIMPLETYPE_FEATURE_COUNT = 1;

    // IDs for classifier Type
    static const int TYPE = 5;
    static const int TYPE__NAME = 0;
    static const int TYPE_FEATURE_COUNT = 1;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getModel();

    virtual ::ecore::EClass_ptr getImport();

    virtual ::ecore::EClass_ptr getType();

    virtual ::ecore::EClass_ptr getSimpleType();

    virtual ::ecore::EClass_ptr getEntity();

    virtual ::ecore::EClass_ptr getProperty();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getModel__imports();

    virtual ::ecore::EReference_ptr getModel__elements();

    virtual ::ecore::EAttribute_ptr getImport__importURI();

    virtual ::ecore::EAttribute_ptr getType__name();

    virtual ::ecore::EReference_ptr getEntity__extends();

    virtual ::ecore::EReference_ptr getEntity__properties();

    virtual ::ecore::EAttribute_ptr getProperty__name();

    virtual ::ecore::EReference_ptr getProperty__type();

    virtual ::ecore::EAttribute_ptr getProperty__many();

protected:

    static ::ecore::Ptr< MyDslPackage > s_instance;

    MyDslPackage();
    void _initPackage();

    ::ecore::EClass_ptr m_EntityEClass;
    ::ecore::EClass_ptr m_ImportEClass;
    ::ecore::EClass_ptr m_ModelEClass;
    ::ecore::EClass_ptr m_PropertyEClass;
    ::ecore::EClass_ptr m_SimpleTypeEClass;
    ::ecore::EClass_ptr m_TypeEClass;

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_Model__imports;

    ::ecore::EReference_ptr m_Model__elements;

    ::ecore::EAttribute_ptr m_Import__importURI;

    ::ecore::EAttribute_ptr m_Type__name;

    ::ecore::EReference_ptr m_Entity__extends;

    ::ecore::EReference_ptr m_Entity__properties;

    ::ecore::EAttribute_ptr m_Property__name;

    ::ecore::EReference_ptr m_Property__type;

    ::ecore::EAttribute_ptr m_Property__many;

};

}
 // myDsl

#endif // _MYDSLPACKAGE_HPP

