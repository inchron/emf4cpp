// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/StructurePackage.hpp
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

#ifndef _KDM_STRUCTUREPACKAGE_HPP
#define _KDM_STRUCTUREPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/structure_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include "../dllKdm.hpp"

namespace kdm
{
    namespace structure
    {

    class EXPORT_KDM_DLL StructurePackage : public virtual ::ecore::EPackage
    {
    public:

        static StructurePackage_ptr _instance();
        static StructurePackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractStructureElement
        static const int ABSTRACTSTRUCTUREELEMENT = 0;
        static const int ABSTRACTSTRUCTUREELEMENT__ATTRIBUTE = 0;
        static const int ABSTRACTSTRUCTUREELEMENT__ANNOTATION = 1;
        static const int ABSTRACTSTRUCTUREELEMENT__STEREOTYPE = 2;
        static const int ABSTRACTSTRUCTUREELEMENT__TAGGEDVALUE = 3;
        static const int ABSTRACTSTRUCTUREELEMENT__NAME = 4;
        static const int ABSTRACTSTRUCTUREELEMENT__AGGREGATED = 5;
        static const int ABSTRACTSTRUCTUREELEMENT__IMPLEMENTATION = 6;
        static const int ABSTRACTSTRUCTUREELEMENT__STRUCTUREELEMENT = 7;
        static const int ABSTRACTSTRUCTUREELEMENT__STRUCTURERELATIONSHIP = 8;
        static const int ABSTRACTSTRUCTUREELEMENT_FEATURE_COUNT = 9;

        // IDs for classifier AbstractStructureRelationship
        static const int ABSTRACTSTRUCTURERELATIONSHIP = 1;
        static const int ABSTRACTSTRUCTURERELATIONSHIP__ATTRIBUTE = 0;
        static const int ABSTRACTSTRUCTURERELATIONSHIP__ANNOTATION = 1;
        static const int ABSTRACTSTRUCTURERELATIONSHIP__STEREOTYPE = 2;
        static const int ABSTRACTSTRUCTURERELATIONSHIP__TAGGEDVALUE = 3;
        static const int ABSTRACTSTRUCTURERELATIONSHIP_FEATURE_COUNT = 4;

        // IDs for classifier ArchitectureView
        static const int ARCHITECTUREVIEW = 2;
        static const int ARCHITECTUREVIEW__ATTRIBUTE = 0;
        static const int ARCHITECTUREVIEW__ANNOTATION = 1;
        static const int ARCHITECTUREVIEW__STEREOTYPE = 2;
        static const int ARCHITECTUREVIEW__TAGGEDVALUE = 3;
        static const int ARCHITECTUREVIEW__NAME = 4;
        static const int ARCHITECTUREVIEW__AGGREGATED = 5;
        static const int ARCHITECTUREVIEW__IMPLEMENTATION = 6;
        static const int ARCHITECTUREVIEW__STRUCTUREELEMENT = 7;
        static const int ARCHITECTUREVIEW__STRUCTURERELATIONSHIP = 8;
        static const int ARCHITECTUREVIEW_FEATURE_COUNT = 9;

        // IDs for classifier Component
        static const int COMPONENT = 3;
        static const int COMPONENT__ATTRIBUTE = 0;
        static const int COMPONENT__ANNOTATION = 1;
        static const int COMPONENT__STEREOTYPE = 2;
        static const int COMPONENT__TAGGEDVALUE = 3;
        static const int COMPONENT__NAME = 4;
        static const int COMPONENT__AGGREGATED = 5;
        static const int COMPONENT__IMPLEMENTATION = 6;
        static const int COMPONENT__STRUCTUREELEMENT = 7;
        static const int COMPONENT__STRUCTURERELATIONSHIP = 8;
        static const int COMPONENT_FEATURE_COUNT = 9;

        // IDs for classifier Layer
        static const int LAYER = 4;
        static const int LAYER__ATTRIBUTE = 0;
        static const int LAYER__ANNOTATION = 1;
        static const int LAYER__STEREOTYPE = 2;
        static const int LAYER__TAGGEDVALUE = 3;
        static const int LAYER__NAME = 4;
        static const int LAYER__AGGREGATED = 5;
        static const int LAYER__IMPLEMENTATION = 6;
        static const int LAYER__STRUCTUREELEMENT = 7;
        static const int LAYER__STRUCTURERELATIONSHIP = 8;
        static const int LAYER_FEATURE_COUNT = 9;

        // IDs for classifier SoftwareSystem
        static const int SOFTWARESYSTEM = 5;
        static const int SOFTWARESYSTEM__ATTRIBUTE = 0;
        static const int SOFTWARESYSTEM__ANNOTATION = 1;
        static const int SOFTWARESYSTEM__STEREOTYPE = 2;
        static const int SOFTWARESYSTEM__TAGGEDVALUE = 3;
        static const int SOFTWARESYSTEM__NAME = 4;
        static const int SOFTWARESYSTEM__AGGREGATED = 5;
        static const int SOFTWARESYSTEM__IMPLEMENTATION = 6;
        static const int SOFTWARESYSTEM__STRUCTUREELEMENT = 7;
        static const int SOFTWARESYSTEM__STRUCTURERELATIONSHIP = 8;
        static const int SOFTWARESYSTEM_FEATURE_COUNT = 9;

