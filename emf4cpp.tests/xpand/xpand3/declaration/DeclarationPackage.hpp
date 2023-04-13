// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/DeclarationPackage.hpp
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

#ifndef _XPAND3_DECLARATIONPACKAGE_HPP
#define _XPAND3_DECLARATIONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <xpand3/declaration_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <xpand3/Xpand3Package.hpp>

#include <xpand3/dllXpand3.hpp>

namespace xpand3
{
    namespace declaration
    {

    class EXPORT_XPAND3_DLL DeclarationPackage : public virtual ::ecore::EPackage
    {
    public:

        static DeclarationPackage_ptr _instance();
        static DeclarationPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractAspect
        static const int ABSTRACTASPECT = 0;
        static const int ABSTRACTASPECT__LINE = 0;
        static const int ABSTRACTASPECT__START = 1;
        static const int ABSTRACTASPECT__END = 2;
        static const int ABSTRACTASPECT__FILENAME = 3;
        static const int ABSTRACTASPECT__OWNER = 4;
        static const int ABSTRACTASPECT__PARAMS = 5;
        static const int ABSTRACTASPECT__ISPRIVATE = 6;
        static const int ABSTRACTASPECT__GUARD = 7;
        static const int ABSTRACTASPECT__POINTCUT = 8;
        static const int ABSTRACTASPECT__WILDPARAMS = 9;
        static const int ABSTRACTASPECT_FEATURE_COUNT = 10;

        // IDs for classifier AbstractDeclaration
        static const int ABSTRACTDECLARATION = 1;
        static const int ABSTRACTDECLARATION__LINE = 0;
        static const int ABSTRACTDECLARATION__START = 1;
        static const int ABSTRACTDECLARATION__END = 2;
        static const int ABSTRACTDECLARATION__FILENAME = 3;
        static const int ABSTRACTDECLARATION__OWNER = 4;
        static const int ABSTRACTDECLARATION__PARAMS = 5;
        static const int ABSTRACTDECLARATION__ISPRIVATE = 6;
        static const int ABSTRACTDECLARATION__GUARD = 7;
        static const int ABSTRACTDECLARATION_FEATURE_COUNT = 8;

        // IDs for classifier AbstractNamedDeclaration
        static const int ABSTRACTNAMEDDECLARATION = 2;
        static const int ABSTRACTNAMEDDECLARATION__LINE = 0;
        static const int ABSTRACTNAMEDDECLARATION__START = 1;
        static const int ABSTRACTNAMEDDECLARATION__END = 2;
        static const int ABSTRACTNAMEDDECLARATION__FILENAME = 3;
        static const int ABSTRACTNAMEDDECLARATION__OWNER = 4;
        static const int ABSTRACTNAMEDDECLARATION__PARAMS = 5;
        static const int ABSTRACTNAMEDDECLARATION__ISPRIVATE = 6;
        static const int ABSTRACTNAMEDDECLARATION__GUARD = 7;
        static const int ABSTRACTNAMEDDECLARATION__NAME = 8;
        static const int ABSTRACTNAMEDDECLARATION_FEATURE_COUNT = 9;

        // IDs for classifier Check
        static const int CHECK = 3;
        static const int CHECK__LINE = 0;
        static const int CHECK__START = 1;
        static const int CHECK__END = 2;
        static const int CHECK__FILENAME = 3;
        static const int CHECK__OWNER = 4;
        static const int CHECK__PARAMS = 5;
        static const int CHECK__ISPRIVATE = 6;
        static const int CHECK__GUARD = 7;
        static const int CHECK__ERRORSEVERITY = 8;
        static const int CHECK__MSG = 9;
        static const int CHECK__CONSTRAINT = 10;
        static const int CHECK__FEATURE = 11;
        static const int CHECK_FEATURE_COUNT = 12;

        // IDs for classifier CreateExtension
        static const int CREATEEXTENSION = 4;
        static const int CREATEEXTENSION__LINE = 0;
        static const int CREATEEXTENSION__START = 1;
        static const int CREATEEXTENSION__END = 2;
        static const int CREATEEXTENSION__FILENAME = 3;
        static const int CREATEEXTENSION__OWNER = 4;
        static const int CREATEEXTENSION__PARAMS = 5;
        static const int CREATEEXTENSION__ISPRIVATE = 6;
        static const int CREATEEXTENSION__GUARD = 7;
        static const int CREATEEXTENSION__NAME = 8;
        static const int CREATEEXTENSION__CACHED = 9;
        static const int CREATEEXTENSION__BODY = 10;
        static const int CREATEEXTENSION__RETURNTYPE = 11;
        static const int CREATEEXTENSION__TOBECREATED = 12;
        static const int CREATEEXTENSION_FEATURE_COUNT = 13;

