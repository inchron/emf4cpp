// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildItemDispatcher.hpp
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

#ifndef KDM_BUILD_ITEMDISPATCHER_HPP
#define KDM_BUILD_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <kdm/build.hpp>

namespace kdm
{
    namespace build
    {

        template< class T >
        class BuildItemDispatcher
        {
        public:
            BuildItemDispatcher() = default;
            ~BuildItemDispatcher() = default;

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
                if (eClass->getEPackage() != BuildPackage::_instance())
                {
                    assert(
                            !"The package of the eclass does not match the package of the dispatcher!");
                    return;
                }

                switch (eClass->getClassifierID())
                {
                case BuildPackage::ABSTRACTBUILDELEMENT:
                {
                    auto derived = ::ecore::as < AbstractBuildElement > (obj);
                    _this()->T::work(derived, (AbstractBuildElement*) nullptr);
                }
                    break;
                case BuildPackage::ABSTRACTBUILDRELATIONSHIP:
                {
                    auto derived = ::ecore::as < AbstractBuildRelationship
                            > (obj);
                    _this()->T::work(derived,
                            (AbstractBuildRelationship*) nullptr);
                }
                    break;
                case BuildPackage::BUILDCOMPONENT:
                {
                    auto derived = ::ecore::as < BuildComponent > (obj);
                    _this()->T::work(derived, (BuildComponent*) nullptr);
                }
                    break;
                case BuildPackage::BUILDDESCRIPTION:
                {
                    auto derived = ::ecore::as < BuildDescription > (obj);
                    _this()->T::work(derived, (BuildDescription*) nullptr);
                }
                    break;
                case BuildPackage::BUILDELEMENT:
                {
                    auto derived = ::ecore::as < BuildElement > (obj);
                    _this()->T::work(derived, (BuildElement*) nullptr);
                }
                    break;
                case BuildPackage::BUILDMODEL:
                {
                    auto derived = ::ecore::as < BuildModel > (obj);
                    _this()->T::work(derived, (BuildModel*) nullptr);
                }
                    break;
                case BuildPackage::BUILDPRODUCT:
                {
                    auto derived = ::ecore::as < BuildProduct > (obj);
                    _this()->T::work(derived, (BuildProduct*) nullptr);
                }
                    break;
                case BuildPackage::BUILDRELATIONSHIP:
                {
                    auto derived = ::ecore::as < BuildRelationship > (obj);
                    _this()->T::work(derived, (BuildRelationship*) nullptr);
                }
                    break;
                case BuildPackage::BUILDRESOURCE:
                {
                    auto derived = ::ecore::as < BuildResource > (obj);
                    _this()->T::work(derived, (BuildResource*) nullptr);
                }
                    break;
                case BuildPackage::BUILDSTEP:
                {
                    auto derived = ::ecore::as < BuildStep > (obj);
                    _this()->T::work(derived, (BuildStep*) nullptr);
                }
                    break;
                case BuildPackage::CONSUMES:
                {
                    auto derived = ::ecore::as < Consumes > (obj);
                    _this()->T::work(derived, (Consumes*) nullptr);
                }
                    break;
                case BuildPackage::DESCRIBEDBY:
                {
                    auto derived = ::ecore::as < DescribedBy > (obj);
                    _this()->T::work(derived, (DescribedBy*) nullptr);
                }
                    break;
                case BuildPackage::LIBRARY:
                {
                    auto derived = ::ecore::as < Library > (obj);
                    _this()->T::work(derived, (Library*) nullptr);
                }
                    break;
                case BuildPackage::LINKSTO:
                {
                    auto derived = ::ecore::as < LinksTo > (obj);
                    _this()->T::work(derived, (LinksTo*) nullptr);
                }
                    break;
                case BuildPackage::PRODUCES:
                {
                    auto derived = ::ecore::as < Produces > (obj);
                    _this()->T::work(derived, (Produces*) nullptr);
                }
                    break;
                case BuildPackage::SUPPLIEDBY:
                {
                    auto derived = ::ecore::as < SuppliedBy > (obj);
                    _this()->T::work(derived, (SuppliedBy*) nullptr);
                }
                    break;
                case BuildPackage::SUPPLIER:
                {
                    auto derived = ::ecore::as < Supplier > (obj);
                    _this()->T::work(derived, (Supplier*) nullptr);
                }
                    break;
                case BuildPackage::SUPPORTEDBY:
                {
                    auto derived = ::ecore::as < SupportedBy > (obj);
                    _this()->T::work(derived, (SupportedBy*) nullptr);
                }
                    break;
                case BuildPackage::SYMBOLICLINK:
                {
                    auto derived = ::ecore::as < SymbolicLink > (obj);
                    _this()->T::work(derived, (SymbolicLink*) nullptr);
                }
                    break;
                case BuildPackage::TOOL:
                {
                    auto derived = ::ecore::as < Tool > (obj);
                    _this()->T::work(derived, (Tool*) nullptr);
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

    } // build
} // kdm

#endif // KDM_BUILD_ITEMDISPATCHER_HPP
