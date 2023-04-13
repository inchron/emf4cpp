// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/KdmItemDispatcher.hpp
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

#ifndef KDM_KDM_ITEMDISPATCHER_HPP
#define KDM_KDM_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <kdm/kdm.hpp>
#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace kdm
    {

        template<class T>
        class EXPORT_KDM_DLL
    KdmItemDispatcher
    {
    public:
        KdmItemDispatcher() = default;
        ~KdmItemDispatcher() = default;

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
            if (eClass->getEPackage() != KdmPackage::_instance())
            {
                assert(!"The package of the eclass does not match the package of the dispatcher!");
                return;
            }

            switch (eClass->getClassifierID())
            {
                case KdmPackage::ANNOTATION:
                {
                    auto derived = ::ecore::as< Annotation >(obj);
                    _this()->T::work(derived, (Annotation*)nullptr);
                }break;
                case KdmPackage::ATTRIBUTE:
                {
                    auto derived = ::ecore::as< Attribute >(obj);
                    _this()->T::work(derived, (Attribute*)nullptr);
                }break;
                case KdmPackage::AUDIT:
                {
                    auto derived = ::ecore::as< Audit >(obj);
                    _this()->T::work(derived, (Audit*)nullptr);
                }break;
                case KdmPackage::EXTENDEDVALUE:
                {
                    auto derived = ::ecore::as< ExtendedValue >(obj);
                    _this()->T::work(derived, (ExtendedValue*)nullptr);
                }break;
                case KdmPackage::EXTENSIONFAMILY:
                {
                    auto derived = ::ecore::as< ExtensionFamily >(obj);
                    _this()->T::work(derived, (ExtensionFamily*)nullptr);
                }break;
                case KdmPackage::KDMFRAMEWORK:
                {
                    auto derived = ::ecore::as< KDMFramework >(obj);
                    _this()->T::work(derived, (KDMFramework*)nullptr);
                }break;
                case KdmPackage::KDMMODEL:
                {
                    auto derived = ::ecore::as< KDMModel >(obj);
                    _this()->T::work(derived, (KDMModel*)nullptr);
                }break;
                case KdmPackage::SEGMENT:
                {
                    auto derived = ::ecore::as< Segment >(obj);
                    _this()->T::work(derived, (Segment*)nullptr);
                }break;
                case KdmPackage::STEREOTYPE:
                {
                    auto derived = ::ecore::as< Stereotype >(obj);
                    _this()->T::work(derived, (Stereotype*)nullptr);
                }break;
                case KdmPackage::TAGDEFINITION:
                {
                    auto derived = ::ecore::as< TagDefinition >(obj);
                    _this()->T::work(derived, (TagDefinition*)nullptr);
                }break;
                case KdmPackage::TAGGEDREF:
                {
                    auto derived = ::ecore::as< TaggedRef >(obj);
                    _this()->T::work(derived, (TaggedRef*)nullptr);
                }break;
                case KdmPackage::TAGGEDVALUE:
                {
                    auto derived = ::ecore::as< TaggedValue >(obj);
                    _this()->T::work(derived, (TaggedValue*)nullptr);
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
 // kdm
}// kdm

#endif // KDM_KDM_ITEMDISPATCHER_HPP
