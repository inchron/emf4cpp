// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/StructureItemDispatcher.hpp
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

#ifndef KDM_STRUCTURE_ITEMDISPATCHER_HPP
#define KDM_STRUCTURE_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <kdm/structure.hpp>
#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace structure
    {

        template<class T>
        class EXPORT_KDM_DLL
    StructureItemDispatcher
    {
    public:
        StructureItemDispatcher() = default;
        ~StructureItemDispatcher() = default;

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
            if (eClass->getEPackage() != StructurePackage::_instance())
            {
                assert(!"The package of the eclass does not match the package of the dispatcher!");
                return;
            }

            switch (eClass->getClassifierID())
            {
                case StructurePackage::ABSTRACTSTRUCTUREELEMENT:
                {
                    auto derived = ::ecore::as< AbstractStructureElement >(obj);
                    _this()->T::work(derived, (AbstractStructureElement*)nullptr);
                }break;
                case StructurePackage::ABSTRACTSTRUCTURERELATIONSHIP:
                {
                    auto derived = ::ecore::as< AbstractStructureRelationship >(obj);
                    _this()->T::work(derived, (AbstractStructureRelationship*)nullptr);
                }break;
                case StructurePackage::ARCHITECTUREVIEW:
                {
                    auto derived = ::ecore::as< ArchitectureView >(obj);
                    _this()->T::work(derived, (ArchitectureView*)nullptr);
                }break;
                case StructurePackage::COMPONENT:
                {
                    auto derived = ::ecore::as< Component >(obj);
                    _this()->T::work(derived, (Component*)nullptr);
                }break;
                case StructurePackage::LAYER:
                {
                    auto derived = ::ecore::as< Layer >(obj);
                    _this()->T::work(derived, (Layer*)nullptr);
                }break;
                case StructurePackage::SOFTWARESYSTEM:
                {
                    auto derived = ::ecore::as< SoftwareSystem >(obj);
                    _this()->T::work(derived, (SoftwareSystem*)nullptr);
                }break;
                case StructurePackage::STRUCTUREELEMENT:
                {
                    auto derived = ::ecore::as< StructureElement >(obj);
                    _this()->T::work(derived, (StructureElement*)nullptr);
                }break;
                case StructurePackage::STRUCTUREMODEL:
                {
                    auto derived = ::ecore::as< StructureModel >(obj);
                    _this()->T::work(derived, (StructureModel*)nullptr);
                }break;
                case StructurePackage::STRUCTURERELATIONSHIP:
                {
                    auto derived = ::ecore::as< StructureRelationship >(obj);
                    _this()->T::work(derived, (StructureRelationship*)nullptr);
                }break;
                case StructurePackage::SUBSYSTEM:
                {
                    auto derived = ::ecore::as< Subsystem >(obj);
                    _this()->T::work(derived, (Subsystem*)nullptr);
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
 // structure
}// kdm

#endif // KDM_STRUCTURE_ITEMDISPATCHER_HPP
