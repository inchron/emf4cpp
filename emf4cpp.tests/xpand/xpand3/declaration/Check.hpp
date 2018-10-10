// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/Check.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016-2018 <emf4cpp@inchron.com>
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

#ifndef XPAND3_DECLARATION_CHECK_HPP
#define XPAND3_DECLARATION_CHECK_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <xpand3/dllXpand3.hpp>
#include <xpand3/declaration_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression_forward.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>

#include "DeclarationPackage.hpp"

/*PROTECTED REGION ID(Check_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace declaration
    {

    class EXPORT_XPAND3_DLL Check : public virtual ::xpand3::declaration::AbstractDeclaration
    {
    public:
        Check();

        virtual ~Check();

        virtual void _initialize();

        // Operations

        // Attributes
        virtual ::ecore::EBoolean isErrorSeverity () const;
        virtual void setErrorSeverity (::ecore::EBoolean _errorSeverity);

        virtual ::ecore::EString const& getFeature () const;
        virtual void setFeature (::ecore::EString const& _feature);

        // References
        virtual ::xpand3::expression::AbstractExpression_ptr getMsg () const;
        virtual void setMsg (::xpand3::expression::AbstractExpression_ptr _msg);

        virtual ::xpand3::expression::AbstractExpression_ptr getConstraint () const;
        virtual void setConstraint (::xpand3::expression::AbstractExpression_ptr _constraint);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = DeclarationPackage::CHECK;

        /*PROTECTED REGION ID(Check) START*/
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

        /*PROTECTED REGION ID(CheckImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Check_ptr _this()
        {   return Check_ptr(this);}

        // Attributes

        ::ecore::EBoolean m_errorSeverity
        {};

        ::ecore::EString m_feature
        {};

        // References

        ::xpand3::expression::AbstractExpression_ptr m_msg;

        ::xpand3::expression::AbstractExpression_ptr m_constraint;

    };

}
 // declaration
}// xpand3

#endif // XPAND3_DECLARATION_CHECK_HPP

