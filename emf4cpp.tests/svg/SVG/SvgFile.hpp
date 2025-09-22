// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SvgFile.hpp
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

#ifndef SVG_SVGFILE_HPP
#define SVG_SVGFILE_HPP

#include <SVG_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/ReferencedFile.hpp>

#include "SVGPackage.hpp"

#include "dllSVG.hpp"

/*PROTECTED REGION ID(SvgFile_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

class EXPORT_SVG_DLL SvgFile : public virtual ::SVG::ReferencedFile
{
public:
    SvgFile();

    ~SvgFile() override;

    void _initialize() override;

    // Operations

    // Attributes

    // References
    virtual ::SVG::Svg_ptr getTag () const;
    virtual void setTag (::SVG::Svg_ptr _tag);
    virtual ::SVG::Svg_ptr basicgetTag ();
    virtual void basicsetTag (::SVG::Svg_ptr _tag);

    virtual const ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& getElements () const;
    virtual ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& getElements ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = SVGPackage::SVGFILE;

    /*PROTECTED REGION ID(SvgFile) START*/
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

    /*PROTECTED REGION ID(SvgFileImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    SvgFile_ptr _this()
    {   return std::dynamic_pointer_cast<SvgFile>(shared_from_this());}

    // Attributes

    // References

    std::weak_ptr< ::SVG::Svg > m_tag;

    ::ecore::EList_ptr< ::SVG::Element_ptr > m_elements;

};

}
 // SVG

#endif // SVG_SVGFILE_HPP

