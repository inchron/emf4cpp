// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SVGPackage.hpp
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

#ifndef _SVGPACKAGE_HPP
#define _SVGPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <SVG_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <SVG/dllSVG.hpp>

namespace SVG
{

class EXPORT_SVG_DLL SVGPackage : public virtual ::ecore::EPackage
{
public:

    static SVGPackage_ptr _instance();
    static SVGPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifier AbsoluteCoord
    static const int ABSOLUTECOORD = 0;
    static const int ABSOLUTECOORD__X = 0;
    static const int ABSOLUTECOORD__Y = 1;
    static const int ABSOLUTECOORD_FEATURE_COUNT = 2;

    // IDs for classifier Attribute
    static const int ATTRIBUTE = 1;
    static const int ATTRIBUTE__ATTOWNER = 0;
    static const int ATTRIBUTE_FEATURE_COUNT = 1;

    // IDs for classifier Circle
    static const int CIRCLE = 2;
    static const int CIRCLE__OWNER = 0;
    static const int CIRCLE__TARGET = 1;
    static const int CIRCLE__ATTRIBUTE = 2;
    static const int CIRCLE__POSITION = 3;
    static const int CIRCLE__SIZE = 4;
    static const int CIRCLE__ROOT = 5;
    static const int CIRCLE__FILL = 6;
    static const int CIRCLE__VIEWBOX = 7;
    static const int CIRCLE__GROUP = 8;
    static const int CIRCLE__IDENTIFIER = 9;
    static const int CIRCLE__DRAWSMARKER = 10;
    static const int CIRCLE__STROKE = 11;
    static const int CIRCLE_FEATURE_COUNT = 12;

    // IDs for classifier Coordinates
    static const int COORDINATES = 3;
    static const int COORDINATES__X = 0;
    static const int COORDINATES__Y = 1;
    static const int COORDINATES_FEATURE_COUNT = 2;

    // IDs for classifier Defs
    static const int DEFS = 4;
    static const int DEFS__OWNER = 0;
    static const int DEFS__TARGET = 1;
    static const int DEFS__ATTRIBUTE = 2;
    static const int DEFS__POSITION = 3;
    static const int DEFS__SIZE = 4;
    static const int DEFS__ROOT = 5;
    static const int DEFS__FILL = 6;
    static const int DEFS__VIEWBOX = 7;
    static const int DEFS__GROUP = 8;
    static const int DEFS__IDENTIFIER = 9;
    static const int DEFS__DRAWSMARKER = 10;
    static const int DEFS__GROUPCONTENT = 11;
    static const int DEFS_FEATURE_COUNT = 12;

    // IDs for classifier Dimension
    static const int DIMENSION = 5;
    static const int DIMENSION__WIDTH = 0;
    static const int DIMENSION__HEIGHT = 1;
    static const int DIMENSION_FEATURE_COUNT = 2;

    // IDs for classifier Element
    static const int ELEMENT = 6;
    static const int ELEMENT__OWNER = 0;
    static const int ELEMENT__TARGET = 1;
    static const int ELEMENT__ATTRIBUTE = 2;
    static const int ELEMENT__POSITION = 3;
    static const int ELEMENT__SIZE = 4;
    static const int ELEMENT__ROOT = 5;
    static const int ELEMENT__FILL = 6;
    static const int ELEMENT__VIEWBOX = 7;
    static const int ELEMENT__GROUP = 8;
    static const int ELEMENT__IDENTIFIER = 9;
    static const int ELEMENT__DRAWSMARKER = 10;
    static const int ELEMENT_FEATURE_COUNT = 11;

    // IDs for classifier Ellipse
    static const int ELLIPSE = 7;
    static const int ELLIPSE__OWNER = 0;
    static const int ELLIPSE__TARGET = 1;
    static const int ELLIPSE__ATTRIBUTE = 2;
    static const int ELLIPSE__POSITION = 3;
    static const int ELLIPSE__SIZE = 4;
    static const int ELLIPSE__ROOT = 5;
    static const int ELLIPSE__FILL = 6;
    static const int ELLIPSE__VIEWBOX = 7;
    static const int ELLIPSE__GROUP = 8;
    static const int ELLIPSE__IDENTIFIER = 9;
    static const int ELLIPSE__DRAWSMARKER = 10;
    static const int ELLIPSE__STROKE = 11;
    static const int ELLIPSE_FEATURE_COUNT = 12;

    // IDs for classifier FontStyle
    static const int FONTSTYLE = 8;
    static const int FONTSTYLE__ATTOWNER = 0;
    static const int FONTSTYLE__ITALIC = 1;
    static const int FONTSTYLE_FEATURE_COUNT = 2;

    // IDs for classifier FontWeight
    static const int FONTWEIGHT = 9;
    static const int FONTWEIGHT__ATTOWNER = 0;
    static const int FONTWEIGHT__BOLD = 1;
    static const int FONTWEIGHT_FEATURE_COUNT = 2;

