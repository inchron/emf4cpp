// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/AbstractDeclaration.hpp
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

#ifndef XPAND3_DECLARATION_ABSTRACTDECLARATION_HPP
#define XPAND3_DECLARATION_ABSTRACTDECLARATION_HPP

#include <xpand3/dllXpand3.hpp>
#include <xpand3/declaration_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression_forward.hpp>
#include <xpand3/SyntaxElement.hpp>

#include "DeclarationPackage.hpp"

/*PROTECTED REGION ID(AbstractDeclaration_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace declaration
    {

    class EXPORT_XPAND3_DLL AbstractDeclaration : public virtual ::xpand3::SyntaxElement
    {
    public:
        AbstractDeclaration();

        ~AbstractDeclaration() override;

        void _initialize() override;

        // Operations

        // Attributes
        virtual ::ecore::EBoolean isIsPrivate () const;
        virtual void setIsPrivate (::ecore::EBoolean _isPrivate);

        // References
        virtual ::xpand3::File_ptr getOwner () const;
        virtual void setOwner (::xpand3::File_ptr _owner);

        virtual const ::ecorecpp::mapping::EList< ::xpand3::DeclaredParameter_ptr >& getParams () const;
        virtual ::ecorecpp::mapping::EList< ::xpand3::DeclaredParameter_ptr >& getParams ();

        virtual ::xpand3::expression::AbstractExpression_ptr getGuard () const;
        virtual void setGuard (::xpand3::expression::AbstractExpression_ptr _guard);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = DeclarationPackage::ABSTRACTDECLARATION;

        /*PROTECTED REGION ID(AbstractDeclaration) START*/
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

        /*PROTECTED REGION ID(AbstractDeclarationImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        AbstractDeclaration_ptr _this()
        {   return std::dynamic_pointer_cast<AbstractDeclaration>(shared_from_this());}

        // Attributes

        ::ecore::EBoolean m_isPrivate
        {};

        // References

        ::xpand3::File_ptr m_owner;

        ::ecore::EList_ptr< ::xpand3::DeclaredParameter_ptr > m_params;

        ::xpand3::expression::AbstractExpression_ptr m_guard;

    };

}
 // declaration
}// xpand3

#endif // XPAND3_DECLARATION_ABSTRACTDECLARATION_HPP

