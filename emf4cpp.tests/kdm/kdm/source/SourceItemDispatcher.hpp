// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceItemDispatcher.hpp
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

#ifndef KDM_SOURCE_ITEMDISPATCHER_HPP
#define KDM_SOURCE_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <kdm/source.hpp>
#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace source
    {

        template<class T>
        class EXPORT_KDM_DLL
    SourceItemDispatcher
    {
    public:
        SourceItemDispatcher() = default;
        ~SourceItemDispatcher() = default;

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
            if (eClass->getEPackage() != SourcePackage::_instance())
            {
                assert(!"The package of the eclass does not match the package of the dispatcher!");
                return;
            }

            switch (eClass->getClassifierID())
            {
                case SourcePackage::ABSTRACTINVENTORYELEMENT:
                {
                    auto derived = ::ecore::as< AbstractInventoryElement >(obj);
                    _this()->T::work(derived, (AbstractInventoryElement*)nullptr);
                }break;
                case SourcePackage::ABSTRACTINVENTORYRELATIONSHIP:
                {
                    auto derived = ::ecore::as< AbstractInventoryRelationship >(obj);
                    _this()->T::work(derived, (AbstractInventoryRelationship*)nullptr);
                }break;
                case SourcePackage::BINARYFILE:
                {
                    auto derived = ::ecore::as< BinaryFile >(obj);
                    _this()->T::work(derived, (BinaryFile*)nullptr);
                }break;
                case SourcePackage::CONFIGURATION:
                {
                    auto derived = ::ecore::as< Configuration >(obj);
                    _this()->T::work(derived, (Configuration*)nullptr);
                }break;
                case SourcePackage::DEPENDSON:
                {
                    auto derived = ::ecore::as< DependsOn >(obj);
                    _this()->T::work(derived, (DependsOn*)nullptr);
                }break;
                case SourcePackage::DIRECTORY:
                {
                    auto derived = ::ecore::as< Directory >(obj);
                    _this()->T::work(derived, (Directory*)nullptr);
                }break;
                case SourcePackage::EXECUTABLEFILE:
                {
                    auto derived = ::ecore::as< ExecutableFile >(obj);
                    _this()->T::work(derived, (ExecutableFile*)nullptr);
                }break;
                case SourcePackage::IMAGE:
                {
                    auto derived = ::ecore::as< Image >(obj);
                    _this()->T::work(derived, (Image*)nullptr);
                }break;
                case SourcePackage::INVENTORYCONTAINER:
                {
                    auto derived = ::ecore::as< InventoryContainer >(obj);
                    _this()->T::work(derived, (InventoryContainer*)nullptr);
                }break;
                case SourcePackage::INVENTORYELEMENT:
                {
                    auto derived = ::ecore::as< InventoryElement >(obj);
                    _this()->T::work(derived, (InventoryElement*)nullptr);
                }break;
                case SourcePackage::INVENTORYITEM:
                {
                    auto derived = ::ecore::as< InventoryItem >(obj);
                    _this()->T::work(derived, (InventoryItem*)nullptr);
                }break;
                case SourcePackage::INVENTORYMODEL:
                {
                    auto derived = ::ecore::as< InventoryModel >(obj);
                    _this()->T::work(derived, (InventoryModel*)nullptr);
                }break;
                case SourcePackage::INVENTORYRELATIONSHIP:
                {
                    auto derived = ::ecore::as< InventoryRelationship >(obj);
                    _this()->T::work(derived, (InventoryRelationship*)nullptr);
                }break;
                case SourcePackage::PROJECT:
                {
                    auto derived = ::ecore::as< Project >(obj);
                    _this()->T::work(derived, (Project*)nullptr);
                }break;
                case SourcePackage::RESOURCEDESCRIPTION:
                {
                    auto derived = ::ecore::as< ResourceDescription >(obj);
                    _this()->T::work(derived, (ResourceDescription*)nullptr);
                }break;
                case SourcePackage::SOURCEFILE:
                {
                    auto derived = ::ecore::as< SourceFile >(obj);
                    _this()->T::work(derived, (SourceFile*)nullptr);
                }break;
                case SourcePackage::SOURCEREF:
                {
                    auto derived = ::ecore::as< SourceRef >(obj);
                    _this()->T::work(derived, (SourceRef*)nullptr);
                }break;
                case SourcePackage::SOURCEREGION:
                {
                    auto derived = ::ecore::as< SourceRegion >(obj);
                    _this()->T::work(derived, (SourceRegion*)nullptr);
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
 // source
}// kdm

#endif // KDM_SOURCE_ITEMDISPATCHER_HPP