    // IDs for classifier G
    static const int G = 10;
    static const int G__OWNER = 0;
    static const int G__TARGET = 1;
    static const int G__ATTRIBUTE = 2;
    static const int G__POSITION = 3;
    static const int G__SIZE = 4;
    static const int G__ROOT = 5;
    static const int G__FILL = 6;
    static const int G__VIEWBOX = 7;
    static const int G__GROUP = 8;
    static const int G__IDENTIFIER = 9;
    static const int G__DRAWSMARKER = 10;
    static const int G__GROUPCONTENT = 11;
    static const int G__NAME = 12;
    static const int G_FEATURE_COUNT = 13;

    // IDs for classifier GraphicalElement
    static const int GRAPHICALELEMENT = 11;
    static const int GRAPHICALELEMENT__OWNER = 0;
    static const int GRAPHICALELEMENT__TARGET = 1;
    static const int GRAPHICALELEMENT__ATTRIBUTE = 2;
    static const int GRAPHICALELEMENT__POSITION = 3;
    static const int GRAPHICALELEMENT__SIZE = 4;
    static const int GRAPHICALELEMENT__ROOT = 5;
    static const int GRAPHICALELEMENT__FILL = 6;
    static const int GRAPHICALELEMENT__VIEWBOX = 7;
    static const int GRAPHICALELEMENT__GROUP = 8;
    static const int GRAPHICALELEMENT__IDENTIFIER = 9;
    static const int GRAPHICALELEMENT__DRAWSMARKER = 10;
    static const int GRAPHICALELEMENT__STROKE = 11;
    static const int GRAPHICALELEMENT_FEATURE_COUNT = 12;

    // IDs for classifier GroupingElement
    static const int GROUPINGELEMENT = 12;
    static const int GROUPINGELEMENT__OWNER = 0;
    static const int GROUPINGELEMENT__TARGET = 1;
    static const int GROUPINGELEMENT__ATTRIBUTE = 2;
    static const int GROUPINGELEMENT__POSITION = 3;
    static const int GROUPINGELEMENT__SIZE = 4;
    static const int GROUPINGELEMENT__ROOT = 5;
    static const int GROUPINGELEMENT__FILL = 6;
    static const int GROUPINGELEMENT__VIEWBOX = 7;
    static const int GROUPINGELEMENT__GROUP = 8;
    static const int GROUPINGELEMENT__IDENTIFIER = 9;
    static const int GROUPINGELEMENT__DRAWSMARKER = 10;
    static const int GROUPINGELEMENT__GROUPCONTENT = 11;
    static const int GROUPINGELEMENT_FEATURE_COUNT = 12;

    // IDs for classifier Image
    static const int IMAGE = 13;
    static const int IMAGE__OWNER = 0;
    static const int IMAGE__TARGET = 1;
    static const int IMAGE__ATTRIBUTE = 2;
    static const int IMAGE__POSITION = 3;
    static const int IMAGE__SIZE = 4;
    static const int IMAGE__ROOT = 5;
    static const int IMAGE__FILL = 6;
    static const int IMAGE__VIEWBOX = 7;
    static const int IMAGE__GROUP = 8;
    static const int IMAGE__IDENTIFIER = 9;
    static const int IMAGE__DRAWSMARKER = 10;
    static const int IMAGE__REFEREE = 11;
    static const int IMAGE_FEATURE_COUNT = 12;

    // IDs for classifier Line
    static const int LINE = 14;
    static const int LINE__OWNER = 0;
    static const int LINE__TARGET = 1;
    static const int LINE__ATTRIBUTE = 2;
    static const int LINE__POSITION = 3;
    static const int LINE__SIZE = 4;
    static const int LINE__ROOT = 5;
    static const int LINE__FILL = 6;
    static const int LINE__VIEWBOX = 7;
    static const int LINE__GROUP = 8;
    static const int LINE__IDENTIFIER = 9;
    static const int LINE__DRAWSMARKER = 10;
    static const int LINE__STROKE = 11;
    static const int LINE__BETWEEN = 12;
    static const int LINE__MARKEREND = 13;
    static const int LINE__MARKERSTART = 14;
    static const int LINE_FEATURE_COUNT = 15;

    // IDs for classifier Marker
    static const int MARKER = 15;
    static const int MARKER__OWNER = 0;
    static const int MARKER__TARGET = 1;
    static const int MARKER__ATTRIBUTE = 2;
    static const int MARKER__POSITION = 3;
    static const int MARKER__SIZE = 4;
    static const int MARKER__ROOT = 5;
    static const int MARKER__FILL = 6;
    static const int MARKER__VIEWBOX = 7;
    static const int MARKER__GROUP = 8;
    static const int MARKER__IDENTIFIER = 9;
    static const int MARKER__DRAWSMARKER = 10;
    static const int MARKER__STROKE = 11;
    static const int MARKER__MARKERUNITS = 12;
    static const int MARKER__REFX = 13;
    static const int MARKER__REFY = 14;
    static const int MARKER__MARKERWIDTH = 15;
    static const int MARKER__MARKERHEIGHT = 16;
    static const int MARKER__ORIENT = 17;
    static const int MARKER__DRAWING = 18;
    static const int MARKER_FEATURE_COUNT = 19;

