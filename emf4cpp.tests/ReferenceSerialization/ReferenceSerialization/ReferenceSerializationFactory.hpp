// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ReferenceSerialization/ReferenceSerializationFactory.hpp
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

#ifndef _REFERENCESERIALIZATIONFACTORY_HPP
#define _REFERENCESERIALIZATIONFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <ReferenceSerialization.hpp>

#include <ReferenceSerialization/dllReferenceSerialization.hpp>

namespace ReferenceSerialization
{

    class EXPORT_REFERENCESERIALIZATION_DLL ReferenceSerializationFactory : public virtual ::ecore::EFactory
    {
    public:

        static ReferenceSerializationFactory_ptr _instance();
        static void _setFactoryInstance(const ReferenceSerializationFactory_ptr&);

        virtual Container_ptr createContainer();
        virtual Content_ptr createContent();
        virtual Child_ptr createChild();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< ReferenceSerializationFactory > s_holder;

        ReferenceSerializationFactory();

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

    template< > inline Container_ptr create< Container >()
    {
        auto eFactory =
                ReferenceSerializationPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ReferenceSerializationFactory* >(eFactory.get());
        return packageFactory->createContainer();
    }

    template< > inline Content_ptr create< Content >()
    {
        auto eFactory =
                ReferenceSerializationPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ReferenceSerializationFactory* >(eFactory.get());
        return packageFactory->createContent();
    }

    template< > inline Child_ptr create< Child >()
    {
        auto eFactory =
                ReferenceSerializationPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ReferenceSerializationFactory* >(eFactory.get());
        return packageFactory->createChild();
    }

} // ReferenceSerialization

#endif // _REFERENCESERIALIZATIONFACTORY_HPP

