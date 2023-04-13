// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/ActionPackage.hpp
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

#ifndef _KDM_ACTIONPACKAGE_HPP
#define _KDM_ACTIONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/action_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/code/CodePackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace action
    {

    class EXPORT_KDM_DLL ActionPackage : public virtual ::ecore::EPackage
    {
    public:

        static ActionPackage_ptr _instance();
        static ActionPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractActionRelationship
        static const int ABSTRACTACTIONRELATIONSHIP = 0;
        static const int ABSTRACTACTIONRELATIONSHIP__ATTRIBUTE = 0;
        static const int ABSTRACTACTIONRELATIONSHIP__ANNOTATION = 1;
        static const int ABSTRACTACTIONRELATIONSHIP__STEREOTYPE = 2;
        static const int ABSTRACTACTIONRELATIONSHIP__TAGGEDVALUE = 3;
        static const int ABSTRACTACTIONRELATIONSHIP_FEATURE_COUNT = 4;

        // IDs for classifier ActionElement
        static const int ACTIONELEMENT = 1;
        static const int ACTIONELEMENT__ATTRIBUTE = 0;
        static const int ACTIONELEMENT__ANNOTATION = 1;
        static const int ACTIONELEMENT__STEREOTYPE = 2;
        static const int ACTIONELEMENT__TAGGEDVALUE = 3;
        static const int ACTIONELEMENT__NAME = 4;
        static const int ACTIONELEMENT__SOURCE = 5;
        static const int ACTIONELEMENT__COMMENT = 6;
        static const int ACTIONELEMENT__CODERELATION = 7;
        static const int ACTIONELEMENT__KIND = 8;
        static const int ACTIONELEMENT__CODEELEMENT = 9;
        static const int ACTIONELEMENT__ACTIONRELATION = 10;
        static const int ACTIONELEMENT_FEATURE_COUNT = 11;

        // IDs for classifier ActionRelationship
        static const int ACTIONRELATIONSHIP = 2;
        static const int ACTIONRELATIONSHIP__ATTRIBUTE = 0;
        static const int ACTIONRELATIONSHIP__ANNOTATION = 1;
        static const int ACTIONRELATIONSHIP__STEREOTYPE = 2;
        static const int ACTIONRELATIONSHIP__TAGGEDVALUE = 3;
        static const int ACTIONRELATIONSHIP__TO = 4;
        static const int ACTIONRELATIONSHIP__FROM = 5;
        static const int ACTIONRELATIONSHIP_FEATURE_COUNT = 6;

        // IDs for classifier Addresses
        static const int ADDRESSES = 3;
        static const int ADDRESSES__ATTRIBUTE = 0;
        static const int ADDRESSES__ANNOTATION = 1;
        static const int ADDRESSES__STEREOTYPE = 2;
        static const int ADDRESSES__TAGGEDVALUE = 3;
        static const int ADDRESSES__TO = 4;
        static const int ADDRESSES__FROM = 5;
        static const int ADDRESSES_FEATURE_COUNT = 6;

        // IDs for classifier BlockUnit
        static const int BLOCKUNIT = 4;
        static const int BLOCKUNIT__ATTRIBUTE = 0;
        static const int BLOCKUNIT__ANNOTATION = 1;
        static const int BLOCKUNIT__STEREOTYPE = 2;
        static const int BLOCKUNIT__TAGGEDVALUE = 3;
        static const int BLOCKUNIT__NAME = 4;
        static const int BLOCKUNIT__SOURCE = 5;
        static const int BLOCKUNIT__COMMENT = 6;
        static const int BLOCKUNIT__CODERELATION = 7;
        static const int BLOCKUNIT__KIND = 8;
        static const int BLOCKUNIT__CODEELEMENT = 9;
        static const int BLOCKUNIT__ACTIONRELATION = 10;
        static const int BLOCKUNIT_FEATURE_COUNT = 11;

        // IDs for classifier Calls
        static const int CALLS = 5;
        static const int CALLS__ATTRIBUTE = 0;
        static const int CALLS__ANNOTATION = 1;
        static const int CALLS__STEREOTYPE = 2;
        static const int CALLS__TAGGEDVALUE = 3;
        static const int CALLS__TO = 4;
        static const int CALLS__FROM = 5;
        static const int CALLS_FEATURE_COUNT = 6;

        // IDs for classifier CatchUnit
        static const int CATCHUNIT = 6;
        static const int CATCHUNIT__ATTRIBUTE = 0;
        static const int CATCHUNIT__ANNOTATION = 1;
        static const int CATCHUNIT__STEREOTYPE = 2;
        static const int CATCHUNIT__TAGGEDVALUE = 3;
        static const int CATCHUNIT__NAME = 4;
        static const int CATCHUNIT__SOURCE = 5;
        static const int CATCHUNIT__COMMENT = 6;
        static const int CATCHUNIT__CODERELATION = 7;
        static const int CATCHUNIT__KIND = 8;
        static const int CATCHUNIT__CODEELEMENT = 9;
        static const int CATCHUNIT__ACTIONRELATION = 10;
        static const int CATCHUNIT_FEATURE_COUNT = 11;

        // IDs for classifier CompliesTo
        static const int COMPLIESTO = 7;
        static const int COMPLIESTO__ATTRIBUTE = 0;
        static const int COMPLIESTO__ANNOTATION = 1;
        static const int COMPLIESTO__STEREOTYPE = 2;
        static const int COMPLIESTO__TAGGEDVALUE = 3;
        static const int COMPLIESTO__TO = 4;
        static const int COMPLIESTO__FROM = 5;
        static const int COMPLIESTO_FEATURE_COUNT = 6;

        // IDs for classifier ControlFlow
        static const int CONTROLFLOW = 8;
        static const int CONTROLFLOW__ATTRIBUTE = 0;
        static const int CONTROLFLOW__ANNOTATION = 1;
        static const int CONTROLFLOW__STEREOTYPE = 2;
        static const int CONTROLFLOW__TAGGEDVALUE = 3;
        static const int CONTROLFLOW__TO = 4;
        static const int CONTROLFLOW__FROM = 5;
        static const int CONTROLFLOW_FEATURE_COUNT = 6;

        // IDs for classifier Creates
        static const int CREATES = 9;
        static const int CREATES__ATTRIBUTE = 0;
        static const int CREATES__ANNOTATION = 1;
        static const int CREATES__STEREOTYPE = 2;
        static const int CREATES__TAGGEDVALUE = 3;
        static const int CREATES__TO = 4;
        static const int CREATES__FROM = 5;
        static const int CREATES_FEATURE_COUNT = 6;

        // IDs for classifier Dispatches
        static const int DISPATCHES = 10;
        static const int DISPATCHES__ATTRIBUTE = 0;
        static const int DISPATCHES__ANNOTATION = 1;
        static const int DISPATCHES__STEREOTYPE = 2;
        static const int DISPATCHES__TAGGEDVALUE = 3;
        static const int DISPATCHES__TO = 4;
        static const int DISPATCHES__FROM = 5;
        static const int DISPATCHES_FEATURE_COUNT = 6;

        // IDs for classifier EntryFlow
        static const int ENTRYFLOW = 11;
        static const int ENTRYFLOW__ATTRIBUTE = 0;
        static const int ENTRYFLOW__ANNOTATION = 1;
        static const int ENTRYFLOW__STEREOTYPE = 2;
        static const int ENTRYFLOW__TAGGEDVALUE = 3;
        static const int ENTRYFLOW__TO = 4;
        static const int ENTRYFLOW__FROM = 5;
        static const int ENTRYFLOW_FEATURE_COUNT = 6;

        // IDs for classifier ExceptionFlow
        static const int EXCEPTIONFLOW = 12;
        static const int EXCEPTIONFLOW__ATTRIBUTE = 0;
        static const int EXCEPTIONFLOW__ANNOTATION = 1;
        static const int EXCEPTIONFLOW__STEREOTYPE = 2;
        static const int EXCEPTIONFLOW__TAGGEDVALUE = 3;
        static const int EXCEPTIONFLOW__TO = 4;
        static const int EXCEPTIONFLOW__FROM = 5;
        static const int EXCEPTIONFLOW_FEATURE_COUNT = 6;

        // IDs for classifier ExceptionUnit
        static const int EXCEPTIONUNIT = 13;
        static const int EXCEPTIONUNIT__ATTRIBUTE = 0;
        static const int EXCEPTIONUNIT__ANNOTATION = 1;
        static const int EXCEPTIONUNIT__STEREOTYPE = 2;
        static const int EXCEPTIONUNIT__TAGGEDVALUE = 3;
        static const int EXCEPTIONUNIT__NAME = 4;
        static const int EXCEPTIONUNIT__SOURCE = 5;
        static const int EXCEPTIONUNIT__COMMENT = 6;
        static const int EXCEPTIONUNIT__CODERELATION = 7;
        static const int EXCEPTIONUNIT__KIND = 8;
        static const int EXCEPTIONUNIT__CODEELEMENT = 9;
        static const int EXCEPTIONUNIT__ACTIONRELATION = 10;
        static const int EXCEPTIONUNIT_FEATURE_COUNT = 11;

        // IDs for classifier ExitFlow
        static const int EXITFLOW = 14;
        static const int EXITFLOW__ATTRIBUTE = 0;
        static const int EXITFLOW__ANNOTATION = 1;
        static const int EXITFLOW__STEREOTYPE = 2;
        static const int EXITFLOW__TAGGEDVALUE = 3;
        static const int EXITFLOW__TO = 4;
        static const int EXITFLOW__FROM = 5;
        static const int EXITFLOW_FEATURE_COUNT = 6;

        // IDs for classifier FalseFlow
        static const int FALSEFLOW = 15;
        static const int FALSEFLOW__ATTRIBUTE = 0;
        static const int FALSEFLOW__ANNOTATION = 1;
        static const int FALSEFLOW__STEREOTYPE = 2;
        static const int FALSEFLOW__TAGGEDVALUE = 3;
        static const int FALSEFLOW__TO = 4;
        static const int FALSEFLOW__FROM = 5;
        static const int FALSEFLOW_FEATURE_COUNT = 6;

        // IDs for classifier FinallyUnit
        static const int FINALLYUNIT = 16;
        static const int FINALLYUNIT__ATTRIBUTE = 0;
        static const int FINALLYUNIT__ANNOTATION = 1;
        static const int FINALLYUNIT__STEREOTYPE = 2;
        static const int FINALLYUNIT__TAGGEDVALUE = 3;
        static const int FINALLYUNIT__NAME = 4;
        static const int FINALLYUNIT__SOURCE = 5;
        static const int FINALLYUNIT__COMMENT = 6;
        static const int FINALLYUNIT__CODERELATION = 7;
        static const int FINALLYUNIT__KIND = 8;
        static const int FINALLYUNIT__CODEELEMENT = 9;
        static const int FINALLYUNIT__ACTIONRELATION = 10;
        static const int FINALLYUNIT_FEATURE_COUNT = 11;

        // IDs for classifier Flow
        static const int FLOW = 17;
        static const int FLOW__ATTRIBUTE = 0;
        static const int FLOW__ANNOTATION = 1;
        static const int FLOW__STEREOTYPE = 2;
        static const int FLOW__TAGGEDVALUE = 3;
        static const int FLOW__TO = 4;
        static const int FLOW__FROM = 5;
        static const int FLOW_FEATURE_COUNT = 6;

        // IDs for classifier GuardedFlow
        static const int GUARDEDFLOW = 18;
        static const int GUARDEDFLOW__ATTRIBUTE = 0;
        static const int GUARDEDFLOW__ANNOTATION = 1;
        static const int GUARDEDFLOW__STEREOTYPE = 2;
        static const int GUARDEDFLOW__TAGGEDVALUE = 3;
        static const int GUARDEDFLOW__TO = 4;
        static const int GUARDEDFLOW__FROM = 5;
        static const int GUARDEDFLOW_FEATURE_COUNT = 6;

        // IDs for classifier Reads
        static const int READS = 19;
        static const int READS__ATTRIBUTE = 0;
        static const int READS__ANNOTATION = 1;
        static const int READS__STEREOTYPE = 2;
        static const int READS__TAGGEDVALUE = 3;
        static const int READS__TO = 4;
        static const int READS__FROM = 5;
        static const int READS_FEATURE_COUNT = 6;

        // IDs for classifier Throws
        static const int THROWS = 20;
        static const int THROWS__ATTRIBUTE = 0;
        static const int THROWS__ANNOTATION = 1;
        static const int THROWS__STEREOTYPE = 2;
        static const int THROWS__TAGGEDVALUE = 3;
        static const int THROWS__TO = 4;
        static const int THROWS__FROM = 5;
        static const int THROWS_FEATURE_COUNT = 6;

        // IDs for classifier TrueFlow
        static const int TRUEFLOW = 21;
        static const int TRUEFLOW__ATTRIBUTE = 0;
        static const int TRUEFLOW__ANNOTATION = 1;
        static const int TRUEFLOW__STEREOTYPE = 2;
        static const int TRUEFLOW__TAGGEDVALUE = 3;
        static const int TRUEFLOW__TO = 4;
        static const int TRUEFLOW__FROM = 5;
        static const int TRUEFLOW_FEATURE_COUNT = 6;

        // IDs for classifier TryUnit
        static const int TRYUNIT = 22;
        static const int TRYUNIT__ATTRIBUTE = 0;
        static const int TRYUNIT__ANNOTATION = 1;
        static const int TRYUNIT__STEREOTYPE = 2;
        static const int TRYUNIT__TAGGEDVALUE = 3;
        static const int TRYUNIT__NAME = 4;
        static const int TRYUNIT__SOURCE = 5;
        static const int TRYUNIT__COMMENT = 6;
        static const int TRYUNIT__CODERELATION = 7;
        static const int TRYUNIT__KIND = 8;
        static const int TRYUNIT__CODEELEMENT = 9;
        static const int TRYUNIT__ACTIONRELATION = 10;
        static const int TRYUNIT_FEATURE_COUNT = 11;

        // IDs for classifier UsesType
        static const int USESTYPE = 23;
        static const int USESTYPE__ATTRIBUTE = 0;
        static const int USESTYPE__ANNOTATION = 1;
        static const int USESTYPE__STEREOTYPE = 2;
        static const int USESTYPE__TAGGEDVALUE = 3;
        static const int USESTYPE__TO = 4;
        static const int USESTYPE__FROM = 5;
        static const int USESTYPE_FEATURE_COUNT = 6;

        // IDs for classifier Writes
        static const int WRITES = 24;
        static const int WRITES__ATTRIBUTE = 0;
        static const int WRITES__ANNOTATION = 1;
        static const int WRITES__STEREOTYPE = 2;
        static const int WRITES__TAGGEDVALUE = 3;
        static const int WRITES__TO = 4;
        static const int WRITES__FROM = 5;
        static const int WRITES_FEATURE_COUNT = 6;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getActionElement();

        virtual ::ecore::EClass_ptr getAbstractActionRelationship();

        virtual ::ecore::EClass_ptr getControlFlow();

        virtual ::ecore::EClass_ptr getCalls();

        virtual ::ecore::EClass_ptr getCreates();

        virtual ::ecore::EClass_ptr getReads();

        virtual ::ecore::EClass_ptr getWrites();

        virtual ::ecore::EClass_ptr getCompliesTo();

        virtual ::ecore::EClass_ptr getFlow();

        virtual ::ecore::EClass_ptr getTrueFlow();

        virtual ::ecore::EClass_ptr getFalseFlow();

        virtual ::ecore::EClass_ptr getGuardedFlow();

        virtual ::ecore::EClass_ptr getUsesType();

        virtual ::ecore::EClass_ptr getAddresses();

        virtual ::ecore::EClass_ptr getActionRelationship();

        virtual ::ecore::EClass_ptr getThrows();

        virtual ::ecore::EClass_ptr getDispatches();

        virtual ::ecore::EClass_ptr getEntryFlow();

        virtual ::ecore::EClass_ptr getBlockUnit();

        virtual ::ecore::EClass_ptr getExceptionUnit();

        virtual ::ecore::EClass_ptr getTryUnit();

        virtual ::ecore::EClass_ptr getFinallyUnit();

        virtual ::ecore::EClass_ptr getCatchUnit();

        virtual ::ecore::EClass_ptr getExitFlow();

        virtual ::ecore::EClass_ptr getExceptionFlow();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getActionElement__kind();

        virtual ::ecore::EReference_ptr getActionElement__codeElement();

        virtual ::ecore::EReference_ptr getActionElement__actionRelation();

        virtual ::ecore::EReference_ptr getControlFlow__to();

        virtual ::ecore::EReference_ptr getControlFlow__from();

        virtual ::ecore::EReference_ptr getCalls__to();

        virtual ::ecore::EReference_ptr getCalls__from();

        virtual ::ecore::EReference_ptr getCreates__to();

        virtual ::ecore::EReference_ptr getCreates__from();

        virtual ::ecore::EReference_ptr getReads__to();

        virtual ::ecore::EReference_ptr getReads__from();

        virtual ::ecore::EReference_ptr getWrites__to();

        virtual ::ecore::EReference_ptr getWrites__from();

        virtual ::ecore::EReference_ptr getCompliesTo__to();

        virtual ::ecore::EReference_ptr getCompliesTo__from();

        virtual ::ecore::EReference_ptr getUsesType__to();

        virtual ::ecore::EReference_ptr getUsesType__from();

        virtual ::ecore::EReference_ptr getAddresses__to();

        virtual ::ecore::EReference_ptr getAddresses__from();

        virtual ::ecore::EReference_ptr getActionRelationship__to();

        virtual ::ecore::EReference_ptr getActionRelationship__from();

        virtual ::ecore::EReference_ptr getThrows__to();

        virtual ::ecore::EReference_ptr getThrows__from();

        virtual ::ecore::EReference_ptr getDispatches__to();

        virtual ::ecore::EReference_ptr getDispatches__from();

        virtual ::ecore::EReference_ptr getEntryFlow__to();

        virtual ::ecore::EReference_ptr getEntryFlow__from();

        virtual ::ecore::EReference_ptr getExitFlow__to();

        virtual ::ecore::EReference_ptr getExitFlow__from();

        virtual ::ecore::EReference_ptr getExceptionFlow__to();

        virtual ::ecore::EReference_ptr getExceptionFlow__from();

    protected:

        static ::ecore::Ptr< ActionPackage > s_instance;

        ActionPackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractActionRelationshipEClass;
        ::ecore::EClass_ptr m_ActionElementEClass;
        ::ecore::EClass_ptr m_ActionRelationshipEClass;
        ::ecore::EClass_ptr m_AddressesEClass;
        ::ecore::EClass_ptr m_BlockUnitEClass;
        ::ecore::EClass_ptr m_CallsEClass;
        ::ecore::EClass_ptr m_CatchUnitEClass;
        ::ecore::EClass_ptr m_CompliesToEClass;
        ::ecore::EClass_ptr m_ControlFlowEClass;
        ::ecore::EClass_ptr m_CreatesEClass;
        ::ecore::EClass_ptr m_DispatchesEClass;
        ::ecore::EClass_ptr m_EntryFlowEClass;
        ::ecore::EClass_ptr m_ExceptionFlowEClass;
        ::ecore::EClass_ptr m_ExceptionUnitEClass;
        ::ecore::EClass_ptr m_ExitFlowEClass;
        ::ecore::EClass_ptr m_FalseFlowEClass;
        ::ecore::EClass_ptr m_FinallyUnitEClass;
        ::ecore::EClass_ptr m_FlowEClass;
        ::ecore::EClass_ptr m_GuardedFlowEClass;
        ::ecore::EClass_ptr m_ReadsEClass;
        ::ecore::EClass_ptr m_ThrowsEClass;
        ::ecore::EClass_ptr m_TrueFlowEClass;
        ::ecore::EClass_ptr m_TryUnitEClass;
        ::ecore::EClass_ptr m_UsesTypeEClass;
        ::ecore::EClass_ptr m_WritesEClass;

        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_ActionElement__kind;

        ::ecore::EReference_ptr m_ActionElement__codeElement;

        ::ecore::EReference_ptr m_ActionElement__actionRelation;

        ::ecore::EReference_ptr m_ControlFlow__to;

        ::ecore::EReference_ptr m_ControlFlow__from;

        ::ecore::EReference_ptr m_Calls__to;

        ::ecore::EReference_ptr m_Calls__from;

        ::ecore::EReference_ptr m_Creates__to;

        ::ecore::EReference_ptr m_Creates__from;

        ::ecore::EReference_ptr m_Reads__to;

        ::ecore::EReference_ptr m_Reads__from;

        ::ecore::EReference_ptr m_Writes__to;

        ::ecore::EReference_ptr m_Writes__from;

        ::ecore::EReference_ptr m_CompliesTo__to;

        ::ecore::EReference_ptr m_CompliesTo__from;

        ::ecore::EReference_ptr m_UsesType__to;

        ::ecore::EReference_ptr m_UsesType__from;

        ::ecore::EReference_ptr m_Addresses__to;

        ::ecore::EReference_ptr m_Addresses__from;

        ::ecore::EReference_ptr m_ActionRelationship__to;

        ::ecore::EReference_ptr m_ActionRelationship__from;

        ::ecore::EReference_ptr m_Throws__to;

        ::ecore::EReference_ptr m_Throws__from;

        ::ecore::EReference_ptr m_Dispatches__to;

        ::ecore::EReference_ptr m_Dispatches__from;

        ::ecore::EReference_ptr m_EntryFlow__to;

        ::ecore::EReference_ptr m_EntryFlow__from;

        ::ecore::EReference_ptr m_ExitFlow__to;

        ::ecore::EReference_ptr m_ExitFlow__from;

        ::ecore::EReference_ptr m_ExceptionFlow__to;

        ::ecore::EReference_ptr m_ExceptionFlow__from;

    };

}
 // action
}// kdm

#endif // _KDM_ACTIONPACKAGE_HPP