    // IDs for classifier Path
    static const int PATH = 16;
    static const int PATH__OWNER = 0;
    static const int PATH__TARGET = 1;
    static const int PATH__ATTRIBUTE = 2;
    static const int PATH__POSITION = 3;
    static const int PATH__SIZE = 4;
    static const int PATH__ROOT = 5;
    static const int PATH__FILL = 6;
    static const int PATH__VIEWBOX = 7;
    static const int PATH__GROUP = 8;
    static const int PATH__IDENTIFIER = 9;
    static const int PATH__DRAWSMARKER = 10;
    static const int PATH__STROKE = 11;
    static const int PATH__PATHLENGTH = 12;
    static const int PATH__D = 13;
    static const int PATH__MARKEREND = 14;
    static const int PATH__MARKERSTART = 15;
    static const int PATH_FEATURE_COUNT = 16;

    // IDs for classifier Point
    static const int POINT = 17;
    static const int POINT__OWNER = 0;
    static const int POINT__TARGET = 1;
    static const int POINT__ATTRIBUTE = 2;
    static const int POINT__POSITION = 3;
    static const int POINT__SIZE = 4;
    static const int POINT__ROOT = 5;
    static const int POINT__FILL = 6;
    static const int POINT__VIEWBOX = 7;
    static const int POINT__GROUP = 8;
    static const int POINT__IDENTIFIER = 9;
    static const int POINT__DRAWSMARKER = 10;
    static const int POINT__STROKE = 11;
    static const int POINT_FEATURE_COUNT = 12;

    // IDs for classifier Polygon
    static const int POLYGON = 18;
    static const int POLYGON__OWNER = 0;
    static const int POLYGON__TARGET = 1;
    static const int POLYGON__ATTRIBUTE = 2;
    static const int POLYGON__POSITION = 3;
    static const int POLYGON__SIZE = 4;
    static const int POLYGON__ROOT = 5;
    static const int POLYGON__FILL = 6;
    static const int POLYGON__VIEWBOX = 7;
    static const int POLYGON__GROUP = 8;
    static const int POLYGON__IDENTIFIER = 9;
    static const int POLYGON__DRAWSMARKER = 10;
    static const int POLYGON__STROKE = 11;
    static const int POLYGON__WAYPOINTS = 12;
    static const int POLYGON__MARKEREND = 13;
    static const int POLYGON__MARKERSTART = 14;
    static const int POLYGON_FEATURE_COUNT = 15;

    // IDs for classifier Polyline
    static const int POLYLINE = 19;
    static const int POLYLINE__OWNER = 0;
    static const int POLYLINE__TARGET = 1;
    static const int POLYLINE__ATTRIBUTE = 2;
    static const int POLYLINE__POSITION = 3;
    static const int POLYLINE__SIZE = 4;
    static const int POLYLINE__ROOT = 5;
    static const int POLYLINE__FILL = 6;
    static const int POLYLINE__VIEWBOX = 7;
    static const int POLYLINE__GROUP = 8;
    static const int POLYLINE__IDENTIFIER = 9;
    static const int POLYLINE__DRAWSMARKER = 10;
    static const int POLYLINE__STROKE = 11;
    static const int POLYLINE__WAYPOINTS = 12;
    static const int POLYLINE__STROKEDASHARRAY = 13;
    static const int POLYLINE__MARKEREND = 14;
    static const int POLYLINE__MARKERSTART = 15;
    static const int POLYLINE_FEATURE_COUNT = 16;

    // IDs for classifier Rect
    static const int RECT = 20;
    static const int RECT__OWNER = 0;
    static const int RECT__TARGET = 1;
    static const int RECT__ATTRIBUTE = 2;
    static const int RECT__POSITION = 3;
    static const int RECT__SIZE = 4;
    static const int RECT__ROOT = 5;
    static const int RECT__FILL = 6;
    static const int RECT__VIEWBOX = 7;
    static const int RECT__GROUP = 8;
    static const int RECT__IDENTIFIER = 9;
    static const int RECT__DRAWSMARKER = 10;
    static const int RECT__STROKE = 11;
    static const int RECT__RX = 12;
    static const int RECT__RY = 13;
    static const int RECT_FEATURE_COUNT = 14;

    // IDs for classifier ReferencedFile
    static const int REFERENCEDFILE = 21;
    static const int REFERENCEDFILE__REFERER = 0;
    static const int REFERENCEDFILE__NAME = 1;
    static const int REFERENCEDFILE_FEATURE_COUNT = 2;

