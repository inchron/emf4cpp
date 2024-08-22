// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Text.hpp
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

#ifndef SVG_TEXT_HPP
#define SVG_TEXT_HPP

#include <SVG/dllSVG.hpp>
#include <SVG_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/TextElement.hpp>

#include "SVGPackage.hpp"

/*PROTECTED REGION ID(Text_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

class EXPORT_SVG_DLL Text : public virtual ::SVG::TextElement
{
public:
    Text();

    virtual ~Text();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::PrimitiveTypes::String getLengthAdjust () const;
    virtual void setLengthAdjust (::PrimitiveTypes::String _lengthAdjust);

    virtual ::PrimitiveTypes::String getContent () const;
    virtual void setContent (::PrimitiveTypes::String _content);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = SVGPackage::TEXT;

    /*PROTECTED REGION ID(Text) START*/
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

    /*PROTECTED REGION ID(TextImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Text_ptr _this()
    {   return std::dynamic_pointer_cast<Text>(shared_from_this());}

    // Attributes

    ::PrimitiveTypes::String m_lengthAdjust
    {};

    ::PrimitiveTypes::String m_content
    {};

    // References

};

}
 // SVG

#endif // SVG_TEXT_HPP

