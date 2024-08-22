// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/kdm/KdmFactory.hpp
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

#ifndef _KDM_KDMFACTORY_HPP
#define _KDM_KDMFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/kdm.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace kdm
    {

        class EXPORT_KDM_DLL KdmFactory : public virtual ::ecore::EFactory
        {
        public:

            static KdmFactory_ptr _instance();
            static void _setFactoryInstance(const KdmFactory_ptr&);

            virtual KDMFramework_ptr createKDMFramework();
            virtual KDMModel_ptr createKDMModel();
            virtual Audit_ptr createAudit();
            virtual Segment_ptr createSegment();
            virtual Attribute_ptr createAttribute();
            virtual Annotation_ptr createAnnotation();
            virtual TagDefinition_ptr createTagDefinition();
            virtual ExtendedValue_ptr createExtendedValue();
            virtual Stereotype_ptr createStereotype();
            virtual ExtensionFamily_ptr createExtensionFamily();
            virtual TaggedRef_ptr createTaggedRef();
            virtual TaggedValue_ptr createTaggedValue();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< KdmFactory > s_holder;

            KdmFactory();

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

        template< > inline KDMFramework_ptr create< KDMFramework >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createKDMFramework();
        }

        template< > inline KDMModel_ptr create< KDMModel >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createKDMModel();
        }

        template< > inline Audit_ptr create< Audit >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createAudit();
        }

        template< > inline Segment_ptr create< Segment >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createSegment();
        }

        template< > inline Attribute_ptr create< Attribute >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createAttribute();
        }

        template< > inline Annotation_ptr create< Annotation >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createAnnotation();
        }

        template< > inline TagDefinition_ptr create< TagDefinition >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createTagDefinition();
        }

        template< > inline ExtendedValue_ptr create< ExtendedValue >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createExtendedValue();
        }

        template< > inline Stereotype_ptr create< Stereotype >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createStereotype();
        }

        template< > inline ExtensionFamily_ptr create< ExtensionFamily >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createExtensionFamily();
        }

        template< > inline TaggedRef_ptr create< TaggedRef >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createTaggedRef();
        }

        template< > inline TaggedValue_ptr create< TaggedValue >()
        {
            auto eFactory = KdmPackage::_instance()->getEFactoryInstance();
            auto packageFactory = dynamic_cast< KdmFactory* >(eFactory.get());
            return packageFactory->createTaggedValue();
        }

    } // kdm
} // kdm

#endif // _KDM_KDMFACTORY_HPP