    // IDs for classifier RelativeCoord
    static const int RELATIVECOORD = 22;
    static const int RELATIVECOORD__X = 0;
    static const int RELATIVECOORD__Y = 1;
    static const int RELATIVECOORD_FEATURE_COUNT = 2;

    // IDs for classifier Rotate
    static const int ROTATE = 23;
    static const int ROTATE__ATTOWNER = 0;
    static const int ROTATE__ANGLE = 1;
    static const int ROTATE__CX = 2;
    static const int ROTATE__CY = 3;
    static const int ROTATE_FEATURE_COUNT = 4;

    // IDs for classifier Scale
    static const int SCALE = 24;
    static const int SCALE__ATTOWNER = 0;
    static const int SCALE__SX = 1;
    static const int SCALE__SY = 2;
    static const int SCALE_FEATURE_COUNT = 3;

    // IDs for classifier Shape
    static const int SHAPE = 25;
    static const int SHAPE__OWNER = 0;
    static const int SHAPE__TARGET = 1;
    static const int SHAPE__ATTRIBUTE = 2;
    static const int SHAPE__POSITION = 3;
    static const int SHAPE__SIZE = 4;
    static const int SHAPE__ROOT = 5;
    static const int SHAPE__FILL = 6;
    static const int SHAPE__VIEWBOX = 7;
    static const int SHAPE__GROUP = 8;
    static const int SHAPE__IDENTIFIER = 9;
    static const int SHAPE__DRAWSMARKER = 10;
    static const int SHAPE__STROKE = 11;
    static const int SHAPE_FEATURE_COUNT = 12;

    // IDs for classifier StructuralElement
    static const int STRUCTURALELEMENT = 26;
    static const int STRUCTURALELEMENT__OWNER = 0;
    static const int STRUCTURALELEMENT__TARGET = 1;
    static const int STRUCTURALELEMENT__ATTRIBUTE = 2;
    static const int STRUCTURALELEMENT__POSITION = 3;
    static const int STRUCTURALELEMENT__SIZE = 4;
    static const int STRUCTURALELEMENT__ROOT = 5;
    static const int STRUCTURALELEMENT__FILL = 6;
    static const int STRUCTURALELEMENT__VIEWBOX = 7;
    static const int STRUCTURALELEMENT__GROUP = 8;
    static const int STRUCTURALELEMENT__IDENTIFIER = 9;
    static const int STRUCTURALELEMENT__DRAWSMARKER = 10;
    static const int STRUCTURALELEMENT_FEATURE_COUNT = 11;

    // IDs for classifier Svg
    static const int SVG = 27;
    static const int SVG__OWNER = 0;
    static const int SVG__TARGET = 1;
    static const int SVG__ATTRIBUTE = 2;
    static const int SVG__POSITION = 3;
    static const int SVG__SIZE = 4;
    static const int SVG__ROOT = 5;
    static const int SVG__FILL = 6;
    static const int SVG__VIEWBOX = 7;
    static const int SVG__GROUP = 8;
    static const int SVG__IDENTIFIER = 9;
    static const int SVG__DRAWSMARKER = 10;
    static const int SVG__OWNER_SVG = 11;
    static const int SVG__CHILDREN = 12;
    static const int SVG__NAMESPACE = 13;
    static const int SVG__VERSION = 14;
    static const int SVG__BASEPROFILE = 15;
    static const int SVG_FEATURE_COUNT = 16;

    // IDs for classifier SvgFile
    static const int SVGFILE = 28;
    static const int SVGFILE__REFERER = 0;
    static const int SVGFILE__NAME = 1;
    static const int SVGFILE__TAG = 2;
    static const int SVGFILE__ELEMENTS = 3;
    static const int SVGFILE_FEATURE_COUNT = 4;

    // IDs for classifier Symbol
    static const int SYMBOL = 29;
    static const int SYMBOL__OWNER = 0;
    static const int SYMBOL__TARGET = 1;
    static const int SYMBOL__ATTRIBUTE = 2;
    static const int SYMBOL__POSITION = 3;
    static const int SYMBOL__SIZE = 4;
    static const int SYMBOL__ROOT = 5;
    static const int SYMBOL__FILL = 6;
    static const int SYMBOL__VIEWBOX = 7;
    static const int SYMBOL__GROUP = 8;
    static const int SYMBOL__IDENTIFIER = 9;
    static const int SYMBOL__DRAWSMARKER = 10;
    static const int SYMBOL__GROUPCONTENT = 11;
    static const int SYMBOL_FEATURE_COUNT = 12;

