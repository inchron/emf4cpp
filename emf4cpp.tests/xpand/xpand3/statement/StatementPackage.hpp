// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/StatementPackage.hpp
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

#ifndef _XPAND3_STATEMENTPACKAGE_HPP
#define _XPAND3_STATEMENTPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <xpand3/statement_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <xpand3/Xpand3Package.hpp>

#include "../dllXpand3.hpp"

namespace xpand3
{
    namespace statement
    {

    class EXPORT_XPAND3_DLL StatementPackage : public virtual ::ecore::EPackage
    {
    public:

        static StatementPackage_ptr _instance();
        static StatementPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractStatement
        static const int ABSTRACTSTATEMENT = 0;
        static const int ABSTRACTSTATEMENT__LINE = 0;
        static const int ABSTRACTSTATEMENT__START = 1;
        static const int ABSTRACTSTATEMENT__END = 2;
        static const int ABSTRACTSTATEMENT__FILENAME = 3;
        static const int ABSTRACTSTATEMENT_FEATURE_COUNT = 4;

        // IDs for classifier AbstractStatementWithBody
        static const int ABSTRACTSTATEMENTWITHBODY = 1;
        static const int ABSTRACTSTATEMENTWITHBODY__LINE = 0;
        static const int ABSTRACTSTATEMENTWITHBODY__START = 1;
        static const int ABSTRACTSTATEMENTWITHBODY__END = 2;
        static const int ABSTRACTSTATEMENTWITHBODY__FILENAME = 3;
        static const int ABSTRACTSTATEMENTWITHBODY__BODY = 4;
        static const int ABSTRACTSTATEMENTWITHBODY_FEATURE_COUNT = 5;

        // IDs for classifier ErrorStatement
        static const int ERRORSTATEMENT = 2;
        static const int ERRORSTATEMENT__LINE = 0;
        static const int ERRORSTATEMENT__START = 1;
        static const int ERRORSTATEMENT__END = 2;
        static const int ERRORSTATEMENT__FILENAME = 3;
        static const int ERRORSTATEMENT__MESSAGE = 4;
        static const int ERRORSTATEMENT_FEATURE_COUNT = 5;

        // IDs for classifier ExpandStatement
        static const int EXPANDSTATEMENT = 3;
        static const int EXPANDSTATEMENT__LINE = 0;
        static const int EXPANDSTATEMENT__START = 1;
        static const int EXPANDSTATEMENT__END = 2;
        static const int EXPANDSTATEMENT__FILENAME = 3;
        static const int EXPANDSTATEMENT__FOREACH = 4;
        static const int EXPANDSTATEMENT__PARAMETERS = 5;
        static const int EXPANDSTATEMENT__SEPARATOR = 6;
        static const int EXPANDSTATEMENT__TARGET = 7;
        static const int EXPANDSTATEMENT__DEFINITION = 8;
        static const int EXPANDSTATEMENT_FEATURE_COUNT = 9;

        // IDs for classifier ExpressionStatement
        static const int EXPRESSIONSTATEMENT = 4;
        static const int EXPRESSIONSTATEMENT__LINE = 0;
        static const int EXPRESSIONSTATEMENT__START = 1;
        static const int EXPRESSIONSTATEMENT__END = 2;
        static const int EXPRESSIONSTATEMENT__FILENAME = 3;
        static const int EXPRESSIONSTATEMENT__EXPRESSION = 4;
        static const int EXPRESSIONSTATEMENT_FEATURE_COUNT = 5;

        // IDs for classifier FileStatement
        static const int FILESTATEMENT = 5;
        static const int FILESTATEMENT__LINE = 0;
        static const int FILESTATEMENT__START = 1;
        static const int FILESTATEMENT__END = 2;
        static const int FILESTATEMENT__FILENAME = 3;
        static const int FILESTATEMENT__BODY = 4;
        static const int FILESTATEMENT__FILENAMEEXPRESSION = 5;
        static const int FILESTATEMENT__OUTLETNAMEIDENTIFIER = 6;
        static const int FILESTATEMENT__ONCE = 7;
        static const int FILESTATEMENT_FEATURE_COUNT = 8;

