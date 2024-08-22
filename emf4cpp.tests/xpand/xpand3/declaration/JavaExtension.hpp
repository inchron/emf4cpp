// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/JavaExtension.hpp
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

#ifndef XPAND3_DECLARATION_JAVAEXTENSION_HPP
#define XPAND3_DECLARATION_JAVAEXTENSION_HPP

#include <xpand3/dllXpand3.hpp>
#include <xpand3/declaration_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3_forward.hpp>
#include <xpand3/expression_forward.hpp>
#include <xpand3/declaration/AbstractNamedDeclaration.hpp>

#include "DeclarationPackage.hpp"

/*PROTECTED REGION ID(JavaExtension_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace declaration
    {

    class EXPORT_XPAND3_DLL JavaExtension : public virtual ::xpand3::declaration::AbstractNamedDeclaration
    {
    public:
        JavaExtension();

        virtual ~JavaExtension();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        virtual ::xpand3::Identifier_ptr getJavaType () const;
        virtual void setJavaType (::xpand3::Identifier_ptr _javaType);

        virtual ::xpand3::Identifier_ptr getJavaMethod () const;
        virtual void setJavaMethod (::xpand3::Identifier_ptr _javaMethod);

        virtual const ::ecorecpp::mapping::EList< ::xpand3::Identifier_ptr >& getJavaParamTypes () const;
        virtual ::ecorecpp::mapping::EList< ::xpand3::Identifier_ptr >& getJavaParamTypes ();

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = DeclarationPackage::JAVAEXTENSION;

        /*PROTECTED REGION ID(JavaExtension) START*/
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

        /*PROTECTED REGION ID(JavaExtensionImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        JavaExtension_ptr _this()
        {   return std::dynamic_pointer_cast<JavaExtension>(shared_from_this());}

        // Attributes

        // References

        ::xpand3::Identifier_ptr m_javaType;

        ::xpand3::Identifier_ptr m_javaMethod;

        ::ecore::EList_ptr< ::xpand3::Identifier_ptr > m_javaParamTypes;

    };

}
 // declaration
}// xpand3

#endif // XPAND3_DECLARATION_JAVAEXTENSION_HPP