    // IDs for classifier Text
    static const int TEXT = 30;
    static const int TEXT__OWNER = 0;
    static const int TEXT__TARGET = 1;
    static const int TEXT__ATTRIBUTE = 2;
    static const int TEXT__POSITION = 3;
    static const int TEXT__SIZE = 4;
    static const int TEXT__ROOT = 5;
    static const int TEXT__FILL = 6;
    static const int TEXT__VIEWBOX = 7;
    static const int TEXT__GROUP = 8;
    static const int TEXT__IDENTIFIER = 9;
    static const int TEXT__DRAWSMARKER = 10;
    static const int TEXT__STROKE = 11;
    static const int TEXT__ROTATE = 12;
    static const int TEXT__TEXTLENGTH = 13;
    static const int TEXT__FONTSIZE = 14;
    static const int TEXT__LENGTHADJUST = 15;
    static const int TEXT__CONTENT = 16;
    static const int TEXT_FEATURE_COUNT = 17;

    // IDs for classifier TextElement
    static const int TEXTELEMENT = 31;
    static const int TEXTELEMENT__OWNER = 0;
    static const int TEXTELEMENT__TARGET = 1;
    static const int TEXTELEMENT__ATTRIBUTE = 2;
    static const int TEXTELEMENT__POSITION = 3;
    static const int TEXTELEMENT__SIZE = 4;
    static const int TEXTELEMENT__ROOT = 5;
    static const int TEXTELEMENT__FILL = 6;
    static const int TEXTELEMENT__VIEWBOX = 7;
    static const int TEXTELEMENT__GROUP = 8;
    static const int TEXTELEMENT__IDENTIFIER = 9;
    static const int TEXTELEMENT__DRAWSMARKER = 10;
    static const int TEXTELEMENT__STROKE = 11;
    static const int TEXTELEMENT__ROTATE = 12;
    static const int TEXTELEMENT__TEXTLENGTH = 13;
    static const int TEXTELEMENT__FONTSIZE = 14;
    static const int TEXTELEMENT_FEATURE_COUNT = 15;

    // IDs for classifier Transform
    static const int TRANSFORM = 32;
    static const int TRANSFORM__ATTOWNER = 0;
    static const int TRANSFORM_FEATURE_COUNT = 1;

    // IDs for classifier Translate
    static const int TRANSLATE = 33;
    static const int TRANSLATE__ATTOWNER = 0;
    static const int TRANSLATE__TX = 1;
    static const int TRANSLATE__TY = 2;
    static const int TRANSLATE_FEATURE_COUNT = 3;

    // IDs for classifier Tref
    static const int TREF = 34;
    static const int TREF__OWNER = 0;
    static const int TREF__TARGET = 1;
    static const int TREF__ATTRIBUTE = 2;
    static const int TREF__POSITION = 3;
    static const int TREF__SIZE = 4;
    static const int TREF__ROOT = 5;
    static const int TREF__FILL = 6;
    static const int TREF__VIEWBOX = 7;
    static const int TREF__GROUP = 8;
    static const int TREF__IDENTIFIER = 9;
    static const int TREF__DRAWSMARKER = 10;
    static const int TREF__STROKE = 11;
    static const int TREF__ROTATE = 12;
    static const int TREF__TEXTLENGTH = 13;
    static const int TREF__FONTSIZE = 14;
    static const int TREF__XLINKHREF = 15;
    static const int TREF_FEATURE_COUNT = 16;

    // IDs for classifier Tspan
    static const int TSPAN = 35;
    static const int TSPAN__OWNER = 0;
    static const int TSPAN__TARGET = 1;
    static const int TSPAN__ATTRIBUTE = 2;
    static const int TSPAN__POSITION = 3;
    static const int TSPAN__SIZE = 4;
    static const int TSPAN__ROOT = 5;
    static const int TSPAN__FILL = 6;
    static const int TSPAN__VIEWBOX = 7;
    static const int TSPAN__GROUP = 8;
    static const int TSPAN__IDENTIFIER = 9;
    static const int TSPAN__DRAWSMARKER = 10;
    static const int TSPAN__STROKE = 11;
    static const int TSPAN__ROTATE = 12;
    static const int TSPAN__TEXTLENGTH = 13;
    static const int TSPAN__FONTSIZE = 14;
    static const int TSPAN__CONTENT = 15;
    static const int TSPAN_FEATURE_COUNT = 16;

    // IDs for classifier Use
    static const int USE = 36;
    static const int USE__OWNER = 0;
    static const int USE__TARGET = 1;
    static const int USE__ATTRIBUTE = 2;
    static const int USE__POSITION = 3;
    static const int USE__SIZE = 4;
    static const int USE__ROOT = 5;
    static const int USE__FILL = 6;
    static const int USE__VIEWBOX = 7;
    static const int USE__GROUP = 8;
    static const int USE__IDENTIFIER = 9;
    static const int USE__DRAWSMARKER = 10;
    static const int USE__USE = 11;
    static const int USE_FEATURE_COUNT = 12;