        // IDs for classifier ForEachStatement
        static const int FOREACHSTATEMENT = 6;
        static const int FOREACHSTATEMENT__LINE = 0;
        static const int FOREACHSTATEMENT__START = 1;
        static const int FOREACHSTATEMENT__END = 2;
        static const int FOREACHSTATEMENT__FILENAME = 3;
        static const int FOREACHSTATEMENT__BODY = 4;
        static const int FOREACHSTATEMENT__TARGET = 5;
        static const int FOREACHSTATEMENT__SEPARATOR = 6;
        static const int FOREACHSTATEMENT__VARIABLE = 7;
        static const int FOREACHSTATEMENT__ITERATORNAME = 8;
        static const int FOREACHSTATEMENT_FEATURE_COUNT = 9;

        // IDs for classifier IfStatement
        static const int IFSTATEMENT = 7;
        static const int IFSTATEMENT__LINE = 0;
        static const int IFSTATEMENT__START = 1;
        static const int IFSTATEMENT__END = 2;
        static const int IFSTATEMENT__FILENAME = 3;
        static const int IFSTATEMENT__BODY = 4;
        static const int IFSTATEMENT__CONDITION = 5;
        static const int IFSTATEMENT__ELSEIF = 6;
        static const int IFSTATEMENT_FEATURE_COUNT = 7;

        // IDs for classifier LetStatement
        static const int LETSTATEMENT = 8;
        static const int LETSTATEMENT__LINE = 0;
        static const int LETSTATEMENT__START = 1;
        static const int LETSTATEMENT__END = 2;
        static const int LETSTATEMENT__FILENAME = 3;
        static const int LETSTATEMENT__BODY = 4;
        static const int LETSTATEMENT__VARNAME = 5;
        static const int LETSTATEMENT__VARVALUE = 6;
        static const int LETSTATEMENT_FEATURE_COUNT = 7;

        // IDs for classifier ProtectStatement
        static const int PROTECTSTATEMENT = 9;
        static const int PROTECTSTATEMENT__LINE = 0;
        static const int PROTECTSTATEMENT__START = 1;
        static const int PROTECTSTATEMENT__END = 2;
        static const int PROTECTSTATEMENT__FILENAME = 3;
        static const int PROTECTSTATEMENT__BODY = 4;
        static const int PROTECTSTATEMENT__COMMENTSTART = 5;
        static const int PROTECTSTATEMENT__COMMENTEND = 6;
        static const int PROTECTSTATEMENT__ID = 7;
        static const int PROTECTSTATEMENT__DISABLE = 8;
        static const int PROTECTSTATEMENT_FEATURE_COUNT = 9;

        // IDs for classifier TextStatement
        static const int TEXTSTATEMENT = 10;
        static const int TEXTSTATEMENT__LINE = 0;
        static const int TEXTSTATEMENT__START = 1;
        static const int TEXTSTATEMENT__END = 2;
        static const int TEXTSTATEMENT__FILENAME = 3;
        static const int TEXTSTATEMENT__VALUE = 4;
        static const int TEXTSTATEMENT__DELETELINE = 5;
        static const int TEXTSTATEMENT_FEATURE_COUNT = 6;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractStatement();

        virtual ::ecore::EClass_ptr getExpandStatement();

        virtual ::ecore::EClass_ptr getExpressionStatement();

        virtual ::ecore::EClass_ptr getErrorStatement();

        virtual ::ecore::EClass_ptr getAbstractStatementWithBody();

        virtual ::ecore::EClass_ptr getFileStatement();

        virtual ::ecore::EClass_ptr getForEachStatement();

        virtual ::ecore::EClass_ptr getIfStatement();

        virtual ::ecore::EClass_ptr getLetStatement();

        virtual ::ecore::EClass_ptr getProtectStatement();

        virtual ::ecore::EClass_ptr getTextStatement();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getExpandStatement__foreach();

        virtual ::ecore::EReference_ptr getExpandStatement__parameters();

        virtual ::ecore::EReference_ptr getExpandStatement__separator();

        virtual ::ecore::EReference_ptr getExpandStatement__target();

        virtual ::ecore::EReference_ptr getExpandStatement__definition();

        virtual ::ecore::EReference_ptr getExpressionStatement__expression();

