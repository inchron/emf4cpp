// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/BaseFactory.hpp
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

#ifndef _BASEFACTORY_HPP
#define _BASEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <base.hpp>

#include "dllBase.hpp"

namespace base
{

    class EXPORT_BASE_DLL BaseFactory : public virtual ::ecore::EFactory
    {
    public:

        static BaseFactory_ptr _instance();
        static void _setFactoryInstance(const BaseFactory_ptr&);

        virtual Base01_ptr createBase01();
        virtual Base02_ptr createBase02();
        virtual Base03_ptr createBase03();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< BaseFactory > s_holder;

        BaseFactory();

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

    template< > inline Base01_ptr create< Base01 >()
    {
        auto eFactory = BasePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< BaseFactory* >(eFactory.get());
        return packageFactory->createBase01();
    }

    template< > inline Base02_ptr create< Base02 >()
    {
        auto eFactory = BasePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< BaseFactory* >(eFactory.get());
        return packageFactory->createBase02();
    }

    template< > inline Base03_ptr create< Base03 >()
    {
        auto eFactory = BasePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< BaseFactory* >(eFactory.get());
        return packageFactory->createBase03();
    }

} // base

#endif // _BASEFACTORY_HPP

