// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/PlatformPackage.hpp
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

#ifndef _KDM_PLATFORMPACKAGE_HPP
#define _KDM_PLATFORMPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/platform_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include "../dllKdm.hpp"

namespace kdm
{
    namespace platform
    {

    class EXPORT_KDM_DLL PlatformPackage : public virtual ::ecore::EPackage
    {
    public:

        static PlatformPackage_ptr _instance();
        static PlatformPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractPlatformElement
        static const int ABSTRACTPLATFORMELEMENT = 0;
        static const int ABSTRACTPLATFORMELEMENT__ATTRIBUTE = 0;
        static const int ABSTRACTPLATFORMELEMENT__ANNOTATION = 1;
        static const int ABSTRACTPLATFORMELEMENT__STEREOTYPE = 2;
        static const int ABSTRACTPLATFORMELEMENT__TAGGEDVALUE = 3;
        static const int ABSTRACTPLATFORMELEMENT__NAME = 4;
        static const int ABSTRACTPLATFORMELEMENT__SOURCE = 5;
        static const int ABSTRACTPLATFORMELEMENT__RELATION = 6;
        static const int ABSTRACTPLATFORMELEMENT__ABSTRACTION = 7;
        static const int ABSTRACTPLATFORMELEMENT__IMPLEMENTATION = 8;
        static const int ABSTRACTPLATFORMELEMENT_FEATURE_COUNT = 9;

        // IDs for classifier AbstractPlatformRelationship
        static const int ABSTRACTPLATFORMRELATIONSHIP = 1;
        static const int ABSTRACTPLATFORMRELATIONSHIP__ATTRIBUTE = 0;
        static const int ABSTRACTPLATFORMRELATIONSHIP__ANNOTATION = 1;
        static const int ABSTRACTPLATFORMRELATIONSHIP__STEREOTYPE = 2;
        static const int ABSTRACTPLATFORMRELATIONSHIP__TAGGEDVALUE = 3;
        static const int ABSTRACTPLATFORMRELATIONSHIP_FEATURE_COUNT = 4;

        // IDs for classifier BindsTo
        static const int BINDSTO = 2;
        static const int BINDSTO__ATTRIBUTE = 0;
        static const int BINDSTO__ANNOTATION = 1;
        static const int BINDSTO__STEREOTYPE = 2;
        static const int BINDSTO__TAGGEDVALUE = 3;
        static const int BINDSTO__TO = 4;
        static const int BINDSTO__FROM = 5;
        static const int BINDSTO_FEATURE_COUNT = 6;

        // IDs for classifier DataManager
        static const int DATAMANAGER = 3;
        static const int DATAMANAGER__ATTRIBUTE = 0;
        static const int DATAMANAGER__ANNOTATION = 1;
        static const int DATAMANAGER__STEREOTYPE = 2;
        static const int DATAMANAGER__TAGGEDVALUE = 3;
        static const int DATAMANAGER__NAME = 4;
        static const int DATAMANAGER__SOURCE = 5;
        static const int DATAMANAGER__RELATION = 6;
        static const int DATAMANAGER__ABSTRACTION = 7;
        static const int DATAMANAGER__IMPLEMENTATION = 8;
        static const int DATAMANAGER__PLATFORMELEMENT = 9;
        static const int DATAMANAGER_FEATURE_COUNT = 10;

        // IDs for classifier DefinedBy
        static const int DEFINEDBY = 4;
        static const int DEFINEDBY__ATTRIBUTE = 0;
        static const int DEFINEDBY__ANNOTATION = 1;
        static const int DEFINEDBY__STEREOTYPE = 2;
        static const int DEFINEDBY__TAGGEDVALUE = 3;
        static const int DEFINEDBY__TO = 4;
        static const int DEFINEDBY__FROM = 5;
        static const int DEFINEDBY_FEATURE_COUNT = 6;