    // IDs for classifier Visibility
    static const int VISIBILITY = 37;
    static const int VISIBILITY__ATTOWNER = 0;
    static const int VISIBILITY__VISIBLE = 1;
    static const int VISIBILITY_FEATURE_COUNT = 2;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getElement();

    virtual ::ecore::EClass_ptr getStructuralElement();

    virtual ::ecore::EClass_ptr getImage();

    virtual ::ecore::EClass_ptr getSvg();

    virtual ::ecore::EClass_ptr getGroupingElement();

    virtual ::ecore::EClass_ptr getG();

    virtual ::ecore::EClass_ptr getDefs();

    virtual ::ecore::EClass_ptr getSymbol();

    virtual ::ecore::EClass_ptr getUse();

    virtual ::ecore::EClass_ptr getGraphicalElement();

    virtual ::ecore::EClass_ptr getShape();

    virtual ::ecore::EClass_ptr getTextElement();

    virtual ::ecore::EClass_ptr getRect();

    virtual ::ecore::EClass_ptr getCircle();

    virtual ::ecore::EClass_ptr getEllipse();

    virtual ::ecore::EClass_ptr getLine();

    virtual ::ecore::EClass_ptr getPolyline();

    virtual ::ecore::EClass_ptr getPolygon();

    virtual ::ecore::EClass_ptr getPath();

    virtual ::ecore::EClass_ptr getPoint();

    virtual ::ecore::EClass_ptr getMarker();

    virtual ::ecore::EClass_ptr getText();

    virtual ::ecore::EClass_ptr getTspan();

    virtual ::ecore::EClass_ptr getTref();

    virtual ::ecore::EClass_ptr getAttribute();

    virtual ::ecore::EClass_ptr getTransform();

    virtual ::ecore::EClass_ptr getScale();

    virtual ::ecore::EClass_ptr getTranslate();

    virtual ::ecore::EClass_ptr getRotate();

    virtual ::ecore::EClass_ptr getVisibility();

    virtual ::ecore::EClass_ptr getFontWeight();

    virtual ::ecore::EClass_ptr getFontStyle();

    virtual ::ecore::EClass_ptr getDimension();

    virtual ::ecore::EClass_ptr getCoordinates();

    virtual ::ecore::EClass_ptr getRelativeCoord();

    virtual ::ecore::EClass_ptr getAbsoluteCoord();

    virtual ::ecore::EClass_ptr getReferencedFile();

    virtual ::ecore::EClass_ptr getSvgFile();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getElement__owner();

    virtual ::ecore::EReference_ptr getElement__target();

    virtual ::ecore::EReference_ptr getElement__attribute();

    virtual ::ecore::EReference_ptr getElement__position();

    virtual ::ecore::EReference_ptr getElement__size();

    virtual ::ecore::EReference_ptr getElement__root();

    virtual ::ecore::EAttribute_ptr getElement__fill();

    virtual ::ecore::EAttribute_ptr getElement__viewBox();

    virtual ::ecore::EReference_ptr getElement__group();

    virtual ::ecore::EAttribute_ptr getElement__identifier();

    virtual ::ecore::EReference_ptr getElement__drawsMarker();

    virtual ::ecore::EReference_ptr getImage__referee();

    virtual ::ecore::EReference_ptr getSvg__owner_SVG();

    virtual ::ecore::EReference_ptr getSvg__children();

    virtual ::ecore::EAttribute_ptr getSvg__namespace();

    virtual ::ecore::EAttribute_ptr getSvg__version();

    virtual ::ecore::EAttribute_ptr getSvg__baseProfile();

    virtual ::ecore::EReference_ptr getGroupingElement__groupContent();

    virtual ::ecore::EAttribute_ptr getG__name();

    virtual ::ecore::EReference_ptr getUse__use();

    virtual ::ecore::EAttribute_ptr getGraphicalElement__stroke();

    virtual ::ecore::EAttribute_ptr getTextElement__rotate();

    virtual ::ecore::EAttribute_ptr getTextElement__textLength();

    virtual ::ecore::EAttribute_ptr getTextElement__fontSize();

    virtual ::ecore::EAttribute_ptr getRect__rx();

    virtual ::ecore::EAttribute_ptr getRect__ry();

    virtual ::ecore::EReference_ptr getLine__between();

    virtual ::ecore::EAttribute_ptr getLine__markerEnd();

    virtual ::ecore::EAttribute_ptr getLine__markerStart();

    virtual ::ecore::EReference_ptr getPolyline__waypoints();

    virtual ::ecore::EAttribute_ptr getPolyline__strokeDashArray();

    virtual ::ecore::EAttribute_ptr getPolyline__markerEnd();

    virtual ::ecore::EAttribute_ptr getPolyline__markerStart();

    virtual ::ecore::EReference_ptr getPolygon__waypoints();

    virtual ::ecore::EAttribute_ptr getPolygon__markerEnd();

