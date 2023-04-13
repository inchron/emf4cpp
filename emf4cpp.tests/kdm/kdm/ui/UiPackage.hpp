// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UiPackage.hpp
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

#ifndef _KDM_UIPACKAGE_HPP
#define _KDM_UIPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/ui_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace ui
    {

    class EXPORT_KDM_DLL UiPackage : public virtual ::ecore::EPackage
    {
    public:

        static UiPackage_ptr _instance();
        static UiPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractUIElement
        static const int ABSTRACTUIELEMENT = 0;
        static const int ABSTRACTUIELEMENT__ATTRIBUTE = 0;
        static const int ABSTRACTUIELEMENT__ANNOTATION = 1;
        static const int ABSTRACTUIELEMENT__STEREOTYPE = 2;
        static const int ABSTRACTUIELEMENT__TAGGEDVALUE = 3;
        static const int ABSTRACTUIELEMENT__NAME = 4;
        static const int ABSTRACTUIELEMENT__SOURCE = 5;
        static const int ABSTRACTUIELEMENT__UIRELATION = 6;
        static const int ABSTRACTUIELEMENT__IMPLEMENTATION = 7;
        static const int ABSTRACTUIELEMENT__ABSTRACTION = 8;
        static const int ABSTRACTUIELEMENT_FEATURE_COUNT = 9;

        // IDs for classifier AbstractUIRelationship
        static const int ABSTRACTUIRELATIONSHIP = 1;
        static const int ABSTRACTUIRELATIONSHIP__ATTRIBUTE = 0;
        static const int ABSTRACTUIRELATIONSHIP__ANNOTATION = 1;
        static const int ABSTRACTUIRELATIONSHIP__STEREOTYPE = 2;
        static const int ABSTRACTUIRELATIONSHIP__TAGGEDVALUE = 3;
        static const int ABSTRACTUIRELATIONSHIP_FEATURE_COUNT = 4;

        // IDs for classifier Displays
        static const int DISPLAYS = 2;
        static const int DISPLAYS__ATTRIBUTE = 0;
        static const int DISPLAYS__ANNOTATION = 1;
        static const int DISPLAYS__STEREOTYPE = 2;
        static const int DISPLAYS__TAGGEDVALUE = 3;
        static const int DISPLAYS__TO = 4;
        static const int DISPLAYS__FROM = 5;
        static const int DISPLAYS_FEATURE_COUNT = 6;

        // IDs for classifier DisplaysImage
        static const int DISPLAYSIMAGE = 3;
        static const int DISPLAYSIMAGE__ATTRIBUTE = 0;
        static const int DISPLAYSIMAGE__ANNOTATION = 1;
        static const int DISPLAYSIMAGE__STEREOTYPE = 2;
        static const int DISPLAYSIMAGE__TAGGEDVALUE = 3;
        static const int DISPLAYSIMAGE__TO = 4;
        static const int DISPLAYSIMAGE__FROM = 5;
        static const int DISPLAYSIMAGE_FEATURE_COUNT = 6;

        // IDs for classifier ManagesUI
        static const int MANAGESUI = 4;
        static const int MANAGESUI__ATTRIBUTE = 0;
        static const int MANAGESUI__ANNOTATION = 1;
        static const int MANAGESUI__STEREOTYPE = 2;
        static const int MANAGESUI__TAGGEDVALUE = 3;
        static const int MANAGESUI__TO = 4;
        static const int MANAGESUI__FROM = 5;
        static const int MANAGESUI_FEATURE_COUNT = 6;

        // IDs for classifier ReadsUI
        static const int READSUI = 5;
        static const int READSUI__ATTRIBUTE = 0;
        static const int READSUI__ANNOTATION = 1;
        static const int READSUI__STEREOTYPE = 2;
        static const int READSUI__TAGGEDVALUE = 3;
        static const int READSUI__TO = 4;
        static const int READSUI__FROM = 5;
        static const int READSUI_FEATURE_COUNT = 6;

        // IDs for classifier Report
        static const int REPORT = 6;
        static const int REPORT__ATTRIBUTE = 0;
        static const int REPORT__ANNOTATION = 1;
        static const int REPORT__STEREOTYPE = 2;
        static const int REPORT__TAGGEDVALUE = 3;
        static const int REPORT__NAME = 4;
        static const int REPORT__SOURCE = 5;
        static const int REPORT__UIRELATION = 6;
        static const int REPORT__IMPLEMENTATION = 7;
        static const int REPORT__ABSTRACTION = 8;
        static const int REPORT__UIELEMENT = 9;
        static const int REPORT_FEATURE_COUNT = 10;

        // IDs for classifier Screen
        static const int SCREEN = 7;
        static const int SCREEN__ATTRIBUTE = 0;
        static const int SCREEN__ANNOTATION = 1;
        static const int SCREEN__STEREOTYPE = 2;
        static const int SCREEN__TAGGEDVALUE = 3;
        static const int SCREEN__NAME = 4;
        static const int SCREEN__SOURCE = 5;
        static const int SCREEN__UIRELATION = 6;
        static const int SCREEN__IMPLEMENTATION = 7;
        static const int SCREEN__ABSTRACTION = 8;
        static const int SCREEN__UIELEMENT = 9;
        static const int SCREEN_FEATURE_COUNT = 10;

        // IDs for classifier UIAction
        static const int UIACTION = 8;
        static const int UIACTION__ATTRIBUTE = 0;
        static const int UIACTION__ANNOTATION = 1;
        static const int UIACTION__STEREOTYPE = 2;
        static const int UIACTION__TAGGEDVALUE = 3;
        static const int UIACTION__NAME = 4;
        static const int UIACTION__SOURCE = 5;
        static const int UIACTION__UIRELATION = 6;
        static const int UIACTION__IMPLEMENTATION = 7;
        static const int UIACTION__ABSTRACTION = 8;
        static const int UIACTION__KIND = 9;
        static const int UIACTION__UIELEMENT = 10;
        static const int UIACTION_FEATURE_COUNT = 11;

        // IDs for classifier UIDisplay
        static const int UIDISPLAY = 9;
        static const int UIDISPLAY__ATTRIBUTE = 0;
        static const int UIDISPLAY__ANNOTATION = 1;
        static const int UIDISPLAY__STEREOTYPE = 2;
        static const int UIDISPLAY__TAGGEDVALUE = 3;
        static const int UIDISPLAY__NAME = 4;
        static const int UIDISPLAY__SOURCE = 5;
        static const int UIDISPLAY__UIRELATION = 6;
        static const int UIDISPLAY__IMPLEMENTATION = 7;
        static const int UIDISPLAY__ABSTRACTION = 8;
        static const int UIDISPLAY__UIELEMENT = 9;
        static const int UIDISPLAY_FEATURE_COUNT = 10;

        // IDs for classifier UIElement
        static const int UIELEMENT = 10;
        static const int UIELEMENT__ATTRIBUTE = 0;
        static const int UIELEMENT__ANNOTATION = 1;
        static const int UIELEMENT__STEREOTYPE = 2;
        static const int UIELEMENT__TAGGEDVALUE = 3;
        static const int UIELEMENT__NAME = 4;
        static const int UIELEMENT__SOURCE = 5;
        static const int UIELEMENT__UIRELATION = 6;
        static const int UIELEMENT__IMPLEMENTATION = 7;
        static const int UIELEMENT__ABSTRACTION = 8;
        static const int UIELEMENT_FEATURE_COUNT = 9;

        // IDs for classifier UIEvent
        static const int UIEVENT = 11;
        static const int UIEVENT__ATTRIBUTE = 0;
        static const int UIEVENT__ANNOTATION = 1;
        static const int UIEVENT__STEREOTYPE = 2;
        static const int UIEVENT__TAGGEDVALUE = 3;
        static const int UIEVENT__NAME = 4;
        static const int UIEVENT__SOURCE = 5;
        static const int UIEVENT__UIRELATION = 6;
        static const int UIEVENT__IMPLEMENTATION = 7;
        static const int UIEVENT__ABSTRACTION = 8;
        static const int UIEVENT__KIND = 9;
        static const int UIEVENT_FEATURE_COUNT = 10;

        // IDs for classifier UIField
        static const int UIFIELD = 12;
        static const int UIFIELD__ATTRIBUTE = 0;
        static const int UIFIELD__ANNOTATION = 1;
        static const int UIFIELD__STEREOTYPE = 2;
        static const int UIFIELD__TAGGEDVALUE = 3;
        static const int UIFIELD__NAME = 4;
        static const int UIFIELD__SOURCE = 5;
        static const int UIFIELD__UIRELATION = 6;
        static const int UIFIELD__IMPLEMENTATION = 7;
        static const int UIFIELD__ABSTRACTION = 8;
        static const int UIFIELD__UIELEMENT = 9;
        static const int UIFIELD_FEATURE_COUNT = 10;

        // IDs for classifier UIFlow
        static const int UIFLOW = 13;
        static const int UIFLOW__ATTRIBUTE = 0;
        static const int UIFLOW__ANNOTATION = 1;
        static const int UIFLOW__STEREOTYPE = 2;
        static const int UIFLOW__TAGGEDVALUE = 3;
        static const int UIFLOW__TO = 4;
        static const int UIFLOW__FROM = 5;
        static const int UIFLOW_FEATURE_COUNT = 6;

        // IDs for classifier UILayout
        static const int UILAYOUT = 14;
        static const int UILAYOUT__ATTRIBUTE = 0;
        static const int UILAYOUT__ANNOTATION = 1;
        static const int UILAYOUT__STEREOTYPE = 2;
        static const int UILAYOUT__TAGGEDVALUE = 3;
        static const int UILAYOUT__TO = 4;
        static const int UILAYOUT__FROM = 5;
        static const int UILAYOUT_FEATURE_COUNT = 6;

        // IDs for classifier UIModel
        static const int UIMODEL = 15;
        static const int UIMODEL__ATTRIBUTE = 0;
        static const int UIMODEL__ANNOTATION = 1;
        static const int UIMODEL__STEREOTYPE = 2;
        static const int UIMODEL__TAGGEDVALUE = 3;
        static const int UIMODEL__AUDIT = 4;
        static const int UIMODEL__EXTENSIONFAMILY = 5;
        static const int UIMODEL__NAME = 6;
        static const int UIMODEL__UIELEMENT = 7;
        static const int UIMODEL_FEATURE_COUNT = 8;

        // IDs for classifier UIRelationship
        static const int UIRELATIONSHIP = 16;
        static const int UIRELATIONSHIP__ATTRIBUTE = 0;
        static const int UIRELATIONSHIP__ANNOTATION = 1;
        static const int UIRELATIONSHIP__STEREOTYPE = 2;
        static const int UIRELATIONSHIP__TAGGEDVALUE = 3;
        static const int UIRELATIONSHIP__TO = 4;
        static const int UIRELATIONSHIP__FROM = 5;
        static const int UIRELATIONSHIP_FEATURE_COUNT = 6;

        // IDs for classifier UIResource
        static const int UIRESOURCE = 17;
        static const int UIRESOURCE__ATTRIBUTE = 0;
        static const int UIRESOURCE__ANNOTATION = 1;
        static const int UIRESOURCE__STEREOTYPE = 2;
        static const int UIRESOURCE__TAGGEDVALUE = 3;
        static const int UIRESOURCE__NAME = 4;
        static const int UIRESOURCE__SOURCE = 5;
        static const int UIRESOURCE__UIRELATION = 6;
        static const int UIRESOURCE__IMPLEMENTATION = 7;
        static const int UIRESOURCE__ABSTRACTION = 8;
        static const int UIRESOURCE__UIELEMENT = 9;
        static const int UIRESOURCE_FEATURE_COUNT = 10;

        // IDs for classifier WritesUI
        static const int WRITESUI = 18;
        static const int WRITESUI__ATTRIBUTE = 0;
        static const int WRITESUI__ANNOTATION = 1;
        static const int WRITESUI__STEREOTYPE = 2;
        static const int WRITESUI__TAGGEDVALUE = 3;
        static const int WRITESUI__TO = 4;
        static const int WRITESUI__FROM = 5;
        static const int WRITESUI_FEATURE_COUNT = 6;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractUIElement();

        virtual ::ecore::EClass_ptr getUIResource();

        virtual ::ecore::EClass_ptr getUIDisplay();

        virtual ::ecore::EClass_ptr getScreen();

        virtual ::ecore::EClass_ptr getReport();

        virtual ::ecore::EClass_ptr getUIModel();

        virtual ::ecore::EClass_ptr getAbstractUIRelationship();

        virtual ::ecore::EClass_ptr getUILayout();

        virtual ::ecore::EClass_ptr getUIField();

        virtual ::ecore::EClass_ptr getDisplaysImage();

        virtual ::ecore::EClass_ptr getDisplays();

        virtual ::ecore::EClass_ptr getUIFlow();

        virtual ::ecore::EClass_ptr getUIElement();

        virtual ::ecore::EClass_ptr getUIRelationship();

        virtual ::ecore::EClass_ptr getUIAction();

        virtual ::ecore::EClass_ptr getUIEvent();

        virtual ::ecore::EClass_ptr getReadsUI();

        virtual ::ecore::EClass_ptr getWritesUI();

        virtual ::ecore::EClass_ptr getManagesUI();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getAbstractUIElement__source();

        virtual ::ecore::EReference_ptr getAbstractUIElement__UIRelation();

        virtual ::ecore::EReference_ptr getAbstractUIElement__implementation();

        virtual ::ecore::EReference_ptr getAbstractUIElement__abstraction();

        virtual ::ecore::EReference_ptr getUIResource__UIElement();

        virtual ::ecore::EReference_ptr getUIModel__UIElement();

        virtual ::ecore::EReference_ptr getUILayout__to();

        virtual ::ecore::EReference_ptr getUILayout__from();

        virtual ::ecore::EReference_ptr getDisplaysImage__to();

        virtual ::ecore::EReference_ptr getDisplaysImage__from();

        virtual ::ecore::EReference_ptr getDisplays__to();

        virtual ::ecore::EReference_ptr getDisplays__from();

        virtual ::ecore::EReference_ptr getUIFlow__to();

        virtual ::ecore::EReference_ptr getUIFlow__from();

        virtual ::ecore::EReference_ptr getUIRelationship__to();

        virtual ::ecore::EReference_ptr getUIRelationship__from();

        virtual ::ecore::EAttribute_ptr getUIAction__kind();

        virtual ::ecore::EReference_ptr getUIAction__UIElement();

        virtual ::ecore::EAttribute_ptr getUIEvent__kind();

        virtual ::ecore::EReference_ptr getReadsUI__to();

        virtual ::ecore::EReference_ptr getReadsUI__from();

        virtual ::ecore::EReference_ptr getWritesUI__to();

        virtual ::ecore::EReference_ptr getWritesUI__from();

        virtual ::ecore::EReference_ptr getManagesUI__to();

        virtual ::ecore::EReference_ptr getManagesUI__from();

    protected:

        static ::ecore::Ptr< UiPackage > s_instance;

        UiPackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractUIElementEClass;
        ::ecore::EClass_ptr m_AbstractUIRelationshipEClass;
        ::ecore::EClass_ptr m_DisplaysEClass;
        ::ecore::EClass_ptr m_DisplaysImageEClass;
        ::ecore::EClass_ptr m_ManagesUIEClass;
        ::ecore::EClass_ptr m_ReadsUIEClass;
        ::ecore::EClass_ptr m_ReportEClass;
        ::ecore::EClass_ptr m_ScreenEClass;
        ::ecore::EClass_ptr m_UIActionEClass;
        ::ecore::EClass_ptr m_UIDisplayEClass;
        ::ecore::EClass_ptr m_UIElementEClass;
        ::ecore::EClass_ptr m_UIEventEClass;
        ::ecore::EClass_ptr m_UIFieldEClass;
        ::ecore::EClass_ptr m_UIFlowEClass;
        ::ecore::EClass_ptr m_UILayoutEClass;
        ::ecore::EClass_ptr m_UIModelEClass;
        ::ecore::EClass_ptr m_UIRelationshipEClass;
        ::ecore::EClass_ptr m_UIResourceEClass;
        ::ecore::EClass_ptr m_WritesUIEClass;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_AbstractUIElement__source;

        ::ecore::EReference_ptr m_AbstractUIElement__UIRelation;

        ::ecore::EReference_ptr m_AbstractUIElement__implementation;

        ::ecore::EReference_ptr m_AbstractUIElement__abstraction;

        ::ecore::EReference_ptr m_UIResource__UIElement;

        ::ecore::EReference_ptr m_UIModel__UIElement;

        ::ecore::EReference_ptr m_UILayout__to;

        ::ecore::EReference_ptr m_UILayout__from;

        ::ecore::EReference_ptr m_DisplaysImage__to;

        ::ecore::EReference_ptr m_DisplaysImage__from;

        ::ecore::EReference_ptr m_Displays__to;

        ::ecore::EReference_ptr m_Displays__from;

        ::ecore::EReference_ptr m_UIFlow__to;

        ::ecore::EReference_ptr m_UIFlow__from;

        ::ecore::EReference_ptr m_UIRelationship__to;

        ::ecore::EReference_ptr m_UIRelationship__from;

        ::ecore::EAttribute_ptr m_UIAction__kind;

        ::ecore::EReference_ptr m_UIAction__UIElement;

        ::ecore::EAttribute_ptr m_UIEvent__kind;

        ::ecore::EReference_ptr m_ReadsUI__to;

        ::ecore::EReference_ptr m_ReadsUI__from;

        ::ecore::EReference_ptr m_WritesUI__to;

        ::ecore::EReference_ptr m_WritesUI__from;

        ::ecore::EReference_ptr m_ManagesUI__to;

        ::ecore::EReference_ptr m_ManagesUI__from;

    };

}
 // ui
}// kdm

#endif // _KDM_UIPACKAGE_HPP