        // IDs for classifier Definition
        static const int DEFINITION = 5;
        static const int DEFINITION__LINE = 0;
        static const int DEFINITION__START = 1;
        static const int DEFINITION__END = 2;
        static const int DEFINITION__FILENAME = 3;
        static const int DEFINITION__OWNER = 4;
        static const int DEFINITION__PARAMS = 5;
        static const int DEFINITION__ISPRIVATE = 6;
        static const int DEFINITION__GUARD = 7;
        static const int DEFINITION__NAME = 8;
        static const int DEFINITION__BODY = 9;
        static const int DEFINITION_FEATURE_COUNT = 10;

        // IDs for classifier DefinitionAspect
        static const int DEFINITIONASPECT = 6;
        static const int DEFINITIONASPECT__LINE = 0;
        static const int DEFINITIONASPECT__START = 1;
        static const int DEFINITIONASPECT__END = 2;
        static const int DEFINITIONASPECT__FILENAME = 3;
        static const int DEFINITIONASPECT__OWNER = 4;
        static const int DEFINITIONASPECT__PARAMS = 5;
        static const int DEFINITIONASPECT__ISPRIVATE = 6;
        static const int DEFINITIONASPECT__GUARD = 7;
        static const int DEFINITIONASPECT__POINTCUT = 8;
        static const int DEFINITIONASPECT__WILDPARAMS = 9;
        static const int DEFINITIONASPECT__BODY = 10;
        static const int DEFINITIONASPECT_FEATURE_COUNT = 11;

        // IDs for classifier Extension
        static const int EXTENSION = 7;
        static const int EXTENSION__LINE = 0;
        static const int EXTENSION__START = 1;
        static const int EXTENSION__END = 2;
        static const int EXTENSION__FILENAME = 3;
        static const int EXTENSION__OWNER = 4;
        static const int EXTENSION__PARAMS = 5;
        static const int EXTENSION__ISPRIVATE = 6;
        static const int EXTENSION__GUARD = 7;
        static const int EXTENSION__NAME = 8;
        static const int EXTENSION__CACHED = 9;
        static const int EXTENSION__BODY = 10;
        static const int EXTENSION__RETURNTYPE = 11;
        static const int EXTENSION_FEATURE_COUNT = 12;

        // IDs for classifier ExtensionAspect
        static const int EXTENSIONASPECT = 8;
        static const int EXTENSIONASPECT__LINE = 0;
        static const int EXTENSIONASPECT__START = 1;
        static const int EXTENSIONASPECT__END = 2;
        static const int EXTENSIONASPECT__FILENAME = 3;
        static const int EXTENSIONASPECT__OWNER = 4;
        static const int EXTENSIONASPECT__PARAMS = 5;
        static const int EXTENSIONASPECT__ISPRIVATE = 6;
        static const int EXTENSIONASPECT__GUARD = 7;
        static const int EXTENSIONASPECT__POINTCUT = 8;
        static const int EXTENSIONASPECT__WILDPARAMS = 9;
        static const int EXTENSIONASPECT__EXPRESSION = 10;
        static const int EXTENSIONASPECT_FEATURE_COUNT = 11;

        // IDs for classifier JavaExtension
        static const int JAVAEXTENSION = 9;
        static const int JAVAEXTENSION__LINE = 0;
        static const int JAVAEXTENSION__START = 1;
        static const int JAVAEXTENSION__END = 2;
        static const int JAVAEXTENSION__FILENAME = 3;
        static const int JAVAEXTENSION__OWNER = 4;
        static const int JAVAEXTENSION__PARAMS = 5;
        static const int JAVAEXTENSION__ISPRIVATE = 6;
        static const int JAVAEXTENSION__GUARD = 7;
        static const int JAVAEXTENSION__NAME = 8;
        static const int JAVAEXTENSION__JAVATYPE = 9;
        static const int JAVAEXTENSION__JAVAMETHOD = 10;
        static const int JAVAEXTENSION__JAVAPARAMTYPES = 11;
        static const int JAVAEXTENSION_FEATURE_COUNT = 12;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractDeclaration();

        virtual ::ecore::EClass_ptr getAbstractNamedDeclaration();

