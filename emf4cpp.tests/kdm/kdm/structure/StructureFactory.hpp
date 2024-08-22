// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/StructureFactory.hpp
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

#ifndef _KDM_STRUCTUREFACTORY_HPP
#define _KDM_STRUCTUREFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/structure.hpp>

#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace structure
    {

        class EXPORT_KDM_DLL StructureFactory : public virtual ::ecore::EFactory
        {
        public:

            static StructureFactory_ptr _instance();
            static void _setFactoryInstance(const StructureFactory_ptr&);

            virtual AbstractStructureElement_ptr createAbstractStructureElement();
            virtual Subsystem_ptr createSubsystem();
            virtual Layer_ptr createLayer();
            virtual StructureModel_ptr createStructureModel();
            virtual Component_ptr createComponent();
            virtual SoftwareSystem_ptr createSoftwareSystem();
            virtual AbstractStructureRelationship_ptr createAbstractStructureRelationship();
            virtual StructureRelationship_ptr createStructureRelationship();
            virtual ArchitectureView_ptr createArchitectureView();
            virtual StructureElement_ptr createStructureElement();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< StructureFactory > s_holder;

            StructureFactory();

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

        template< > inline AbstractStructureElement_ptr create<
                AbstractStructureElement >()
        {
            auto eFactory =
                    StructurePackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StructureFactory* >(eFactory.get());
            return packageFactory->createAbstractStructureElement();
        }

        template< > inline Subsystem_ptr create< Subsystem >()
        {
            auto eFactory =
                    StructurePackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StructureFactory* >(eFactory.get());
            return packageFactory->createSubsystem();
        }

        template< > inline Layer_ptr create< Layer >()
        {
            auto eFactory =
                    StructurePackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StructureFactory* >(eFactory.get());
            return packageFactory->createLayer();
        }

        template< > inline StructureModel_ptr create< StructureModel >()
        {
            auto eFactory =
                    StructurePackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StructureFactory* >(eFactory.get());
            return packageFactory->createStructureModel();
        }

        template< > inline Component_ptr create< Component >()
        {
            auto eFactory =
                    StructurePackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StructureFactory* >(eFactory.get());
            return packageFactory->createComponent();
        }

        template< > inline SoftwareSystem_ptr create< SoftwareSystem >()
        {
            auto eFactory =
                    StructurePackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StructureFactory* >(eFactory.get());
            return packageFactory->createSoftwareSystem();
        }

        template< > inline AbstractStructureRelationship_ptr create<
                AbstractStructureRelationship >()
        {
            auto eFactory =
                    StructurePackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StructureFactory* >(eFactory.get());
            return packageFactory->createAbstractStructureRelationship();
        }

        template< > inline StructureRelationship_ptr create<
                StructureRelationship >()
        {
            auto eFactory =
                    StructurePackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StructureFactory* >(eFactory.get());
            return packageFactory->createStructureRelationship();
        }

        template< > inline ArchitectureView_ptr create< ArchitectureView >()
        {
            auto eFactory =
                    StructurePackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StructureFactory* >(eFactory.get());
            return packageFactory->createArchitectureView();
        }

        template< > inline StructureElement_ptr create< StructureElement >()
        {
            auto eFactory =
                    StructurePackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< StructureFactory* >(eFactory.get());
            return packageFactory->createStructureElement();
        }

    } // structure
} // kdm

#endif // _KDM_STRUCTUREFACTORY_HPP