        // IDs for classifier DeployedComponent
        static const int DEPLOYEDCOMPONENT = 5;
        static const int DEPLOYEDCOMPONENT__ATTRIBUTE = 0;
        static const int DEPLOYEDCOMPONENT__ANNOTATION = 1;
        static const int DEPLOYEDCOMPONENT__STEREOTYPE = 2;
        static const int DEPLOYEDCOMPONENT__TAGGEDVALUE = 3;
        static const int DEPLOYEDCOMPONENT__NAME = 4;
        static const int DEPLOYEDCOMPONENT__SOURCE = 5;
        static const int DEPLOYEDCOMPONENT__RELATION = 6;
        static const int DEPLOYEDCOMPONENT__ABSTRACTION = 7;
        static const int DEPLOYEDCOMPONENT__IMPLEMENTATION = 8;
        static const int DEPLOYEDCOMPONENT__GROUPEDCODE = 9;
        static const int DEPLOYEDCOMPONENT_FEATURE_COUNT = 10;

        // IDs for classifier DeployedResource
        static const int DEPLOYEDRESOURCE = 6;
        static const int DEPLOYEDRESOURCE__ATTRIBUTE = 0;
        static const int DEPLOYEDRESOURCE__ANNOTATION = 1;
        static const int DEPLOYEDRESOURCE__STEREOTYPE = 2;
        static const int DEPLOYEDRESOURCE__TAGGEDVALUE = 3;
        static const int DEPLOYEDRESOURCE__NAME = 4;
        static const int DEPLOYEDRESOURCE__SOURCE = 5;
        static const int DEPLOYEDRESOURCE__RELATION = 6;
        static const int DEPLOYEDRESOURCE__ABSTRACTION = 7;
        static const int DEPLOYEDRESOURCE__IMPLEMENTATION = 8;
        static const int DEPLOYEDRESOURCE__PLATFORMELEMENT = 9;
        static const int DEPLOYEDRESOURCE_FEATURE_COUNT = 10;

        // IDs for classifier DeployedSoftwareSystem
        static const int DEPLOYEDSOFTWARESYSTEM = 7;
        static const int DEPLOYEDSOFTWARESYSTEM__ATTRIBUTE = 0;
        static const int DEPLOYEDSOFTWARESYSTEM__ANNOTATION = 1;
        static const int DEPLOYEDSOFTWARESYSTEM__STEREOTYPE = 2;
        static const int DEPLOYEDSOFTWARESYSTEM__TAGGEDVALUE = 3;
        static const int DEPLOYEDSOFTWARESYSTEM__NAME = 4;
        static const int DEPLOYEDSOFTWARESYSTEM__SOURCE = 5;
        static const int DEPLOYEDSOFTWARESYSTEM__RELATION = 6;
        static const int DEPLOYEDSOFTWARESYSTEM__ABSTRACTION = 7;
        static const int DEPLOYEDSOFTWARESYSTEM__IMPLEMENTATION = 8;
        static const int DEPLOYEDSOFTWARESYSTEM__GROUPEDCOMPONENT = 9;
        static const int DEPLOYEDSOFTWARESYSTEM_FEATURE_COUNT = 10;

        // IDs for classifier ExecutionResource
        static const int EXECUTIONRESOURCE = 8;
        static const int EXECUTIONRESOURCE__ATTRIBUTE = 0;
        static const int EXECUTIONRESOURCE__ANNOTATION = 1;
        static const int EXECUTIONRESOURCE__STEREOTYPE = 2;
        static const int EXECUTIONRESOURCE__TAGGEDVALUE = 3;
        static const int EXECUTIONRESOURCE__NAME = 4;
        static const int EXECUTIONRESOURCE__SOURCE = 5;
        static const int EXECUTIONRESOURCE__RELATION = 6;
        static const int EXECUTIONRESOURCE__ABSTRACTION = 7;
        static const int EXECUTIONRESOURCE__IMPLEMENTATION = 8;
        static const int EXECUTIONRESOURCE__PLATFORMELEMENT = 9;
        static const int EXECUTIONRESOURCE_FEATURE_COUNT = 10;

        // IDs for classifier ExternalActor
        static const int EXTERNALACTOR = 9;
        static const int EXTERNALACTOR__ATTRIBUTE = 0;
        static const int EXTERNALACTOR__ANNOTATION = 1;
        static const int EXTERNALACTOR__STEREOTYPE = 2;
        static const int EXTERNALACTOR__TAGGEDVALUE = 3;
        static const int EXTERNALACTOR__NAME = 4;
        static const int EXTERNALACTOR__SOURCE = 5;
        static const int EXTERNALACTOR__RELATION = 6;
        static const int EXTERNALACTOR__ABSTRACTION = 7;
        static const int EXTERNALACTOR__IMPLEMENTATION = 8;
        static const int EXTERNALACTOR__KIND = 9;
        static const int EXTERNALACTOR__PLATFORMELEMENT = 10;
        static const int EXTERNALACTOR_FEATURE_COUNT = 11;