        // IDs for classifier StructureElement
        static const int STRUCTUREELEMENT = 6;
        static const int STRUCTUREELEMENT__ATTRIBUTE = 0;
        static const int STRUCTUREELEMENT__ANNOTATION = 1;
        static const int STRUCTUREELEMENT__STEREOTYPE = 2;
        static const int STRUCTUREELEMENT__TAGGEDVALUE = 3;
        static const int STRUCTUREELEMENT__NAME = 4;
        static const int STRUCTUREELEMENT__AGGREGATED = 5;
        static const int STRUCTUREELEMENT__IMPLEMENTATION = 6;
        static const int STRUCTUREELEMENT__STRUCTUREELEMENT = 7;
        static const int STRUCTUREELEMENT__STRUCTURERELATIONSHIP = 8;
        static const int STRUCTUREELEMENT_FEATURE_COUNT = 9;

        // IDs for classifier StructureModel
        static const int STRUCTUREMODEL = 7;
        static const int STRUCTUREMODEL__ATTRIBUTE = 0;
        static const int STRUCTUREMODEL__ANNOTATION = 1;
        static const int STRUCTUREMODEL__STEREOTYPE = 2;
        static const int STRUCTUREMODEL__TAGGEDVALUE = 3;
        static const int STRUCTUREMODEL__AUDIT = 4;
        static const int STRUCTUREMODEL__EXTENSIONFAMILY = 5;
        static const int STRUCTUREMODEL__NAME = 6;
        static const int STRUCTUREMODEL__STRUCTUREELEMENT = 7;
        static const int STRUCTUREMODEL_FEATURE_COUNT = 8;

        // IDs for classifier StructureRelationship
        static const int STRUCTURERELATIONSHIP = 8;
        static const int STRUCTURERELATIONSHIP__ATTRIBUTE = 0;
        static const int STRUCTURERELATIONSHIP__ANNOTATION = 1;
        static const int STRUCTURERELATIONSHIP__STEREOTYPE = 2;
        static const int STRUCTURERELATIONSHIP__TAGGEDVALUE = 3;
        static const int STRUCTURERELATIONSHIP__TO = 4;
        static const int STRUCTURERELATIONSHIP__FROM = 5;
        static const int STRUCTURERELATIONSHIP_FEATURE_COUNT = 6;

        // IDs for classifier Subsystem
        static const int SUBSYSTEM = 9;
        static const int SUBSYSTEM__ATTRIBUTE = 0;
        static const int SUBSYSTEM__ANNOTATION = 1;
        static const int SUBSYSTEM__STEREOTYPE = 2;
        static const int SUBSYSTEM__TAGGEDVALUE = 3;
        static const int SUBSYSTEM__NAME = 4;
        static const int SUBSYSTEM__AGGREGATED = 5;
        static const int SUBSYSTEM__IMPLEMENTATION = 6;
        static const int SUBSYSTEM__STRUCTUREELEMENT = 7;
        static const int SUBSYSTEM__STRUCTURERELATIONSHIP = 8;
        static const int SUBSYSTEM_FEATURE_COUNT = 9;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractStructureElement();

        virtual ::ecore::EClass_ptr getSubsystem();

        virtual ::ecore::EClass_ptr getLayer();

        virtual ::ecore::EClass_ptr getStructureModel();

        virtual ::ecore::EClass_ptr getComponent();

        virtual ::ecore::EClass_ptr getSoftwareSystem();

        virtual ::ecore::EClass_ptr getAbstractStructureRelationship();

        virtual ::ecore::EClass_ptr getStructureRelationship();

        virtual ::ecore::EClass_ptr getArchitectureView();

        virtual ::ecore::EClass_ptr getStructureElement();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getAbstractStructureElement__aggregated();

        virtual ::ecore::EReference_ptr getAbstractStructureElement__implementation();

        virtual ::ecore::EReference_ptr getAbstractStructureElement__structureElement();

        virtual ::ecore::EReference_ptr getAbstractStructureElement__structureRelationship();

        virtual ::ecore::EReference_ptr getStructureModel__structureElement();

        virtual ::ecore::EReference_ptr getStructureRelationship__to();

        virtual ::ecore::EReference_ptr getStructureRelationship__from();

    protected:

        static ::ecore::Ptr< StructurePackage > s_instance;

        StructurePackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractStructureElementEClass;
        ::ecore::EClass_ptr m_AbstractStructureRelationshipEClass;
        ::ecore::EClass_ptr m_ArchitectureViewEClass;
        ::ecore::EClass_ptr m_ComponentEClass;
        ::ecore::EClass_ptr m_LayerEClass;
        ::ecore::EClass_ptr m_SoftwareSystemEClass;
        ::ecore::EClass_ptr m_StructureElementEClass;
        ::ecore::EClass_ptr m_StructureModelEClass;
        ::ecore::EClass_ptr m_StructureRelationshipEClass;
        ::ecore::EClass_ptr m_SubsystemEClass;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_AbstractStructureElement__aggregated;

        ::ecore::EReference_ptr m_AbstractStructureElement__implementation;

        ::ecore::EReference_ptr m_AbstractStructureElement__structureElement;

        ::ecore::EReference_ptr m_AbstractStructureElement__structureRelationship;

        ::ecore::EReference_ptr m_StructureModel__structureElement;

        ::ecore::EReference_ptr m_StructureRelationship__to;

        ::ecore::EReference_ptr m_StructureRelationship__from;

    };

}
 // structure
}// kdm

#endif // _KDM_STRUCTUREPACKAGE_HPP

