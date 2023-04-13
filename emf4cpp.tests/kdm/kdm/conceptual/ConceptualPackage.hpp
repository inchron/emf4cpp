// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualPackage.hpp
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

#ifndef _KDM_CONCEPTUALPACKAGE_HPP
#define _KDM_CONCEPTUALPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/conceptual_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace conceptual
    {

    class EXPORT_KDM_DLL ConceptualPackage : public virtual ::ecore::EPackage
    {
    public:

        static ConceptualPackage_ptr _instance();
        static ConceptualPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractConceptualElement
        static const int ABSTRACTCONCEPTUALELEMENT = 0;
        static const int ABSTRACTCONCEPTUALELEMENT__ATTRIBUTE = 0;
        static const int ABSTRACTCONCEPTUALELEMENT__ANNOTATION = 1;
        static const int ABSTRACTCONCEPTUALELEMENT__STEREOTYPE = 2;
        static const int ABSTRACTCONCEPTUALELEMENT__TAGGEDVALUE = 3;
        static const int ABSTRACTCONCEPTUALELEMENT__NAME = 4;
        static const int ABSTRACTCONCEPTUALELEMENT__SOURCE = 5;
        static const int ABSTRACTCONCEPTUALELEMENT__IMPLEMENTATION = 6;
        static const int ABSTRACTCONCEPTUALELEMENT__CONCEPTUALRELATION = 7;
        static const int ABSTRACTCONCEPTUALELEMENT__ABSTRACTION = 8;
        static const int ABSTRACTCONCEPTUALELEMENT_FEATURE_COUNT = 9;

        // IDs for classifier AbstractConceptualRelationship
        static const int ABSTRACTCONCEPTUALRELATIONSHIP = 1;
        static const int ABSTRACTCONCEPTUALRELATIONSHIP__ATTRIBUTE = 0;
        static const int ABSTRACTCONCEPTUALRELATIONSHIP__ANNOTATION = 1;
        static const int ABSTRACTCONCEPTUALRELATIONSHIP__STEREOTYPE = 2;
        static const int ABSTRACTCONCEPTUALRELATIONSHIP__TAGGEDVALUE = 3;
        static const int ABSTRACTCONCEPTUALRELATIONSHIP_FEATURE_COUNT = 4;

        // IDs for classifier BehaviorUnit
        static const int BEHAVIORUNIT = 2;
        static const int BEHAVIORUNIT__ATTRIBUTE = 0;
        static const int BEHAVIORUNIT__ANNOTATION = 1;
        static const int BEHAVIORUNIT__STEREOTYPE = 2;
        static const int BEHAVIORUNIT__TAGGEDVALUE = 3;
        static const int BEHAVIORUNIT__NAME = 4;
        static const int BEHAVIORUNIT__SOURCE = 5;
        static const int BEHAVIORUNIT__IMPLEMENTATION = 6;
        static const int BEHAVIORUNIT__CONCEPTUALRELATION = 7;
        static const int BEHAVIORUNIT__ABSTRACTION = 8;
        static const int BEHAVIORUNIT__CONCEPTUALELEMENT = 9;
        static const int BEHAVIORUNIT_FEATURE_COUNT = 10;

        // IDs for classifier ConceptualContainer
        static const int CONCEPTUALCONTAINER = 3;
        static const int CONCEPTUALCONTAINER__ATTRIBUTE = 0;
        static const int CONCEPTUALCONTAINER__ANNOTATION = 1;
        static const int CONCEPTUALCONTAINER__STEREOTYPE = 2;
        static const int CONCEPTUALCONTAINER__TAGGEDVALUE = 3;
        static const int CONCEPTUALCONTAINER__NAME = 4;
        static const int CONCEPTUALCONTAINER__SOURCE = 5;
        static const int CONCEPTUALCONTAINER__IMPLEMENTATION = 6;
        static const int CONCEPTUALCONTAINER__CONCEPTUALRELATION = 7;
        static const int CONCEPTUALCONTAINER__ABSTRACTION = 8;
        static const int CONCEPTUALCONTAINER__CONCEPTUALELEMENT = 9;
        static const int CONCEPTUALCONTAINER_FEATURE_COUNT = 10;

        // IDs for classifier ConceptualElement
        static const int CONCEPTUALELEMENT = 4;
        static const int CONCEPTUALELEMENT__ATTRIBUTE = 0;
        static const int CONCEPTUALELEMENT__ANNOTATION = 1;
        static const int CONCEPTUALELEMENT__STEREOTYPE = 2;
        static const int CONCEPTUALELEMENT__TAGGEDVALUE = 3;
        static const int CONCEPTUALELEMENT__NAME = 4;
        static const int CONCEPTUALELEMENT__SOURCE = 5;
        static const int CONCEPTUALELEMENT__IMPLEMENTATION = 6;
        static const int CONCEPTUALELEMENT__CONCEPTUALRELATION = 7;
        static const int CONCEPTUALELEMENT__ABSTRACTION = 8;
        static const int CONCEPTUALELEMENT_FEATURE_COUNT = 9;

        // IDs for classifier ConceptualFlow
        static const int CONCEPTUALFLOW = 5;
        static const int CONCEPTUALFLOW__ATTRIBUTE = 0;
        static const int CONCEPTUALFLOW__ANNOTATION = 1;
        static const int CONCEPTUALFLOW__STEREOTYPE = 2;
        static const int CONCEPTUALFLOW__TAGGEDVALUE = 3;
        static const int CONCEPTUALFLOW__TO = 4;
        static const int CONCEPTUALFLOW__FROM = 5;
        static const int CONCEPTUALFLOW_FEATURE_COUNT = 6;

        // IDs for classifier ConceptualModel
        static const int CONCEPTUALMODEL = 6;
        static const int CONCEPTUALMODEL__ATTRIBUTE = 0;
        static const int CONCEPTUALMODEL__ANNOTATION = 1;
        static const int CONCEPTUALMODEL__STEREOTYPE = 2;
        static const int CONCEPTUALMODEL__TAGGEDVALUE = 3;
        static const int CONCEPTUALMODEL__AUDIT = 4;
        static const int CONCEPTUALMODEL__EXTENSIONFAMILY = 5;
        static const int CONCEPTUALMODEL__NAME = 6;
        static const int CONCEPTUALMODEL__CONCEPTUALELEMENT = 7;
        static const int CONCEPTUALMODEL_FEATURE_COUNT = 8;

        // IDs for classifier ConceptualRelationship
        static const int CONCEPTUALRELATIONSHIP = 7;
        static const int CONCEPTUALRELATIONSHIP__ATTRIBUTE = 0;
        static const int CONCEPTUALRELATIONSHIP__ANNOTATION = 1;
        static const int CONCEPTUALRELATIONSHIP__STEREOTYPE = 2;
        static const int CONCEPTUALRELATIONSHIP__TAGGEDVALUE = 3;
        static const int CONCEPTUALRELATIONSHIP__TO = 4;
        static const int CONCEPTUALRELATIONSHIP__FROM = 5;
        static const int CONCEPTUALRELATIONSHIP_FEATURE_COUNT = 6;

        // IDs for classifier ConceptualRole
        static const int CONCEPTUALROLE = 8;
        static const int CONCEPTUALROLE__ATTRIBUTE = 0;
        static const int CONCEPTUALROLE__ANNOTATION = 1;
        static const int CONCEPTUALROLE__STEREOTYPE = 2;
        static const int CONCEPTUALROLE__TAGGEDVALUE = 3;
        static const int CONCEPTUALROLE__NAME = 4;
        static const int CONCEPTUALROLE__SOURCE = 5;
        static const int CONCEPTUALROLE__IMPLEMENTATION = 6;
        static const int CONCEPTUALROLE__CONCEPTUALRELATION = 7;
        static const int CONCEPTUALROLE__ABSTRACTION = 8;
        static const int CONCEPTUALROLE__CONCEPTUALELEMENT = 9;
        static const int CONCEPTUALROLE_FEATURE_COUNT = 10;

        // IDs for classifier FactUnit
        static const int FACTUNIT = 9;
        static const int FACTUNIT__ATTRIBUTE = 0;
        static const int FACTUNIT__ANNOTATION = 1;
        static const int FACTUNIT__STEREOTYPE = 2;
        static const int FACTUNIT__TAGGEDVALUE = 3;
        static const int FACTUNIT__NAME = 4;
        static const int FACTUNIT__SOURCE = 5;
        static const int FACTUNIT__IMPLEMENTATION = 6;
        static const int FACTUNIT__CONCEPTUALRELATION = 7;
        static const int FACTUNIT__ABSTRACTION = 8;
        static const int FACTUNIT__CONCEPTUALELEMENT = 9;
        static const int FACTUNIT_FEATURE_COUNT = 10;

        // IDs for classifier RuleUnit
        static const int RULEUNIT = 10;
        static const int RULEUNIT__ATTRIBUTE = 0;
        static const int RULEUNIT__ANNOTATION = 1;
        static const int RULEUNIT__STEREOTYPE = 2;
        static const int RULEUNIT__TAGGEDVALUE = 3;
        static const int RULEUNIT__NAME = 4;
        static const int RULEUNIT__SOURCE = 5;
        static const int RULEUNIT__IMPLEMENTATION = 6;
        static const int RULEUNIT__CONCEPTUALRELATION = 7;
        static const int RULEUNIT__ABSTRACTION = 8;
        static const int RULEUNIT__CONCEPTUALELEMENT = 9;
        static const int RULEUNIT_FEATURE_COUNT = 10;

        // IDs for classifier ScenarioUnit
        static const int SCENARIOUNIT = 11;
        static const int SCENARIOUNIT__ATTRIBUTE = 0;
        static const int SCENARIOUNIT__ANNOTATION = 1;
        static const int SCENARIOUNIT__STEREOTYPE = 2;
        static const int SCENARIOUNIT__TAGGEDVALUE = 3;
        static const int SCENARIOUNIT__NAME = 4;
        static const int SCENARIOUNIT__SOURCE = 5;
        static const int SCENARIOUNIT__IMPLEMENTATION = 6;
        static const int SCENARIOUNIT__CONCEPTUALRELATION = 7;
        static const int SCENARIOUNIT__ABSTRACTION = 8;
        static const int SCENARIOUNIT__CONCEPTUALELEMENT = 9;
        static const int SCENARIOUNIT_FEATURE_COUNT = 10;

        // IDs for classifier TermUnit
        static const int TERMUNIT = 12;
        static const int TERMUNIT__ATTRIBUTE = 0;
        static const int TERMUNIT__ANNOTATION = 1;
        static const int TERMUNIT__STEREOTYPE = 2;
        static const int TERMUNIT__TAGGEDVALUE = 3;
        static const int TERMUNIT__NAME = 4;
        static const int TERMUNIT__SOURCE = 5;
        static const int TERMUNIT__IMPLEMENTATION = 6;
        static const int TERMUNIT__CONCEPTUALRELATION = 7;
        static const int TERMUNIT__ABSTRACTION = 8;
        static const int TERMUNIT_FEATURE_COUNT = 9;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getConceptualModel();

        virtual ::ecore::EClass_ptr getAbstractConceptualElement();

        virtual ::ecore::EClass_ptr getTermUnit();

        virtual ::ecore::EClass_ptr getConceptualContainer();

        virtual ::ecore::EClass_ptr getFactUnit();

        virtual ::ecore::EClass_ptr getAbstractConceptualRelationship();

        virtual ::ecore::EClass_ptr getConceptualRelationship();

        virtual ::ecore::EClass_ptr getBehaviorUnit();

        virtual ::ecore::EClass_ptr getRuleUnit();

        virtual ::ecore::EClass_ptr getScenarioUnit();

        virtual ::ecore::EClass_ptr getConceptualFlow();

        virtual ::ecore::EClass_ptr getConceptualElement();

        virtual ::ecore::EClass_ptr getConceptualRole();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getConceptualModel__conceptualElement();

        virtual ::ecore::EReference_ptr getAbstractConceptualElement__source();

        virtual ::ecore::EReference_ptr getAbstractConceptualElement__implementation();

        virtual ::ecore::EReference_ptr getAbstractConceptualElement__conceptualRelation();

        virtual ::ecore::EReference_ptr getAbstractConceptualElement__abstraction();

        virtual ::ecore::EReference_ptr getConceptualContainer__conceptualElement();

        virtual ::ecore::EReference_ptr getConceptualRelationship__to();

        virtual ::ecore::EReference_ptr getConceptualRelationship__from();

        virtual ::ecore::EReference_ptr getConceptualFlow__to();

        virtual ::ecore::EReference_ptr getConceptualFlow__from();

        virtual ::ecore::EReference_ptr getConceptualRole__conceptualElement();

    protected:

        static ::ecore::Ptr< ConceptualPackage > s_instance;

        ConceptualPackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractConceptualElementEClass;
        ::ecore::EClass_ptr m_AbstractConceptualRelationshipEClass;
        ::ecore::EClass_ptr m_BehaviorUnitEClass;
        ::ecore::EClass_ptr m_ConceptualContainerEClass;
        ::ecore::EClass_ptr m_ConceptualElementEClass;
        ::ecore::EClass_ptr m_ConceptualFlowEClass;
        ::ecore::EClass_ptr m_ConceptualModelEClass;
        ::ecore::EClass_ptr m_ConceptualRelationshipEClass;
        ::ecore::EClass_ptr m_ConceptualRoleEClass;
        ::ecore::EClass_ptr m_FactUnitEClass;
        ::ecore::EClass_ptr m_RuleUnitEClass;
        ::ecore::EClass_ptr m_ScenarioUnitEClass;
        ::ecore::EClass_ptr m_TermUnitEClass;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_ConceptualModel__conceptualElement;

        ::ecore::EReference_ptr m_AbstractConceptualElement__source;

        ::ecore::EReference_ptr m_AbstractConceptualElement__implementation;

        ::ecore::EReference_ptr m_AbstractConceptualElement__conceptualRelation;

        ::ecore::EReference_ptr m_AbstractConceptualElement__abstraction;

        ::ecore::EReference_ptr m_ConceptualContainer__conceptualElement;

        ::ecore::EReference_ptr m_ConceptualRelationship__to;

        ::ecore::EReference_ptr m_ConceptualRelationship__from;

        ::ecore::EReference_ptr m_ConceptualFlow__to;

        ::ecore::EReference_ptr m_ConceptualFlow__from;

        ::ecore::EReference_ptr m_ConceptualRole__conceptualElement;

    };

}
 // conceptual
}// kdm

#endif // _KDM_CONCEPTUALPACKAGE_HPP