        // IDs for classifier FileResource
        static const int FILERESOURCE = 10;
        static const int FILERESOURCE__ATTRIBUTE = 0;
        static const int FILERESOURCE__ANNOTATION = 1;
        static const int FILERESOURCE__STEREOTYPE = 2;
        static const int FILERESOURCE__TAGGEDVALUE = 3;
        static const int FILERESOURCE__NAME = 4;
        static const int FILERESOURCE__SOURCE = 5;
        static const int FILERESOURCE__RELATION = 6;
        static const int FILERESOURCE__ABSTRACTION = 7;
        static const int FILERESOURCE__IMPLEMENTATION = 8;
        static const int FILERESOURCE__PLATFORMELEMENT = 9;
        static const int FILERESOURCE_FEATURE_COUNT = 10;

        // IDs for classifier Loads
        static const int LOADS = 11;
        static const int LOADS__ATTRIBUTE = 0;
        static const int LOADS__ANNOTATION = 1;
        static const int LOADS__STEREOTYPE = 2;
        static const int LOADS__TAGGEDVALUE = 3;
        static const int LOADS__TO = 4;
        static const int LOADS__FROM = 5;
        static const int LOADS_FEATURE_COUNT = 6;

        // IDs for classifier LockResource
        static const int LOCKRESOURCE = 12;
        static const int LOCKRESOURCE__ATTRIBUTE = 0;
        static const int LOCKRESOURCE__ANNOTATION = 1;
        static const int LOCKRESOURCE__STEREOTYPE = 2;
        static const int LOCKRESOURCE__TAGGEDVALUE = 3;
        static const int LOCKRESOURCE__NAME = 4;
        static const int LOCKRESOURCE__SOURCE = 5;
        static const int LOCKRESOURCE__RELATION = 6;
        static const int LOCKRESOURCE__ABSTRACTION = 7;
        static const int LOCKRESOURCE__IMPLEMENTATION = 8;
        static const int LOCKRESOURCE__PLATFORMELEMENT = 9;
        static const int LOCKRESOURCE_FEATURE_COUNT = 10;

        // IDs for classifier Machine
        static const int MACHINE = 13;
        static const int MACHINE__ATTRIBUTE = 0;
        static const int MACHINE__ANNOTATION = 1;
        static const int MACHINE__STEREOTYPE = 2;
        static const int MACHINE__TAGGEDVALUE = 3;
        static const int MACHINE__NAME = 4;
        static const int MACHINE__SOURCE = 5;
        static const int MACHINE__RELATION = 6;
        static const int MACHINE__ABSTRACTION = 7;
        static const int MACHINE__IMPLEMENTATION = 8;
        static const int MACHINE__DEPLOYEDCOMPONENT = 9;
        static const int MACHINE__DEPLOYEDRESOURCE = 10;
        static const int MACHINE_FEATURE_COUNT = 11;

        // IDs for classifier ManagesResource
        static const int MANAGESRESOURCE = 14;
        static const int MANAGESRESOURCE__ATTRIBUTE = 0;
        static const int MANAGESRESOURCE__ANNOTATION = 1;
        static const int MANAGESRESOURCE__STEREOTYPE = 2;
        static const int MANAGESRESOURCE__TAGGEDVALUE = 3;
        static const int MANAGESRESOURCE__TO = 4;
        static const int MANAGESRESOURCE__FROM = 5;
        static const int MANAGESRESOURCE_FEATURE_COUNT = 6;

