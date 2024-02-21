// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Marker.hpp
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

#ifndef SVG_MARKER_HPP
#define SVG_MARKER_HPP

#include <SVG/dllSVG.hpp>
#include <SVG_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/Shape.hpp>

#include "SVGPackage.hpp"

/*PROTECTED REGION ID(Marker_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

class EXPORT_SVG_DLL Marker : public virtual ::SVG::Shape
{
public:
    Marker();

    ~Marker() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual ::PrimitiveTypes::String getMarkerUnits () const;
    virtual void setMarkerUnits (::PrimitiveTypes::String _markerUnits);

    virtual ::PrimitiveTypes::Double getRefX () const;
    virtual void setRefX (::PrimitiveTypes::Double _refX);

    virtual ::PrimitiveTypes::Double getRefY () const;
    virtual void setRefY (::PrimitiveTypes::Double _refY);

    virtual ::PrimitiveTypes::Double getMarkerWidth () const;
    virtual void setMarkerWidth (::PrimitiveTypes::Double _markerWidth);

    virtual ::PrimitiveTypes::Double getMarkerHeight () const;
    virtual void setMarkerHeight (::PrimitiveTypes::Double _markerHeight);

    virtual ::PrimitiveTypes::String getOrient () const;
    virtual void setOrient (::PrimitiveTypes::String _orient);

    // References
    virtual const ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& getDrawing () const;
    virtual ::ecorecpp::mapping::EList< ::SVG::Element_ptr >& getDrawing ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = SVGPackage::MARKER;

    /*PROTECTED REGION ID(Marker) START*/
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

    /*PROTECTED REGION ID(MarkerImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Marker_ptr _this()
    {   return std::dynamic_pointer_cast<Marker>(shared_from_this());}

    // Attributes

    ::PrimitiveTypes::String m_markerUnits
    {};

    ::PrimitiveTypes::Double m_refX
    {};

    ::PrimitiveTypes::Double m_refY
    {};

    ::PrimitiveTypes::Double m_markerWidth
    {};

    ::PrimitiveTypes::Double m_markerHeight
    {};

    ::PrimitiveTypes::String m_orient
    {};

    // References

    ::ecore::EList_ptr< ::SVG::Element_ptr > m_drawing;

};

}
 // SVG

#endif // SVG_MARKER_HPP