        virtual ::ecore::EClass_ptr getDefinition();

        virtual ::ecore::EClass_ptr getExtension();

        virtual ::ecore::EClass_ptr getAbstractAspect();

        virtual ::ecore::EClass_ptr getExtensionAspect();

        virtual ::ecore::EClass_ptr getDefinitionAspect();

        virtual ::ecore::EClass_ptr getCheck();

        virtual ::ecore::EClass_ptr getCreateExtension();

        virtual ::ecore::EClass_ptr getJavaExtension();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getAbstractDeclaration__owner();

        virtual ::ecore::EReference_ptr getAbstractDeclaration__params();

        virtual ::ecore::EAttribute_ptr getAbstractDeclaration__isPrivate();

        virtual ::ecore::EReference_ptr getAbstractDeclaration__guard();

        virtual ::ecore::EReference_ptr getAbstractNamedDeclaration__name();

        virtual ::ecore::EReference_ptr getDefinition__body();

        virtual ::ecore::EAttribute_ptr getExtension__cached();

        virtual ::ecore::EReference_ptr getExtension__body();

        virtual ::ecore::EReference_ptr getExtension__returnType();

        virtual ::ecore::EReference_ptr getAbstractAspect__pointcut();

        virtual ::ecore::EAttribute_ptr getAbstractAspect__wildparams();

        virtual ::ecore::EReference_ptr getExtensionAspect__expression();

        virtual ::ecore::EReference_ptr getDefinitionAspect__body();

        virtual ::ecore::EAttribute_ptr getCheck__errorSeverity();

        virtual ::ecore::EReference_ptr getCheck__msg();

        virtual ::ecore::EReference_ptr getCheck__constraint();

        virtual ::ecore::EAttribute_ptr getCheck__feature();

        virtual ::ecore::EReference_ptr getCreateExtension__toBeCreated();

        virtual ::ecore::EReference_ptr getJavaExtension__javaType();

        virtual ::ecore::EReference_ptr getJavaExtension__javaMethod();

        virtual ::ecore::EReference_ptr getJavaExtension__javaParamTypes();

    protected:

        static ::ecore::Ptr< DeclarationPackage > s_instance;

        DeclarationPackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractAspectEClass;
        ::ecore::EClass_ptr m_AbstractDeclarationEClass;
        ::ecore::EClass_ptr m_AbstractNamedDeclarationEClass;
        ::ecore::EClass_ptr m_CheckEClass;
        ::ecore::EClass_ptr m_CreateExtensionEClass;
        ::ecore::EClass_ptr m_DefinitionEClass;
        ::ecore::EClass_ptr m_DefinitionAspectEClass;
        ::ecore::EClass_ptr m_ExtensionEClass;
        ::ecore::EClass_ptr m_ExtensionAspectEClass;
        ::ecore::EClass_ptr m_JavaExtensionEClass;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_AbstractDeclaration__owner;

        ::ecore::EReference_ptr m_AbstractDeclaration__params;

        ::ecore::EAttribute_ptr m_AbstractDeclaration__isPrivate;

        ::ecore::EReference_ptr m_AbstractDeclaration__guard;

        ::ecore::EReference_ptr m_AbstractNamedDeclaration__name;

        ::ecore::EReference_ptr m_Definition__body;

        ::ecore::EAttribute_ptr m_Extension__cached;

        ::ecore::EReference_ptr m_Extension__body;

        ::ecore::EReference_ptr m_Extension__returnType;

        ::ecore::EReference_ptr m_AbstractAspect__pointcut;

        ::ecore::EAttribute_ptr m_AbstractAspect__wildparams;

        ::ecore::EReference_ptr m_ExtensionAspect__expression;

        ::ecore::EReference_ptr m_DefinitionAspect__body;

        ::ecore::EAttribute_ptr m_Check__errorSeverity;

        ::ecore::EReference_ptr m_Check__msg;

        ::ecore::EReference_ptr m_Check__constraint;

        ::ecore::EAttribute_ptr m_Check__feature;

        ::ecore::EReference_ptr m_CreateExtension__toBeCreated;

        ::ecore::EReference_ptr m_JavaExtension__javaType;

        ::ecore::EReference_ptr m_JavaExtension__javaMethod;

        ::ecore::EReference_ptr m_JavaExtension__javaParamTypes;

    };

}
 // declaration
}// xpand3

#endif // _XPAND3_DECLARATIONPACKAGE_HPP

