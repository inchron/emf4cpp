// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SVGItemDispatcher.hpp
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

#ifndef SVG_ITEMDISPATCHER_HPP
#define SVG_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <SVG.hpp>
#include <SVG/dllSVG.hpp>

namespace SVG
{

    template<class T>
    class EXPORT_SVG_DLL
SVGItemDispatcher
{
public:
    SVGItemDispatcher() = default;
    ~SVGItemDispatcher() = default;

    /** Clients need to overload and reimplement this work() method for every
     * class they want to handle. The second argument is a dummy argument to
     * disambiguate work methods in case of an inheritance hirarchy and
     * always contains a nullptr.
     * Note that in a class hierarchy classes may be shadowed by derived classes. */
    void work(const ::ecore::EObject_ptr&, ::ecore::EObject*)
    {}

    /** Entry function for the dispatch mechanism. */
    void enter(const ::ecore::EObject_ptr& obj)
    {
        auto eClass = obj->eClass();
        if (eClass->getEPackage() != SVGPackage::_instance())
        {
            assert(!"The package of the eclass does not match the package of the dispatcher!");
            return;
        }

        switch (eClass->getClassifierID())
        {
            case SVGPackage::ABSOLUTECOORD:
            {
                auto derived = ::ecore::as< AbsoluteCoord >(obj);
                _this()->T::work(derived, (AbsoluteCoord*)nullptr);
            }break;
            case SVGPackage::ATTRIBUTE:
            {
                auto derived = ::ecore::as< Attribute >(obj);
                _this()->T::work(derived, (Attribute*)nullptr);
            }break;
            case SVGPackage::CIRCLE:
            {
                auto derived = ::ecore::as< Circle >(obj);
                _this()->T::work(derived, (Circle*)nullptr);
            }break;
            case SVGPackage::COORDINATES:
            {
                auto derived = ::ecore::as< Coordinates >(obj);
                _this()->T::work(derived, (Coordinates*)nullptr);
            }break;
            case SVGPackage::DEFS:
            {
                auto derived = ::ecore::as< Defs >(obj);
                _this()->T::work(derived, (Defs*)nullptr);
            }break;
            case SVGPackage::DIMENSION:
            {
                auto derived = ::ecore::as< Dimension >(obj);
                _this()->T::work(derived, (Dimension*)nullptr);
            }break;
            case SVGPackage::ELEMENT:
            {
                auto derived = ::ecore::as< Element >(obj);
                _this()->T::work(derived, (Element*)nullptr);
            }break;
            case SVGPackage::ELLIPSE:
            {
                auto derived = ::ecore::as< Ellipse >(obj);
                _this()->T::work(derived, (Ellipse*)nullptr);
            }break;
            case SVGPackage::FONTSTYLE:
            {
                auto derived = ::ecore::as< FontStyle >(obj);
                _this()->T::work(derived, (FontStyle*)nullptr);
            }break;
            case SVGPackage::FONTWEIGHT:
            {
                auto derived = ::ecore::as< FontWeight >(obj);
                _this()->T::work(derived, (FontWeight*)nullptr);
            }break;
            case SVGPackage::G:
            {
                auto derived = ::ecore::as< G >(obj);
                _this()->T::work(derived, (G*)nullptr);
            }break;
            case SVGPackage::GRAPHICALELEMENT:
            {
                auto derived = ::ecore::as< GraphicalElement >(obj);
                _this()->T::work(derived, (GraphicalElement*)nullptr);
            }break;
            case SVGPackage::GROUPINGELEMENT:
            {
                auto derived = ::ecore::as< GroupingElement >(obj);
                _this()->T::work(derived, (GroupingElement*)nullptr);
            }break;
            case SVGPackage::IMAGE:
            {
                auto derived = ::ecore::as< Image >(obj);
                _this()->T::work(derived, (Image*)nullptr);
            }break;
            case SVGPackage::LINE:
            {
                auto derived = ::ecore::as< Line >(obj);
                _this()->T::work(derived, (Line*)nullptr);
            }break;
            case SVGPackage::MARKER:
            {
                auto derived = ::ecore::as< Marker >(obj);
                _this()->T::work(derived, (Marker*)nullptr);
            }break;
            case SVGPackage::PATH:
            {
                auto derived = ::ecore::as< Path >(obj);
                _this()->T::work(derived, (Path*)nullptr);
            }break;
            case SVGPackage::POINT:
            {
                auto derived = ::ecore::as< Point >(obj);
                _this()->T::work(derived, (Point*)nullptr);
            }break;
            case SVGPackage::POLYGON:
            {
                auto derived = ::ecore::as< Polygon >(obj);
                _this()->T::work(derived, (Polygon*)nullptr);
            }break;
            case SVGPackage::POLYLINE:
            {
                auto derived = ::ecore::as< Polyline >(obj);
                _this()->T::work(derived, (Polyline*)nullptr);
            }break;
            case SVGPackage::RECT:
            {
                auto derived = ::ecore::as< Rect >(obj);
                _this()->T::work(derived, (Rect*)nullptr);
            }break;
            case SVGPackage::REFERENCEDFILE:
            {
                auto derived = ::ecore::as< ReferencedFile >(obj);
                _this()->T::work(derived, (ReferencedFile*)nullptr);
            }break;
            case SVGPackage::RELATIVECOORD:
            {
                auto derived = ::ecore::as< RelativeCoord >(obj);
                _this()->T::work(derived, (RelativeCoord*)nullptr);
            }break;
            case SVGPackage::ROTATE:
            {
                auto derived = ::ecore::as< Rotate >(obj);
                _this()->T::work(derived, (Rotate*)nullptr);
            }break;
            case SVGPackage::SCALE:
            {
                auto derived = ::ecore::as< Scale >(obj);
                _this()->T::work(derived, (Scale*)nullptr);
            }break;
            case SVGPackage::SHAPE:
            {
                auto derived = ::ecore::as< Shape >(obj);
                _this()->T::work(derived, (Shape*)nullptr);
            }break;
            case SVGPackage::STRUCTURALELEMENT:
            {
                auto derived = ::ecore::as< StructuralElement >(obj);
                _this()->T::work(derived, (StructuralElement*)nullptr);
            }break;
            case SVGPackage::SVG:
            {
                auto derived = ::ecore::as< Svg >(obj);
                _this()->T::work(derived, (Svg*)nullptr);
            }break;
            case SVGPackage::SVGFILE:
            {
                auto derived = ::ecore::as< SvgFile >(obj);
                _this()->T::work(derived, (SvgFile*)nullptr);
            }break;
            case SVGPackage::SYMBOL:
            {
                auto derived = ::ecore::as< Symbol >(obj);
                _this()->T::work(derived, (Symbol*)nullptr);
            }break;
            case SVGPackage::TEXT:
            {
                auto derived = ::ecore::as< Text >(obj);
                _this()->T::work(derived, (Text*)nullptr);
            }break;
            case SVGPackage::TEXTELEMENT:
            {
                auto derived = ::ecore::as< TextElement >(obj);
                _this()->T::work(derived, (TextElement*)nullptr);
            }break;
            case SVGPackage::TRANSFORM:
            {
                auto derived = ::ecore::as< Transform >(obj);
                _this()->T::work(derived, (Transform*)nullptr);
            }break;
            case SVGPackage::TRANSLATE:
            {
                auto derived = ::ecore::as< Translate >(obj);
                _this()->T::work(derived, (Translate*)nullptr);
            }break;
            case SVGPackage::TREF:
            {
                auto derived = ::ecore::as< Tref >(obj);
                _this()->T::work(derived, (Tref*)nullptr);
            }break;
            case SVGPackage::TSPAN:
            {
                auto derived = ::ecore::as< Tspan >(obj);
                _this()->T::work(derived, (Tspan*)nullptr);
            }break;
            case SVGPackage::USE:
            {
                auto derived = ::ecore::as< Use >(obj);
                _this()->T::work(derived, (Use*)nullptr);
            }break;
            case SVGPackage::VISIBILITY:
            {
                auto derived = ::ecore::as< Visibility >(obj);
                _this()->T::work(derived, (Visibility*)nullptr);
            }break;
            default:
            break;
        }
    }

private:
    /** Inline helper, should compile to simple offset adjustment. */
    T* _this()
    {   return static_cast<T*>(this);}

    /** Inline helper, should compile to simple offset adjustment. */
    const T* _this() const
    {   return static_cast<const T*>(this);}
};

}
 // SVG

#endif // SVG_ITEMDISPATCHER_HPP
