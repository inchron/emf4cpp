// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/DataPackage.hpp
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

#ifndef _KDM_DATAPACKAGE_HPP
#define _KDM_DATAPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/data_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/KdmPackage.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace data
    {

    class EXPORT_KDM_DLL DataPackage : public virtual ::ecore::EPackage
    {
    public:

        static DataPackage_ptr _instance();
        static DataPackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AbstractContentElement
        static const int ABSTRACTCONTENTELEMENT = 0;
        static const int ABSTRACTCONTENTELEMENT__ATTRIBUTE = 0;
        static const int ABSTRACTCONTENTELEMENT__ANNOTATION = 1;
        static const int ABSTRACTCONTENTELEMENT__STEREOTYPE = 2;
        static const int ABSTRACTCONTENTELEMENT__TAGGEDVALUE = 3;
        static const int ABSTRACTCONTENTELEMENT__NAME = 4;
        static const int ABSTRACTCONTENTELEMENT__SOURCE = 5;
        static const int ABSTRACTCONTENTELEMENT__DATARELATION = 6;
        static const int ABSTRACTCONTENTELEMENT__ABSTRACTION = 7;
        static const int ABSTRACTCONTENTELEMENT_FEATURE_COUNT = 8;

        // IDs for classifier AbstractDataElement
        static const int ABSTRACTDATAELEMENT = 1;
        static const int ABSTRACTDATAELEMENT__ATTRIBUTE = 0;
        static const int ABSTRACTDATAELEMENT__ANNOTATION = 1;
        static const int ABSTRACTDATAELEMENT__STEREOTYPE = 2;
        static const int ABSTRACTDATAELEMENT__TAGGEDVALUE = 3;
        static const int ABSTRACTDATAELEMENT__NAME = 4;
        static const int ABSTRACTDATAELEMENT__SOURCE = 5;
        static const int ABSTRACTDATAELEMENT__DATARELATION = 6;
        static const int ABSTRACTDATAELEMENT__ABSTRACTION = 7;
        static const int ABSTRACTDATAELEMENT_FEATURE_COUNT = 8;

        // IDs for classifier AbstractDataRelationship
        static const int ABSTRACTDATARELATIONSHIP = 2;
        static const int ABSTRACTDATARELATIONSHIP__ATTRIBUTE = 0;
        static const int ABSTRACTDATARELATIONSHIP__ANNOTATION = 1;
        static const int ABSTRACTDATARELATIONSHIP__STEREOTYPE = 2;
        static const int ABSTRACTDATARELATIONSHIP__TAGGEDVALUE = 3;
        static const int ABSTRACTDATARELATIONSHIP_FEATURE_COUNT = 4;

        // IDs for classifier AllContent
        static const int ALLCONTENT = 3;
        static const int ALLCONTENT__ATTRIBUTE = 0;
        static const int ALLCONTENT__ANNOTATION = 1;
        static const int ALLCONTENT__STEREOTYPE = 2;
        static const int ALLCONTENT__TAGGEDVALUE = 3;
        static const int ALLCONTENT__NAME = 4;
        static const int ALLCONTENT__SOURCE = 5;
        static const int ALLCONTENT__DATARELATION = 6;
        static const int ALLCONTENT__ABSTRACTION = 7;
        static const int ALLCONTENT__CONTENTELEMENT = 8;
        static const int ALLCONTENT_FEATURE_COUNT = 9;

        // IDs for classifier Catalog
        static const int CATALOG = 4;
        static const int CATALOG__ATTRIBUTE = 0;
        static const int CATALOG__ANNOTATION = 1;
        static const int CATALOG__STEREOTYPE = 2;
        static const int CATALOG__TAGGEDVALUE = 3;
        static const int CATALOG__NAME = 4;
        static const int CATALOG__SOURCE = 5;
        static const int CATALOG__DATARELATION = 6;
        static const int CATALOG__ABSTRACTION = 7;
        static const int CATALOG__DATAELEMENT = 8;
        static const int CATALOG_FEATURE_COUNT = 9;

        // IDs for classifier ChoiceContent
        static const int CHOICECONTENT = 5;
        static const int CHOICECONTENT__ATTRIBUTE = 0;
        static const int CHOICECONTENT__ANNOTATION = 1;
        static const int CHOICECONTENT__STEREOTYPE = 2;
        static const int CHOICECONTENT__TAGGEDVALUE = 3;
        static const int CHOICECONTENT__NAME = 4;
        static const int CHOICECONTENT__SOURCE = 5;
        static const int CHOICECONTENT__DATARELATION = 6;
        static const int CHOICECONTENT__ABSTRACTION = 7;
        static const int CHOICECONTENT__CONTENTELEMENT = 8;
        static const int CHOICECONTENT_FEATURE_COUNT = 9;

        // IDs for classifier ColumnSet
        static const int COLUMNSET = 6;
        static const int COLUMNSET__ATTRIBUTE = 0;
        static const int COLUMNSET__ANNOTATION = 1;
        static const int COLUMNSET__STEREOTYPE = 2;
        static const int COLUMNSET__TAGGEDVALUE = 3;
        static const int COLUMNSET__NAME = 4;
        static const int COLUMNSET__SOURCE = 5;
        static const int COLUMNSET__DATARELATION = 6;
        static const int COLUMNSET__ABSTRACTION = 7;
        static const int COLUMNSET__DATAELEMENT = 8;
        static const int COLUMNSET__ITEMUNIT = 9;
        static const int COLUMNSET_FEATURE_COUNT = 10;

        // IDs for classifier ComplexContentType
        static const int COMPLEXCONTENTTYPE = 7;
        static const int COMPLEXCONTENTTYPE__ATTRIBUTE = 0;
        static const int COMPLEXCONTENTTYPE__ANNOTATION = 1;
        static const int COMPLEXCONTENTTYPE__STEREOTYPE = 2;
        static const int COMPLEXCONTENTTYPE__TAGGEDVALUE = 3;
        static const int COMPLEXCONTENTTYPE__NAME = 4;
        static const int COMPLEXCONTENTTYPE__SOURCE = 5;
        static const int COMPLEXCONTENTTYPE__DATARELATION = 6;
        static const int COMPLEXCONTENTTYPE__ABSTRACTION = 7;
        static const int COMPLEXCONTENTTYPE__CONTENTELEMENT = 8;
        static const int COMPLEXCONTENTTYPE_FEATURE_COUNT = 9;

        // IDs for classifier ContentAttribute
        static const int CONTENTATTRIBUTE = 8;
        static const int CONTENTATTRIBUTE__ATTRIBUTE = 0;
        static const int CONTENTATTRIBUTE__ANNOTATION = 1;
        static const int CONTENTATTRIBUTE__STEREOTYPE = 2;
        static const int CONTENTATTRIBUTE__TAGGEDVALUE = 3;
        static const int CONTENTATTRIBUTE__NAME = 4;
        static const int CONTENTATTRIBUTE__SOURCE = 5;
        static const int CONTENTATTRIBUTE__DATARELATION = 6;
        static const int CONTENTATTRIBUTE__ABSTRACTION = 7;
        static const int CONTENTATTRIBUTE__TYPE = 8;
        static const int CONTENTATTRIBUTE__CONTENTELEMENT = 9;
        static const int CONTENTATTRIBUTE_FEATURE_COUNT = 10;

        // IDs for classifier ContentElement
        static const int CONTENTELEMENT = 9;
        static const int CONTENTELEMENT__ATTRIBUTE = 0;
        static const int CONTENTELEMENT__ANNOTATION = 1;
        static const int CONTENTELEMENT__STEREOTYPE = 2;
        static const int CONTENTELEMENT__TAGGEDVALUE = 3;
        static const int CONTENTELEMENT__NAME = 4;
        static const int CONTENTELEMENT__SOURCE = 5;
        static const int CONTENTELEMENT__DATARELATION = 6;
        static const int CONTENTELEMENT__ABSTRACTION = 7;
        static const int CONTENTELEMENT__TYPE = 8;
        static const int CONTENTELEMENT__CONTENTELEMENT = 9;
        static const int CONTENTELEMENT_FEATURE_COUNT = 10;

        // IDs for classifier ContentItem
        static const int CONTENTITEM = 10;
        static const int CONTENTITEM__ATTRIBUTE = 0;
        static const int CONTENTITEM__ANNOTATION = 1;
        static const int CONTENTITEM__STEREOTYPE = 2;
        static const int CONTENTITEM__TAGGEDVALUE = 3;
        static const int CONTENTITEM__NAME = 4;
        static const int CONTENTITEM__SOURCE = 5;
        static const int CONTENTITEM__DATARELATION = 6;
        static const int CONTENTITEM__ABSTRACTION = 7;
        static const int CONTENTITEM__TYPE = 8;
        static const int CONTENTITEM__CONTENTELEMENT = 9;
        static const int CONTENTITEM_FEATURE_COUNT = 10;

        // IDs for classifier ContentReference
        static const int CONTENTREFERENCE = 11;
        static const int CONTENTREFERENCE__ATTRIBUTE = 0;
        static const int CONTENTREFERENCE__ANNOTATION = 1;
        static const int CONTENTREFERENCE__STEREOTYPE = 2;
        static const int CONTENTREFERENCE__TAGGEDVALUE = 3;
        static const int CONTENTREFERENCE__NAME = 4;
        static const int CONTENTREFERENCE__SOURCE = 5;
        static const int CONTENTREFERENCE__DATARELATION = 6;
        static const int CONTENTREFERENCE__ABSTRACTION = 7;
        static const int CONTENTREFERENCE__TYPE = 8;
        static const int CONTENTREFERENCE__CONTENTELEMENT = 9;
        static const int CONTENTREFERENCE_FEATURE_COUNT = 10;

        // IDs for classifier ContentRestriction
        static const int CONTENTRESTRICTION = 12;
        static const int CONTENTRESTRICTION__ATTRIBUTE = 0;
        static const int CONTENTRESTRICTION__ANNOTATION = 1;
        static const int CONTENTRESTRICTION__STEREOTYPE = 2;
        static const int CONTENTRESTRICTION__TAGGEDVALUE = 3;
        static const int CONTENTRESTRICTION__NAME = 4;
        static const int CONTENTRESTRICTION__SOURCE = 5;
        static const int CONTENTRESTRICTION__DATARELATION = 6;
        static const int CONTENTRESTRICTION__ABSTRACTION = 7;
        static const int CONTENTRESTRICTION__KIND = 8;
        static const int CONTENTRESTRICTION__VALUE = 9;
        static const int CONTENTRESTRICTION_FEATURE_COUNT = 10;

        // IDs for classifier DataAction
        static const int DATAACTION = 13;
        static const int DATAACTION__ATTRIBUTE = 0;
        static const int DATAACTION__ANNOTATION = 1;
        static const int DATAACTION__STEREOTYPE = 2;
        static const int DATAACTION__TAGGEDVALUE = 3;
        static const int DATAACTION__NAME = 4;
        static const int DATAACTION__SOURCE = 5;
        static const int DATAACTION__DATARELATION = 6;
        static const int DATAACTION__ABSTRACTION = 7;
        static const int DATAACTION__KIND = 8;
        static const int DATAACTION__IMPLEMENTATION = 9;
        static const int DATAACTION__DATAELEMENT = 10;
        static const int DATAACTION_FEATURE_COUNT = 11;

        // IDs for classifier DataContainer
        static const int DATACONTAINER = 14;
        static const int DATACONTAINER__ATTRIBUTE = 0;
        static const int DATACONTAINER__ANNOTATION = 1;
        static const int DATACONTAINER__STEREOTYPE = 2;
        static const int DATACONTAINER__TAGGEDVALUE = 3;
        static const int DATACONTAINER__NAME = 4;
        static const int DATACONTAINER__SOURCE = 5;
        static const int DATACONTAINER__DATARELATION = 6;
        static const int DATACONTAINER__ABSTRACTION = 7;
        static const int DATACONTAINER__DATAELEMENT = 8;
        static const int DATACONTAINER_FEATURE_COUNT = 9;

        // IDs for classifier DataEvent
        static const int DATAEVENT = 15;
        static const int DATAEVENT__ATTRIBUTE = 0;
        static const int DATAEVENT__ANNOTATION = 1;
        static const int DATAEVENT__STEREOTYPE = 2;
        static const int DATAEVENT__TAGGEDVALUE = 3;
        static const int DATAEVENT__NAME = 4;
        static const int DATAEVENT__SOURCE = 5;
        static const int DATAEVENT__DATARELATION = 6;
        static const int DATAEVENT__ABSTRACTION = 7;
        static const int DATAEVENT__KIND = 8;
        static const int DATAEVENT_FEATURE_COUNT = 9;

        // IDs for classifier DataModel
        static const int DATAMODEL = 16;
        static const int DATAMODEL__ATTRIBUTE = 0;
        static const int DATAMODEL__ANNOTATION = 1;
        static const int DATAMODEL__STEREOTYPE = 2;
        static const int DATAMODEL__TAGGEDVALUE = 3;
        static const int DATAMODEL__AUDIT = 4;
        static const int DATAMODEL__EXTENSIONFAMILY = 5;
        static const int DATAMODEL__NAME = 6;
        static const int DATAMODEL__DATAELEMENT = 7;
        static const int DATAMODEL_FEATURE_COUNT = 8;

        // IDs for classifier DataRelationship
        static const int DATARELATIONSHIP = 17;
        static const int DATARELATIONSHIP__ATTRIBUTE = 0;
        static const int DATARELATIONSHIP__ANNOTATION = 1;
        static const int DATARELATIONSHIP__STEREOTYPE = 2;
        static const int DATARELATIONSHIP__TAGGEDVALUE = 3;
        static const int DATARELATIONSHIP__TO = 4;
        static const int DATARELATIONSHIP__FROM = 5;
        static const int DATARELATIONSHIP_FEATURE_COUNT = 6;

        // IDs for classifier DataResource
        static const int DATARESOURCE = 18;
        static const int DATARESOURCE__ATTRIBUTE = 0;
        static const int DATARESOURCE__ANNOTATION = 1;
        static const int DATARESOURCE__STEREOTYPE = 2;
        static const int DATARESOURCE__TAGGEDVALUE = 3;
        static const int DATARESOURCE__NAME = 4;
        static const int DATARESOURCE__SOURCE = 5;
        static const int DATARESOURCE__DATARELATION = 6;
        static const int DATARESOURCE__ABSTRACTION = 7;
        static const int DATARESOURCE_FEATURE_COUNT = 8;

        // IDs for classifier DataSegment
        static const int DATASEGMENT = 19;
        static const int DATASEGMENT__ATTRIBUTE = 0;
        static const int DATASEGMENT__ANNOTATION = 1;
        static const int DATASEGMENT__STEREOTYPE = 2;
        static const int DATASEGMENT__TAGGEDVALUE = 3;
        static const int DATASEGMENT__NAME = 4;
        static const int DATASEGMENT__SOURCE = 5;
        static const int DATASEGMENT__DATARELATION = 6;
        static const int DATASEGMENT__ABSTRACTION = 7;
        static const int DATASEGMENT__DATAELEMENT = 8;
        static const int DATASEGMENT__ITEMUNIT = 9;
        static const int DATASEGMENT_FEATURE_COUNT = 10;

        // IDs for classifier DatatypeOf
        static const int DATATYPEOF = 20;
        static const int DATATYPEOF__ATTRIBUTE = 0;
        static const int DATATYPEOF__ANNOTATION = 1;
        static const int DATATYPEOF__STEREOTYPE = 2;
        static const int DATATYPEOF__TAGGEDVALUE = 3;
        static const int DATATYPEOF__TO = 4;
        static const int DATATYPEOF__FROM = 5;
        static const int DATATYPEOF_FEATURE_COUNT = 6;

        // IDs for classifier ExtendedDataElement
        static const int EXTENDEDDATAELEMENT = 21;
        static const int EXTENDEDDATAELEMENT__ATTRIBUTE = 0;
        static const int EXTENDEDDATAELEMENT__ANNOTATION = 1;
        static const int EXTENDEDDATAELEMENT__STEREOTYPE = 2;
        static const int EXTENDEDDATAELEMENT__TAGGEDVALUE = 3;
        static const int EXTENDEDDATAELEMENT__NAME = 4;
        static const int EXTENDEDDATAELEMENT__SOURCE = 5;
        static const int EXTENDEDDATAELEMENT__DATARELATION = 6;
        static const int EXTENDEDDATAELEMENT__ABSTRACTION = 7;
        static const int EXTENDEDDATAELEMENT_FEATURE_COUNT = 8;

        // IDs for classifier ExtensionTo
        static const int EXTENSIONTO = 22;
        static const int EXTENSIONTO__ATTRIBUTE = 0;
        static const int EXTENSIONTO__ANNOTATION = 1;
        static const int EXTENSIONTO__STEREOTYPE = 2;
        static const int EXTENSIONTO__TAGGEDVALUE = 3;
        static const int EXTENSIONTO__TO = 4;
        static const int EXTENSIONTO__FROM = 5;
        static const int EXTENSIONTO_FEATURE_COUNT = 6;

        // IDs for classifier GroupContent
        static const int GROUPCONTENT = 23;
        static const int GROUPCONTENT__ATTRIBUTE = 0;
        static const int GROUPCONTENT__ANNOTATION = 1;
        static const int GROUPCONTENT__STEREOTYPE = 2;
        static const int GROUPCONTENT__TAGGEDVALUE = 3;
        static const int GROUPCONTENT__NAME = 4;
        static const int GROUPCONTENT__SOURCE = 5;
        static const int GROUPCONTENT__DATARELATION = 6;
        static const int GROUPCONTENT__ABSTRACTION = 7;
        static const int GROUPCONTENT__TYPE = 8;
        static const int GROUPCONTENT__CONTENTELEMENT = 9;
        static const int GROUPCONTENT_FEATURE_COUNT = 10;

        // IDs for classifier HasContent
        static const int HASCONTENT = 24;
        static const int HASCONTENT__ATTRIBUTE = 0;
        static const int HASCONTENT__ANNOTATION = 1;
        static const int HASCONTENT__STEREOTYPE = 2;
        static const int HASCONTENT__TAGGEDVALUE = 3;
        static const int HASCONTENT__TO = 4;
        static const int HASCONTENT__FROM = 5;
        static const int HASCONTENT_FEATURE_COUNT = 6;

        // IDs for classifier Index
        static const int INDEX = 25;
        static const int INDEX__ATTRIBUTE = 0;
        static const int INDEX__ANNOTATION = 1;
        static const int INDEX__STEREOTYPE = 2;
        static const int INDEX__TAGGEDVALUE = 3;
        static const int INDEX__NAME = 4;
        static const int INDEX__SOURCE = 5;
        static const int INDEX__DATARELATION = 6;
        static const int INDEX__ABSTRACTION = 7;
        static const int INDEX__IMPLEMENTATION = 8;
        static const int INDEX_FEATURE_COUNT = 9;

        // IDs for classifier IndexElement
        static const int INDEXELEMENT = 26;
        static const int INDEXELEMENT__ATTRIBUTE = 0;
        static const int INDEXELEMENT__ANNOTATION = 1;
        static const int INDEXELEMENT__STEREOTYPE = 2;
        static const int INDEXELEMENT__TAGGEDVALUE = 3;
        static const int INDEXELEMENT__NAME = 4;
        static const int INDEXELEMENT__SOURCE = 5;
        static const int INDEXELEMENT__DATARELATION = 6;
        static const int INDEXELEMENT__ABSTRACTION = 7;
        static const int INDEXELEMENT__IMPLEMENTATION = 8;
        static const int INDEXELEMENT_FEATURE_COUNT = 9;

        // IDs for classifier KeyRelation
        static const int KEYRELATION = 27;
        static const int KEYRELATION__ATTRIBUTE = 0;
        static const int KEYRELATION__ANNOTATION = 1;
        static const int KEYRELATION__STEREOTYPE = 2;
        static const int KEYRELATION__TAGGEDVALUE = 3;
        static const int KEYRELATION__TO = 4;
        static const int KEYRELATION__FROM = 5;
        static const int KEYRELATION_FEATURE_COUNT = 6;

        // IDs for classifier ManagesData
        static const int MANAGESDATA = 28;
        static const int MANAGESDATA__ATTRIBUTE = 0;
        static const int MANAGESDATA__ANNOTATION = 1;
        static const int MANAGESDATA__STEREOTYPE = 2;
        static const int MANAGESDATA__TAGGEDVALUE = 3;
        static const int MANAGESDATA__TO = 4;
        static const int MANAGESDATA__FROM = 5;
        static const int MANAGESDATA_FEATURE_COUNT = 6;

        // IDs for classifier MixedContent
        static const int MIXEDCONTENT = 29;
        static const int MIXEDCONTENT__ATTRIBUTE = 0;
        static const int MIXEDCONTENT__ANNOTATION = 1;
        static const int MIXEDCONTENT__STEREOTYPE = 2;
        static const int MIXEDCONTENT__TAGGEDVALUE = 3;
        static const int MIXEDCONTENT__NAME = 4;
        static const int MIXEDCONTENT__SOURCE = 5;
        static const int MIXEDCONTENT__DATARELATION = 6;
        static const int MIXEDCONTENT__ABSTRACTION = 7;
        static const int MIXEDCONTENT__CONTENTELEMENT = 8;
        static const int MIXEDCONTENT_FEATURE_COUNT = 9;

        // IDs for classifier ProducesDataEvent
        static const int PRODUCESDATAEVENT = 30;
        static const int PRODUCESDATAEVENT__ATTRIBUTE = 0;
        static const int PRODUCESDATAEVENT__ANNOTATION = 1;
        static const int PRODUCESDATAEVENT__STEREOTYPE = 2;
        static const int PRODUCESDATAEVENT__TAGGEDVALUE = 3;
        static const int PRODUCESDATAEVENT__TO = 4;
        static const int PRODUCESDATAEVENT__FROM = 5;
        static const int PRODUCESDATAEVENT_FEATURE_COUNT = 6;

        // IDs for classifier ReadsColumnSet
        static const int READSCOLUMNSET = 31;
        static const int READSCOLUMNSET__ATTRIBUTE = 0;
        static const int READSCOLUMNSET__ANNOTATION = 1;
        static const int READSCOLUMNSET__STEREOTYPE = 2;
        static const int READSCOLUMNSET__TAGGEDVALUE = 3;
        static const int READSCOLUMNSET__TO = 4;
        static const int READSCOLUMNSET__FROM = 5;
        static const int READSCOLUMNSET_FEATURE_COUNT = 6;

        // IDs for classifier RecordFile
        static const int RECORDFILE = 32;
        static const int RECORDFILE__ATTRIBUTE = 0;
        static const int RECORDFILE__ANNOTATION = 1;
        static const int RECORDFILE__STEREOTYPE = 2;
        static const int RECORDFILE__TAGGEDVALUE = 3;
        static const int RECORDFILE__NAME = 4;
        static const int RECORDFILE__SOURCE = 5;
        static const int RECORDFILE__DATARELATION = 6;
        static const int RECORDFILE__ABSTRACTION = 7;
        static const int RECORDFILE__DATAELEMENT = 8;
        static const int RECORDFILE__ITEMUNIT = 9;
        static const int RECORDFILE_FEATURE_COUNT = 10;

        // IDs for classifier ReferenceKey
        static const int REFERENCEKEY = 33;
        static const int REFERENCEKEY__ATTRIBUTE = 0;
        static const int REFERENCEKEY__ANNOTATION = 1;
        static const int REFERENCEKEY__STEREOTYPE = 2;
        static const int REFERENCEKEY__TAGGEDVALUE = 3;
        static const int REFERENCEKEY__NAME = 4;
        static const int REFERENCEKEY__SOURCE = 5;
        static const int REFERENCEKEY__DATARELATION = 6;
        static const int REFERENCEKEY__ABSTRACTION = 7;
        static const int REFERENCEKEY__IMPLEMENTATION = 8;
        static const int REFERENCEKEY_FEATURE_COUNT = 9;

        // IDs for classifier ReferenceTo
        static const int REFERENCETO = 34;
        static const int REFERENCETO__ATTRIBUTE = 0;
        static const int REFERENCETO__ANNOTATION = 1;
        static const int REFERENCETO__STEREOTYPE = 2;
        static const int REFERENCETO__TAGGEDVALUE = 3;
        static const int REFERENCETO__TO = 4;
        static const int REFERENCETO__FROM = 5;
        static const int REFERENCETO_FEATURE_COUNT = 6;

        // IDs for classifier RelationalSchema
        static const int RELATIONALSCHEMA = 35;
        static const int RELATIONALSCHEMA__ATTRIBUTE = 0;
        static const int RELATIONALSCHEMA__ANNOTATION = 1;
        static const int RELATIONALSCHEMA__STEREOTYPE = 2;
        static const int RELATIONALSCHEMA__TAGGEDVALUE = 3;
        static const int RELATIONALSCHEMA__NAME = 4;
        static const int RELATIONALSCHEMA__SOURCE = 5;
        static const int RELATIONALSCHEMA__DATARELATION = 6;
        static const int RELATIONALSCHEMA__ABSTRACTION = 7;
        static const int RELATIONALSCHEMA__DATAELEMENT = 8;
        static const int RELATIONALSCHEMA__CODEELEMENT = 9;
        static const int RELATIONALSCHEMA_FEATURE_COUNT = 10;

        // IDs for classifier RelationalTable
        static const int RELATIONALTABLE = 36;
        static const int RELATIONALTABLE__ATTRIBUTE = 0;
        static const int RELATIONALTABLE__ANNOTATION = 1;
        static const int RELATIONALTABLE__STEREOTYPE = 2;
        static const int RELATIONALTABLE__TAGGEDVALUE = 3;
        static const int RELATIONALTABLE__NAME = 4;
        static const int RELATIONALTABLE__SOURCE = 5;
        static const int RELATIONALTABLE__DATARELATION = 6;
        static const int RELATIONALTABLE__ABSTRACTION = 7;
        static const int RELATIONALTABLE__DATAELEMENT = 8;
        static const int RELATIONALTABLE__ITEMUNIT = 9;
        static const int RELATIONALTABLE_FEATURE_COUNT = 10;

        // IDs for classifier RelationalView
        static const int RELATIONALVIEW = 37;
        static const int RELATIONALVIEW__ATTRIBUTE = 0;
        static const int RELATIONALVIEW__ANNOTATION = 1;
        static const int RELATIONALVIEW__STEREOTYPE = 2;
        static const int RELATIONALVIEW__TAGGEDVALUE = 3;
        static const int RELATIONALVIEW__NAME = 4;
        static const int RELATIONALVIEW__SOURCE = 5;
        static const int RELATIONALVIEW__DATARELATION = 6;
        static const int RELATIONALVIEW__ABSTRACTION = 7;
        static const int RELATIONALVIEW__DATAELEMENT = 8;
        static const int RELATIONALVIEW__ITEMUNIT = 9;
        static const int RELATIONALVIEW_FEATURE_COUNT = 10;

        // IDs for classifier RestrictionOf
        static const int RESTRICTIONOF = 38;
        static const int RESTRICTIONOF__ATTRIBUTE = 0;
        static const int RESTRICTIONOF__ANNOTATION = 1;
        static const int RESTRICTIONOF__STEREOTYPE = 2;
        static const int RESTRICTIONOF__TAGGEDVALUE = 3;
        static const int RESTRICTIONOF__TO = 4;
        static const int RESTRICTIONOF__FROM = 5;
        static const int RESTRICTIONOF_FEATURE_COUNT = 6;

        // IDs for classifier SeqContent
        static const int SEQCONTENT = 39;
        static const int SEQCONTENT__ATTRIBUTE = 0;
        static const int SEQCONTENT__ANNOTATION = 1;
        static const int SEQCONTENT__STEREOTYPE = 2;
        static const int SEQCONTENT__TAGGEDVALUE = 3;
        static const int SEQCONTENT__NAME = 4;
        static const int SEQCONTENT__SOURCE = 5;
        static const int SEQCONTENT__DATARELATION = 6;
        static const int SEQCONTENT__ABSTRACTION = 7;
        static const int SEQCONTENT__CONTENTELEMENT = 8;
        static const int SEQCONTENT_FEATURE_COUNT = 9;

        // IDs for classifier SimpleContentType
        static const int SIMPLECONTENTTYPE = 40;
        static const int SIMPLECONTENTTYPE__ATTRIBUTE = 0;
        static const int SIMPLECONTENTTYPE__ANNOTATION = 1;
        static const int SIMPLECONTENTTYPE__STEREOTYPE = 2;
        static const int SIMPLECONTENTTYPE__TAGGEDVALUE = 3;
        static const int SIMPLECONTENTTYPE__NAME = 4;
        static const int SIMPLECONTENTTYPE__SOURCE = 5;
        static const int SIMPLECONTENTTYPE__DATARELATION = 6;
        static const int SIMPLECONTENTTYPE__ABSTRACTION = 7;
        static const int SIMPLECONTENTTYPE__CONTENTELEMENT = 8;
        static const int SIMPLECONTENTTYPE__TYPE = 9;
        static const int SIMPLECONTENTTYPE__KIND = 10;
        static const int SIMPLECONTENTTYPE_FEATURE_COUNT = 11;

        // IDs for classifier TypedBy
        static const int TYPEDBY = 41;
        static const int TYPEDBY__ATTRIBUTE = 0;
        static const int TYPEDBY__ANNOTATION = 1;
        static const int TYPEDBY__STEREOTYPE = 2;
        static const int TYPEDBY__TAGGEDVALUE = 3;
        static const int TYPEDBY__TO = 4;
        static const int TYPEDBY__FROM = 5;
        static const int TYPEDBY_FEATURE_COUNT = 6;

        // IDs for classifier UniqueKey
        static const int UNIQUEKEY = 42;
        static const int UNIQUEKEY__ATTRIBUTE = 0;
        static const int UNIQUEKEY__ANNOTATION = 1;
        static const int UNIQUEKEY__STEREOTYPE = 2;
        static const int UNIQUEKEY__TAGGEDVALUE = 3;
        static const int UNIQUEKEY__NAME = 4;
        static const int UNIQUEKEY__SOURCE = 5;
        static const int UNIQUEKEY__DATARELATION = 6;
        static const int UNIQUEKEY__ABSTRACTION = 7;
        static const int UNIQUEKEY__IMPLEMENTATION = 8;
        static const int UNIQUEKEY_FEATURE_COUNT = 9;

        // IDs for classifier WritesColumnSet
        static const int WRITESCOLUMNSET = 43;
        static const int WRITESCOLUMNSET__ATTRIBUTE = 0;
        static const int WRITESCOLUMNSET__ANNOTATION = 1;
        static const int WRITESCOLUMNSET__STEREOTYPE = 2;
        static const int WRITESCOLUMNSET__TAGGEDVALUE = 3;
        static const int WRITESCOLUMNSET__TO = 4;
        static const int WRITESCOLUMNSET__FROM = 5;
        static const int WRITESCOLUMNSET_FEATURE_COUNT = 6;

        // IDs for classifier XMLSchema
        static const int XMLSCHEMA = 44;
        static const int XMLSCHEMA__ATTRIBUTE = 0;
        static const int XMLSCHEMA__ANNOTATION = 1;
        static const int XMLSCHEMA__STEREOTYPE = 2;
        static const int XMLSCHEMA__TAGGEDVALUE = 3;
        static const int XMLSCHEMA__NAME = 4;
        static const int XMLSCHEMA__SOURCE = 5;
        static const int XMLSCHEMA__DATARELATION = 6;
        static const int XMLSCHEMA__ABSTRACTION = 7;
        static const int XMLSCHEMA__CONTENTELEMENT = 8;
        static const int XMLSCHEMA_FEATURE_COUNT = 9;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getDataModel();

        virtual ::ecore::EClass_ptr getAbstractDataElement();

        virtual ::ecore::EClass_ptr getDataResource();

        virtual ::ecore::EClass_ptr getIndexElement();

        virtual ::ecore::EClass_ptr getUniqueKey();

        virtual ::ecore::EClass_ptr getIndex();

        virtual ::ecore::EClass_ptr getAbstractDataRelationship();

        virtual ::ecore::EClass_ptr getKeyRelation();

        virtual ::ecore::EClass_ptr getReferenceKey();

        virtual ::ecore::EClass_ptr getDataContainer();

        virtual ::ecore::EClass_ptr getCatalog();

        virtual ::ecore::EClass_ptr getRelationalSchema();

        virtual ::ecore::EClass_ptr getColumnSet();

        virtual ::ecore::EClass_ptr getRelationalTable();

        virtual ::ecore::EClass_ptr getRelationalView();

        virtual ::ecore::EClass_ptr getRecordFile();

        virtual ::ecore::EClass_ptr getDataEvent();

        virtual ::ecore::EClass_ptr getXMLSchema();

        virtual ::ecore::EClass_ptr getAbstractContentElement();

        virtual ::ecore::EClass_ptr getComplexContentType();

        virtual ::ecore::EClass_ptr getAllContent();

        virtual ::ecore::EClass_ptr getSeqContent();

        virtual ::ecore::EClass_ptr getChoiceContent();

        virtual ::ecore::EClass_ptr getContentItem();

        virtual ::ecore::EClass_ptr getGroupContent();

        virtual ::ecore::EClass_ptr getContentRestriction();

        virtual ::ecore::EClass_ptr getSimpleContentType();

        virtual ::ecore::EClass_ptr getExtendedDataElement();

        virtual ::ecore::EClass_ptr getDataRelationship();

        virtual ::ecore::EClass_ptr getMixedContent();

        virtual ::ecore::EClass_ptr getContentReference();

        virtual ::ecore::EClass_ptr getDataAction();

        virtual ::ecore::EClass_ptr getReadsColumnSet();

        virtual ::ecore::EClass_ptr getContentAttribute();

        virtual ::ecore::EClass_ptr getTypedBy();

        virtual ::ecore::EClass_ptr getReferenceTo();

        virtual ::ecore::EClass_ptr getRestrictionOf();

        virtual ::ecore::EClass_ptr getExtensionTo();

        virtual ::ecore::EClass_ptr getDatatypeOf();

        virtual ::ecore::EClass_ptr getHasContent();

        virtual ::ecore::EClass_ptr getWritesColumnSet();

        virtual ::ecore::EClass_ptr getProducesDataEvent();

        virtual ::ecore::EClass_ptr getDataSegment();

        virtual ::ecore::EClass_ptr getContentElement();

        virtual ::ecore::EClass_ptr getManagesData();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getDataModel__dataElement();

        virtual ::ecore::EReference_ptr getAbstractDataElement__source();

        virtual ::ecore::EReference_ptr getAbstractDataElement__dataRelation();

        virtual ::ecore::EReference_ptr getAbstractDataElement__abstraction();

        virtual ::ecore::EReference_ptr getIndexElement__implementation();

        virtual ::ecore::EReference_ptr getKeyRelation__to();

        virtual ::ecore::EReference_ptr getKeyRelation__from();

        virtual ::ecore::EReference_ptr getDataContainer__dataElement();

        virtual ::ecore::EReference_ptr getRelationalSchema__codeElement();

        virtual ::ecore::EReference_ptr getColumnSet__itemUnit();

        virtual ::ecore::EAttribute_ptr getDataEvent__kind();

        virtual ::ecore::EReference_ptr getXMLSchema__contentElement();

        virtual ::ecore::EReference_ptr getComplexContentType__contentElement();

        virtual ::ecore::EReference_ptr getContentItem__type();

        virtual ::ecore::EReference_ptr getContentItem__contentElement();

        virtual ::ecore::EAttribute_ptr getContentRestriction__kind();

        virtual ::ecore::EAttribute_ptr getContentRestriction__value();

        virtual ::ecore::EReference_ptr getSimpleContentType__type();

        virtual ::ecore::EAttribute_ptr getSimpleContentType__kind();

        virtual ::ecore::EReference_ptr getDataRelationship__to();

        virtual ::ecore::EReference_ptr getDataRelationship__from();

        virtual ::ecore::EAttribute_ptr getDataAction__kind();

        virtual ::ecore::EReference_ptr getDataAction__implementation();

        virtual ::ecore::EReference_ptr getDataAction__dataElement();

        virtual ::ecore::EReference_ptr getReadsColumnSet__to();

        virtual ::ecore::EReference_ptr getReadsColumnSet__from();

        virtual ::ecore::EReference_ptr getTypedBy__to();

        virtual ::ecore::EReference_ptr getTypedBy__from();

        virtual ::ecore::EReference_ptr getReferenceTo__to();

        virtual ::ecore::EReference_ptr getReferenceTo__from();

        virtual ::ecore::EReference_ptr getRestrictionOf__to();

        virtual ::ecore::EReference_ptr getRestrictionOf__from();

        virtual ::ecore::EReference_ptr getExtensionTo__to();

        virtual ::ecore::EReference_ptr getExtensionTo__from();

        virtual ::ecore::EReference_ptr getDatatypeOf__to();

        virtual ::ecore::EReference_ptr getDatatypeOf__from();

        virtual ::ecore::EReference_ptr getHasContent__to();

        virtual ::ecore::EReference_ptr getHasContent__from();

        virtual ::ecore::EReference_ptr getWritesColumnSet__to();

        virtual ::ecore::EReference_ptr getWritesColumnSet__from();

        virtual ::ecore::EReference_ptr getProducesDataEvent__to();

        virtual ::ecore::EReference_ptr getProducesDataEvent__from();

        virtual ::ecore::EReference_ptr getManagesData__to();

        virtual ::ecore::EReference_ptr getManagesData__from();

    protected:

        static ::ecore::Ptr< DataPackage > s_instance;

        DataPackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AbstractContentElementEClass;
        ::ecore::EClass_ptr m_AbstractDataElementEClass;
        ::ecore::EClass_ptr m_AbstractDataRelationshipEClass;
        ::ecore::EClass_ptr m_AllContentEClass;
        ::ecore::EClass_ptr m_CatalogEClass;
        ::ecore::EClass_ptr m_ChoiceContentEClass;
        ::ecore::EClass_ptr m_ColumnSetEClass;
        ::ecore::EClass_ptr m_ComplexContentTypeEClass;
        ::ecore::EClass_ptr m_ContentAttributeEClass;
        ::ecore::EClass_ptr m_ContentElementEClass;
        ::ecore::EClass_ptr m_ContentItemEClass;
        ::ecore::EClass_ptr m_ContentReferenceEClass;
        ::ecore::EClass_ptr m_ContentRestrictionEClass;
        ::ecore::EClass_ptr m_DataActionEClass;
        ::ecore::EClass_ptr m_DataContainerEClass;
        ::ecore::EClass_ptr m_DataEventEClass;
        ::ecore::EClass_ptr m_DataModelEClass;
        ::ecore::EClass_ptr m_DataRelationshipEClass;
        ::ecore::EClass_ptr m_DataResourceEClass;
        ::ecore::EClass_ptr m_DataSegmentEClass;
        ::ecore::EClass_ptr m_DatatypeOfEClass;
        ::ecore::EClass_ptr m_ExtendedDataElementEClass;
        ::ecore::EClass_ptr m_ExtensionToEClass;
        ::ecore::EClass_ptr m_GroupContentEClass;
        ::ecore::EClass_ptr m_HasContentEClass;
        ::ecore::EClass_ptr m_IndexEClass;
        ::ecore::EClass_ptr m_IndexElementEClass;
        ::ecore::EClass_ptr m_KeyRelationEClass;
        ::ecore::EClass_ptr m_ManagesDataEClass;
        ::ecore::EClass_ptr m_MixedContentEClass;
        ::ecore::EClass_ptr m_ProducesDataEventEClass;
        ::ecore::EClass_ptr m_ReadsColumnSetEClass;
        ::ecore::EClass_ptr m_RecordFileEClass;
        ::ecore::EClass_ptr m_ReferenceKeyEClass;
        ::ecore::EClass_ptr m_ReferenceToEClass;
        ::ecore::EClass_ptr m_RelationalSchemaEClass;
        ::ecore::EClass_ptr m_RelationalTableEClass;
        ::ecore::EClass_ptr m_RelationalViewEClass;
        ::ecore::EClass_ptr m_RestrictionOfEClass;
        ::ecore::EClass_ptr m_SeqContentEClass;
        ::ecore::EClass_ptr m_SimpleContentTypeEClass;
        ::ecore::EClass_ptr m_TypedByEClass;
        ::ecore::EClass_ptr m_UniqueKeyEClass;
        ::ecore::EClass_ptr m_WritesColumnSetEClass;
        ::ecore::EClass_ptr m_XMLSchemaEClass;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_DataModel__dataElement;

        ::ecore::EReference_ptr m_AbstractDataElement__source;

        ::ecore::EReference_ptr m_AbstractDataElement__dataRelation;

        ::ecore::EReference_ptr m_AbstractDataElement__abstraction;

        ::ecore::EReference_ptr m_IndexElement__implementation;

        ::ecore::EReference_ptr m_KeyRelation__to;

        ::ecore::EReference_ptr m_KeyRelation__from;

        ::ecore::EReference_ptr m_DataContainer__dataElement;

        ::ecore::EReference_ptr m_RelationalSchema__codeElement;

        ::ecore::EReference_ptr m_ColumnSet__itemUnit;

        ::ecore::EAttribute_ptr m_DataEvent__kind;

        ::ecore::EReference_ptr m_XMLSchema__contentElement;

        ::ecore::EReference_ptr m_ComplexContentType__contentElement;

        ::ecore::EReference_ptr m_ContentItem__type;

        ::ecore::EReference_ptr m_ContentItem__contentElement;

        ::ecore::EAttribute_ptr m_ContentRestriction__kind;

        ::ecore::EAttribute_ptr m_ContentRestriction__value;

        ::ecore::EReference_ptr m_SimpleContentType__type;

        ::ecore::EAttribute_ptr m_SimpleContentType__kind;

        ::ecore::EReference_ptr m_DataRelationship__to;

        ::ecore::EReference_ptr m_DataRelationship__from;

        ::ecore::EAttribute_ptr m_DataAction__kind;

        ::ecore::EReference_ptr m_DataAction__implementation;

        ::ecore::EReference_ptr m_DataAction__dataElement;

        ::ecore::EReference_ptr m_ReadsColumnSet__to;

        ::ecore::EReference_ptr m_ReadsColumnSet__from;

        ::ecore::EReference_ptr m_TypedBy__to;

        ::ecore::EReference_ptr m_TypedBy__from;

        ::ecore::EReference_ptr m_ReferenceTo__to;

        ::ecore::EReference_ptr m_ReferenceTo__from;

        ::ecore::EReference_ptr m_RestrictionOf__to;

        ::ecore::EReference_ptr m_RestrictionOf__from;

        ::ecore::EReference_ptr m_ExtensionTo__to;

        ::ecore::EReference_ptr m_ExtensionTo__from;

        ::ecore::EReference_ptr m_DatatypeOf__to;

        ::ecore::EReference_ptr m_DatatypeOf__from;

        ::ecore::EReference_ptr m_HasContent__to;

        ::ecore::EReference_ptr m_HasContent__from;

        ::ecore::EReference_ptr m_WritesColumnSet__to;

        ::ecore::EReference_ptr m_WritesColumnSet__from;

        ::ecore::EReference_ptr m_ProducesDataEvent__to;

        ::ecore::EReference_ptr m_ProducesDataEvent__from;

        ::ecore::EReference_ptr m_ManagesData__to;

        ::ecore::EReference_ptr m_ManagesData__from;

    };

}
 // data
}// kdm

#endif // _KDM_DATAPACKAGE_HPP

