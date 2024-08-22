// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/SwitchExpression.hpp
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

#ifndef XPAND3_EXPRESSION_SWITCHEXPRESSION_HPP
#define XPAND3_EXPRESSION_SWITCHEXPRESSION_HPP

#include <xpand3/dllXpand3.hpp>
#include <xpand3/expression_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include "ExpressionPackage.hpp"

/*PROTECTED REGION ID(SwitchExpression_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace expression
    {

    class EXPORT_XPAND3_DLL SwitchExpression : public virtual ::xpand3::expression::AbstractExpression
    {
    public:
        SwitchExpression();

        virtual ~SwitchExpression();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        virtual ::xpand3::expression::AbstractExpression_ptr getSwitchExpr () const;
        virtual void setSwitchExpr (::xpand3::expression::AbstractExpression_ptr _switchExpr);

        virtual ::xpand3::expression::AbstractExpression_ptr getDefaultExpr () const;
        virtual void setDefaultExpr (::xpand3::expression::AbstractExpression_ptr _defaultExpr);

        virtual const ::ecorecpp::mapping::EList< ::xpand3::expression::Case_ptr >& getCases () const;
        virtual ::ecorecpp::mapping::EList< ::xpand3::expression::Case_ptr >& getCases ();

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = ExpressionPackage::SWITCHEXPRESSION;

        /*PROTECTED REGION ID(SwitchExpression) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
        virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
        virtual void eUnset ( ::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass ();
        virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
        virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

        /*PROTECTED REGION ID(SwitchExpressionImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        SwitchExpression_ptr _this()
        {   return std::dynamic_pointer_cast<SwitchExpression>(shared_from_this());}

        // Attributes

        // References

        ::xpand3::expression::AbstractExpression_ptr m_switchExpr;

        ::xpand3::expression::AbstractExpression_ptr m_defaultExpr;

        ::ecore::EList_ptr< ::xpand3::expression::Case_ptr > m_cases;

    };

}
 // expression
}// xpand3

#endif // XPAND3_EXPRESSION_SWITCHEXPRESSION_HPP

