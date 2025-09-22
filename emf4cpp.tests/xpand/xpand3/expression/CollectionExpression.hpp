// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/CollectionExpression.hpp
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

#ifndef XPAND3_EXPRESSION_COLLECTIONEXPRESSION_HPP
#define XPAND3_EXPRESSION_COLLECTIONEXPRESSION_HPP

#include <xpand3/expression_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression/FeatureCall.hpp>

#include "ExpressionPackage.hpp"

#include "../dllXpand3.hpp"

/*PROTECTED REGION ID(CollectionExpression_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace expression
    {

    class EXPORT_XPAND3_DLL CollectionExpression : public virtual ::xpand3::expression::FeatureCall
    {
    public:
        CollectionExpression();

        ~CollectionExpression() override;

        void _initialize() override;

        // Operations

        // Attributes

        // References
        virtual ::xpand3::expression::AbstractExpression_ptr getClosure () const;
        virtual void setClosure (::xpand3::expression::AbstractExpression_ptr _closure);

        virtual ::xpand3::Identifier_ptr getEleName () const;
        virtual void setEleName (::xpand3::Identifier_ptr _eleName);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = ExpressionPackage::COLLECTIONEXPRESSION;

        /*PROTECTED REGION ID(CollectionExpression) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve) override;
        void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
        ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID) override;
        void eUnset ( ::ecore::EInt _featureID) override;
        ::ecore::EClass_ptr _eClass () override;
        void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
        void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue) override;

        /*PROTECTED REGION ID(CollectionExpressionImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        CollectionExpression_ptr _this()
        {   return std::dynamic_pointer_cast<CollectionExpression>(shared_from_this());}

        // Attributes

        // References

        ::xpand3::expression::AbstractExpression_ptr m_closure;

        ::xpand3::Identifier_ptr m_eleName;

    };

}
 // expression
}// xpand3

#endif // XPAND3_EXPRESSION_COLLECTIONEXPRESSION_HPP

