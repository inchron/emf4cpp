// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/EventPackage.hpp
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

#ifndef _KDM_EVENTPACKAGE_HPP
#define _KDM_EVENTPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/event_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace event
    {

    class EXPORT_KDM_DLL EventPackage : public virtual ::ecore::EPackage
    {
    public:

        static EventPackage_ptr _instance();
        static EventPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractEventElement
        static const int ABSTRACTEVENTELEMENT = 0;
        static const int ABSTRACTEVENTELEMENT__ATTRIBUTE = 0;
        static const int ABSTRACTEVENTELEMENT__ANNOTATION = 1;
        static const int ABSTRACTEVENTELEMENT__STEREOTYPE = 2;
        static const int ABSTRACTEVENTELEMENT__TAGGEDVALUE = 3;
        static const int ABSTRACTEVENTELEMENT__NAME = 4;
        static const int ABSTRACTEVENTELEMENT__SOURCE = 5;
        static const int ABSTRACTEVENTELEMENT__EVENTRELATION = 6;
        static const int ABSTRACTEVENTELEMENT__ABSTRACTION = 7;
        static const int ABSTRACTEVENTELEMENT__IMPLEMENTATION = 8;
        static const int ABSTRACTEVENTELEMENT_FEATURE_COUNT = 9;

        // IDs for classifier AbstractEventRelationship
        static const int ABSTRACTEVENTRELATIONSHIP = 1;
        static const int ABSTRACTEVENTRELATIONSHIP__ATTRIBUTE = 0;
        static const int ABSTRACTEVENTRELATIONSHIP__ANNOTATION = 1;
        static const int ABSTRACTEVENTRELATIONSHIP__STEREOTYPE = 2;
        static const int ABSTRACTEVENTRELATIONSHIP__TAGGEDVALUE = 3;
        static const int ABSTRACTEVENTRELATIONSHIP_FEATURE_COUNT = 4;

        // IDs for classifier ConsumesEvent
        static const int CONSUMESEVENT = 2;
        static const int CONSUMESEVENT__ATTRIBUTE = 0;
        static const int CONSUMESEVENT__ANNOTATION = 1;
        static const int CONSUMESEVENT__STEREOTYPE = 2;
        static const int CONSUMESEVENT__TAGGEDVALUE = 3;
        static const int CONSUMESEVENT__TO = 4;
        static const int CONSUMESEVENT__FROM = 5;
        static const int CONSUMESEVENT_FEATURE_COUNT = 6;

        // IDs for classifier Event
        static const int EVENT = 3;
        static const int EVENT__ATTRIBUTE = 0;
        static const int EVENT__ANNOTATION = 1;
        static const int EVENT__STEREOTYPE = 2;
        static const int EVENT__TAGGEDVALUE = 3;
        static const int EVENT__NAME = 4;
        static const int EVENT__SOURCE = 5;
        static const int EVENT__EVENTRELATION = 6;
        static const int EVENT__ABSTRACTION = 7;
        static const int EVENT__IMPLEMENTATION = 8;
        static const int EVENT__KIND = 9;
        static const int EVENT_FEATURE_COUNT = 10;

        // IDs for classifier EventAction
        static const int EVENTACTION = 4;
        static const int EVENTACTION__ATTRIBUTE = 0;
        static const int EVENTACTION__ANNOTATION = 1;
        static const int EVENTACTION__STEREOTYPE = 2;
        static const int EVENTACTION__TAGGEDVALUE = 3;
        static const int EVENTACTION__NAME = 4;
        static const int EVENTACTION__SOURCE = 5;
        static const int EVENTACTION__EVENTRELATION = 6;
        static const int EVENTACTION__ABSTRACTION = 7;
        static const int EVENTACTION__IMPLEMENTATION = 8;
        static const int EVENTACTION__KIND = 9;
        static const int EVENTACTION__EVENTELEMENT = 10;
        static const int EVENTACTION_FEATURE_COUNT = 11;

        // IDs for classifier EventElement
        static const int EVENTELEMENT = 5;
        static const int EVENTELEMENT__ATTRIBUTE = 0;
        static const int EVENTELEMENT__ANNOTATION = 1;
        static const int EVENTELEMENT__STEREOTYPE = 2;
        static const int EVENTELEMENT__TAGGEDVALUE = 3;
        static const int EVENTELEMENT__NAME = 4;
        static const int EVENTELEMENT__SOURCE = 5;
        static const int EVENTELEMENT__EVENTRELATION = 6;
        static const int EVENTELEMENT__ABSTRACTION = 7;
        static const int EVENTELEMENT__IMPLEMENTATION = 8;
        static const int EVENTELEMENT_FEATURE_COUNT = 9;

        // IDs for classifier EventModel
        static const int EVENTMODEL = 6;
        static const int EVENTMODEL__ATTRIBUTE = 0;
        static const int EVENTMODEL__ANNOTATION = 1;
        static const int EVENTMODEL__STEREOTYPE = 2;
        static const int EVENTMODEL__TAGGEDVALUE = 3;
        static const int EVENTMODEL__AUDIT = 4;
        static const int EVENTMODEL__EXTENSIONFAMILY = 5;
        static const int EVENTMODEL__NAME = 6;
        static const int EVENTMODEL__EVENTELEMENT = 7;
        static const int EVENTMODEL_FEATURE_COUNT = 8;

        // IDs for classifier EventRelationship
        static const int EVENTRELATIONSHIP = 7;
        static const int EVENTRELATIONSHIP__ATTRIBUTE = 0;
        static const int EVENTRELATIONSHIP__ANNOTATION = 1;
        static const int EVENTRELATIONSHIP__STEREOTYPE = 2;
        static const int EVENTRELATIONSHIP__TAGGEDVALUE = 3;
        static const int EVENTRELATIONSHIP__TO = 4;
        static const int EVENTRELATIONSHIP__FROM = 5;
        static const int EVENTRELATIONSHIP_FEATURE_COUNT = 6;

        // IDs for classifier EventResource
        static const int EVENTRESOURCE = 8;
        static const int EVENTRESOURCE__ATTRIBUTE = 0;
        static const int EVENTRESOURCE__ANNOTATION = 1;
        static const int EVENTRESOURCE__STEREOTYPE = 2;
        static const int EVENTRESOURCE__TAGGEDVALUE = 3;
        static const int EVENTRESOURCE__NAME = 4;
        static const int EVENTRESOURCE__SOURCE = 5;
        static const int EVENTRESOURCE__EVENTRELATION = 6;
        static const int EVENTRESOURCE__ABSTRACTION = 7;
        static const int EVENTRESOURCE__IMPLEMENTATION = 8;
        static const int EVENTRESOURCE__EVENTELEMENT = 9;
        static const int EVENTRESOURCE_FEATURE_COUNT = 10;

        // IDs for classifier HasState
        static const int HASSTATE = 9;
        static const int HASSTATE__ATTRIBUTE = 0;
        static const int HASSTATE__ANNOTATION = 1;
        static const int HASSTATE__STEREOTYPE = 2;
        static const int HASSTATE__TAGGEDVALUE = 3;
        static const int HASSTATE__TO = 4;
        static const int HASSTATE__FROM = 5;
        static const int HASSTATE_FEATURE_COUNT = 6;

        // IDs for classifier InitialState
        static const int INITIALSTATE = 10;
        static const int INITIALSTATE__ATTRIBUTE = 0;
        static const int INITIALSTATE__ANNOTATION = 1;
        static const int INITIALSTATE__STEREOTYPE = 2;
        static const int INITIALSTATE__TAGGEDVALUE = 3;
        static const int INITIALSTATE__NAME = 4;
        static const int INITIALSTATE__SOURCE = 5;
        static const int INITIALSTATE__EVENTRELATION = 6;
        static const int INITIALSTATE__ABSTRACTION = 7;
        static const int INITIALSTATE__IMPLEMENTATION = 8;
        static const int INITIALSTATE__EVENTELEMENT = 9;
        static const int INITIALSTATE_FEATURE_COUNT = 10;

        // IDs for classifier NextState
        static const int NEXTSTATE = 11;
        static const int NEXTSTATE__ATTRIBUTE = 0;
        static const int NEXTSTATE__ANNOTATION = 1;
        static const int NEXTSTATE__STEREOTYPE = 2;
        static const int NEXTSTATE__TAGGEDVALUE = 3;
        static const int NEXTSTATE__TO = 4;
        static const int NEXTSTATE__FROM = 5;
        static const int NEXTSTATE_FEATURE_COUNT = 6;

        // IDs for classifier OnEntry
        static const int ONENTRY = 12;
        static const int ONENTRY__ATTRIBUTE = 0;
        static const int ONENTRY__ANNOTATION = 1;
        static const int ONENTRY__STEREOTYPE = 2;
        static const int ONENTRY__TAGGEDVALUE = 3;
        static const int ONENTRY__NAME = 4;
        static const int ONENTRY__SOURCE = 5;
        static const int ONENTRY__EVENTRELATION = 6;
        static const int ONENTRY__ABSTRACTION = 7;
        static const int ONENTRY__IMPLEMENTATION = 8;
        static const int ONENTRY__EVENTELEMENT = 9;
        static const int ONENTRY_FEATURE_COUNT = 10;

        // IDs for classifier OnExit
        static const int ONEXIT = 13;
        static const int ONEXIT__ATTRIBUTE = 0;
        static const int ONEXIT__ANNOTATION = 1;
        static const int ONEXIT__STEREOTYPE = 2;
        static const int ONEXIT__TAGGEDVALUE = 3;
        static const int ONEXIT__NAME = 4;
        static const int ONEXIT__SOURCE = 5;
        static const int ONEXIT__EVENTRELATION = 6;
        static const int ONEXIT__ABSTRACTION = 7;
        static const int ONEXIT__IMPLEMENTATION = 8;
        static const int ONEXIT__EVENTELEMENT = 9;
        static const int ONEXIT_FEATURE_COUNT = 10;

        // IDs for classifier ProducesEvent
        static const int PRODUCESEVENT = 14;
        static const int PRODUCESEVENT__ATTRIBUTE = 0;
        static const int PRODUCESEVENT__ANNOTATION = 1;
        static const int PRODUCESEVENT__STEREOTYPE = 2;
        static const int PRODUCESEVENT__TAGGEDVALUE = 3;
        static const int PRODUCESEVENT__TO = 4;
        static const int PRODUCESEVENT__FROM = 5;
        static const int PRODUCESEVENT_FEATURE_COUNT = 6;

        // IDs for classifier ReadsState
        static const int READSSTATE = 15;
        static const int READSSTATE__ATTRIBUTE = 0;
        static const int READSSTATE__ANNOTATION = 1;
        static const int READSSTATE__STEREOTYPE = 2;
        static const int READSSTATE__TAGGEDVALUE = 3;
        static const int READSSTATE__TO = 4;
        static const int READSSTATE__FROM = 5;
        static const int READSSTATE_FEATURE_COUNT = 6;

        // IDs for classifier State
        static const int STATE = 16;
        static const int STATE__ATTRIBUTE = 0;
        static const int STATE__ANNOTATION = 1;
        static const int STATE__STEREOTYPE = 2;
        static const int STATE__TAGGEDVALUE = 3;
        static const int STATE__NAME = 4;
        static const int STATE__SOURCE = 5;
        static const int STATE__EVENTRELATION = 6;
        static const int STATE__ABSTRACTION = 7;
        static const int STATE__IMPLEMENTATION = 8;
        static const int STATE__EVENTELEMENT = 9;
        static const int STATE_FEATURE_COUNT = 10;

        // IDs for classifier Transition
        static const int TRANSITION = 17;
        static const int TRANSITION__ATTRIBUTE = 0;
        static const int TRANSITION__ANNOTATION = 1;
        static const int TRANSITION__STEREOTYPE = 2;
        static const int TRANSITION__TAGGEDVALUE = 3;
        static const int TRANSITION__NAME = 4;
        static const int TRANSITION__SOURCE = 5;
        static const int TRANSITION__EVENTRELATION = 6;
        static const int TRANSITION__ABSTRACTION = 7;
        static const int TRANSITION__IMPLEMENTATION = 8;
        static const int TRANSITION__EVENTELEMENT = 9;
        static const int TRANSITION_FEATURE_COUNT = 10;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getEventModel();

        virtual ::ecore::EClass_ptr getAbstractEventElement();

        virtual ::ecore::EClass_ptr getEvent();

        virtual ::ecore::EClass_ptr getAbstractEventRelationship();

        virtual ::ecore::EClass_ptr getEventRelationship();

        virtual ::ecore::EClass_ptr getEventResource();

        virtual ::ecore::EClass_ptr getState();

        virtual ::ecore::EClass_ptr getTransition();

        virtual ::ecore::EClass_ptr getOnEntry();

        virtual ::ecore::EClass_ptr getOnExit();

        virtual ::ecore::EClass_ptr getEventAction();

        virtual ::ecore::EClass_ptr getReadsState();

        virtual ::ecore::EClass_ptr getProducesEvent();

        virtual ::ecore::EClass_ptr getConsumesEvent();

        virtual ::ecore::EClass_ptr getNextState();

        virtual ::ecore::EClass_ptr getInitialState();

        virtual ::ecore::EClass_ptr getEventElement();

        virtual ::ecore::EClass_ptr getHasState();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getEventModel__eventElement();

        virtual ::ecore::EReference_ptr getAbstractEventElement__source();

        virtual ::ecore::EReference_ptr getAbstractEventElement__eventRelation();

        virtual ::ecore::EReference_ptr getAbstractEventElement__abstraction();

        virtual ::ecore::EReference_ptr getAbstractEventElement__implementation();

        virtual ::ecore::EAttribute_ptr getEvent__kind();

        virtual ::ecore::EReference_ptr getEventRelationship__to();

        virtual ::ecore::EReference_ptr getEventRelationship__from();

        virtual ::ecore::EReference_ptr getEventResource__eventElement();

        virtual ::ecore::EAttribute_ptr getEventAction__kind();

        virtual ::ecore::EReference_ptr getEventAction__eventElement();

        virtual ::ecore::EReference_ptr getReadsState__to();

        virtual ::ecore::EReference_ptr getReadsState__from();

        virtual ::ecore::EReference_ptr getProducesEvent__to();

        virtual ::ecore::EReference_ptr getProducesEvent__from();

        virtual ::ecore::EReference_ptr getConsumesEvent__to();

        virtual ::ecore::EReference_ptr getConsumesEvent__from();

        virtual ::ecore::EReference_ptr getNextState__to();

        virtual ::ecore::EReference_ptr getNextState__from();

        virtual ::ecore::EReference_ptr getHasState__to();

        virtual ::ecore::EReference_ptr getHasState__from();

    protected:

        static ::ecore::Ptr< EventPackage > s_instance;

        EventPackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractEventElementEClass;
        ::ecore::EClass_ptr m_AbstractEventRelationshipEClass;
        ::ecore::EClass_ptr m_ConsumesEventEClass;
        ::ecore::EClass_ptr m_EventEClass;
        ::ecore::EClass_ptr m_EventActionEClass;
        ::ecore::EClass_ptr m_EventElementEClass;
        ::ecore::EClass_ptr m_EventModelEClass;
        ::ecore::EClass_ptr m_EventRelationshipEClass;
        ::ecore::EClass_ptr m_EventResourceEClass;
        ::ecore::EClass_ptr m_HasStateEClass;
        ::ecore::EClass_ptr m_InitialStateEClass;
        ::ecore::EClass_ptr m_NextStateEClass;
        ::ecore::EClass_ptr m_OnEntryEClass;
        ::ecore::EClass_ptr m_OnExitEClass;
        ::ecore::EClass_ptr m_ProducesEventEClass;
        ::ecore::EClass_ptr m_ReadsStateEClass;
        ::ecore::EClass_ptr m_StateEClass;
        ::ecore::EClass_ptr m_TransitionEClass;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_EventModel__eventElement;

        ::ecore::EReference_ptr m_AbstractEventElement__source;

        ::ecore::EReference_ptr m_AbstractEventElement__eventRelation;

        ::ecore::EReference_ptr m_AbstractEventElement__abstraction;

        ::ecore::EReference_ptr m_AbstractEventElement__implementation;

        ::ecore::EAttribute_ptr m_Event__kind;

        ::ecore::EReference_ptr m_EventRelationship__to;

        ::ecore::EReference_ptr m_EventRelationship__from;

        ::ecore::EReference_ptr m_EventResource__eventElement;

        ::ecore::EAttribute_ptr m_EventAction__kind;

        ::ecore::EReference_ptr m_EventAction__eventElement;

        ::ecore::EReference_ptr m_ReadsState__to;

        ::ecore::EReference_ptr m_ReadsState__from;

        ::ecore::EReference_ptr m_ProducesEvent__to;

        ::ecore::EReference_ptr m_ProducesEvent__from;

        ::ecore::EReference_ptr m_ConsumesEvent__to;

        ::ecore::EReference_ptr m_ConsumesEvent__from;

        ::ecore::EReference_ptr m_NextState__to;

        ::ecore::EReference_ptr m_NextState__from;

        ::ecore::EReference_ptr m_HasState__to;

        ::ecore::EReference_ptr m_HasState__from;

    };

}
 // event
}// kdm

#endif // _KDM_EVENTPACKAGE_HPP

