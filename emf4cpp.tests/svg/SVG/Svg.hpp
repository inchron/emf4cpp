// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Svg.hpp
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

#ifndef SVG_SVG_HPP
#define SVG_SVG_HPP

#include <SVG/dllSVG.hpp>
#include <SVG_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/StructuralElement.hpp>

#include "SVGPackage.hpp"

/*PROTECTED REGION ID(Svg_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

class EXPORT_SVG_DLL Svg : public virtual ::SVG::StructuralElement
{
public:
    Svg();

    virtual ~Svg();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::PrimitiveTypes::String getNamespace () const;
    virtual void setNamespace (::PrimitiveTypes::String _namespace);

    virtual ::PrimitiveTypes::String getVersion () const;
    virtual void setVersion (::PrimitiveTypes::String _version);

    virtual ::PrimitiveTypes::String getBaseProfile () const;
    virtual void setBaseProfile (::PrimitiveTypes::String _baseProfile);

    // References
    virtual const ::ecorecpp::mapping::EList< ::SVG::SvgFile_ptr >& getOwner_SVG () const;
    virtual ::ecorecpp::mapping::EList< ::SVG::SvgFile_ptr >& getOwner_SVG ();

    virtual const ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& getChildren () const;
    virtual ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& getChildren ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = SVGPackage::SVG;

    /*PROTECTED REGION ID(Svg) START*/
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

    /*PROTECTED REGION ID(SvgImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Svg_ptr _this()
    {   return std::dynamic_pointer_cast<Svg>(shared_from_this());}

    // Attributes

    ::PrimitiveTypes::String m_namespace
    {};

    ::PrimitiveTypes::String m_version
    {};

    ::PrimitiveTypes::String m_baseProfile
    {};

    // References

    ::ecore::EList_ptr< ::SVG::SvgFile_ptr > m_owner_SVG;

    ::ecore::EList_ptr< ::SVG::Element_ptr > m_children;

};

}
 // SVG

#endif // SVG_SVG_HPP

