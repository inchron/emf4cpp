// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/event/EventItemDispatcher.hpp
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

#ifndef KDM_EVENT_ITEMDISPATCHER_HPP
#define KDM_EVENT_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <kdm/event.hpp>

namespace kdm
{
    namespace event
    {

        template< class T >
        class EventItemDispatcher
        {
        public:
            EventItemDispatcher() = default;
            ~EventItemDispatcher() = default;

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
                if (eClass->getEPackage() != EventPackage::_instance())
                {
                    assert(
                            !"The package of the eclass does not match the package of the dispatcher!");
                    return;
                }

                switch (eClass->getClassifierID())
                {
                case EventPackage::ABSTRACTEVENTELEMENT:
                {
                    auto derived = ::ecore::as < AbstractEventElement > (obj);
                    _this()->T::work(derived, (AbstractEventElement*) nullptr);
                }
                    break;
                case EventPackage::ABSTRACTEVENTRELATIONSHIP:
                {
                    auto derived = ::ecore::as < AbstractEventRelationship
                            > (obj);
                    _this()->T::work(derived,
                            (AbstractEventRelationship*) nullptr);
                }
                    break;
                case EventPackage::CONSUMESEVENT:
                {
                    auto derived = ::ecore::as < ConsumesEvent > (obj);
                    _this()->T::work(derived, (ConsumesEvent*) nullptr);
                }
                    break;
                case EventPackage::EVENT:
                {
                    auto derived = ::ecore::as < Event > (obj);
                    _this()->T::work(derived, (Event*) nullptr);
                }
                    break;
                case EventPackage::EVENTACTION:
                {
                    auto derived = ::ecore::as < EventAction > (obj);
                    _this()->T::work(derived, (EventAction*) nullptr);
                }
                    break;
                case EventPackage::EVENTELEMENT:
                {
                    auto derived = ::ecore::as < EventElement > (obj);
                    _this()->T::work(derived, (EventElement*) nullptr);
                }
                    break;
                case EventPackage::EVENTMODEL:
                {
                    auto derived = ::ecore::as < EventModel > (obj);
                    _this()->T::work(derived, (EventModel*) nullptr);
                }
                    break;
                case EventPackage::EVENTRELATIONSHIP:
                {
                    auto derived = ::ecore::as < EventRelationship > (obj);
                    _this()->T::work(derived, (EventRelationship*) nullptr);
                }
                    break;
                case EventPackage::EVENTRESOURCE:
                {
                    auto derived = ::ecore::as < EventResource > (obj);
                    _this()->T::work(derived, (EventResource*) nullptr);
                }
                    break;
                case EventPackage::HASSTATE:
                {
                    auto derived = ::ecore::as < HasState > (obj);
                    _this()->T::work(derived, (HasState*) nullptr);
                }
                    break;
                case EventPackage::INITIALSTATE:
                {
                    auto derived = ::ecore::as < InitialState > (obj);
                    _this()->T::work(derived, (InitialState*) nullptr);
                }
                    break;
                case EventPackage::NEXTSTATE:
                {
                    auto derived = ::ecore::as < NextState > (obj);
                    _this()->T::work(derived, (NextState*) nullptr);
                }
                    break;
                case EventPackage::ONENTRY:
                {
                    auto derived = ::ecore::as < OnEntry > (obj);
                    _this()->T::work(derived, (OnEntry*) nullptr);
                }
                    break;
                case EventPackage::ONEXIT:
                {
                    auto derived = ::ecore::as < OnExit > (obj);
                    _this()->T::work(derived, (OnExit*) nullptr);
                }
                    break;
                case EventPackage::PRODUCESEVENT:
                {
                    auto derived = ::ecore::as < ProducesEvent > (obj);
                    _this()->T::work(derived, (ProducesEvent*) nullptr);
                }
                    break;
                case EventPackage::READSSTATE:
                {
                    auto derived = ::ecore::as < ReadsState > (obj);
                    _this()->T::work(derived, (ReadsState*) nullptr);
                }
                    break;
                case EventPackage::STATE:
                {
                    auto derived = ::ecore::as < State > (obj);
                    _this()->T::work(derived, (State*) nullptr);
                }
                    break;
                case EventPackage::TRANSITION:
                {
                    auto derived = ::ecore::as < Transition > (obj);
                    _this()->T::work(derived, (Transition*) nullptr);
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

    } // event
} // kdm

#endif // KDM_EVENT_ITEMDISPATCHER_HPP
