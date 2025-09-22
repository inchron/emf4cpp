// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/base2/Base2Factory.hpp
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

#ifndef _BASE_BASE1_BASE2FACTORY_HPP
#define _BASE_BASE1_BASE2FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <base/base1/base2.hpp>

#include "../../dllBase.hpp"

namespace base
{
    namespace base1
    {
        namespace base2
        {

            class EXPORT_BASE_DLL Base2Factory : public virtual ::ecore::EFactory
            {
            public:

                static Base2Factory_ptr _instance();
                static void _setFactoryInstance(const Base2Factory_ptr&);

                virtual Base20_ptr createBase20();

                virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
                virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
                virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

            protected:

                static ::ecore::Ptr< Base2Factory > s_holder;

                Base2Factory();

            };

            /** An object creation helper
             *
             * Usage (add namespaces as required):
             *   auto p = create<MyClass>();
             *
             */
            template< class T > inline ::ecore::Ptr< T > create()
            {
                return ::ecore::Ptr< T >();
            }

            template< > inline Base20_ptr create< Base20 >()
            {
                auto eFactory =
                        Base2Package::_instance()->getEFactoryInstance();
                auto packageFactory =
                        dynamic_cast< Base2Factory* >(eFactory.get());
                return packageFactory->createBase20();
            }

        } // base2
    } // base1
} // base

#endif // _BASE_BASE1_BASE2FACTORY_HPP