        // IDs for classifier MarshalledResource
        static const int MARSHALLEDRESOURCE = 15;
        static const int MARSHALLEDRESOURCE__ATTRIBUTE = 0;
        static const int MARSHALLEDRESOURCE__ANNOTATION = 1;
        static const int MARSHALLEDRESOURCE__STEREOTYPE = 2;
        static const int MARSHALLEDRESOURCE__TAGGEDVALUE = 3;
        static const int MARSHALLEDRESOURCE__NAME = 4;
        static const int MARSHALLEDRESOURCE__SOURCE = 5;
        static const int MARSHALLEDRESOURCE__RELATION = 6;
        static const int MARSHALLEDRESOURCE__ABSTRACTION = 7;
        static const int MARSHALLEDRESOURCE__IMPLEMENTATION = 8;
        static const int MARSHALLEDRESOURCE__PLATFORMELEMENT = 9;
        static const int MARSHALLEDRESOURCE_FEATURE_COUNT = 10;

        // IDs for classifier MessagingResource
        static const int MESSAGINGRESOURCE = 16;
        static const int MESSAGINGRESOURCE__ATTRIBUTE = 0;
        static const int MESSAGINGRESOURCE__ANNOTATION = 1;
        static const int MESSAGINGRESOURCE__STEREOTYPE = 2;
        static const int MESSAGINGRESOURCE__TAGGEDVALUE = 3;
        static const int MESSAGINGRESOURCE__NAME = 4;
        static const int MESSAGINGRESOURCE__SOURCE = 5;
        static const int MESSAGINGRESOURCE__RELATION = 6;
        static const int MESSAGINGRESOURCE__ABSTRACTION = 7;
        static const int MESSAGINGRESOURCE__IMPLEMENTATION = 8;
        static const int MESSAGINGRESOURCE__PLATFORMELEMENT = 9;
        static const int MESSAGINGRESOURCE_FEATURE_COUNT = 10;

        // IDs for classifier NamingResource
        static const int NAMINGRESOURCE = 17;
        static const int NAMINGRESOURCE__ATTRIBUTE = 0;
        static const int NAMINGRESOURCE__ANNOTATION = 1;
        static const int NAMINGRESOURCE__STEREOTYPE = 2;
        static const int NAMINGRESOURCE__TAGGEDVALUE = 3;
        static const int NAMINGRESOURCE__NAME = 4;
        static const int NAMINGRESOURCE__SOURCE = 5;
        static const int NAMINGRESOURCE__RELATION = 6;
        static const int NAMINGRESOURCE__ABSTRACTION = 7;
        static const int NAMINGRESOURCE__IMPLEMENTATION = 8;
        static const int NAMINGRESOURCE__PLATFORMELEMENT = 9;
        static const int NAMINGRESOURCE_FEATURE_COUNT = 10;

        // IDs for classifier PlatformAction
        static const int PLATFORMACTION = 18;
        static const int PLATFORMACTION__ATTRIBUTE = 0;
        static const int PLATFORMACTION__ANNOTATION = 1;
        static const int PLATFORMACTION__STEREOTYPE = 2;
        static const int PLATFORMACTION__TAGGEDVALUE = 3;
        static const int PLATFORMACTION__NAME = 4;
        static const int PLATFORMACTION__SOURCE = 5;
        static const int PLATFORMACTION__RELATION = 6;
        static const int PLATFORMACTION__ABSTRACTION = 7;
        static const int PLATFORMACTION__IMPLEMENTATION = 8;
        static const int PLATFORMACTION__KIND = 9;
        static const int PLATFORMACTION__PLATFORMELEMENT = 10;
        static const int PLATFORMACTION_FEATURE_COUNT = 11;

        // IDs for classifier PlatformElement
        static const int PLATFORMELEMENT = 19;
        static const int PLATFORMELEMENT__ATTRIBUTE = 0;
        static const int PLATFORMELEMENT__ANNOTATION = 1;
        static const int PLATFORMELEMENT__STEREOTYPE = 2;
        static const int PLATFORMELEMENT__TAGGEDVALUE = 3;
        static const int PLATFORMELEMENT__NAME = 4;
        static const int PLATFORMELEMENT__SOURCE = 5;
        static const int PLATFORMELEMENT__RELATION = 6;
        static const int PLATFORMELEMENT__ABSTRACTION = 7;
        static const int PLATFORMELEMENT__IMPLEMENTATION = 8;
        static const int PLATFORMELEMENT_FEATURE_COUNT = 9;

