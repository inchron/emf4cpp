// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/ExpressionFactory.hpp
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

#ifndef _XPAND3_EXPRESSIONFACTORY_HPP
#define _XPAND3_EXPRESSIONFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <xpand3/expression.hpp>

#include <xpand3/dllXpand3.hpp>

namespace xpand3
{
    namespace expression
    {

        class EXPORT_XPAND3_DLL ExpressionFactory : public virtual ::ecore::EFactory
        {
        public:

            static ExpressionFactory_ptr _instance();
            static void _setFactoryInstance(const ExpressionFactory_ptr&);

            virtual AbstractExpression_ptr createAbstractExpression();
            virtual BooleanOperation_ptr createBooleanOperation();
            virtual Cast_ptr createCast();
            virtual ChainExpression_ptr createChainExpression();
            virtual ConstructorCallExpression_ptr createConstructorCallExpression();
            virtual FeatureCall_ptr createFeatureCall();
            virtual CollectionExpression_ptr createCollectionExpression();
            virtual OperationCall_ptr createOperationCall();
            virtual TypeSelectExpression_ptr createTypeSelectExpression();
            virtual GlobalVarExpression_ptr createGlobalVarExpression();
            virtual IfExpression_ptr createIfExpression();
            virtual LetExpression_ptr createLetExpression();
            virtual ListLiteral_ptr createListLiteral();
            virtual Literal_ptr createLiteral();
            virtual BooleanLiteral_ptr createBooleanLiteral();
            virtual IntegerLiteral_ptr createIntegerLiteral();
            virtual NullLiteral_ptr createNullLiteral();
            virtual RealLiteral_ptr createRealLiteral();
            virtual StringLiteral_ptr createStringLiteral();
            virtual SwitchExpression_ptr createSwitchExpression();
            virtual Case_ptr createCase();
            virtual BinaryOperation_ptr createBinaryOperation();
            virtual UnaryOperation_ptr createUnaryOperation();

            virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
            virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
            virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

        protected:

            static ::ecore::Ptr< ExpressionFactory > s_holder;

            ExpressionFactory();

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

        template< > inline AbstractExpression_ptr create< AbstractExpression >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createAbstractExpression();
        }

        template< > inline BooleanOperation_ptr create< BooleanOperation >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createBooleanOperation();
        }

        template< > inline Cast_ptr create< Cast >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createCast();
        }

        template< > inline ChainExpression_ptr create< ChainExpression >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createChainExpression();
        }

        template< > inline ConstructorCallExpression_ptr create<
                ConstructorCallExpression >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createConstructorCallExpression();
        }

        template< > inline FeatureCall_ptr create< FeatureCall >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createFeatureCall();
        }

        template< > inline CollectionExpression_ptr create< CollectionExpression >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createCollectionExpression();
        }

        template< > inline OperationCall_ptr create< OperationCall >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createOperationCall();
        }

        template< > inline TypeSelectExpression_ptr create< TypeSelectExpression >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createTypeSelectExpression();
        }

        template< > inline GlobalVarExpression_ptr create< GlobalVarExpression >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createGlobalVarExpression();
        }

        template< > inline IfExpression_ptr create< IfExpression >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createIfExpression();
        }

        template< > inline LetExpression_ptr create< LetExpression >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createLetExpression();
        }

        template< > inline ListLiteral_ptr create< ListLiteral >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createListLiteral();
        }

        template< > inline Literal_ptr create< Literal >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createLiteral();
        }

        template< > inline BooleanLiteral_ptr create< BooleanLiteral >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createBooleanLiteral();
        }

        template< > inline IntegerLiteral_ptr create< IntegerLiteral >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createIntegerLiteral();
        }

        template< > inline NullLiteral_ptr create< NullLiteral >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createNullLiteral();
        }

        template< > inline RealLiteral_ptr create< RealLiteral >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createRealLiteral();
        }

        template< > inline StringLiteral_ptr create< StringLiteral >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createStringLiteral();
        }

        template< > inline SwitchExpression_ptr create< SwitchExpression >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createSwitchExpression();
        }

        template< > inline Case_ptr create< Case >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createCase();
        }

        template< > inline BinaryOperation_ptr create< BinaryOperation >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createBinaryOperation();
        }

        template< > inline UnaryOperation_ptr create< UnaryOperation >()
        {
            auto eFactory =
                    ExpressionPackage::_instance()->getEFactoryInstance();
            auto packageFactory =
                    dynamic_cast< ExpressionFactory* >(eFactory.get());
            return packageFactory->createUnaryOperation();
        }

    } // expression
} // xpand3

#endif // _XPAND3_EXPRESSIONFACTORY_HPP

