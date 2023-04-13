// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/DataItemDispatcher.hpp
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

#ifndef KDM_DATA_ITEMDISPATCHER_HPP
#define KDM_DATA_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <kdm/data.hpp>
#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace data
    {

        template<class T>
        class EXPORT_KDM_DLL
    DataItemDispatcher
    {
    public:
        DataItemDispatcher() = default;
        ~DataItemDispatcher() = default;

        /** Clients need to overload and reimplement this work() method for every
         * class they want to handle. The second argument is a dummy argument to
         * disambiguate work methods in case of an inheritance hirarchy and
         * always contains a nullptr.
         * Note that in a class hierarchy classes may be shadowed by derived classes. */
        void work(const ::ecore::EObject_ptr&, ::ecore::EObject*)
        {}

        /** Entry function for the dispatch mechanism. */
        void enter(const ::ecore::EObject_ptr& obj)
        {
            auto eClass = obj->eClass();
            if (eClass->getEPackage() != DataPackage::_instance())
            {
                assert(!"The package of the eclass does not match the package of the dispatcher!");
                return;
            }

            switch (eClass->getClassifierID())
            {
                case DataPackage::ABSTRACTCONTENTELEMENT:
                {
                    auto derived = ::ecore::as< AbstractContentElement >(obj);
                    _this()->T::work(derived, (AbstractContentElement*)nullptr);
                }break;
                case DataPackage::ABSTRACTDATAELEMENT:
                {
                    auto derived = ::ecore::as< AbstractDataElement >(obj);
                    _this()->T::work(derived, (AbstractDataElement*)nullptr);
                }break;
                case DataPackage::ABSTRACTDATARELATIONSHIP:
                {
                    auto derived = ::ecore::as< AbstractDataRelationship >(obj);
                    _this()->T::work(derived, (AbstractDataRelationship*)nullptr);
                }break;
                case DataPackage::ALLCONTENT:
                {
                    auto derived = ::ecore::as< AllContent >(obj);
                    _this()->T::work(derived, (AllContent*)nullptr);
                }break;
                case DataPackage::CATALOG:
                {
                    auto derived = ::ecore::as< Catalog >(obj);
                    _this()->T::work(derived, (Catalog*)nullptr);
                }break;
                case DataPackage::CHOICECONTENT:
                {
                    auto derived = ::ecore::as< ChoiceContent >(obj);
                    _this()->T::work(derived, (ChoiceContent*)nullptr);
                }break;
                case DataPackage::COLUMNSET:
                {
                    auto derived = ::ecore::as< ColumnSet >(obj);
                    _this()->T::work(derived, (ColumnSet*)nullptr);
                }break;
                case DataPackage::COMPLEXCONTENTTYPE:
                {
                    auto derived = ::ecore::as< ComplexContentType >(obj);
                    _this()->T::work(derived, (ComplexContentType*)nullptr);
                }break;
                case DataPackage::CONTENTATTRIBUTE:
                {
                    auto derived = ::ecore::as< ContentAttribute >(obj);
                    _this()->T::work(derived, (ContentAttribute*)nullptr);
                }break;
                case DataPackage::CONTENTELEMENT:
                {
                    auto derived = ::ecore::as< ContentElement >(obj);
                    _this()->T::work(derived, (ContentElement*)nullptr);
                }break;
                case DataPackage::CONTENTITEM:
                {
                    auto derived = ::ecore::as< ContentItem >(obj);
                    _this()->T::work(derived, (ContentItem*)nullptr);
                }break;
                case DataPackage::CONTENTREFERENCE:
                {
                    auto derived = ::ecore::as< ContentReference >(obj);
                    _this()->T::work(derived, (ContentReference*)nullptr);
                }break;
                case DataPackage::CONTENTRESTRICTION:
                {
                    auto derived = ::ecore::as< ContentRestriction >(obj);
                    _this()->T::work(derived, (ContentRestriction*)nullptr);
                }break;
                case DataPackage::DATAACTION:
                {
                    auto derived = ::ecore::as< DataAction >(obj);
                    _this()->T::work(derived, (DataAction*)nullptr);
                }break;
                case DataPackage::DATACONTAINER:
                {
                    auto derived = ::ecore::as< DataContainer >(obj);
                    _this()->T::work(derived, (DataContainer*)nullptr);
                }break;
                case DataPackage::DATAEVENT:
                {
                    auto derived = ::ecore::as< DataEvent >(obj);
                    _this()->T::work(derived, (DataEvent*)nullptr);
                }break;
                case DataPackage::DATAMODEL:
                {
                    auto derived = ::ecore::as< DataModel >(obj);
                    _this()->T::work(derived, (DataModel*)nullptr);
                }break;
                case DataPackage::DATARELATIONSHIP:
                {
                    auto derived = ::ecore::as< DataRelationship >(obj);
                    _this()->T::work(derived, (DataRelationship*)nullptr);
                }break;
                case DataPackage::DATARESOURCE:
                {
                    auto derived = ::ecore::as< DataResource >(obj);
                    _this()->T::work(derived, (DataResource*)nullptr);
                }break;
                case DataPackage::DATASEGMENT:
                {
                    auto derived = ::ecore::as< DataSegment >(obj);
                    _this()->T::work(derived, (DataSegment*)nullptr);
                }break;
                case DataPackage::DATATYPEOF:
                {
                    auto derived = ::ecore::as< DatatypeOf >(obj);
                    _this()->T::work(derived, (DatatypeOf*)nullptr);
                }break;
                case DataPackage::EXTENDEDDATAELEMENT:
                {
                    auto derived = ::ecore::as< ExtendedDataElement >(obj);
                    _this()->T::work(derived, (ExtendedDataElement*)nullptr);
                }break;
                case DataPackage::EXTENSIONTO:
                {
                    auto derived = ::ecore::as< ExtensionTo >(obj);
                    _this()->T::work(derived, (ExtensionTo*)nullptr);
                }break;
                case DataPackage::GROUPCONTENT:
                {
                    auto derived = ::ecore::as< GroupContent >(obj);
                    _this()->T::work(derived, (GroupContent*)nullptr);
                }break;
                case DataPackage::HASCONTENT:
                {
                    auto derived = ::ecore::as< HasContent >(obj);
                    _this()->T::work(derived, (HasContent*)nullptr);
                }break;
                case DataPackage::INDEX:
                {
                    auto derived = ::ecore::as< Index >(obj);
                    _this()->T::work(derived, (Index*)nullptr);
                }break;
                case DataPackage::INDEXELEMENT:
                {
                    auto derived = ::ecore::as< IndexElement >(obj);
                    _this()->T::work(derived, (IndexElement*)nullptr);
                }break;
                case DataPackage::KEYRELATION:
                {
                    auto derived = ::ecore::as< KeyRelation >(obj);
                    _this()->T::work(derived, (KeyRelation*)nullptr);
                }break;
                case DataPackage::MANAGESDATA:
                {
                    auto derived = ::ecore::as< ManagesData >(obj);
                    _this()->T::work(derived, (ManagesData*)nullptr);
                }break;
                case DataPackage::MIXEDCONTENT:
                {
                    auto derived = ::ecore::as< MixedContent >(obj);
                    _this()->T::work(derived, (MixedContent*)nullptr);
                }break;
                case DataPackage::PRODUCESDATAEVENT:
                {
                    auto derived = ::ecore::as< ProducesDataEvent >(obj);
                    _this()->T::work(derived, (ProducesDataEvent*)nullptr);
                }break;
                case DataPackage::READSCOLUMNSET:
                {
                    auto derived = ::ecore::as< ReadsColumnSet >(obj);
                    _this()->T::work(derived, (ReadsColumnSet*)nullptr);
                }break;
                case DataPackage::RECORDFILE:
                {
                    auto derived = ::ecore::as< RecordFile >(obj);
                    _this()->T::work(derived, (RecordFile*)nullptr);
                }break;
                case DataPackage::REFERENCEKEY:
                {
                    auto derived = ::ecore::as< ReferenceKey >(obj);
                    _this()->T::work(derived, (ReferenceKey*)nullptr);
                }break;
                case DataPackage::REFERENCETO:
                {
                    auto derived = ::ecore::as< ReferenceTo >(obj);
                    _this()->T::work(derived, (ReferenceTo*)nullptr);
                }break;
                case DataPackage::RELATIONALSCHEMA:
                {
                    auto derived = ::ecore::as< RelationalSchema >(obj);
                    _this()->T::work(derived, (RelationalSchema*)nullptr);
                }break;
                case DataPackage::RELATIONALTABLE:
                {
                    auto derived = ::ecore::as< RelationalTable >(obj);
                    _this()->T::work(derived, (RelationalTable*)nullptr);
                }break;
                case DataPackage::RELATIONALVIEW:
                {
                    auto derived = ::ecore::as< RelationalView >(obj);
                    _this()->T::work(derived, (RelationalView*)nullptr);
                }break;
                case DataPackage::RESTRICTIONOF:
                {
                    auto derived = ::ecore::as< RestrictionOf >(obj);
                    _this()->T::work(derived, (RestrictionOf*)nullptr);
                }break;
                case DataPackage::SEQCONTENT:
                {
                    auto derived = ::ecore::as< SeqContent >(obj);
                    _this()->T::work(derived, (SeqContent*)nullptr);
                }break;
                case DataPackage::SIMPLECONTENTTYPE:
                {
                    auto derived = ::ecore::as< SimpleContentType >(obj);
                    _this()->T::work(derived, (SimpleContentType*)nullptr);
                }break;
                case DataPackage::TYPEDBY:
                {
                    auto derived = ::ecore::as< TypedBy >(obj);
                    _this()->T::work(derived, (TypedBy*)nullptr);
                }break;
                case DataPackage::UNIQUEKEY:
                {
                    auto derived = ::ecore::as< UniqueKey >(obj);
                    _this()->T::work(derived, (UniqueKey*)nullptr);
                }break;
                case DataPackage::WRITESCOLUMNSET:
                {
                    auto derived = ::ecore::as< WritesColumnSet >(obj);
                    _this()->T::work(derived, (WritesColumnSet*)nullptr);
                }break;
                case DataPackage::XMLSCHEMA:
                {
                    auto derived = ::ecore::as< XMLSchema >(obj);
                    _this()->T::work(derived, (XMLSchema*)nullptr);
                }break;
                default:
                break;
            }
        }

    private:
        /** Inline helper, should compile to simple offset adjustment. */
        T* _this()
        {   return static_cast<T*>(this);}

        /** Inline helper, should compile to simple offset adjustment. */
        const T* _this() const
        {   return static_cast<const T*>(this);}
    };

}
 // data
}// kdm

#endif // KDM_DATA_ITEMDISPATCHER_HPP
