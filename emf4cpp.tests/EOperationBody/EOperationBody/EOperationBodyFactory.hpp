// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * EOperationBody/EOperationBodyFactory.hpp
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

#ifndef _EOPERATIONBODYFACTORY_HPP
#define _EOPERATIONBODYFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <EOperationBody.hpp>

#include "dllEOperationBody.hpp"

namespace EOperationBody
{

    class EXPORT_EOPERATIONBODY_DLL EOperationBodyFactory : public virtual ::ecore::EFactory
    {
    public:

        static EOperationBodyFactory_ptr _instance();
        static void _setFactoryInstance(const EOperationBodyFactory_ptr&);

        virtual Integer_ptr createInteger();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< EOperationBodyFactory > s_holder;

        EOperationBodyFactory();

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

    template< > inline Integer_ptr create< Integer >()
    {
        auto eFactory =
                EOperationBodyPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< EOperationBodyFactory* >(eFactory.get());
        return packageFactory->createInteger();
    }

} // EOperationBody

#endif // _EOPERATIONBODYFACTORY_HPP

