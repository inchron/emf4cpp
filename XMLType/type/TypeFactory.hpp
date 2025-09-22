// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/TypeFactory.hpp
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

#ifndef _TYPEFACTORY_HPP
#define _TYPEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <type.hpp>

#include "dllType.hpp"

namespace type
{

    class EXPORT_TYPE_DLL TypeFactory : public virtual ::ecore::EFactory
    {
    public:

        static TypeFactory_ptr _instance();
        static void _setFactoryInstance(const TypeFactory_ptr&);

        virtual AnyType_ptr createAnyType();
        virtual ProcessingInstruction_ptr createProcessingInstruction();
        virtual SimpleAnyType_ptr createSimpleAnyType();
        virtual XMLTypeDocumentRoot_ptr createXMLTypeDocumentRoot();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< TypeFactory > s_holder;

        TypeFactory();

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

    template< > inline AnyType_ptr create< AnyType >()
    {
        auto eFactory = TypePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< TypeFactory* >(eFactory.get());
        return packageFactory->createAnyType();
    }

    template< > inline ProcessingInstruction_ptr create< ProcessingInstruction >()
    {
        auto eFactory = TypePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< TypeFactory* >(eFactory.get());
        return packageFactory->createProcessingInstruction();
    }

    template< > inline SimpleAnyType_ptr create< SimpleAnyType >()
    {
        auto eFactory = TypePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< TypeFactory* >(eFactory.get());
        return packageFactory->createSimpleAnyType();
    }

    template< > inline XMLTypeDocumentRoot_ptr create< XMLTypeDocumentRoot >()
    {
        auto eFactory = TypePackage::_instance()->getEFactoryInstance();
        auto packageFactory = dynamic_cast< TypeFactory* >(eFactory.get());
        return packageFactory->createXMLTypeDocumentRoot();
    }

} // type

#endif // _TYPEFACTORY_HPP