        // IDs for classifier PlatformEvent
        static const int PLATFORMEVENT = 20;
        static const int PLATFORMEVENT__ATTRIBUTE = 0;
        static const int PLATFORMEVENT__ANNOTATION = 1;
        static const int PLATFORMEVENT__STEREOTYPE = 2;
        static const int PLATFORMEVENT__TAGGEDVALUE = 3;
        static const int PLATFORMEVENT__NAME = 4;
        static const int PLATFORMEVENT__SOURCE = 5;
        static const int PLATFORMEVENT__RELATION = 6;
        static const int PLATFORMEVENT__ABSTRACTION = 7;
        static const int PLATFORMEVENT__IMPLEMENTATION = 8;
        static const int PLATFORMEVENT__KIND = 9;
        static const int PLATFORMEVENT_FEATURE_COUNT = 10;

        // IDs for classifier PlatformModel
        static const int PLATFORMMODEL = 21;
        static const int PLATFORMMODEL__ATTRIBUTE = 0;
        static const int PLATFORMMODEL__ANNOTATION = 1;
        static const int PLATFORMMODEL__STEREOTYPE = 2;
        static const int PLATFORMMODEL__TAGGEDVALUE = 3;
        static const int PLATFORMMODEL__AUDIT = 4;
        static const int PLATFORMMODEL__EXTENSIONFAMILY = 5;
        static const int PLATFORMMODEL__NAME = 6;
        static const int PLATFORMMODEL__PLATFORMELEMENT = 7;
        static const int PLATFORMMODEL_FEATURE_COUNT = 8;

        // IDs for classifier PlatformRelationship
        static const int PLATFORMRELATIONSHIP = 22;
        static const int PLATFORMRELATIONSHIP__ATTRIBUTE = 0;
        static const int PLATFORMRELATIONSHIP__ANNOTATION = 1;
        static const int PLATFORMRELATIONSHIP__STEREOTYPE = 2;
        static const int PLATFORMRELATIONSHIP__TAGGEDVALUE = 3;
        static const int PLATFORMRELATIONSHIP__TO = 4;
        static const int PLATFORMRELATIONSHIP__FROM = 5;
        static const int PLATFORMRELATIONSHIP_FEATURE_COUNT = 6;

        // IDs for classifier Process
        static const int PROCESS = 23;
        static const int PROCESS__ATTRIBUTE = 0;
        static const int PROCESS__ANNOTATION = 1;
        static const int PROCESS__STEREOTYPE = 2;
        static const int PROCESS__TAGGEDVALUE = 3;
        static const int PROCESS__NAME = 4;
        static const int PROCESS__SOURCE = 5;
        static const int PROCESS__RELATION = 6;
        static const int PROCESS__ABSTRACTION = 7;
        static const int PROCESS__IMPLEMENTATION = 8;
        static const int PROCESS__PLATFORMELEMENT = 9;
        static const int PROCESS_FEATURE_COUNT = 10;

        // IDs for classifier ReadsResource
        static const int READSRESOURCE = 24;
        static const int READSRESOURCE__ATTRIBUTE = 0;
        static const int READSRESOURCE__ANNOTATION = 1;
        static const int READSRESOURCE__STEREOTYPE = 2;
        static const int READSRESOURCE__TAGGEDVALUE = 3;
        static const int READSRESOURCE__TO = 4;
        static const int READSRESOURCE__FROM = 5;
        static const int READSRESOURCE_FEATURE_COUNT = 6;

        // IDs for classifier Requires
        static const int REQUIRES = 25;
        static const int REQUIRES__ATTRIBUTE = 0;
        static const int REQUIRES__ANNOTATION = 1;
        static const int REQUIRES__STEREOTYPE = 2;
        static const int REQUIRES__TAGGEDVALUE = 3;
        static const int REQUIRES__TO = 4;
        static const int REQUIRES__FROM = 5;
        static const int REQUIRES_FEATURE_COUNT = 6;

        // IDs for classifier ResourceType
        static const int RESOURCETYPE = 26;
        static const int RESOURCETYPE__ATTRIBUTE = 0;
        static const int RESOURCETYPE__ANNOTATION = 1;
        static const int RESOURCETYPE__STEREOTYPE = 2;
        static const int RESOURCETYPE__TAGGEDVALUE = 3;
        static const int RESOURCETYPE__NAME = 4;
        static const int RESOURCETYPE__SOURCE = 5;
        static const int RESOURCETYPE__RELATION = 6;
        static const int RESOURCETYPE__ABSTRACTION = 7;
        static const int RESOURCETYPE__IMPLEMENTATION = 8;
        static const int RESOURCETYPE__PLATFORMELEMENT = 9;
        static const int RESOURCETYPE_FEATURE_COUNT = 10;

