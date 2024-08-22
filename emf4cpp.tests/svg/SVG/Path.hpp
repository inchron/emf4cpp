// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/Path.hpp
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

#ifndef SVG_PATH_HPP
#define SVG_PATH_HPP

#include <SVG/dllSVG.hpp>
#include <SVG_forward.hpp>

#include <PrimitiveTypes_forward.hpp>
#include <SVG/Shape.hpp>

#include "SVGPackage.hpp"

/*PROTECTED REGION ID(Path_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace SVG
{

class EXPORT_SVG_DLL Path : public virtual ::SVG::Shape
{
public:
    Path();

    ~Path() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual ::PrimitiveTypes::Double getPathLength () const;
    virtual void setPathLength (::PrimitiveTypes::Double _pathLength);

    virtual ::PrimitiveTypes::String getD () const;
    virtual void setD (::PrimitiveTypes::String _d);

    virtual ::PrimitiveTypes::String getMarkerEnd () const;
    virtual void setMarkerEnd (::PrimitiveTypes::String _markerEnd);

    virtual ::PrimitiveTypes::String getMarkerStart () const;
    virtual void setMarkerStart (::PrimitiveTypes::String _markerStart);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = SVGPackage::PATH;

    /*PROTECTED REGION ID(Path) START*/
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

    /*PROTECTED REGION ID(PathImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Path_ptr _this()
    {   return std::dynamic_pointer_cast<Path>(shared_from_this());}

    // Attributes

    ::PrimitiveTypes::Double m_pathLength
    {};

    ::PrimitiveTypes::String m_d
    {};

    ::PrimitiveTypes::String m_markerEnd
    {};

    ::PrimitiveTypes::String m_markerStart
    {};

    // References

};

}
 // SVG

#endif // SVG_PATH_HPP

