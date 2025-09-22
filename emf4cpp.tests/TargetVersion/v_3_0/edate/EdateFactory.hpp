// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * v_3_0/edate/EdateFactory.hpp
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

#ifndef _V_3_0_EDATEFACTORY_HPP
#define _V_3_0_EDATEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <v_3_0/edate.hpp>

#include "dllEdate.hpp"

namespace v_3_0
{
    namespace edate
    {

        class EXPORT_V_3_0_EDATE_DLL EdateFactory : public virtual ::ecore::EFactory
        {
        public:

            static EdateFactory_ptr _instance();
            static void _setFactoryInstance(const EdateFactory_ptr&);

            virtual Person_ptr createPerson();
            virtual Apollo11_ptr createApollo11();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< EdateFactory > s_holder;

            EdateFactory();

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

        template< > inline Person_ptr create< Person >()
        {
            auto eFactory = EdatePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EdateFactory* >(eFactory.get());
            return packageFactory->createPerson();
        }

        template< > inline Apollo11_ptr create< Apollo11 >()
        {
            auto eFactory = EdatePackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< EdateFactory* >(eFactory.get());
            return packageFactory->createApollo11();
        }

    } // edate
} // v_3_0

#endif // _V_3_0_EDATEFACTORY_HPP

