// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/CreateExtension.hpp
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

#ifndef XPAND3_DECLARATION_CREATEEXTENSION_HPP
#define XPAND3_DECLARATION_CREATEEXTENSION_HPP

#include <xpand3/declaration_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression_forward.hpp>
#include <xpand3/declaration/Extension.hpp>

#include "DeclarationPackage.hpp"

#include "../dllXpand3.hpp"

/*PROTECTED REGION ID(CreateExtension_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace declaration
    {

    class EXPORT_XPAND3_DLL CreateExtension : public virtual ::xpand3::declaration::Extension
    {
    public:
        CreateExtension();

        ~CreateExtension() override;

        void _initialize() override;

        // Operations

        // Attributes

        // References
        virtual ::xpand3::DeclaredParameter_ptr getToBeCreated () const;
        virtual void setToBeCreated (::xpand3::DeclaredParameter_ptr _toBeCreated);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = DeclarationPackage::CREATEEXTENSION;

        /*PROTECTED REGION ID(CreateExtension) START*/
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

        /*PROTECTED REGION ID(CreateExtensionImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        CreateExtension_ptr _this()
        {   return std::dynamic_pointer_cast<CreateExtension>(shared_from_this());}

        // Attributes

        // References

        std::weak_ptr< ::xpand3::DeclaredParameter > m_toBeCreated;

    };

}
 // declaration
}// xpand3

#endif // XPAND3_DECLARATION_CREATEEXTENSION_HPP