        // IDs for classifier RuntimeResource
        static const int RUNTIMERESOURCE = 27;
        static const int RUNTIMERESOURCE__ATTRIBUTE = 0;
        static const int RUNTIMERESOURCE__ANNOTATION = 1;
        static const int RUNTIMERESOURCE__STEREOTYPE = 2;
        static const int RUNTIMERESOURCE__TAGGEDVALUE = 3;
        static const int RUNTIMERESOURCE__NAME = 4;
        static const int RUNTIMERESOURCE__SOURCE = 5;
        static const int RUNTIMERESOURCE__RELATION = 6;
        static const int RUNTIMERESOURCE__ABSTRACTION = 7;
        static const int RUNTIMERESOURCE__IMPLEMENTATION = 8;
        static const int RUNTIMERESOURCE__PLATFORMELEMENT = 9;
        static const int RUNTIMERESOURCE_FEATURE_COUNT = 10;

        // IDs for classifier Spawns
        static const int SPAWNS = 28;
        static const int SPAWNS__ATTRIBUTE = 0;
        static const int SPAWNS__ANNOTATION = 1;
        static const int SPAWNS__STEREOTYPE = 2;
        static const int SPAWNS__TAGGEDVALUE = 3;
        static const int SPAWNS__TO = 4;
        static const int SPAWNS__FROM = 5;
        static const int SPAWNS_FEATURE_COUNT = 6;

        // IDs for classifier StreamResource
        static const int STREAMRESOURCE = 29;
        static const int STREAMRESOURCE__ATTRIBUTE = 0;
        static const int STREAMRESOURCE__ANNOTATION = 1;
        static const int STREAMRESOURCE__STEREOTYPE = 2;
        static const int STREAMRESOURCE__TAGGEDVALUE = 3;
        static const int STREAMRESOURCE__NAME = 4;
        static const int STREAMRESOURCE__SOURCE = 5;
        static const int STREAMRESOURCE__RELATION = 6;
        static const int STREAMRESOURCE__ABSTRACTION = 7;
        static const int STREAMRESOURCE__IMPLEMENTATION = 8;
        static const int STREAMRESOURCE__PLATFORMELEMENT = 9;
        static const int STREAMRESOURCE_FEATURE_COUNT = 10;

        // IDs for classifier Thread
        static const int THREAD = 30;
        static const int THREAD__ATTRIBUTE = 0;
        static const int THREAD__ANNOTATION = 1;
        static const int THREAD__STEREOTYPE = 2;
        static const int THREAD__TAGGEDVALUE = 3;
        static const int THREAD__NAME = 4;
        static const int THREAD__SOURCE = 5;
        static const int THREAD__RELATION = 6;
        static const int THREAD__ABSTRACTION = 7;
        static const int THREAD__IMPLEMENTATION = 8;
        static const int THREAD__PLATFORMELEMENT = 9;
        static const int THREAD_FEATURE_COUNT = 10;

        // IDs for classifier WritesResource
        static const int WRITESRESOURCE = 31;
        static const int WRITESRESOURCE__ATTRIBUTE = 0;
        static const int WRITESRESOURCE__ANNOTATION = 1;
        static const int WRITESRESOURCE__STEREOTYPE = 2;
        static const int WRITESRESOURCE__TAGGEDVALUE = 3;
        static const int WRITESRESOURCE__TO = 4;
        static const int WRITESRESOURCE__FROM = 5;
        static const int WRITESRESOURCE_FEATURE_COUNT = 6;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractPlatformElement();

        virtual ::ecore::EClass_ptr getPlatformModel();

        virtual ::ecore::EClass_ptr getAbstractPlatformRelationship();

        virtual ::ecore::EClass_ptr getRequires();

        virtual ::ecore::EClass_ptr getResourceType();

        virtual ::ecore::EClass_ptr getNamingResource();

