// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourcePackage.hpp
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

#ifndef _KDM_SOURCEPACKAGE_HPP
#define _KDM_SOURCEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/source_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace source
    {

    class EXPORT_KDM_DLL SourcePackage : public virtual ::ecore::EPackage
    {
    public:

        static SourcePackage_ptr _instance();
        static SourcePackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractInventoryElement
        static const int ABSTRACTINVENTORYELEMENT = 0;
        static const int ABSTRACTINVENTORYELEMENT__ATTRIBUTE = 0;
        static const int ABSTRACTINVENTORYELEMENT__ANNOTATION = 1;
        static const int ABSTRACTINVENTORYELEMENT__STEREOTYPE = 2;
        static const int ABSTRACTINVENTORYELEMENT__TAGGEDVALUE = 3;
        static const int ABSTRACTINVENTORYELEMENT__NAME = 4;
        static const int ABSTRACTINVENTORYELEMENT__INVENTORYRELATION = 5;
        static const int ABSTRACTINVENTORYELEMENT_FEATURE_COUNT = 6;

        // IDs for classifier AbstractInventoryRelationship
        static const int ABSTRACTINVENTORYRELATIONSHIP = 1;
        static const int ABSTRACTINVENTORYRELATIONSHIP__ATTRIBUTE = 0;
        static const int ABSTRACTINVENTORYRELATIONSHIP__ANNOTATION = 1;
        static const int ABSTRACTINVENTORYRELATIONSHIP__STEREOTYPE = 2;
        static const int ABSTRACTINVENTORYRELATIONSHIP__TAGGEDVALUE = 3;
        static const int ABSTRACTINVENTORYRELATIONSHIP_FEATURE_COUNT = 4;

        // IDs for classifier BinaryFile
        static const int BINARYFILE = 2;
        static const int BINARYFILE__ATTRIBUTE = 0;
        static const int BINARYFILE__ANNOTATION = 1;
        static const int BINARYFILE__STEREOTYPE = 2;
        static const int BINARYFILE__TAGGEDVALUE = 3;
        static const int BINARYFILE__NAME = 4;
        static const int BINARYFILE__INVENTORYRELATION = 5;
        static const int BINARYFILE__VERSION = 6;
        static const int BINARYFILE__PATH = 7;
        static const int BINARYFILE_FEATURE_COUNT = 8;

        // IDs for classifier Configuration
        static const int CONFIGURATION = 3;
        static const int CONFIGURATION__ATTRIBUTE = 0;
        static const int CONFIGURATION__ANNOTATION = 1;
        static const int CONFIGURATION__STEREOTYPE = 2;
        static const int CONFIGURATION__TAGGEDVALUE = 3;
        static const int CONFIGURATION__NAME = 4;
        static const int CONFIGURATION__INVENTORYRELATION = 5;
        static const int CONFIGURATION__VERSION = 6;
        static const int CONFIGURATION__PATH = 7;
        static const int CONFIGURATION_FEATURE_COUNT = 8;

        // IDs for classifier DependsOn
        static const int DEPENDSON = 4;
        static const int DEPENDSON__ATTRIBUTE = 0;
        static const int DEPENDSON__ANNOTATION = 1;
        static const int DEPENDSON__STEREOTYPE = 2;
        static const int DEPENDSON__TAGGEDVALUE = 3;
        static const int DEPENDSON__TO = 4;
        static const int DEPENDSON__FROM = 5;
        static const int DEPENDSON_FEATURE_COUNT = 6;

        // IDs for classifier Directory
        static const int DIRECTORY = 5;
        static const int DIRECTORY__ATTRIBUTE = 0;
        static const int DIRECTORY__ANNOTATION = 1;
        static const int DIRECTORY__STEREOTYPE = 2;
        static const int DIRECTORY__TAGGEDVALUE = 3;
        static const int DIRECTORY__NAME = 4;
        static const int DIRECTORY__INVENTORYRELATION = 5;
        static const int DIRECTORY__INVENTORYELEMENT = 6;
        static const int DIRECTORY__PATH = 7;
        static const int DIRECTORY_FEATURE_COUNT = 8;

        // IDs for classifier ExecutableFile
        static const int EXECUTABLEFILE = 6;
        static const int EXECUTABLEFILE__ATTRIBUTE = 0;
        static const int EXECUTABLEFILE__ANNOTATION = 1;
        static const int EXECUTABLEFILE__STEREOTYPE = 2;
        static const int EXECUTABLEFILE__TAGGEDVALUE = 3;
        static const int EXECUTABLEFILE__NAME = 4;
        static const int EXECUTABLEFILE__INVENTORYRELATION = 5;
        static const int EXECUTABLEFILE__VERSION = 6;
        static const int EXECUTABLEFILE__PATH = 7;
        static const int EXECUTABLEFILE_FEATURE_COUNT = 8;

        // IDs for classifier Image
        static const int IMAGE = 7;
        static const int IMAGE__ATTRIBUTE = 0;
        static const int IMAGE__ANNOTATION = 1;
        static const int IMAGE__STEREOTYPE = 2;
        static const int IMAGE__TAGGEDVALUE = 3;
        static const int IMAGE__NAME = 4;
        static const int IMAGE__INVENTORYRELATION = 5;
        static const int IMAGE__VERSION = 6;
        static const int IMAGE__PATH = 7;
        static const int IMAGE_FEATURE_COUNT = 8;

        // IDs for classifier InventoryContainer
        static const int INVENTORYCONTAINER = 8;
        static const int INVENTORYCONTAINER__ATTRIBUTE = 0;
        static const int INVENTORYCONTAINER__ANNOTATION = 1;
        static const int INVENTORYCONTAINER__STEREOTYPE = 2;
        static const int INVENTORYCONTAINER__TAGGEDVALUE = 3;
        static const int INVENTORYCONTAINER__NAME = 4;
        static const int INVENTORYCONTAINER__INVENTORYRELATION = 5;
        static const int INVENTORYCONTAINER__INVENTORYELEMENT = 6;
        static const int INVENTORYCONTAINER_FEATURE_COUNT = 7;

        // IDs for classifier InventoryElement
        static const int INVENTORYELEMENT = 9;
        static const int INVENTORYELEMENT__ATTRIBUTE = 0;
        static const int INVENTORYELEMENT__ANNOTATION = 1;
        static const int INVENTORYELEMENT__STEREOTYPE = 2;
        static const int INVENTORYELEMENT__TAGGEDVALUE = 3;
        static const int INVENTORYELEMENT__NAME = 4;
        static const int INVENTORYELEMENT__INVENTORYRELATION = 5;
        static const int INVENTORYELEMENT_FEATURE_COUNT = 6;

        // IDs for classifier InventoryItem
        static const int INVENTORYITEM = 10;
        static const int INVENTORYITEM__ATTRIBUTE = 0;
        static const int INVENTORYITEM__ANNOTATION = 1;
        static const int INVENTORYITEM__STEREOTYPE = 2;
        static const int INVENTORYITEM__TAGGEDVALUE = 3;
        static const int INVENTORYITEM__NAME = 4;
        static const int INVENTORYITEM__INVENTORYRELATION = 5;
        static const int INVENTORYITEM__VERSION = 6;
        static const int INVENTORYITEM__PATH = 7;
        static const int INVENTORYITEM_FEATURE_COUNT = 8;

        // IDs for classifier InventoryModel
        static const int INVENTORYMODEL = 11;
        static const int INVENTORYMODEL__ATTRIBUTE = 0;
        static const int INVENTORYMODEL__ANNOTATION = 1;
        static const int INVENTORYMODEL__STEREOTYPE = 2;
        static const int INVENTORYMODEL__TAGGEDVALUE = 3;
        static const int INVENTORYMODEL__AUDIT = 4;
        static const int INVENTORYMODEL__EXTENSIONFAMILY = 5;
        static const int INVENTORYMODEL__NAME = 6;
        static const int INVENTORYMODEL__INVENTORYELEMENT = 7;
        static const int INVENTORYMODEL_FEATURE_COUNT = 8;

        // IDs for classifier InventoryRelationship
        static const int INVENTORYRELATIONSHIP = 12;
        static const int INVENTORYRELATIONSHIP__ATTRIBUTE = 0;
        static const int INVENTORYRELATIONSHIP__ANNOTATION = 1;
        static const int INVENTORYRELATIONSHIP__STEREOTYPE = 2;
        static const int INVENTORYRELATIONSHIP__TAGGEDVALUE = 3;
        static const int INVENTORYRELATIONSHIP__TO = 4;
        static const int INVENTORYRELATIONSHIP__FROM = 5;
        static const int INVENTORYRELATIONSHIP_FEATURE_COUNT = 6;

        // IDs for classifier Project
        static const int PROJECT = 13;
        static const int PROJECT__ATTRIBUTE = 0;
        static const int PROJECT__ANNOTATION = 1;
        static const int PROJECT__STEREOTYPE = 2;
        static const int PROJECT__TAGGEDVALUE = 3;
        static const int PROJECT__NAME = 4;
        static const int PROJECT__INVENTORYRELATION = 5;
        static const int PROJECT__INVENTORYELEMENT = 6;
        static const int PROJECT_FEATURE_COUNT = 7;

        // IDs for classifier ResourceDescription
        static const int RESOURCEDESCRIPTION = 14;
        static const int RESOURCEDESCRIPTION__ATTRIBUTE = 0;
        static const int RESOURCEDESCRIPTION__ANNOTATION = 1;
        static const int RESOURCEDESCRIPTION__STEREOTYPE = 2;
        static const int RESOURCEDESCRIPTION__TAGGEDVALUE = 3;
        static const int RESOURCEDESCRIPTION__NAME = 4;
        static const int RESOURCEDESCRIPTION__INVENTORYRELATION = 5;
        static const int RESOURCEDESCRIPTION__VERSION = 6;
        static const int RESOURCEDESCRIPTION__PATH = 7;
        static const int RESOURCEDESCRIPTION_FEATURE_COUNT = 8;

        // IDs for classifier SourceFile
        static const int SOURCEFILE = 15;
        static const int SOURCEFILE__ATTRIBUTE = 0;
        static const int SOURCEFILE__ANNOTATION = 1;
        static const int SOURCEFILE__STEREOTYPE = 2;
        static const int SOURCEFILE__TAGGEDVALUE = 3;
        static const int SOURCEFILE__NAME = 4;
        static const int SOURCEFILE__INVENTORYRELATION = 5;
        static const int SOURCEFILE__VERSION = 6;
        static const int SOURCEFILE__PATH = 7;
        static const int SOURCEFILE__LANGUAGE = 8;
        static const int SOURCEFILE__ENCODING = 9;
        static const int SOURCEFILE_FEATURE_COUNT = 10;

        // IDs for classifier SourceRef
        static const int SOURCEREF = 16;
        static const int SOURCEREF__ATTRIBUTE = 0;
        static const int SOURCEREF__ANNOTATION = 1;
        static const int SOURCEREF__REGION = 2;
        static const int SOURCEREF__LANGUAGE = 3;
        static const int SOURCEREF__SNIPPET = 4;
        static const int SOURCEREF_FEATURE_COUNT = 5;

        // IDs for classifier SourceRegion
        static const int SOURCEREGION = 17;
        static const int SOURCEREGION__ATTRIBUTE = 0;
        static const int SOURCEREGION__ANNOTATION = 1;
        static const int SOURCEREGION__FILE = 2;
        static const int SOURCEREGION__STARTLINE = 3;
        static const int SOURCEREGION__STARTPOSITION = 4;
        static const int SOURCEREGION__ENDLINE = 5;
        static const int SOURCEREGION__ENDPOSITION = 6;
        static const int SOURCEREGION__LANGUAGE = 7;
        static const int SOURCEREGION__PATH = 8;
        static const int SOURCEREGION_FEATURE_COUNT = 9;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getSourceRef();

        virtual ::ecore::EClass_ptr getSourceRegion();

        virtual ::ecore::EClass_ptr getInventoryModel();

        virtual ::ecore::EClass_ptr getAbstractInventoryElement();

        virtual ::ecore::EClass_ptr getInventoryItem();

        virtual ::ecore::EClass_ptr getSourceFile();

        virtual ::ecore::EClass_ptr getImage();

        virtual ::ecore::EClass_ptr getResourceDescription();

        virtual ::ecore::EClass_ptr getConfiguration();

        virtual ::ecore::EClass_ptr getInventoryContainer();

        virtual ::ecore::EClass_ptr getDirectory();

        virtual ::ecore::EClass_ptr getProject();

        virtual ::ecore::EClass_ptr getAbstractInventoryRelationship();

        virtual ::ecore::EClass_ptr getBinaryFile();

        virtual ::ecore::EClass_ptr getExecutableFile();

        virtual ::ecore::EClass_ptr getDependsOn();

        virtual ::ecore::EClass_ptr getInventoryElement();

        virtual ::ecore::EClass_ptr getInventoryRelationship();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getSourceRef__region();

        virtual ::ecore::EAttribute_ptr getSourceRef__language();

        virtual ::ecore::EAttribute_ptr getSourceRef__snippet();

        virtual ::ecore::EReference_ptr getSourceRegion__file();

        virtual ::ecore::EAttribute_ptr getSourceRegion__startLine();

        virtual ::ecore::EAttribute_ptr getSourceRegion__startPosition();

        virtual ::ecore::EAttribute_ptr getSourceRegion__endLine();

        virtual ::ecore::EAttribute_ptr getSourceRegion__endPosition();

        virtual ::ecore::EAttribute_ptr getSourceRegion__language();

        virtual ::ecore::EAttribute_ptr getSourceRegion__path();

        virtual ::ecore::EReference_ptr getInventoryModel__inventoryElement();

        virtual ::ecore::EReference_ptr getAbstractInventoryElement__inventoryRelation();

        virtual ::ecore::EAttribute_ptr getInventoryItem__version();

        virtual ::ecore::EAttribute_ptr getInventoryItem__path();

        virtual ::ecore::EAttribute_ptr getSourceFile__language();

        virtual ::ecore::EAttribute_ptr getSourceFile__encoding();

        virtual ::ecore::EReference_ptr getInventoryContainer__inventoryElement();

        virtual ::ecore::EAttribute_ptr getDirectory__path();

        virtual ::ecore::EReference_ptr getDependsOn__to();

        virtual ::ecore::EReference_ptr getDependsOn__from();

        virtual ::ecore::EReference_ptr getInventoryRelationship__to();

        virtual ::ecore::EReference_ptr getInventoryRelationship__from();

    protected:

        static ::ecore::Ptr< SourcePackage > s_instance;

        SourcePackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractInventoryElementEClass;
        ::ecore::EClass_ptr m_AbstractInventoryRelationshipEClass;
        ::ecore::EClass_ptr m_BinaryFileEClass;
        ::ecore::EClass_ptr m_ConfigurationEClass;
        ::ecore::EClass_ptr m_DependsOnEClass;
        ::ecore::EClass_ptr m_DirectoryEClass;
        ::ecore::EClass_ptr m_ExecutableFileEClass;
        ::ecore::EClass_ptr m_ImageEClass;
        ::ecore::EClass_ptr m_InventoryContainerEClass;
        ::ecore::EClass_ptr m_InventoryElementEClass;
        ::ecore::EClass_ptr m_InventoryItemEClass;
        ::ecore::EClass_ptr m_InventoryModelEClass;
        ::ecore::EClass_ptr m_InventoryRelationshipEClass;
        ::ecore::EClass_ptr m_ProjectEClass;
        ::ecore::EClass_ptr m_ResourceDescriptionEClass;
        ::ecore::EClass_ptr m_SourceFileEClass;
        ::ecore::EClass_ptr m_SourceRefEClass;
        ::ecore::EClass_ptr m_SourceRegionEClass;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_SourceRef__region;

        ::ecore::EAttribute_ptr m_SourceRef__language;

        ::ecore::EAttribute_ptr m_SourceRef__snippet;

        ::ecore::EReference_ptr m_SourceRegion__file;

        ::ecore::EAttribute_ptr m_SourceRegion__startLine;

        ::ecore::EAttribute_ptr m_SourceRegion__startPosition;

        ::ecore::EAttribute_ptr m_SourceRegion__endLine;

        ::ecore::EAttribute_ptr m_SourceRegion__endPosition;

        ::ecore::EAttribute_ptr m_SourceRegion__language;

        ::ecore::EAttribute_ptr m_SourceRegion__path;

        ::ecore::EReference_ptr m_InventoryModel__inventoryElement;

        ::ecore::EReference_ptr m_AbstractInventoryElement__inventoryRelation;

        ::ecore::EAttribute_ptr m_InventoryItem__version;

        ::ecore::EAttribute_ptr m_InventoryItem__path;

        ::ecore::EAttribute_ptr m_SourceFile__language;

        ::ecore::EAttribute_ptr m_SourceFile__encoding;

        ::ecore::EReference_ptr m_InventoryContainer__inventoryElement;

        ::ecore::EAttribute_ptr m_Directory__path;

        ::ecore::EReference_ptr m_DependsOn__to;

        ::ecore::EReference_ptr m_DependsOn__from;

        ::ecore::EReference_ptr m_InventoryRelationship__to;

        ::ecore::EReference_ptr m_InventoryRelationship__from;

    };

}
 // source
}// kdm

#endif // _KDM_SOURCEPACKAGE_HPP

