// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildPackage.hpp
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

#ifndef _KDM_BUILDPACKAGE_HPP
#define _KDM_BUILDPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/build_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace build
    {

    class EXPORT_KDM_DLL BuildPackage : public virtual ::ecore::EPackage
    {
    public:

        static BuildPackage_ptr _instance();
        static BuildPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractBuildElement
        static const int ABSTRACTBUILDELEMENT = 0;
        static const int ABSTRACTBUILDELEMENT__ATTRIBUTE = 0;
        static const int ABSTRACTBUILDELEMENT__ANNOTATION = 1;
        static const int ABSTRACTBUILDELEMENT__STEREOTYPE = 2;
        static const int ABSTRACTBUILDELEMENT__TAGGEDVALUE = 3;
        static const int ABSTRACTBUILDELEMENT__NAME = 4;
        static const int ABSTRACTBUILDELEMENT__BUILDRELATION = 5;
        static const int ABSTRACTBUILDELEMENT_FEATURE_COUNT = 6;

        // IDs for classifier AbstractBuildRelationship
        static const int ABSTRACTBUILDRELATIONSHIP = 1;
        static const int ABSTRACTBUILDRELATIONSHIP__ATTRIBUTE = 0;
        static const int ABSTRACTBUILDRELATIONSHIP__ANNOTATION = 1;
        static const int ABSTRACTBUILDRELATIONSHIP__STEREOTYPE = 2;
        static const int ABSTRACTBUILDRELATIONSHIP__TAGGEDVALUE = 3;
        static const int ABSTRACTBUILDRELATIONSHIP_FEATURE_COUNT = 4;

        // IDs for classifier BuildComponent
        static const int BUILDCOMPONENT = 2;
        static const int BUILDCOMPONENT__ATTRIBUTE = 0;
        static const int BUILDCOMPONENT__ANNOTATION = 1;
        static const int BUILDCOMPONENT__STEREOTYPE = 2;
        static const int BUILDCOMPONENT__TAGGEDVALUE = 3;
        static const int BUILDCOMPONENT__NAME = 4;
        static const int BUILDCOMPONENT__BUILDRELATION = 5;
        static const int BUILDCOMPONENT__IMPLEMENTATION = 6;
        static const int BUILDCOMPONENT__GROUPEDBUILD = 7;
        static const int BUILDCOMPONENT__BUILDELEMENT = 8;
        static const int BUILDCOMPONENT_FEATURE_COUNT = 9;

        // IDs for classifier BuildDescription
        static const int BUILDDESCRIPTION = 3;
        static const int BUILDDESCRIPTION__ATTRIBUTE = 0;
        static const int BUILDDESCRIPTION__ANNOTATION = 1;
        static const int BUILDDESCRIPTION__STEREOTYPE = 2;
        static const int BUILDDESCRIPTION__TAGGEDVALUE = 3;
        static const int BUILDDESCRIPTION__NAME = 4;
        static const int BUILDDESCRIPTION__BUILDRELATION = 5;
        static const int BUILDDESCRIPTION__IMPLEMENTATION = 6;
        static const int BUILDDESCRIPTION__GROUPEDBUILD = 7;
        static const int BUILDDESCRIPTION__BUILDELEMENT = 8;
        static const int BUILDDESCRIPTION__SOURCE = 9;
        static const int BUILDDESCRIPTION__TEXT = 10;
        static const int BUILDDESCRIPTION_FEATURE_COUNT = 11;

        // IDs for classifier BuildElement
        static const int BUILDELEMENT = 4;
        static const int BUILDELEMENT__ATTRIBUTE = 0;
        static const int BUILDELEMENT__ANNOTATION = 1;
        static const int BUILDELEMENT__STEREOTYPE = 2;
        static const int BUILDELEMENT__TAGGEDVALUE = 3;
        static const int BUILDELEMENT__NAME = 4;
        static const int BUILDELEMENT__BUILDRELATION = 5;
        static const int BUILDELEMENT_FEATURE_COUNT = 6;

        // IDs for classifier BuildModel
        static const int BUILDMODEL = 5;
        static const int BUILDMODEL__ATTRIBUTE = 0;
        static const int BUILDMODEL__ANNOTATION = 1;
        static const int BUILDMODEL__STEREOTYPE = 2;
        static const int BUILDMODEL__TAGGEDVALUE = 3;
        static const int BUILDMODEL__AUDIT = 4;
        static const int BUILDMODEL__EXTENSIONFAMILY = 5;
        static const int BUILDMODEL__NAME = 6;
        static const int BUILDMODEL__BUILDELEMENT = 7;
        static const int BUILDMODEL_FEATURE_COUNT = 8;

        // IDs for classifier BuildProduct
        static const int BUILDPRODUCT = 6;
        static const int BUILDPRODUCT__ATTRIBUTE = 0;
        static const int BUILDPRODUCT__ANNOTATION = 1;
        static const int BUILDPRODUCT__STEREOTYPE = 2;
        static const int BUILDPRODUCT__TAGGEDVALUE = 3;
        static const int BUILDPRODUCT__NAME = 4;
        static const int BUILDPRODUCT__BUILDRELATION = 5;
        static const int BUILDPRODUCT__IMPLEMENTATION = 6;
        static const int BUILDPRODUCT__GROUPEDBUILD = 7;
        static const int BUILDPRODUCT__BUILDELEMENT = 8;
        static const int BUILDPRODUCT_FEATURE_COUNT = 9;

        // IDs for classifier BuildRelationship
        static const int BUILDRELATIONSHIP = 7;
        static const int BUILDRELATIONSHIP__ATTRIBUTE = 0;
        static const int BUILDRELATIONSHIP__ANNOTATION = 1;
        static const int BUILDRELATIONSHIP__STEREOTYPE = 2;
        static const int BUILDRELATIONSHIP__TAGGEDVALUE = 3;
        static const int BUILDRELATIONSHIP__TO = 4;
        static const int BUILDRELATIONSHIP__FROM = 5;
        static const int BUILDRELATIONSHIP_FEATURE_COUNT = 6;

        // IDs for classifier BuildResource
        static const int BUILDRESOURCE = 8;
        static const int BUILDRESOURCE__ATTRIBUTE = 0;
        static const int BUILDRESOURCE__ANNOTATION = 1;
        static const int BUILDRESOURCE__STEREOTYPE = 2;
        static const int BUILDRESOURCE__TAGGEDVALUE = 3;
        static const int BUILDRESOURCE__NAME = 4;
        static const int BUILDRESOURCE__BUILDRELATION = 5;
        static const int BUILDRESOURCE__IMPLEMENTATION = 6;
        static const int BUILDRESOURCE__GROUPEDBUILD = 7;
        static const int BUILDRESOURCE__BUILDELEMENT = 8;
        static const int BUILDRESOURCE_FEATURE_COUNT = 9;

        // IDs for classifier BuildStep
        static const int BUILDSTEP = 9;
        static const int BUILDSTEP__ATTRIBUTE = 0;
        static const int BUILDSTEP__ANNOTATION = 1;
        static const int BUILDSTEP__STEREOTYPE = 2;
        static const int BUILDSTEP__TAGGEDVALUE = 3;
        static const int BUILDSTEP__NAME = 4;
        static const int BUILDSTEP__BUILDRELATION = 5;
        static const int BUILDSTEP__IMPLEMENTATION = 6;
        static const int BUILDSTEP__GROUPEDBUILD = 7;
        static const int BUILDSTEP__BUILDELEMENT = 8;
        static const int BUILDSTEP_FEATURE_COUNT = 9;

        // IDs for classifier Consumes
        static const int CONSUMES = 10;
        static const int CONSUMES__ATTRIBUTE = 0;
        static const int CONSUMES__ANNOTATION = 1;
        static const int CONSUMES__STEREOTYPE = 2;
        static const int CONSUMES__TAGGEDVALUE = 3;
        static const int CONSUMES__TO = 4;
        static const int CONSUMES__FROM = 5;
        static const int CONSUMES_FEATURE_COUNT = 6;

        // IDs for classifier DescribedBy
        static const int DESCRIBEDBY = 11;
        static const int DESCRIBEDBY__ATTRIBUTE = 0;
        static const int DESCRIBEDBY__ANNOTATION = 1;
        static const int DESCRIBEDBY__STEREOTYPE = 2;
        static const int DESCRIBEDBY__TAGGEDVALUE = 3;
        static const int DESCRIBEDBY__TO = 4;
        static const int DESCRIBEDBY__FROM = 5;
        static const int DESCRIBEDBY_FEATURE_COUNT = 6;

        // IDs for classifier Library
        static const int LIBRARY = 12;
        static const int LIBRARY__ATTRIBUTE = 0;
        static const int LIBRARY__ANNOTATION = 1;
        static const int LIBRARY__STEREOTYPE = 2;
        static const int LIBRARY__TAGGEDVALUE = 3;
        static const int LIBRARY__NAME = 4;
        static const int LIBRARY__BUILDRELATION = 5;
        static const int LIBRARY__IMPLEMENTATION = 6;
        static const int LIBRARY__GROUPEDBUILD = 7;
        static const int LIBRARY__BUILDELEMENT = 8;
        static const int LIBRARY_FEATURE_COUNT = 9;

        // IDs for classifier LinksTo
        static const int LINKSTO = 13;
        static const int LINKSTO__ATTRIBUTE = 0;
        static const int LINKSTO__ANNOTATION = 1;
        static const int LINKSTO__STEREOTYPE = 2;
        static const int LINKSTO__TAGGEDVALUE = 3;
        static const int LINKSTO__TO = 4;
        static const int LINKSTO__FROM = 5;
        static const int LINKSTO_FEATURE_COUNT = 6;

        // IDs for classifier Produces
        static const int PRODUCES = 14;
        static const int PRODUCES__ATTRIBUTE = 0;
        static const int PRODUCES__ANNOTATION = 1;
        static const int PRODUCES__STEREOTYPE = 2;
        static const int PRODUCES__TAGGEDVALUE = 3;
        static const int PRODUCES__TO = 4;
        static const int PRODUCES__FROM = 5;
        static const int PRODUCES_FEATURE_COUNT = 6;

        // IDs for classifier SuppliedBy
        static const int SUPPLIEDBY = 15;
        static const int SUPPLIEDBY__ATTRIBUTE = 0;
        static const int SUPPLIEDBY__ANNOTATION = 1;
        static const int SUPPLIEDBY__STEREOTYPE = 2;
        static const int SUPPLIEDBY__TAGGEDVALUE = 3;
        static const int SUPPLIEDBY__TO = 4;
        static const int SUPPLIEDBY__FROM = 5;
        static const int SUPPLIEDBY_FEATURE_COUNT = 6;

        // IDs for classifier Supplier
        static const int SUPPLIER = 16;
        static const int SUPPLIER__ATTRIBUTE = 0;
        static const int SUPPLIER__ANNOTATION = 1;
        static const int SUPPLIER__STEREOTYPE = 2;
        static const int SUPPLIER__TAGGEDVALUE = 3;
        static const int SUPPLIER__NAME = 4;
        static const int SUPPLIER__BUILDRELATION = 5;
        static const int SUPPLIER_FEATURE_COUNT = 6;

        // IDs for classifier SupportedBy
        static const int SUPPORTEDBY = 17;
        static const int SUPPORTEDBY__ATTRIBUTE = 0;
        static const int SUPPORTEDBY__ANNOTATION = 1;
        static const int SUPPORTEDBY__STEREOTYPE = 2;
        static const int SUPPORTEDBY__TAGGEDVALUE = 3;
        static const int SUPPORTEDBY__TO = 4;
        static const int SUPPORTEDBY__FROM = 5;
        static const int SUPPORTEDBY_FEATURE_COUNT = 6;

        // IDs for classifier SymbolicLink
        static const int SYMBOLICLINK = 18;
        static const int SYMBOLICLINK__ATTRIBUTE = 0;
        static const int SYMBOLICLINK__ANNOTATION = 1;
        static const int SYMBOLICLINK__STEREOTYPE = 2;
        static const int SYMBOLICLINK__TAGGEDVALUE = 3;
        static const int SYMBOLICLINK__NAME = 4;
        static const int SYMBOLICLINK__BUILDRELATION = 5;
        static const int SYMBOLICLINK_FEATURE_COUNT = 6;

        // IDs for classifier Tool
        static const int TOOL = 19;
        static const int TOOL__ATTRIBUTE = 0;
        static const int TOOL__ANNOTATION = 1;
        static const int TOOL__STEREOTYPE = 2;
        static const int TOOL__TAGGEDVALUE = 3;
        static const int TOOL__NAME = 4;
        static const int TOOL__BUILDRELATION = 5;
        static const int TOOL_FEATURE_COUNT = 6;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getAbstractBuildElement();

        virtual ::ecore::EClass_ptr getBuildResource();

        virtual ::ecore::EClass_ptr getBuildDescription();

        virtual ::ecore::EClass_ptr getSymbolicLink();

        virtual ::ecore::EClass_ptr getAbstractBuildRelationship();

        virtual ::ecore::EClass_ptr getLinksTo();

        virtual ::ecore::EClass_ptr getConsumes();

        virtual ::ecore::EClass_ptr getBuildModel();

        virtual ::ecore::EClass_ptr getBuildComponent();

        virtual ::ecore::EClass_ptr getSupplier();

        virtual ::ecore::EClass_ptr getTool();

        virtual ::ecore::EClass_ptr getBuildElement();

        virtual ::ecore::EClass_ptr getBuildRelationship();

        virtual ::ecore::EClass_ptr getSuppliedBy();

        virtual ::ecore::EClass_ptr getLibrary();

        virtual ::ecore::EClass_ptr getBuildStep();

        virtual ::ecore::EClass_ptr getProduces();

        virtual ::ecore::EClass_ptr getSupportedBy();

        virtual ::ecore::EClass_ptr getBuildProduct();

        virtual ::ecore::EClass_ptr getDescribedBy();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getAbstractBuildElement__buildRelation();

        virtual ::ecore::EReference_ptr getBuildResource__implementation();

        virtual ::ecore::EReference_ptr getBuildResource__groupedBuild();

        virtual ::ecore::EReference_ptr getBuildResource__buildElement();

        virtual ::ecore::EReference_ptr getBuildDescription__source();

        virtual ::ecore::EAttribute_ptr getBuildDescription__text();

        virtual ::ecore::EReference_ptr getLinksTo__to();

        virtual ::ecore::EReference_ptr getLinksTo__from();

        virtual ::ecore::EReference_ptr getConsumes__to();

        virtual ::ecore::EReference_ptr getConsumes__from();

        virtual ::ecore::EReference_ptr getBuildModel__buildElement();

        virtual ::ecore::EReference_ptr getBuildRelationship__to();

        virtual ::ecore::EReference_ptr getBuildRelationship__from();

        virtual ::ecore::EReference_ptr getSuppliedBy__to();

        virtual ::ecore::EReference_ptr getSuppliedBy__from();

        virtual ::ecore::EReference_ptr getProduces__to();

        virtual ::ecore::EReference_ptr getProduces__from();

        virtual ::ecore::EReference_ptr getSupportedBy__to();

        virtual ::ecore::EReference_ptr getSupportedBy__from();

        virtual ::ecore::EReference_ptr getDescribedBy__to();

        virtual ::ecore::EReference_ptr getDescribedBy__from();

    protected:

        static ::ecore::Ptr< BuildPackage > s_instance;

        BuildPackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractBuildElementEClass;
        ::ecore::EClass_ptr m_AbstractBuildRelationshipEClass;
        ::ecore::EClass_ptr m_BuildComponentEClass;
        ::ecore::EClass_ptr m_BuildDescriptionEClass;
        ::ecore::EClass_ptr m_BuildElementEClass;
        ::ecore::EClass_ptr m_BuildModelEClass;
        ::ecore::EClass_ptr m_BuildProductEClass;
        ::ecore::EClass_ptr m_BuildRelationshipEClass;
        ::ecore::EClass_ptr m_BuildResourceEClass;
        ::ecore::EClass_ptr m_BuildStepEClass;
        ::ecore::EClass_ptr m_ConsumesEClass;
        ::ecore::EClass_ptr m_DescribedByEClass;
        ::ecore::EClass_ptr m_LibraryEClass;
        ::ecore::EClass_ptr m_LinksToEClass;
        ::ecore::EClass_ptr m_ProducesEClass;
        ::ecore::EClass_ptr m_SuppliedByEClass;
        ::ecore::EClass_ptr m_SupplierEClass;
        ::ecore::EClass_ptr m_SupportedByEClass;
        ::ecore::EClass_ptr m_SymbolicLinkEClass;
        ::ecore::EClass_ptr m_ToolEClass;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_AbstractBuildElement__buildRelation;

        ::ecore::EReference_ptr m_BuildResource__implementation;

        ::ecore::EReference_ptr m_BuildResource__groupedBuild;

        ::ecore::EReference_ptr m_BuildResource__buildElement;

        ::ecore::EReference_ptr m_BuildDescription__source;

        ::ecore::EAttribute_ptr m_BuildDescription__text;

        ::ecore::EReference_ptr m_LinksTo__to;

        ::ecore::EReference_ptr m_LinksTo__from;

        ::ecore::EReference_ptr m_Consumes__to;

        ::ecore::EReference_ptr m_Consumes__from;

        ::ecore::EReference_ptr m_BuildModel__buildElement;

        ::ecore::EReference_ptr m_BuildRelationship__to;

        ::ecore::EReference_ptr m_BuildRelationship__from;

        ::ecore::EReference_ptr m_SuppliedBy__to;

        ::ecore::EReference_ptr m_SuppliedBy__from;

        ::ecore::EReference_ptr m_Produces__to;

        ::ecore::EReference_ptr m_Produces__from;

        ::ecore::EReference_ptr m_SupportedBy__to;

        ::ecore::EReference_ptr m_SupportedBy__from;

        ::ecore::EReference_ptr m_DescribedBy__to;

        ::ecore::EReference_ptr m_DescribedBy__from;

    };

}
 // build
}// kdm

#endif // _KDM_BUILDPACKAGE_HPP