        virtual ::ecore::EClass_ptr getMarshalledResource();

        virtual ::ecore::EClass_ptr getMessagingResource();

        virtual ::ecore::EClass_ptr getFileResource();

        virtual ::ecore::EClass_ptr getExecutionResource();

        virtual ::ecore::EClass_ptr getPlatformAction();

        virtual ::ecore::EClass_ptr getExternalActor();

        virtual ::ecore::EClass_ptr getDataManager();

        virtual ::ecore::EClass_ptr getBindsTo();

        virtual ::ecore::EClass_ptr getPlatformElement();

        virtual ::ecore::EClass_ptr getPlatformRelationship();

        virtual ::ecore::EClass_ptr getPlatformEvent();

        virtual ::ecore::EClass_ptr getLockResource();

        virtual ::ecore::EClass_ptr getDeployedSoftwareSystem();

        virtual ::ecore::EClass_ptr getMachine();

        virtual ::ecore::EClass_ptr getDeployedComponent();

        virtual ::ecore::EClass_ptr getDeployedResource();

        virtual ::ecore::EClass_ptr getLoads();

        virtual ::ecore::EClass_ptr getSpawns();

        virtual ::ecore::EClass_ptr getRuntimeResource();

        virtual ::ecore::EClass_ptr getThread();

        virtual ::ecore::EClass_ptr getProcess();

        virtual ::ecore::EClass_ptr getReadsResource();

        virtual ::ecore::EClass_ptr getWritesResource();

        virtual ::ecore::EClass_ptr getManagesResource();

        virtual ::ecore::EClass_ptr getDefinedBy();

        virtual ::ecore::EClass_ptr getStreamResource();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getAbstractPlatformElement__source();

        virtual ::ecore::EReference_ptr getAbstractPlatformElement__relation();

        virtual ::ecore::EReference_ptr getAbstractPlatformElement__abstraction();

        virtual ::ecore::EReference_ptr getAbstractPlatformElement__implementation();

        virtual ::ecore::EReference_ptr getPlatformModel__platformElement();

        virtual ::ecore::EReference_ptr getRequires__to();

        virtual ::ecore::EReference_ptr getRequires__from();

        virtual ::ecore::EReference_ptr getResourceType__platformElement();

        virtual ::ecore::EAttribute_ptr getPlatformAction__kind();

        virtual ::ecore::EReference_ptr getPlatformAction__platformElement();

        virtual ::ecore::EReference_ptr getBindsTo__to();

        virtual ::ecore::EReference_ptr getBindsTo__from();

        virtual ::ecore::EReference_ptr getPlatformRelationship__to();

        virtual ::ecore::EReference_ptr getPlatformRelationship__from();

        virtual ::ecore::EAttribute_ptr getPlatformEvent__kind();

        virtual ::ecore::EReference_ptr getDeployedSoftwareSystem__groupedComponent();

        virtual ::ecore::EReference_ptr getMachine__deployedComponent();

        virtual ::ecore::EReference_ptr getMachine__deployedResource();

        virtual ::ecore::EReference_ptr getDeployedComponent__groupedCode();

        virtual ::ecore::EReference_ptr getDeployedResource__platformElement();

        virtual ::ecore::EReference_ptr getLoads__to();

        virtual ::ecore::EReference_ptr getLoads__from();

        virtual ::ecore::EReference_ptr getSpawns__to();

        virtual ::ecore::EReference_ptr getSpawns__from();

        virtual ::ecore::EReference_ptr getReadsResource__to();

        virtual ::ecore::EReference_ptr getReadsResource__from();

        virtual ::ecore::EReference_ptr getWritesResource__to();

        virtual ::ecore::EReference_ptr getWritesResource__from();

        virtual ::ecore::EReference_ptr getManagesResource__to();

        virtual ::ecore::EReference_ptr getManagesResource__from();

        virtual ::ecore::EReference_ptr getDefinedBy__to();

        virtual ::ecore::EReference_ptr getDefinedBy__from();

    protected:

        static ::ecore::Ptr< PlatformPackage > s_instance;

        PlatformPackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractPlatformElementEClass;
        ::ecore::EClass_ptr m_AbstractPlatformRelationshipEClass;
        ::ecore::EClass_ptr m_BindsToEClass;
        ::ecore::EClass_ptr m_DataManagerEClass;
        ::ecore::EClass_ptr m_DefinedByEClass;
        ::ecore::EClass_ptr m_DeployedComponentEClass;
        ::ecore::EClass_ptr m_DeployedResourceEClass;
        ::ecore::EClass_ptr m_DeployedSoftwareSystemEClass;
        ::ecore::EClass_ptr m_ExecutionResourceEClass;
        ::ecore::EClass_ptr m_ExternalActorEClass;
        ::ecore::EClass_ptr m_FileResourceEClass;
        ::ecore::EClass_ptr m_LoadsEClass;
        ::ecore::EClass_ptr m_LockResourceEClass;
        ::ecore::EClass_ptr m_MachineEClass;
        ::ecore::EClass_ptr m_ManagesResourceEClass;
        ::ecore::EClass_ptr m_MarshalledResourceEClass;
        ::ecore::EClass_ptr m_MessagingResourceEClass;
        ::ecore::EClass_ptr m_NamingResourceEClass;
        ::ecore::EClass_ptr m_PlatformActionEClass;
        ::ecore::EClass_ptr m_PlatformElementEClass;
        ::ecore::EClass_ptr m_PlatformEventEClass;
        ::ecore::EClass_ptr m_PlatformModelEClass;
        ::ecore::EClass_ptr m_PlatformRelationshipEClass;
        ::ecore::EClass_ptr m_ProcessEClass;
        ::ecore::EClass_ptr m_ReadsResourceEClass;
        ::ecore::EClass_ptr m_RequiresEClass;
        ::ecore::EClass_ptr m_ResourceTypeEClass;
        ::ecore::EClass_ptr m_RuntimeResourceEClass;
        ::ecore::EClass_ptr m_SpawnsEClass;
        ::ecore::EClass_ptr m_StreamResourceEClass;
        ::ecore::EClass_ptr m_ThreadEClass;
        ::ecore::EClass_ptr m_WritesResourceEClass;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_AbstractPlatformElement__source;

        ::ecore::EReference_ptr m_AbstractPlatformElement__relation;

        ::ecore::EReference_ptr m_AbstractPlatformElement__abstraction;

        ::ecore::EReference_ptr m_AbstractPlatformElement__implementation;

        ::ecore::EReference_ptr m_PlatformModel__platformElement;

        ::ecore::EReference_ptr m_Requires__to;

        ::ecore::EReference_ptr m_Requires__from;

        ::ecore::EReference_ptr m_ResourceType__platformElement;

        ::ecore::EAttribute_ptr m_PlatformAction__kind;

        ::ecore::EReference_ptr m_PlatformAction__platformElement;

        ::ecore::EReference_ptr m_BindsTo__to;

        ::ecore::EReference_ptr m_BindsTo__from;

        ::ecore::EReference_ptr m_PlatformRelationship__to;

        ::ecore::EReference_ptr m_PlatformRelationship__from;

        ::ecore::EAttribute_ptr m_PlatformEvent__kind;

        ::ecore::EReference_ptr m_DeployedSoftwareSystem__groupedComponent;

        ::ecore::EReference_ptr m_Machine__deployedComponent;

        ::ecore::EReference_ptr m_Machine__deployedResource;

        ::ecore::EReference_ptr m_DeployedComponent__groupedCode;

        ::ecore::EReference_ptr m_DeployedResource__platformElement;

        ::ecore::EReference_ptr m_Loads__to;

        ::ecore::EReference_ptr m_Loads__from;

        ::ecore::EReference_ptr m_Spawns__to;

        ::ecore::EReference_ptr m_Spawns__from;

        ::ecore::EReference_ptr m_ReadsResource__to;

        ::ecore::EReference_ptr m_ReadsResource__from;

        ::ecore::EReference_ptr m_WritesResource__to;

        ::ecore::EReference_ptr m_WritesResource__from;

        ::ecore::EReference_ptr m_ManagesResource__to;

        ::ecore::EReference_ptr m_ManagesResource__from;

        ::ecore::EReference_ptr m_DefinedBy__to;

        ::ecore::EReference_ptr m_DefinedBy__from;

    };

}
 // platform
}// kdm

#endif // _KDM_PLATFORMPACKAGE_HPP

