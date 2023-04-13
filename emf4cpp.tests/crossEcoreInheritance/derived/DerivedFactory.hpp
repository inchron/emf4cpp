// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * derived/DerivedFactory.hpp
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

#ifndef _DERIVEDFACTORY_HPP
#define _DERIVEDFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <derived.hpp>

#include <derived/dllDerived.hpp>

namespace derived
{

    class EXPORT_DERIVED_DLL DerivedFactory : public virtual ::ecore::EFactory
    {
    public:

        static DerivedFactory_ptr _instance();
        static void _setFactoryInstance(const DerivedFactory_ptr&);

        virtual Derived01_ptr createDerived01();
        virtual Derived02_ptr createDerived02();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< DerivedFactory > s_holder;

        DerivedFactory();

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

    template< > inline Derived01_ptr create< Derived01 >()
    {
        auto eFactory = DerivedPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< DerivedFactory* >(eFactory.get());
        return packageFactory->createDerived01();
    }

    template< > inline Derived02_ptr create< Derived02 >()
    {
        auto eFactory = DerivedPackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< DerivedFactory* >(eFactory.get());
        return packageFactory->createDerived02();
    }

} // derived

#endif // _DERIVEDFACTORY_HPP

