// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * nil/NilItemDispatcher.hpp
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

#ifndef NIL_ITEMDISPATCHER_HPP
#define NIL_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <nil.hpp>

namespace nil
{

    template< class T >
    class NilItemDispatcher
    {
    public:
        NilItemDispatcher() = default;
        ~NilItemDispatcher() = default;

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
            if (eClass->getEPackage() != NilPackage::_instance())
            {
                assert(
                        !"The package of the eclass does not match the package of the dispatcher!");
                return;
            }

            switch (eClass->getClassifierID())
            {
            case NilPackage::ROOT:
            {
                auto derived = ::ecore::as < Root > (obj);
                _this()->T::work(derived, (Root*) nullptr);
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

} // nil

#endif // NIL_ITEMDISPATCHER_HPP
