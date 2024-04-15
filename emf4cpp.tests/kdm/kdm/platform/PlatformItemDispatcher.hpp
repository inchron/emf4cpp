// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/PlatformItemDispatcher.hpp
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

#ifndef KDM_PLATFORM_ITEMDISPATCHER_HPP
#define KDM_PLATFORM_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <kdm/platform.hpp>

namespace kdm
{
    namespace platform
    {

        template< class T >
        class PlatformItemDispatcher
        {
        public:
            PlatformItemDispatcher() = default;
            ~PlatformItemDispatcher() = default;

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
                if (eClass->getEPackage() != PlatformPackage::_instance())
                {
                    assert(
                            !"The package of the eclass does not match the package of the dispatcher!");
                    return;
                }

                switch (eClass->getClassifierID())
                {
                case PlatformPackage::ABSTRACTPLATFORMELEMENT:
                {
                    auto derived = ::ecore::as < AbstractPlatformElement
                            > (obj);
                    _this()->T::work(derived,
                            (AbstractPlatformElement*) nullptr);
                }
                    break;
                case PlatformPackage::ABSTRACTPLATFORMRELATIONSHIP:
                {
                    auto derived = ::ecore::as < AbstractPlatformRelationship
                            > (obj);
                    _this()->T::work(derived,
                            (AbstractPlatformRelationship*) nullptr);
                }
                    break;
                case PlatformPackage::BINDSTO:
                {
                    auto derived = ::ecore::as < BindsTo > (obj);
                    _this()->T::work(derived, (BindsTo*) nullptr);
                }
                    break;
                case PlatformPackage::DATAMANAGER:
                {
                    auto derived = ::ecore::as < DataManager > (obj);
                    _this()->T::work(derived, (DataManager*) nullptr);
                }
                    break;
                case PlatformPackage::DEFINEDBY:
                {
                    auto derived = ::ecore::as < DefinedBy > (obj);
                    _this()->T::work(derived, (DefinedBy*) nullptr);
                }
                    break;
                case PlatformPackage::DEPLOYEDCOMPONENT:
                {
                    auto derived = ::ecore::as < DeployedComponent > (obj);
                    _this()->T::work(derived, (DeployedComponent*) nullptr);
                }
                    break;
                case PlatformPackage::DEPLOYEDRESOURCE:
                {
                    auto derived = ::ecore::as < DeployedResource > (obj);
                    _this()->T::work(derived, (DeployedResource*) nullptr);
                }
                    break;
                case PlatformPackage::DEPLOYEDSOFTWARESYSTEM:
                {
                    auto derived = ::ecore::as < DeployedSoftwareSystem > (obj);
                    _this()->T::work(derived,
                            (DeployedSoftwareSystem*) nullptr);
                }
                    break;
                case PlatformPackage::EXECUTIONRESOURCE:
                {
                    auto derived = ::ecore::as < ExecutionResource > (obj);
                    _this()->T::work(derived, (ExecutionResource*) nullptr);
                }
                    break;
                case PlatformPackage::EXTERNALACTOR:
                {
                    auto derived = ::ecore::as < ExternalActor > (obj);
                    _this()->T::work(derived, (ExternalActor*) nullptr);
                }
                    break;
                case PlatformPackage::FILERESOURCE:
                {
                    auto derived = ::ecore::as < FileResource > (obj);
                    _this()->T::work(derived, (FileResource*) nullptr);
                }
                    break;
                case PlatformPackage::LOADS:
                {
                    auto derived = ::ecore::as < Loads > (obj);
                    _this()->T::work(derived, (Loads*) nullptr);
                }
                    break;
                case PlatformPackage::LOCKRESOURCE:
                {
                    auto derived = ::ecore::as < LockResource > (obj);
                    _this()->T::work(derived, (LockResource*) nullptr);
                }
                    break;
                case PlatformPackage::MACHINE:
                {
                    auto derived = ::ecore::as < Machine > (obj);
                    _this()->T::work(derived, (Machine*) nullptr);
                }
                    break;
                case PlatformPackage::MANAGESRESOURCE:
                {
                    auto derived = ::ecore::as < ManagesResource > (obj);
                    _this()->T::work(derived, (ManagesResource*) nullptr);
                }
                    break;
                case PlatformPackage::MARSHALLEDRESOURCE:
                {
                    auto derived = ::ecore::as < MarshalledResource > (obj);
                    _this()->T::work(derived, (MarshalledResource*) nullptr);
                }
                    break;
                case PlatformPackage::MESSAGINGRESOURCE:
                {
                    auto derived = ::ecore::as < MessagingResource > (obj);
                    _this()->T::work(derived, (MessagingResource*) nullptr);
                }
                    break;
                case PlatformPackage::NAMINGRESOURCE:
                {
                    auto derived = ::ecore::as < NamingResource > (obj);
                    _this()->T::work(derived, (NamingResource*) nullptr);
                }
                    break;
                case PlatformPackage::PLATFORMACTION:
                {
                    auto derived = ::ecore::as < PlatformAction > (obj);
                    _this()->T::work(derived, (PlatformAction*) nullptr);
                }
                    break;
                case PlatformPackage::PLATFORMELEMENT:
                {
                    auto derived = ::ecore::as < PlatformElement > (obj);
                    _this()->T::work(derived, (PlatformElement*) nullptr);
                }
                    break;
                case PlatformPackage::PLATFORMEVENT:
                {
                    auto derived = ::ecore::as < PlatformEvent > (obj);
                    _this()->T::work(derived, (PlatformEvent*) nullptr);
                }
                    break;
                case PlatformPackage::PLATFORMMODEL:
                {
                    auto derived = ::ecore::as < PlatformModel > (obj);
                    _this()->T::work(derived, (PlatformModel*) nullptr);
                }
                    break;
                case PlatformPackage::PLATFORMRELATIONSHIP:
                {
                    auto derived = ::ecore::as < PlatformRelationship > (obj);
                    _this()->T::work(derived, (PlatformRelationship*) nullptr);
                }
                    break;
                case PlatformPackage::PROCESS:
                {
                    auto derived = ::ecore::as < Process > (obj);
                    _this()->T::work(derived, (Process*) nullptr);
                }
                    break;
                case PlatformPackage::READSRESOURCE:
                {
                    auto derived = ::ecore::as < ReadsResource > (obj);
                    _this()->T::work(derived, (ReadsResource*) nullptr);
                }
                    break;
                case PlatformPackage::REQUIRES:
                {
                    auto derived = ::ecore::as < Requires > (obj);
                    _this()->T::work(derived, (Requires*) nullptr);
                }
                    break;
                case PlatformPackage::RESOURCETYPE:
                {
                    auto derived = ::ecore::as < ResourceType > (obj);
                    _this()->T::work(derived, (ResourceType*) nullptr);
                }
                    break;
                case PlatformPackage::RUNTIMERESOURCE:
                {
                    auto derived = ::ecore::as < RuntimeResource > (obj);
                    _this()->T::work(derived, (RuntimeResource*) nullptr);
                }
                    break;
                case PlatformPackage::SPAWNS:
                {
                    auto derived = ::ecore::as < Spawns > (obj);
                    _this()->T::work(derived, (Spawns*) nullptr);
                }
                    break;
                case PlatformPackage::STREAMRESOURCE:
                {
                    auto derived = ::ecore::as < StreamResource > (obj);
                    _this()->T::work(derived, (StreamResource*) nullptr);
                }
                    break;
                case PlatformPackage::THREAD:
                {
                    auto derived = ::ecore::as < Thread > (obj);
                    _this()->T::work(derived, (Thread*) nullptr);
                }
                    break;
                case PlatformPackage::WRITESRESOURCE:
                {
                    auto derived = ::ecore::as < WritesResource > (obj);
                    _this()->T::work(derived, (WritesResource*) nullptr);
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

    } // platform
} // kdm

#endif // KDM_PLATFORM_ITEMDISPATCHER_HPP