    virtual ::ecore::EAttribute_ptr getPolygon__markerStart();

    virtual ::ecore::EAttribute_ptr getPath__pathLength();

    virtual ::ecore::EAttribute_ptr getPath__d();

    virtual ::ecore::EAttribute_ptr getPath__markerEnd();

    virtual ::ecore::EAttribute_ptr getPath__markerStart();

    virtual ::ecore::EAttribute_ptr getMarker__markerUnits();

    virtual ::ecore::EAttribute_ptr getMarker__refX();

    virtual ::ecore::EAttribute_ptr getMarker__refY();

    virtual ::ecore::EAttribute_ptr getMarker__markerWidth();

    virtual ::ecore::EAttribute_ptr getMarker__markerHeight();

    virtual ::ecore::EAttribute_ptr getMarker__orient();

    virtual ::ecore::EReference_ptr getMarker__drawing();

    virtual ::ecore::EAttribute_ptr getText__lengthAdjust();

    virtual ::ecore::EAttribute_ptr getText__content();

    virtual ::ecore::EAttribute_ptr getTspan__content();

    virtual ::ecore::EReference_ptr getTref__xlinkHref();

    virtual ::ecore::EReference_ptr getAttribute__attOwner();

    virtual ::ecore::EAttribute_ptr getScale__sx();

    virtual ::ecore::EAttribute_ptr getScale__sy();

    virtual ::ecore::EAttribute_ptr getTranslate__tx();

    virtual ::ecore::EAttribute_ptr getTranslate__ty();

    virtual ::ecore::EAttribute_ptr getRotate__angle();

    virtual ::ecore::EAttribute_ptr getRotate__cx();

    virtual ::ecore::EAttribute_ptr getRotate__cy();

    virtual ::ecore::EAttribute_ptr getVisibility__visible();

    virtual ::ecore::EAttribute_ptr getFontWeight__bold();

    virtual ::ecore::EAttribute_ptr getFontStyle__italic();

    virtual ::ecore::EAttribute_ptr getDimension__width();

    virtual ::ecore::EAttribute_ptr getDimension__height();

    virtual ::ecore::EAttribute_ptr getCoordinates__x();

    virtual ::ecore::EAttribute_ptr getCoordinates__y();

    virtual ::ecore::EReference_ptr getReferencedFile__referer();

    virtual ::ecore::EAttribute_ptr getReferencedFile__name();

    virtual ::ecore::EReference_ptr getSvgFile__tag();

    virtual ::ecore::EReference_ptr getSvgFile__elements();

protected:

    static ::ecore::Ptr< SVGPackage > s_instance;

    SVGPackage();
    void _initPackage();

    ::ecore::EClass_ptr m_AbsoluteCoordEClass;
    ::ecore::EClass_ptr m_AttributeEClass;
    ::ecore::EClass_ptr m_CircleEClass;
    ::ecore::EClass_ptr m_CoordinatesEClass;
    ::ecore::EClass_ptr m_DefsEClass;
    ::ecore::EClass_ptr m_DimensionEClass;
    ::ecore::EClass_ptr m_ElementEClass;
    ::ecore::EClass_ptr m_EllipseEClass;
    ::ecore::EClass_ptr m_FontStyleEClass;
    ::ecore::EClass_ptr m_FontWeightEClass;
    ::ecore::EClass_ptr m_GEClass;
    ::ecore::EClass_ptr m_GraphicalElementEClass;
    ::ecore::EClass_ptr m_GroupingElementEClass;
    ::ecore::EClass_ptr m_ImageEClass;
    ::ecore::EClass_ptr m_LineEClass;
    ::ecore::EClass_ptr m_MarkerEClass;
    ::ecore::EClass_ptr m_PathEClass;
    ::ecore::EClass_ptr m_PointEClass;
    ::ecore::EClass_ptr m_PolygonEClass;
    ::ecore::EClass_ptr m_PolylineEClass;
    ::ecore::EClass_ptr m_RectEClass;
    ::ecore::EClass_ptr m_ReferencedFileEClass;
    ::ecore::EClass_ptr m_RelativeCoordEClass;
    ::ecore::EClass_ptr m_RotateEClass;
    ::ecore::EClass_ptr m_ScaleEClass;
    ::ecore::EClass_ptr m_ShapeEClass;
    ::ecore::EClass_ptr m_StructuralElementEClass;
    ::ecore::EClass_ptr m_SvgEClass;
    ::ecore::EClass_ptr m_SvgFileEClass;
    ::ecore::EClass_ptr m_SymbolEClass;
    ::ecore::EClass_ptr m_TextEClass;
    ::ecore::EClass_ptr m_TextElementEClass;
    ::ecore::EClass_ptr m_TransformEClass;
    ::ecore::EClass_ptr m_TranslateEClass;
    ::ecore::EClass_ptr m_TrefEClass;
    ::ecore::EClass_ptr m_TspanEClass;
    ::ecore::EClass_ptr m_UseEClass;
    ::ecore::EClass_ptr m_VisibilityEClass;

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_Element__owner;