        virtual ::ecore::EReference_ptr getErrorStatement__message();

        virtual ::ecore::EReference_ptr getAbstractStatementWithBody__body();

        virtual ::ecore::EReference_ptr getFileStatement__fileNameExpression();

        virtual ::ecore::EReference_ptr getFileStatement__outletNameIdentifier();

        virtual ::ecore::EAttribute_ptr getFileStatement__once();

        virtual ::ecore::EReference_ptr getForEachStatement__target();

        virtual ::ecore::EReference_ptr getForEachStatement__separator();

        virtual ::ecore::EReference_ptr getForEachStatement__variable();

        virtual ::ecore::EReference_ptr getForEachStatement__iteratorName();

        virtual ::ecore::EReference_ptr getIfStatement__condition();

        virtual ::ecore::EReference_ptr getIfStatement__elseIf();

        virtual ::ecore::EReference_ptr getLetStatement__varName();

        virtual ::ecore::EReference_ptr getLetStatement__varValue();

        virtual ::ecore::EReference_ptr getProtectStatement__commentStart();

        virtual ::ecore::EReference_ptr getProtectStatement__commentEnd();

        virtual ::ecore::EReference_ptr getProtectStatement__id();

        virtual ::ecore::EAttribute_ptr getProtectStatement__disable();

        virtual ::ecore::EAttribute_ptr getTextStatement__value();

        virtual ::ecore::EAttribute_ptr getTextStatement__deleteLine();

    protected:

        static ::ecore::Ptr< StatementPackage > s_instance;

        StatementPackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractStatementEClass;
        ::ecore::EClass_ptr m_AbstractStatementWithBodyEClass;
        ::ecore::EClass_ptr m_ErrorStatementEClass;
        ::ecore::EClass_ptr m_ExpandStatementEClass;
        ::ecore::EClass_ptr m_ExpressionStatementEClass;
        ::ecore::EClass_ptr m_FileStatementEClass;
        ::ecore::EClass_ptr m_ForEachStatementEClass;
        ::ecore::EClass_ptr m_IfStatementEClass;
        ::ecore::EClass_ptr m_LetStatementEClass;
        ::ecore::EClass_ptr m_ProtectStatementEClass;
        ::ecore::EClass_ptr m_TextStatementEClass;

        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_ExpandStatement__foreach;

        ::ecore::EReference_ptr m_ExpandStatement__parameters;

        ::ecore::EReference_ptr m_ExpandStatement__separator;

        ::ecore::EReference_ptr m_ExpandStatement__target;

        ::ecore::EReference_ptr m_ExpandStatement__definition;

        ::ecore::EReference_ptr m_ExpressionStatement__expression;

        ::ecore::EReference_ptr m_ErrorStatement__message;

        ::ecore::EReference_ptr m_AbstractStatementWithBody__body;

        ::ecore::EReference_ptr m_FileStatement__fileNameExpression;

        ::ecore::EReference_ptr m_FileStatement__outletNameIdentifier;

        ::ecore::EAttribute_ptr m_FileStatement__once;

        ::ecore::EReference_ptr m_ForEachStatement__target;

        ::ecore::EReference_ptr m_ForEachStatement__separator;

        ::ecore::EReference_ptr m_ForEachStatement__variable;

        ::ecore::EReference_ptr m_ForEachStatement__iteratorName;

        ::ecore::EReference_ptr m_IfStatement__condition;

        ::ecore::EReference_ptr m_IfStatement__elseIf;

        ::ecore::EReference_ptr m_LetStatement__varName;

        ::ecore::EReference_ptr m_LetStatement__varValue;

        ::ecore::EReference_ptr m_ProtectStatement__commentStart;

        ::ecore::EReference_ptr m_ProtectStatement__commentEnd;

        ::ecore::EReference_ptr m_ProtectStatement__id;

        ::ecore::EAttribute_ptr m_ProtectStatement__disable;

        ::ecore::EAttribute_ptr m_TextStatement__value;

        ::ecore::EAttribute_ptr m_TextStatement__deleteLine;

    };

}
 // statement
}// xpand3

#endif // _XPAND3_STATEMENTPACKAGE_HPP

