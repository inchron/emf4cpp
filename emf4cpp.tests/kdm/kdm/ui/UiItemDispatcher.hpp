// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UiItemDispatcher.hpp
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

#ifndef KDM_UI_ITEMDISPATCHER_HPP
#define KDM_UI_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <kdm/ui.hpp>

namespace kdm
{
    namespace ui
    {

        template< class T >
        class UiItemDispatcher
        {
        public:
            UiItemDispatcher() = default;
            ~UiItemDispatcher() = default;

            /** Clients need to overload and reimplement this work() method for every
             * class they want to handle. The second argument is a dummy argument to
             * disambiguate work methods in case of an inheritance hirarchy and
             * always contains a nullptr.
             * Note that in a class hierarchy classes may be shadowed by derived classes. */
            void work(const ::ecore::EObject_ptr&, ::ecore::EObject*)
            {
            }

            /** Entry function for the dispatch mechanism. */
            void enter(const ::ecore::EObject_ptr &obj)
            {
                auto eClass = obj->eClass();
                if (eClass->getEPackage() != UiPackage::_instance())
                {
                    assert(
                            !"The package of the eclass does not match the package of the dispatcher!");
                    return;
                }

                switch (eClass->getClassifierID())
                {
                case UiPackage::ABSTRACTUIELEMENT:
                {
                    auto derived = ::ecore::as < AbstractUIElement > (obj);
                    _this()->T::work(derived, (AbstractUIElement*) nullptr);
                }
                    break;
                case UiPackage::ABSTRACTUIRELATIONSHIP:
                {
                    auto derived = ::ecore::as < AbstractUIRelationship > (obj);
                    _this()->T::work(derived,
                            (AbstractUIRelationship*) nullptr);
                }
                    break;
                case UiPackage::DISPLAYS:
                {
                    auto derived = ::ecore::as < Displays > (obj);
                    _this()->T::work(derived, (Displays*) nullptr);
                }
                    break;
                case UiPackage::DISPLAYSIMAGE:
                {
                    auto derived = ::ecore::as < DisplaysImage > (obj);
                    _this()->T::work(derived, (DisplaysImage*) nullptr);
                }
                    break;
                case UiPackage::MANAGESUI:
                {
                    auto derived = ::ecore::as < ManagesUI > (obj);
                    _this()->T::work(derived, (ManagesUI*) nullptr);
                }
                    break;
                case UiPackage::READSUI:
                {
                    auto derived = ::ecore::as < ReadsUI > (obj);
                    _this()->T::work(derived, (ReadsUI*) nullptr);
                }
                    break;
                case UiPackage::REPORT:
                {
                    auto derived = ::ecore::as < Report > (obj);
                    _this()->T::work(derived, (Report*) nullptr);
                }
                    break;
                case UiPackage::SCREEN:
                {
                    auto derived = ::ecore::as < Screen > (obj);
                    _this()->T::work(derived, (Screen*) nullptr);
                }
                    break;
                case UiPackage::UIACTION:
                {
                    auto derived = ::ecore::as < UIAction > (obj);
                    _this()->T::work(derived, (UIAction*) nullptr);
                }
                    break;
                case UiPackage::UIDISPLAY:
                {
                    auto derived = ::ecore::as < UIDisplay > (obj);
                    _this()->T::work(derived, (UIDisplay*) nullptr);
                }
                    break;
                case UiPackage::UIELEMENT:
                {
                    auto derived = ::ecore::as < UIElement > (obj);
                    _this()->T::work(derived, (UIElement*) nullptr);
                }
                    break;
                case UiPackage::UIEVENT:
                {
                    auto derived = ::ecore::as < UIEvent > (obj);
                    _this()->T::work(derived, (UIEvent*) nullptr);
                }
                    break;
                case UiPackage::UIFIELD:
                {
                    auto derived = ::ecore::as < UIField > (obj);
                    _this()->T::work(derived, (UIField*) nullptr);
                }
                    break;
                case UiPackage::UIFLOW:
                {
                    auto derived = ::ecore::as < UIFlow > (obj);
                    _this()->T::work(derived, (UIFlow*) nullptr);
                }
                    break;
                case UiPackage::UILAYOUT:
                {
                    auto derived = ::ecore::as < UILayout > (obj);
                    _this()->T::work(derived, (UILayout*) nullptr);
                }
                    break;
                case UiPackage::UIMODEL:
                {
                    auto derived = ::ecore::as < UIModel > (obj);
                    _this()->T::work(derived, (UIModel*) nullptr);
                }
                    break;
                case UiPackage::UIRELATIONSHIP:
                {
                    auto derived = ::ecore::as < UIRelationship > (obj);
                    _this()->T::work(derived, (UIRelationship*) nullptr);
                }
                    break;
                case UiPackage::UIRESOURCE:
                {
                    auto derived = ::ecore::as < UIResource > (obj);
                    _this()->T::work(derived, (UIResource*) nullptr);
                }
                    break;
                case UiPackage::WRITESUI:
                {
                    auto derived = ::ecore::as < WritesUI > (obj);
                    _this()->T::work(derived, (WritesUI*) nullptr);
                }
                    break;
                default:
                    break;
                }
            }

        private:
            /** Inline helper, should compile to simple offset adjustment. */
            T* _this()
            {
                return static_cast< T* >(this);
            }

            /** Inline helper, should compile to simple offset adjustment. */
            const T* _this() const
            {
                return static_cast< const T* >(this);
            }
        };

    } // ui
} // kdm

#endif // KDM_UI_ITEMDISPATCHER_HPP