    ::ecore::EReference_ptr m_Element__target;

    ::ecore::EReference_ptr m_Element__attribute;

    ::ecore::EReference_ptr m_Element__position;

    ::ecore::EReference_ptr m_Element__size;

    ::ecore::EReference_ptr m_Element__root;

    ::ecore::EAttribute_ptr m_Element__fill;

    ::ecore::EAttribute_ptr m_Element__viewBox;

    ::ecore::EReference_ptr m_Element__group;

    ::ecore::EAttribute_ptr m_Element__identifier;

    ::ecore::EReference_ptr m_Element__drawsMarker;

    ::ecore::EReference_ptr m_Image__referee;

    ::ecore::EReference_ptr m_Svg__owner_SVG;

    ::ecore::EReference_ptr m_Svg__children;

    ::ecore::EAttribute_ptr m_Svg__namespace;

    ::ecore::EAttribute_ptr m_Svg__version;

    ::ecore::EAttribute_ptr m_Svg__baseProfile;

    ::ecore::EReference_ptr m_GroupingElement__groupContent;

    ::ecore::EAttribute_ptr m_G__name;

    ::ecore::EReference_ptr m_Use__use;

    ::ecore::EAttribute_ptr m_GraphicalElement__stroke;

    ::ecore::EAttribute_ptr m_TextElement__rotate;

    ::ecore::EAttribute_ptr m_TextElement__textLength;

    ::ecore::EAttribute_ptr m_TextElement__fontSize;

    ::ecore::EAttribute_ptr m_Rect__rx;

    ::ecore::EAttribute_ptr m_Rect__ry;

    ::ecore::EReference_ptr m_Line__between;

    ::ecore::EAttribute_ptr m_Line__markerEnd;

    ::ecore::EAttribute_ptr m_Line__markerStart;

    ::ecore::EReference_ptr m_Polyline__waypoints;

    ::ecore::EAttribute_ptr m_Polyline__strokeDashArray;

    ::ecore::EAttribute_ptr m_Polyline__markerEnd;

    ::ecore::EAttribute_ptr m_Polyline__markerStart;

    ::ecore::EReference_ptr m_Polygon__waypoints;

    ::ecore::EAttribute_ptr m_Polygon__markerEnd;

    ::ecore::EAttribute_ptr m_Polygon__markerStart;

    ::ecore::EAttribute_ptr m_Path__pathLength;

    ::ecore::EAttribute_ptr m_Path__d;

    ::ecore::EAttribute_ptr m_Path__markerEnd;

    ::ecore::EAttribute_ptr m_Path__markerStart;

    ::ecore::EAttribute_ptr m_Marker__markerUnits;

    ::ecore::EAttribute_ptr m_Marker__refX;

    ::ecore::EAttribute_ptr m_Marker__refY;

    ::ecore::EAttribute_ptr m_Marker__markerWidth;

    ::ecore::EAttribute_ptr m_Marker__markerHeight;

    ::ecore::EAttribute_ptr m_Marker__orient;

    ::ecore::EReference_ptr m_Marker__drawing;

    ::ecore::EAttribute_ptr m_Text__lengthAdjust;

    ::ecore::EAttribute_ptr m_Text__content;

    ::ecore::EAttribute_ptr m_Tspan__content;

    ::ecore::EReference_ptr m_Tref__xlinkHref;

    ::ecore::EReference_ptr m_Attribute__attOwner;

    ::ecore::EAttribute_ptr m_Scale__sx;

    ::ecore::EAttribute_ptr m_Scale__sy;

    ::ecore::EAttribute_ptr m_Translate__tx;

    ::ecore::EAttribute_ptr m_Translate__ty;

    ::ecore::EAttribute_ptr m_Rotate__angle;

    ::ecore::EAttribute_ptr m_Rotate__cx;

    ::ecore::EAttribute_ptr m_Rotate__cy;

    ::ecore::EAttribute_ptr m_Visibility__visible;

    ::ecore::EAttribute_ptr m_FontWeight__bold;

    ::ecore::EAttribute_ptr m_FontStyle__italic;

    ::ecore::EAttribute_ptr m_Dimension__width;

    ::ecore::EAttribute_ptr m_Dimension__height;

    ::ecore::EAttribute_ptr m_Coordinates__x;

    ::ecore::EAttribute_ptr m_Coordinates__y;

    ::ecore::EReference_ptr m_ReferencedFile__referer;

    ::ecore::EAttribute_ptr m_ReferencedFile__name;

    ::ecore::EReference_ptr m_SvgFile__tag;

    ::ecore::EReference_ptr m_SvgFile__elements;

};

}
 // SVG

#endif // _SVGPACKAGE_HPP

