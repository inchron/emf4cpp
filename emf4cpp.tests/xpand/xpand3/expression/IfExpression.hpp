// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/IfExpression.hpp
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

#ifndef XPAND3_EXPRESSION_IFEXPRESSION_HPP
#define XPAND3_EXPRESSION_IFEXPRESSION_HPP

#include <xpand3/dllXpand3.hpp>
#include <xpand3/expression_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include "ExpressionPackage.hpp"

/*PROTECTED REGION ID(IfExpression_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace expression
    {

    class EXPORT_XPAND3_DLL IfExpression : public virtual ::xpand3::expression::AbstractExpression
    {
    public:
        IfExpression();

        ~IfExpression() override;

        void _initialize() override;

        // Operations

        // Attributes

        // References
        virtual ::xpand3::expression::AbstractExpression_ptr getCondition () const;
        virtual void setCondition (::xpand3::expression::AbstractExpression_ptr _condition);

        virtual ::xpand3::expression::AbstractExpression_ptr getThenPart () const;
        virtual void setThenPart (::xpand3::expression::AbstractExpression_ptr _thenPart);

        virtual ::xpand3::expression::AbstractExpression_ptr getElsePart () const;
        virtual void setElsePart (::xpand3::expression::AbstractExpression_ptr _elsePart);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = ExpressionPackage::IFEXPRESSION;

        /*PROTECTED REGION ID(IfExpression) START*/
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

        /*PROTECTED REGION ID(IfExpressionImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        IfExpression_ptr _this()
        {   return std::dynamic_pointer_cast<IfExpression>(shared_from_this());}

        // Attributes

        // References

        ::xpand3::expression::AbstractExpression_ptr m_condition;

        ::xpand3::expression::AbstractExpression_ptr m_thenPart;

        ::xpand3::expression::AbstractExpression_ptr m_elsePart;

    };

}
 // expression
}// xpand3

#endif // XPAND3_EXPRESSION_IFEXPRESSION_HPP

