// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SVGPackageImpl.cpp
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

#include <SVG/SVGPackage.hpp>
#include <SVG/SVGFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <PrimitiveTypes/PrimitiveTypesPackage.hpp>

using namespace ::SVG;

SVGPackage::SVGPackage()
{
    m_AbsoluteCoordEClass = ::ecore::make< ::ecore::EClass >();
    m_Attribute__attOwner = ::ecore::make< ::ecore::EReference >();
    m_AttributeEClass = ::ecore::make< ::ecore::EClass >();
    m_CircleEClass = ::ecore::make< ::ecore::EClass >();
    m_Coordinates__x = ::ecore::make< ::ecore::EAttribute >();
    m_Coordinates__y = ::ecore::make< ::ecore::EAttribute >();
    m_CoordinatesEClass = ::ecore::make< ::ecore::EClass >();
    m_DefsEClass = ::ecore::make< ::ecore::EClass >();
    m_Dimension__width = ::ecore::make< ::ecore::EAttribute >();
    m_Dimension__height = ::ecore::make< ::ecore::EAttribute >();
    m_DimensionEClass = ::ecore::make< ::ecore::EClass >();
    m_Element__owner = ::ecore::make< ::ecore::EReference >();
    m_Element__target = ::ecore::make< ::ecore::EReference >();
    m_Element__attribute = ::ecore::make< ::ecore::EReference >();
    m_Element__position = ::ecore::make< ::ecore::EReference >();
    m_Element__size = ::ecore::make< ::ecore::EReference >();
    m_Element__root = ::ecore::make< ::ecore::EReference >();
    m_Element__fill = ::ecore::make< ::ecore::EAttribute >();
    m_Element__viewBox = ::ecore::make< ::ecore::EAttribute >();
    m_Element__group = ::ecore::make< ::ecore::EReference >();
    m_Element__identifier = ::ecore::make< ::ecore::EAttribute >();
    m_Element__drawsMarker = ::ecore::make< ::ecore::EReference >();
    m_ElementEClass = ::ecore::make< ::ecore::EClass >();
    m_EllipseEClass = ::ecore::make< ::ecore::EClass >();
    m_FontStyle__italic = ::ecore::make< ::ecore::EAttribute >();
    m_FontStyleEClass = ::ecore::make< ::ecore::EClass >();
    m_FontWeight__bold = ::ecore::make< ::ecore::EAttribute >();
    m_FontWeightEClass = ::ecore::make< ::ecore::EClass >();
    m_G__name = ::ecore::make< ::ecore::EAttribute >();
    m_GEClass = ::ecore::make< ::ecore::EClass >();
    m_GraphicalElement__stroke = ::ecore::make< ::ecore::EAttribute >();
    m_GraphicalElementEClass = ::ecore::make< ::ecore::EClass >();
    m_GroupingElement__groupContent = ::ecore::make< ::ecore::EReference >();
    m_GroupingElementEClass = ::ecore::make< ::ecore::EClass >();
    m_Image__referee = ::ecore::make< ::ecore::EReference >();
    m_ImageEClass = ::ecore::make< ::ecore::EClass >();
    m_Line__between = ::ecore::make< ::ecore::EReference >();
    m_Line__markerEnd = ::ecore::make< ::ecore::EAttribute >();
    m_Line__markerStart = ::ecore::make< ::ecore::EAttribute >();
    m_LineEClass = ::ecore::make< ::ecore::EClass >();
    m_Marker__markerUnits = ::ecore::make< ::ecore::EAttribute >();
    m_Marker__refX = ::ecore::make< ::ecore::EAttribute >();
    m_Marker__refY = ::ecore::make< ::ecore::EAttribute >();
    m_Marker__markerWidth = ::ecore::make< ::ecore::EAttribute >();
    m_Marker__markerHeight = ::ecore::make< ::ecore::EAttribute >();
    m_Marker__orient = ::ecore::make< ::ecore::EAttribute >();
    m_Marker__drawing = ::ecore::make< ::ecore::EReference >();
    m_MarkerEClass = ::ecore::make< ::ecore::EClass >();
    m_Path__pathLength = ::ecore::make< ::ecore::EAttribute >();
    m_Path__d = ::ecore::make< ::ecore::EAttribute >();
    m_Path__markerEnd = ::ecore::make< ::ecore::EAttribute >();
    m_Path__markerStart = ::ecore::make< ::ecore::EAttribute >();
    m_PathEClass = ::ecore::make< ::ecore::EClass >();
    m_PointEClass = ::ecore::make< ::ecore::EClass >();
    m_Polygon__waypoints = ::ecore::make< ::ecore::EReference >();
    m_Polygon__markerEnd = ::ecore::make< ::ecore::EAttribute >();
    m_Polygon__markerStart = ::ecore::make< ::ecore::EAttribute >();
    m_PolygonEClass = ::ecore::make< ::ecore::EClass >();
    m_Polyline__waypoints = ::ecore::make< ::ecore::EReference >();
    m_Polyline__strokeDashArray = ::ecore::make< ::ecore::EAttribute >();
    m_Polyline__markerEnd = ::ecore::make< ::ecore::EAttribute >();
    m_Polyline__markerStart = ::ecore::make< ::ecore::EAttribute >();
    m_PolylineEClass = ::ecore::make< ::ecore::EClass >();
    m_Rect__rx = ::ecore::make< ::ecore::EAttribute >();
    m_Rect__ry = ::ecore::make< ::ecore::EAttribute >();
    m_RectEClass = ::ecore::make< ::ecore::EClass >();
    m_ReferencedFile__referer = ::ecore::make< ::ecore::EReference >();
    m_ReferencedFile__name = ::ecore::make< ::ecore::EAttribute >();
    m_ReferencedFileEClass = ::ecore::make< ::ecore::EClass >();
    m_RelativeCoordEClass = ::ecore::make< ::ecore::EClass >();
    m_Rotate__angle = ::ecore::make< ::ecore::EAttribute >();
    m_Rotate__cx = ::ecore::make< ::ecore::EAttribute >();
    m_Rotate__cy = ::ecore::make< ::ecore::EAttribute >();
    m_RotateEClass = ::ecore::make< ::ecore::EClass >();
    m_Scale__sx = ::ecore::make< ::ecore::EAttribute >();
    m_Scale__sy = ::ecore::make< ::ecore::EAttribute >();
    m_ScaleEClass = ::ecore::make< ::ecore::EClass >();
    m_ShapeEClass = ::ecore::make< ::ecore::EClass >();
    m_StructuralElementEClass = ::ecore::make< ::ecore::EClass >();
    m_Svg__owner_SVG = ::ecore::make< ::ecore::EReference >();
    m_Svg__children = ::ecore::make< ::ecore::EReference >();
    m_Svg__namespace = ::ecore::make< ::ecore::EAttribute >();
    m_Svg__version = ::ecore::make< ::ecore::EAttribute >();
    m_Svg__baseProfile = ::ecore::make< ::ecore::EAttribute >();
    m_SvgEClass = ::ecore::make< ::ecore::EClass >();
    m_SvgFile__tag = ::ecore::make< ::ecore::EReference >();
    m_SvgFile__elements = ::ecore::make< ::ecore::EReference >();
    m_SvgFileEClass = ::ecore::make< ::ecore::EClass >();
    m_SymbolEClass = ::ecore::make< ::ecore::EClass >();
    m_Text__lengthAdjust = ::ecore::make< ::ecore::EAttribute >();
    m_Text__content = ::ecore::make< ::ecore::EAttribute >();
    m_TextEClass = ::ecore::make< ::ecore::EClass >();
    m_TextElement__rotate = ::ecore::make< ::ecore::EAttribute >();
    m_TextElement__textLength = ::ecore::make< ::ecore::EAttribute >();
    m_TextElement__fontSize = ::ecore::make< ::ecore::EAttribute >();
    m_TextElementEClass = ::ecore::make< ::ecore::EClass >();
    m_TransformEClass = ::ecore::make< ::ecore::EClass >();
    m_Translate__tx = ::ecore::make< ::ecore::EAttribute >();
    m_Translate__ty = ::ecore::make< ::ecore::EAttribute >();
    m_TranslateEClass = ::ecore::make< ::ecore::EClass >();
    m_Tref__xlinkHref = ::ecore::make< ::ecore::EReference >();
    m_TrefEClass = ::ecore::make< ::ecore::EClass >();
    m_Tspan__content = ::ecore::make< ::ecore::EAttribute >();
    m_TspanEClass = ::ecore::make< ::ecore::EClass >();
    m_Use__use = ::ecore::make< ::ecore::EReference >();
    m_UseEClass = ::ecore::make< ::ecore::EClass >();
    m_Visibility__visible = ::ecore::make< ::ecore::EAttribute >();
    m_VisibilityEClass = ::ecore::make< ::ecore::EClass >();
}

void SVGPackage::_initPackage()
{
    [this]()
    { // Factory
        auto &&_fa = SVGFactory::_instance();
        basicsetEFactoryInstance(_fa);
        _fa->basicsetEPackage(_this());
    }();

    // Create classes and their features

    [this]()
    { // Classifier AbsoluteCoord
        auto &&classifier = m_AbsoluteCoordEClass;

        // ENamedElement
        classifier->setName("AbsoluteCoord");

        // EClassifier
        classifier->setClassifierID(ABSOLUTECOORD);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature attOwner of class Attribute
        auto &&feature = m_Attribute__attOwner;

        // ENamedElement
        feature->setName("attOwner");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ATTRIBUTE__ATTOWNER);
        feature->basicsetEContainingClass(m_AttributeEClass);

        // EReference
        feature->setEReferenceType(m_ElementEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_Element__attribute);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Attribute
        auto &&classifier = m_AttributeEClass;

        // ENamedElement
        classifier->setName("Attribute");

        // EClassifier
        classifier->setClassifierID(ATTRIBUTE);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AttributeEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Attribute__attOwner);
        }
    }();

    [this]()
    { // Classifier Circle
        auto &&classifier = m_CircleEClass;

        // ENamedElement
        classifier->setName("Circle");

        // EClassifier
        classifier->setClassifierID(CIRCLE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature x of class Coordinates
        auto &&feature = m_Coordinates__x;

        // ENamedElement
        feature->setName("x");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::COORDINATES__X);
        feature->basicsetEContainingClass(m_CoordinatesEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature y of class Coordinates
        auto &&feature = m_Coordinates__y;

        // ENamedElement
        feature->setName("y");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::COORDINATES__Y);
        feature->basicsetEContainingClass(m_CoordinatesEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Coordinates
        auto &&classifier = m_CoordinatesEClass;

        // ENamedElement
        classifier->setName("Coordinates");

        // EClassifier
        classifier->setClassifierID(COORDINATES);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_CoordinatesEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Coordinates__x);
            eStructuralFeatures.basicAdd(m_Coordinates__y);
        }
    }();

    [this]()
    { // Classifier Defs
        auto &&classifier = m_DefsEClass;

        // ENamedElement
        classifier->setName("Defs");

        // EClassifier
        classifier->setClassifierID(DEFS);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature width of class Dimension
        auto &&feature = m_Dimension__width;

        // ENamedElement
        feature->setName("width");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::DIMENSION__WIDTH);
        feature->basicsetEContainingClass(m_DimensionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature height of class Dimension
        auto &&feature = m_Dimension__height;

        // ENamedElement
        feature->setName("height");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::DIMENSION__HEIGHT);
        feature->basicsetEContainingClass(m_DimensionEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Dimension
        auto &&classifier = m_DimensionEClass;

        // ENamedElement
        classifier->setName("Dimension");

        // EClassifier
        classifier->setClassifierID(DIMENSION);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DimensionEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Dimension__width);
            eStructuralFeatures.basicAdd(m_Dimension__height);
        }
    }();

    [this]()
    { // Feature owner of class Element
        auto &&feature = m_Element__owner;

        // ENamedElement
        feature->setName("owner");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_SvgFileEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ELEMENT__OWNER);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EReference
        feature->setEReferenceType(m_SvgFileEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_SvgFile__elements);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature target of class Element
        auto &&feature = m_Element__target;

        // ENamedElement
        feature->setName("target");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_UseEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ELEMENT__TARGET);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EReference
        feature->setEReferenceType(m_UseEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_Use__use);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature attribute of class Element
        auto &&feature = m_Element__attribute;

        // ENamedElement
        feature->setName("attribute");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_AttributeEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ELEMENT__ATTRIBUTE);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EReference
        feature->setEReferenceType(m_AttributeEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_Attribute__attOwner);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature position of class Element
        auto &&feature = m_Element__position;

        // ENamedElement
        feature->setName("position");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_CoordinatesEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ELEMENT__POSITION);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EReference
        feature->setEReferenceType(m_CoordinatesEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature size of class Element
        auto &&feature = m_Element__size;

        // ENamedElement
        feature->setName("size");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_DimensionEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ELEMENT__SIZE);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EReference
        feature->setEReferenceType(m_DimensionEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature root of class Element
        auto &&feature = m_Element__root;

        // ENamedElement
        feature->setName("root");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_SvgEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ELEMENT__ROOT);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EReference
        feature->setEReferenceType(m_SvgEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_Svg__children);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature fill of class Element
        auto &&feature = m_Element__fill;

        // ENamedElement
        feature->setName("fill");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ELEMENT__FILL);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature viewBox of class Element
        auto &&feature = m_Element__viewBox;

        // ENamedElement
        feature->setName("viewBox");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ELEMENT__VIEWBOX);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature group of class Element
        auto &&feature = m_Element__group;

        // ENamedElement
        feature->setName("group");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_GroupingElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ELEMENT__GROUP);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EReference
        feature->setEReferenceType(m_GroupingElementEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_GroupingElement__groupContent);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature identifier of class Element
        auto &&feature = m_Element__identifier;

        // ENamedElement
        feature->setName("identifier");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ELEMENT__IDENTIFIER);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature drawsMarker of class Element
        auto &&feature = m_Element__drawsMarker;

        // ENamedElement
        feature->setName("drawsMarker");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_MarkerEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ELEMENT__DRAWSMARKER);
        feature->basicsetEContainingClass(m_ElementEClass);

        // EReference
        feature->setEReferenceType(m_MarkerEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_Marker__drawing);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Element
        auto &&classifier = m_ElementEClass;

        // ENamedElement
        classifier->setName("Element");

        // EClassifier
        classifier->setClassifierID(ELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Element__owner);
            eStructuralFeatures.basicAdd(m_Element__target);
            eStructuralFeatures.basicAdd(m_Element__attribute);
            eStructuralFeatures.basicAdd(m_Element__position);
            eStructuralFeatures.basicAdd(m_Element__size);
            eStructuralFeatures.basicAdd(m_Element__root);
            eStructuralFeatures.basicAdd(m_Element__fill);
            eStructuralFeatures.basicAdd(m_Element__viewBox);
            eStructuralFeatures.basicAdd(m_Element__group);
            eStructuralFeatures.basicAdd(m_Element__identifier);
            eStructuralFeatures.basicAdd(m_Element__drawsMarker);
        }
    }();

    [this]()
    { // Classifier Ellipse
        auto &&classifier = m_EllipseEClass;

        // ENamedElement
        classifier->setName("Ellipse");

        // EClassifier
        classifier->setClassifierID(ELLIPSE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature italic of class FontStyle
        auto &&feature = m_FontStyle__italic;

        // ENamedElement
        feature->setName("italic");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getBoolean());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::FONTSTYLE__ITALIC);
        feature->basicsetEContainingClass(m_FontStyleEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Classifier FontStyle
        auto &&classifier = m_FontStyleEClass;

        // ENamedElement
        classifier->setName("FontStyle");

        // EClassifier
        classifier->setClassifierID(FONTSTYLE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FontStyleEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_FontStyle__italic);
        }
    }();

    [this]()
    { // Feature bold of class FontWeight
        auto &&feature = m_FontWeight__bold;

        // ENamedElement
        feature->setName("bold");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getBoolean());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::FONTWEIGHT__BOLD);
        feature->basicsetEContainingClass(m_FontWeightEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Classifier FontWeight
        auto &&classifier = m_FontWeightEClass;

        // ENamedElement
        classifier->setName("FontWeight");

        // EClassifier
        classifier->setClassifierID(FONTWEIGHT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FontWeightEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_FontWeight__bold);
        }
    }();

    [this]()
    { // Feature name of class G
        auto &&feature = m_G__name;

        // ENamedElement
        feature->setName("name");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::G__NAME);
        feature->basicsetEContainingClass(m_GEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier G
        auto &&classifier = m_GEClass;

        // ENamedElement
        classifier->setName("G");

        // EClassifier
        classifier->setClassifierID(G);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_GEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_G__name);
        }
    }();

    [this]()
    { // Feature stroke of class GraphicalElement
        auto &&feature = m_GraphicalElement__stroke;

        // ENamedElement
        feature->setName("stroke");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::GRAPHICALELEMENT__STROKE);
        feature->basicsetEContainingClass(m_GraphicalElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier GraphicalElement
        auto &&classifier = m_GraphicalElementEClass;

        // ENamedElement
        classifier->setName("GraphicalElement");

        // EClassifier
        classifier->setClassifierID(GRAPHICALELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_GraphicalElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_GraphicalElement__stroke);
        }
    }();

    [this]()
    { // Feature groupContent of class GroupingElement
        auto &&feature = m_GroupingElement__groupContent;

        // ENamedElement
        feature->setName("groupContent");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::GROUPINGELEMENT__GROUPCONTENT);
        feature->basicsetEContainingClass(m_GroupingElementEClass);

        // EReference
        feature->setEReferenceType(m_ElementEClass);
        feature->setContainment(true);
        feature->setEOpposite(m_Element__group);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier GroupingElement
        auto &&classifier = m_GroupingElementEClass;

        // ENamedElement
        classifier->setName("GroupingElement");

        // EClassifier
        classifier->setClassifierID(GROUPINGELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_GroupingElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_GroupingElement__groupContent);
        }
    }();

    [this]()
    { // Feature referee of class Image
        auto &&feature = m_Image__referee;

        // ENamedElement
        feature->setName("referee");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ReferencedFileEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::IMAGE__REFEREE);
        feature->basicsetEContainingClass(m_ImageEClass);

        // EReference
        feature->setEReferenceType(m_ReferencedFileEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_ReferencedFile__referer);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Image
        auto &&classifier = m_ImageEClass;

        // ENamedElement
        classifier->setName("Image");

        // EClassifier
        classifier->setClassifierID(IMAGE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ImageEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Image__referee);
        }
    }();

    [this]()
    { // Feature between of class Line
        auto &&feature = m_Line__between;

        // ENamedElement
        feature->setName("between");

        // ETypedElement
        feature->setLowerBound(2);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(2);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PointEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::LINE__BETWEEN);
        feature->basicsetEContainingClass(m_LineEClass);

        // EReference
        feature->setEReferenceType(m_PointEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature markerEnd of class Line
        auto &&feature = m_Line__markerEnd;

        // ENamedElement
        feature->setName("markerEnd");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::LINE__MARKEREND);
        feature->basicsetEContainingClass(m_LineEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature markerStart of class Line
        auto &&feature = m_Line__markerStart;

        // ENamedElement
        feature->setName("markerStart");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::LINE__MARKERSTART);
        feature->basicsetEContainingClass(m_LineEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Line
        auto &&classifier = m_LineEClass;

        // ENamedElement
        classifier->setName("Line");

        // EClassifier
        classifier->setClassifierID(LINE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LineEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Line__between);
            eStructuralFeatures.basicAdd(m_Line__markerEnd);
            eStructuralFeatures.basicAdd(m_Line__markerStart);
        }
    }();

    [this]()
    { // Feature markerUnits of class Marker
        auto &&feature = m_Marker__markerUnits;

        // ENamedElement
        feature->setName("markerUnits");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::MARKER__MARKERUNITS);
        feature->basicsetEContainingClass(m_MarkerEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature refX of class Marker
        auto &&feature = m_Marker__refX;

        // ENamedElement
        feature->setName("refX");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::MARKER__REFX);
        feature->basicsetEContainingClass(m_MarkerEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature refY of class Marker
        auto &&feature = m_Marker__refY;

        // ENamedElement
        feature->setName("refY");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::MARKER__REFY);
        feature->basicsetEContainingClass(m_MarkerEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature markerWidth of class Marker
        auto &&feature = m_Marker__markerWidth;

        // ENamedElement
        feature->setName("markerWidth");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::MARKER__MARKERWIDTH);
        feature->basicsetEContainingClass(m_MarkerEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature markerHeight of class Marker
        auto &&feature = m_Marker__markerHeight;

        // ENamedElement
        feature->setName("markerHeight");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::MARKER__MARKERHEIGHT);
        feature->basicsetEContainingClass(m_MarkerEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature orient of class Marker
        auto &&feature = m_Marker__orient;

        // ENamedElement
        feature->setName("orient");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::MARKER__ORIENT);
        feature->basicsetEContainingClass(m_MarkerEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature drawing of class Marker
        auto &&feature = m_Marker__drawing;

        // ENamedElement
        feature->setName("drawing");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::MARKER__DRAWING);
        feature->basicsetEContainingClass(m_MarkerEClass);

        // EReference
        feature->setEReferenceType(m_ElementEClass);
        feature->setContainment(true);
        feature->setEOpposite(m_Element__drawsMarker);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Marker
        auto &&classifier = m_MarkerEClass;

        // ENamedElement
        classifier->setName("Marker");

        // EClassifier
        classifier->setClassifierID(MARKER);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_MarkerEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Marker__markerUnits);
            eStructuralFeatures.basicAdd(m_Marker__refX);
            eStructuralFeatures.basicAdd(m_Marker__refY);
            eStructuralFeatures.basicAdd(m_Marker__markerWidth);
            eStructuralFeatures.basicAdd(m_Marker__markerHeight);
            eStructuralFeatures.basicAdd(m_Marker__orient);
            eStructuralFeatures.basicAdd(m_Marker__drawing);
        }
    }();

    [this]()
    { // Feature pathLength of class Path
        auto &&feature = m_Path__pathLength;

        // ENamedElement
        feature->setName("pathLength");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::PATH__PATHLENGTH);
        feature->basicsetEContainingClass(m_PathEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature d of class Path
        auto &&feature = m_Path__d;

        // ENamedElement
        feature->setName("d");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::PATH__D);
        feature->basicsetEContainingClass(m_PathEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature markerEnd of class Path
        auto &&feature = m_Path__markerEnd;

        // ENamedElement
        feature->setName("markerEnd");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::PATH__MARKEREND);
        feature->basicsetEContainingClass(m_PathEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature markerStart of class Path
        auto &&feature = m_Path__markerStart;

        // ENamedElement
        feature->setName("markerStart");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::PATH__MARKERSTART);
        feature->basicsetEContainingClass(m_PathEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Path
        auto &&classifier = m_PathEClass;

        // ENamedElement
        classifier->setName("Path");

        // EClassifier
        classifier->setClassifierID(PATH);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PathEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Path__pathLength);
            eStructuralFeatures.basicAdd(m_Path__d);
            eStructuralFeatures.basicAdd(m_Path__markerEnd);
            eStructuralFeatures.basicAdd(m_Path__markerStart);
        }
    }();

    [this]()
    { // Classifier Point
        auto &&classifier = m_PointEClass;

        // ENamedElement
        classifier->setName("Point");

        // EClassifier
        classifier->setClassifierID(POINT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature waypoints of class Polygon
        auto &&feature = m_Polygon__waypoints;

        // ENamedElement
        feature->setName("waypoints");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PointEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::POLYGON__WAYPOINTS);
        feature->basicsetEContainingClass(m_PolygonEClass);

        // EReference
        feature->setEReferenceType(m_PointEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature markerEnd of class Polygon
        auto &&feature = m_Polygon__markerEnd;

        // ENamedElement
        feature->setName("markerEnd");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::POLYGON__MARKEREND);
        feature->basicsetEContainingClass(m_PolygonEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature markerStart of class Polygon
        auto &&feature = m_Polygon__markerStart;

        // ENamedElement
        feature->setName("markerStart");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::POLYGON__MARKERSTART);
        feature->basicsetEContainingClass(m_PolygonEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Polygon
        auto &&classifier = m_PolygonEClass;

        // ENamedElement
        classifier->setName("Polygon");

        // EClassifier
        classifier->setClassifierID(POLYGON);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PolygonEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Polygon__waypoints);
            eStructuralFeatures.basicAdd(m_Polygon__markerEnd);
            eStructuralFeatures.basicAdd(m_Polygon__markerStart);
        }
    }();

    [this]()
    { // Feature waypoints of class Polyline
        auto &&feature = m_Polyline__waypoints;

        // ENamedElement
        feature->setName("waypoints");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_PointEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::POLYLINE__WAYPOINTS);
        feature->basicsetEContainingClass(m_PolylineEClass);

        // EReference
        feature->setEReferenceType(m_PointEClass);
        feature->setContainment(true);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature strokeDashArray of class Polyline
        auto &&feature = m_Polyline__strokeDashArray;

        // ENamedElement
        feature->setName("strokeDashArray");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::POLYLINE__STROKEDASHARRAY);
        feature->basicsetEContainingClass(m_PolylineEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature markerEnd of class Polyline
        auto &&feature = m_Polyline__markerEnd;

        // ENamedElement
        feature->setName("markerEnd");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::POLYLINE__MARKEREND);
        feature->basicsetEContainingClass(m_PolylineEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature markerStart of class Polyline
        auto &&feature = m_Polyline__markerStart;

        // ENamedElement
        feature->setName("markerStart");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::POLYLINE__MARKERSTART);
        feature->basicsetEContainingClass(m_PolylineEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Polyline
        auto &&classifier = m_PolylineEClass;

        // ENamedElement
        classifier->setName("Polyline");

        // EClassifier
        classifier->setClassifierID(POLYLINE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PolylineEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Polyline__waypoints);
            eStructuralFeatures.basicAdd(m_Polyline__strokeDashArray);
            eStructuralFeatures.basicAdd(m_Polyline__markerEnd);
            eStructuralFeatures.basicAdd(m_Polyline__markerStart);
        }
    }();

    [this]()
    { // Feature rx of class Rect
        auto &&feature = m_Rect__rx;

        // ENamedElement
        feature->setName("rx");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::RECT__RX);
        feature->basicsetEContainingClass(m_RectEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature ry of class Rect
        auto &&feature = m_Rect__ry;

        // ENamedElement
        feature->setName("ry");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::RECT__RY);
        feature->basicsetEContainingClass(m_RectEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Rect
        auto &&classifier = m_RectEClass;

        // ENamedElement
        classifier->setName("Rect");

        // EClassifier
        classifier->setClassifierID(RECT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RectEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Rect__rx);
            eStructuralFeatures.basicAdd(m_Rect__ry);
        }
    }();

    [this]()
    { // Feature referer of class ReferencedFile
        auto &&feature = m_ReferencedFile__referer;

        // ENamedElement
        feature->setName("referer");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ImageEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::REFERENCEDFILE__REFERER);
        feature->basicsetEContainingClass(m_ReferencedFileEClass);

        // EReference
        feature->setEReferenceType(m_ImageEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_Image__referee);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature name of class ReferencedFile
        auto &&feature = m_ReferencedFile__name;

        // ENamedElement
        feature->setName("name");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::REFERENCEDFILE__NAME);
        feature->basicsetEContainingClass(m_ReferencedFileEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier ReferencedFile
        auto &&classifier = m_ReferencedFileEClass;

        // ENamedElement
        classifier->setName("ReferencedFile");

        // EClassifier
        classifier->setClassifierID(REFERENCEDFILE);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ReferencedFileEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_ReferencedFile__referer);
            eStructuralFeatures.basicAdd(m_ReferencedFile__name);
        }
    }();

    [this]()
    { // Classifier RelativeCoord
        auto &&classifier = m_RelativeCoordEClass;

        // ENamedElement
        classifier->setName("RelativeCoord");

        // EClassifier
        classifier->setClassifierID(RELATIVECOORD);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature angle of class Rotate
        auto &&feature = m_Rotate__angle;

        // ENamedElement
        feature->setName("angle");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ROTATE__ANGLE);
        feature->basicsetEContainingClass(m_RotateEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature cx of class Rotate
        auto &&feature = m_Rotate__cx;

        // ENamedElement
        feature->setName("cx");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ROTATE__CX);
        feature->basicsetEContainingClass(m_RotateEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature cy of class Rotate
        auto &&feature = m_Rotate__cy;

        // ENamedElement
        feature->setName("cy");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::ROTATE__CY);
        feature->basicsetEContainingClass(m_RotateEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Rotate
        auto &&classifier = m_RotateEClass;

        // ENamedElement
        classifier->setName("Rotate");

        // EClassifier
        classifier->setClassifierID(ROTATE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RotateEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Rotate__angle);
            eStructuralFeatures.basicAdd(m_Rotate__cx);
            eStructuralFeatures.basicAdd(m_Rotate__cy);
        }
    }();

    [this]()
    { // Feature sx of class Scale
        auto &&feature = m_Scale__sx;

        // ENamedElement
        feature->setName("sx");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::SCALE__SX);
        feature->basicsetEContainingClass(m_ScaleEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature sy of class Scale
        auto &&feature = m_Scale__sy;

        // ENamedElement
        feature->setName("sy");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::SCALE__SY);
        feature->basicsetEContainingClass(m_ScaleEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Scale
        auto &&classifier = m_ScaleEClass;

        // ENamedElement
        classifier->setName("Scale");

        // EClassifier
        classifier->setClassifierID(SCALE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ScaleEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Scale__sx);
            eStructuralFeatures.basicAdd(m_Scale__sy);
        }
    }();

    [this]()
    { // Classifier Shape
        auto &&classifier = m_ShapeEClass;

        // ENamedElement
        classifier->setName("Shape");

        // EClassifier
        classifier->setClassifierID(SHAPE);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Classifier StructuralElement
        auto &&classifier = m_StructuralElementEClass;

        // ENamedElement
        classifier->setName("StructuralElement");

        // EClassifier
        classifier->setClassifierID(STRUCTURALELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature owner_SVG of class Svg
        auto &&feature = m_Svg__owner_SVG;

        // ENamedElement
        feature->setName("owner_SVG");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_SvgFileEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::SVG__OWNER_SVG);
        feature->basicsetEContainingClass(m_SvgEClass);

        // EReference
        feature->setEReferenceType(m_SvgFileEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_SvgFile__tag);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature children of class Svg
        auto &&feature = m_Svg__children;

        // ENamedElement
        feature->setName("children");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(true);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::SVG__CHILDREN);
        feature->basicsetEContainingClass(m_SvgEClass);

        // EReference
        feature->setEReferenceType(m_ElementEClass);
        feature->setContainment(true);
        feature->setEOpposite(m_Element__root);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature namespace of class Svg
        auto &&feature = m_Svg__namespace;

        // ENamedElement
        feature->setName("namespace");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::SVG__NAMESPACE);
        feature->basicsetEContainingClass(m_SvgEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature version of class Svg
        auto &&feature = m_Svg__version;

        // ENamedElement
        feature->setName("version");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::SVG__VERSION);
        feature->basicsetEContainingClass(m_SvgEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature baseProfile of class Svg
        auto &&feature = m_Svg__baseProfile;

        // ENamedElement
        feature->setName("baseProfile");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::SVG__BASEPROFILE);
        feature->basicsetEContainingClass(m_SvgEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Svg
        auto &&classifier = m_SvgEClass;

        // ENamedElement
        classifier->setName("Svg");

        // EClassifier
        classifier->setClassifierID(SVG);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SvgEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Svg__owner_SVG);
            eStructuralFeatures.basicAdd(m_Svg__children);
            eStructuralFeatures.basicAdd(m_Svg__namespace);
            eStructuralFeatures.basicAdd(m_Svg__version);
            eStructuralFeatures.basicAdd(m_Svg__baseProfile);
        }
    }();

    [this]()
    { // Feature tag of class SvgFile
        auto &&feature = m_SvgFile__tag;

        // ENamedElement
        feature->setName("tag");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_SvgEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::SVGFILE__TAG);
        feature->basicsetEContainingClass(m_SvgFileEClass);

        // EReference
        feature->setEReferenceType(m_SvgEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_Svg__owner_SVG);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Feature elements of class SvgFile
        auto &&feature = m_SvgFile__elements;

        // ENamedElement
        feature->setName("elements");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::SVGFILE__ELEMENTS);
        feature->basicsetEContainingClass(m_SvgFileEClass);

        // EReference
        feature->setEReferenceType(m_ElementEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_Element__owner);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier SvgFile
        auto &&classifier = m_SvgFileEClass;

        // ENamedElement
        classifier->setName("SvgFile");

        // EClassifier
        classifier->setClassifierID(SVGFILE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SvgFileEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_SvgFile__tag);
            eStructuralFeatures.basicAdd(m_SvgFile__elements);
        }
    }();

    [this]()
    { // Classifier Symbol
        auto &&classifier = m_SymbolEClass;

        // ENamedElement
        classifier->setName("Symbol");

        // EClassifier
        classifier->setClassifierID(SYMBOL);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature lengthAdjust of class Text
        auto &&feature = m_Text__lengthAdjust;

        // ENamedElement
        feature->setName("lengthAdjust");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::TEXT__LENGTHADJUST);
        feature->basicsetEContainingClass(m_TextEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature content of class Text
        auto &&feature = m_Text__content;

        // ENamedElement
        feature->setName("content");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::TEXT__CONTENT);
        feature->basicsetEContainingClass(m_TextEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Text
        auto &&classifier = m_TextEClass;

        // ENamedElement
        classifier->setName("Text");

        // EClassifier
        classifier->setClassifierID(TEXT);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TextEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Text__lengthAdjust);
            eStructuralFeatures.basicAdd(m_Text__content);
        }
    }();

    [this]()
    { // Feature rotate of class TextElement
        auto &&feature = m_TextElement__rotate;

        // ENamedElement
        feature->setName("rotate");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::TEXTELEMENT__ROTATE);
        feature->basicsetEContainingClass(m_TextElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature textLength of class TextElement
        auto &&feature = m_TextElement__textLength;

        // ENamedElement
        feature->setName("textLength");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::TEXTELEMENT__TEXTLENGTH);
        feature->basicsetEContainingClass(m_TextElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Feature fontSize of class TextElement
        auto &&feature = m_TextElement__fontSize;

        // ENamedElement
        feature->setName("fontSize");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::TEXTELEMENT__FONTSIZE);
        feature->basicsetEContainingClass(m_TextElementEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier TextElement
        auto &&classifier = m_TextElementEClass;

        // ENamedElement
        classifier->setName("TextElement");

        // EClassifier
        classifier->setClassifierID(TEXTELEMENT);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TextElementEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_TextElement__rotate);
            eStructuralFeatures.basicAdd(m_TextElement__textLength);
            eStructuralFeatures.basicAdd(m_TextElement__fontSize);
        }
    }();

    [this]()
    { // Classifier Transform
        auto &&classifier = m_TransformEClass;

        // ENamedElement
        classifier->setName("Transform");

        // EClassifier
        classifier->setClassifierID(TRANSFORM);

        // EClass
        classifier->setAbstract(true);
        classifier->setInterface(false);
    }();

    [this]()
    { // Feature tx of class Translate
        auto &&feature = m_Translate__tx;

        // ENamedElement
        feature->setName("tx");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::TRANSLATE__TX);
        feature->basicsetEContainingClass(m_TranslateEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Feature ty of class Translate
        auto &&feature = m_Translate__ty;

        // ENamedElement
        feature->setName("ty");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::TRANSLATE__TY);
        feature->basicsetEContainingClass(m_TranslateEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getDouble());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Translate
        auto &&classifier = m_TranslateEClass;

        // ENamedElement
        classifier->setName("Translate");

        // EClassifier
        classifier->setClassifierID(TRANSLATE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TranslateEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Translate__tx);
            eStructuralFeatures.basicAdd(m_Translate__ty);
        }
    }();

    [this]()
    { // Feature xlinkHref of class Tref
        auto &&feature = m_Tref__xlinkHref;

        // ENamedElement
        feature->setName("xlinkHref");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_TextElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::TREF__XLINKHREF);
        feature->basicsetEContainingClass(m_TrefEClass);

        // EReference
        feature->setEReferenceType(m_TextElementEClass);
        feature->setContainment(false);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Tref
        auto &&classifier = m_TrefEClass;

        // ENamedElement
        classifier->setName("Tref");

        // EClassifier
        classifier->setClassifierID(TREF);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TrefEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Tref__xlinkHref);
        }
    }();

    [this]()
    { // Feature content of class Tspan
        auto &&feature = m_Tspan__content;

        // ENamedElement
        feature->setName("content");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::TSPAN__CONTENT);
        feature->basicsetEContainingClass(m_TspanEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getString());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Tspan
        auto &&classifier = m_TspanEClass;

        // ENamedElement
        classifier->setName("Tspan");

        // EClassifier
        classifier->setClassifierID(TSPAN);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TspanEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Tspan__content);
        }
    }();

    [this]()
    { // Feature use of class Use
        auto &&feature = m_Use__use;

        // ENamedElement
        feature->setName("use");

        // ETypedElement
        feature->setLowerBound(0);
        feature->setOrdered(false);
        feature->setUnique(true);
        feature->setUpperBound(-1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(m_ElementEClass);
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::USE__USE);
        feature->basicsetEContainingClass(m_UseEClass);

        // EReference
        feature->setEReferenceType(m_ElementEClass);
        feature->setContainment(false);
        feature->setEOpposite(m_Element__target);
        feature->setResolveProxies(true);
    }();

    [this]()
    { // Classifier Use
        auto &&classifier = m_UseEClass;

        // ENamedElement
        classifier->setName("Use");

        // EClassifier
        classifier->setClassifierID(USE);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_UseEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Use__use);
        }
    }();

    [this]()
    { // Feature visible of class Visibility
        auto &&feature = m_Visibility__visible;

        // ENamedElement
        feature->setName("visible");

        // ETypedElement
        feature->setLowerBound(1);
        feature->setOrdered(false);
        feature->setUnique(false);
        feature->setUpperBound(1);

        // EStructuralFeature
        feature->setChangeable(true);
        feature->setDefaultValueLiteral("");
        feature->setDerived(false);
        feature->setEType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getBoolean());
        feature->setTransient(false);
        feature->setUnsettable(false);
        feature->setVolatile(false);

        feature->setFeatureID(::SVG::SVGPackage::VISIBILITY__VISIBLE);
        feature->basicsetEContainingClass(m_VisibilityEClass);

        // EAttribute
        feature->setEAttributeType(
                ::PrimitiveTypes::PrimitiveTypesPackage::_instance()->getBoolean());
        feature->setID(false);
    }();

    [this]()
    { // Classifier Visibility
        auto &&classifier = m_VisibilityEClass;

        // ENamedElement
        classifier->setName("Visibility");

        // EClassifier
        classifier->setClassifierID(VISIBILITY);

        // EClass
        classifier->setAbstract(false);
        classifier->setInterface(false);
        {
            auto &&eStructuralFeatures =
                    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_VisibilityEClass->getEStructuralFeatures());
            eStructuralFeatures.basicAdd(m_Visibility__visible);
        }
    }();

    // Initialize package
    setName("SVG");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    [this]()
    {
        m_StructuralElementEClass->getESuperTypes().push_back(m_ElementEClass);
        m_ImageEClass->getESuperTypes().push_back(m_StructuralElementEClass);
        m_SvgEClass->getESuperTypes().push_back(m_StructuralElementEClass);
        m_GroupingElementEClass->getESuperTypes().push_back(
                m_StructuralElementEClass);
        m_GEClass->getESuperTypes().push_back(m_GroupingElementEClass);
        m_DefsEClass->getESuperTypes().push_back(m_GroupingElementEClass);
        m_SymbolEClass->getESuperTypes().push_back(m_GroupingElementEClass);
        m_UseEClass->getESuperTypes().push_back(m_StructuralElementEClass);
        m_GraphicalElementEClass->getESuperTypes().push_back(m_ElementEClass);
        m_ShapeEClass->getESuperTypes().push_back(m_GraphicalElementEClass);
        m_TextElementEClass->getESuperTypes().push_back(
                m_GraphicalElementEClass);
        m_RectEClass->getESuperTypes().push_back(m_ShapeEClass);
        m_CircleEClass->getESuperTypes().push_back(m_ShapeEClass);
        m_EllipseEClass->getESuperTypes().push_back(m_ShapeEClass);
        m_LineEClass->getESuperTypes().push_back(m_ShapeEClass);
        m_PolylineEClass->getESuperTypes().push_back(m_ShapeEClass);
        m_PolygonEClass->getESuperTypes().push_back(m_ShapeEClass);
        m_PathEClass->getESuperTypes().push_back(m_ShapeEClass);
        m_PointEClass->getESuperTypes().push_back(m_ShapeEClass);
        m_MarkerEClass->getESuperTypes().push_back(m_ShapeEClass);
        m_TextEClass->getESuperTypes().push_back(m_TextElementEClass);
        m_TspanEClass->getESuperTypes().push_back(m_TextElementEClass);
        m_TrefEClass->getESuperTypes().push_back(m_TextElementEClass);
        m_TransformEClass->getESuperTypes().push_back(m_AttributeEClass);
        m_ScaleEClass->getESuperTypes().push_back(m_TransformEClass);
        m_TranslateEClass->getESuperTypes().push_back(m_TransformEClass);
        m_RotateEClass->getESuperTypes().push_back(m_TransformEClass);
        m_VisibilityEClass->getESuperTypes().push_back(m_AttributeEClass);
        m_FontWeightEClass->getESuperTypes().push_back(m_AttributeEClass);
        m_FontStyleEClass->getESuperTypes().push_back(m_AttributeEClass);
        m_RelativeCoordEClass->getESuperTypes().push_back(m_CoordinatesEClass);
        m_AbsoluteCoordEClass->getESuperTypes().push_back(m_CoordinatesEClass);
        m_SvgFileEClass->getESuperTypes().push_back(m_ReferencedFileEClass);
    }();

    [this]()
    { // Classifiers of this package
        auto &&classifiers = getEClassifiers();
        classifiers.push_back(m_AbsoluteCoordEClass);
        classifiers.push_back(m_AttributeEClass);
        classifiers.push_back(m_CircleEClass);
        classifiers.push_back(m_CoordinatesEClass);
        classifiers.push_back(m_DefsEClass);
        classifiers.push_back(m_DimensionEClass);
        classifiers.push_back(m_ElementEClass);
        classifiers.push_back(m_EllipseEClass);
        classifiers.push_back(m_FontStyleEClass);
        classifiers.push_back(m_FontWeightEClass);
        classifiers.push_back(m_GEClass);
        classifiers.push_back(m_GraphicalElementEClass);
        classifiers.push_back(m_GroupingElementEClass);
        classifiers.push_back(m_ImageEClass);
        classifiers.push_back(m_LineEClass);
        classifiers.push_back(m_MarkerEClass);
        classifiers.push_back(m_PathEClass);
        classifiers.push_back(m_PointEClass);
        classifiers.push_back(m_PolygonEClass);
        classifiers.push_back(m_PolylineEClass);
        classifiers.push_back(m_RectEClass);
        classifiers.push_back(m_ReferencedFileEClass);
        classifiers.push_back(m_RelativeCoordEClass);
        classifiers.push_back(m_RotateEClass);
        classifiers.push_back(m_ScaleEClass);
        classifiers.push_back(m_ShapeEClass);
        classifiers.push_back(m_StructuralElementEClass);
        classifiers.push_back(m_SvgEClass);
        classifiers.push_back(m_SvgFileEClass);
        classifiers.push_back(m_SymbolEClass);
        classifiers.push_back(m_TextEClass);
        classifiers.push_back(m_TextElementEClass);
        classifiers.push_back(m_TransformEClass);
        classifiers.push_back(m_TranslateEClass);
        classifiers.push_back(m_TrefEClass);
        classifiers.push_back(m_TspanEClass);
        classifiers.push_back(m_UseEClass);
        classifiers.push_back(m_VisibilityEClass);
    }();

    _initialize();
}

::ecore::EClass_ptr SVGPackage::getElement()
{
    return m_ElementEClass;
}
::ecore::EClass_ptr SVGPackage::getStructuralElement()
{
    return m_StructuralElementEClass;
}
::ecore::EClass_ptr SVGPackage::getImage()
{
    return m_ImageEClass;
}
::ecore::EClass_ptr SVGPackage::getSvg()
{
    return m_SvgEClass;
}
::ecore::EClass_ptr SVGPackage::getGroupingElement()
{
    return m_GroupingElementEClass;
}
::ecore::EClass_ptr SVGPackage::getG()
{
    return m_GEClass;
}
::ecore::EClass_ptr SVGPackage::getDefs()
{
    return m_DefsEClass;
}
::ecore::EClass_ptr SVGPackage::getSymbol()
{
    return m_SymbolEClass;
}
::ecore::EClass_ptr SVGPackage::getUse()
{
    return m_UseEClass;
}
::ecore::EClass_ptr SVGPackage::getGraphicalElement()
{
    return m_GraphicalElementEClass;
}
::ecore::EClass_ptr SVGPackage::getShape()
{
    return m_ShapeEClass;
}
::ecore::EClass_ptr SVGPackage::getTextElement()
{
    return m_TextElementEClass;
}
::ecore::EClass_ptr SVGPackage::getRect()
{
    return m_RectEClass;
}
::ecore::EClass_ptr SVGPackage::getCircle()
{
    return m_CircleEClass;
}
::ecore::EClass_ptr SVGPackage::getEllipse()
{
    return m_EllipseEClass;
}
::ecore::EClass_ptr SVGPackage::getLine()
{
    return m_LineEClass;
}
::ecore::EClass_ptr SVGPackage::getPolyline()
{
    return m_PolylineEClass;
}
::ecore::EClass_ptr SVGPackage::getPolygon()
{
    return m_PolygonEClass;
}
::ecore::EClass_ptr SVGPackage::getPath()
{
    return m_PathEClass;
}
::ecore::EClass_ptr SVGPackage::getPoint()
{
    return m_PointEClass;
}
::ecore::EClass_ptr SVGPackage::getMarker()
{
    return m_MarkerEClass;
}
::ecore::EClass_ptr SVGPackage::getText()
{
    return m_TextEClass;
}
::ecore::EClass_ptr SVGPackage::getTspan()
{
    return m_TspanEClass;
}
::ecore::EClass_ptr SVGPackage::getTref()
{
    return m_TrefEClass;
}
::ecore::EClass_ptr SVGPackage::getAttribute()
{
    return m_AttributeEClass;
}
::ecore::EClass_ptr SVGPackage::getTransform()
{
    return m_TransformEClass;
}
::ecore::EClass_ptr SVGPackage::getScale()
{
    return m_ScaleEClass;
}
::ecore::EClass_ptr SVGPackage::getTranslate()
{
    return m_TranslateEClass;
}
::ecore::EClass_ptr SVGPackage::getRotate()
{
    return m_RotateEClass;
}
::ecore::EClass_ptr SVGPackage::getVisibility()
{
    return m_VisibilityEClass;
}
::ecore::EClass_ptr SVGPackage::getFontWeight()
{
    return m_FontWeightEClass;
}
::ecore::EClass_ptr SVGPackage::getFontStyle()
{
    return m_FontStyleEClass;
}
::ecore::EClass_ptr SVGPackage::getDimension()
{
    return m_DimensionEClass;
}
::ecore::EClass_ptr SVGPackage::getCoordinates()
{
    return m_CoordinatesEClass;
}
::ecore::EClass_ptr SVGPackage::getRelativeCoord()
{
    return m_RelativeCoordEClass;
}
::ecore::EClass_ptr SVGPackage::getAbsoluteCoord()
{
    return m_AbsoluteCoordEClass;
}
::ecore::EClass_ptr SVGPackage::getReferencedFile()
{
    return m_ReferencedFileEClass;
}
::ecore::EClass_ptr SVGPackage::getSvgFile()
{
    return m_SvgFileEClass;
}

::ecore::EReference_ptr SVGPackage::getElement__owner()
{
    return m_Element__owner;
}
::ecore::EReference_ptr SVGPackage::getElement__target()
{
    return m_Element__target;
}
::ecore::EReference_ptr SVGPackage::getElement__attribute()
{
    return m_Element__attribute;
}
::ecore::EReference_ptr SVGPackage::getElement__position()
{
    return m_Element__position;
}
::ecore::EReference_ptr SVGPackage::getElement__size()
{
    return m_Element__size;
}
::ecore::EReference_ptr SVGPackage::getElement__root()
{
    return m_Element__root;
}
::ecore::EAttribute_ptr SVGPackage::getElement__fill()
{
    return m_Element__fill;
}
::ecore::EAttribute_ptr SVGPackage::getElement__viewBox()
{
    return m_Element__viewBox;
}
::ecore::EReference_ptr SVGPackage::getElement__group()
{
    return m_Element__group;
}
::ecore::EAttribute_ptr SVGPackage::getElement__identifier()
{
    return m_Element__identifier;
}
::ecore::EReference_ptr SVGPackage::getElement__drawsMarker()
{
    return m_Element__drawsMarker;
}
::ecore::EReference_ptr SVGPackage::getImage__referee()
{
    return m_Image__referee;
}
::ecore::EReference_ptr SVGPackage::getSvg__owner_SVG()
{
    return m_Svg__owner_SVG;
}
::ecore::EReference_ptr SVGPackage::getSvg__children()
{
    return m_Svg__children;
}
::ecore::EAttribute_ptr SVGPackage::getSvg__namespace()
{
    return m_Svg__namespace;
}
::ecore::EAttribute_ptr SVGPackage::getSvg__version()
{
    return m_Svg__version;
}
::ecore::EAttribute_ptr SVGPackage::getSvg__baseProfile()
{
    return m_Svg__baseProfile;
}
::ecore::EReference_ptr SVGPackage::getGroupingElement__groupContent()
{
    return m_GroupingElement__groupContent;
}
::ecore::EAttribute_ptr SVGPackage::getG__name()
{
    return m_G__name;
}
::ecore::EReference_ptr SVGPackage::getUse__use()
{
    return m_Use__use;
}
::ecore::EAttribute_ptr SVGPackage::getGraphicalElement__stroke()
{
    return m_GraphicalElement__stroke;
}
::ecore::EAttribute_ptr SVGPackage::getTextElement__rotate()
{
    return m_TextElement__rotate;
}
::ecore::EAttribute_ptr SVGPackage::getTextElement__textLength()
{
    return m_TextElement__textLength;
}
::ecore::EAttribute_ptr SVGPackage::getTextElement__fontSize()
{
    return m_TextElement__fontSize;
}
::ecore::EAttribute_ptr SVGPackage::getRect__rx()
{
    return m_Rect__rx;
}
::ecore::EAttribute_ptr SVGPackage::getRect__ry()
{
    return m_Rect__ry;
}
::ecore::EReference_ptr SVGPackage::getLine__between()
{
    return m_Line__between;
}
::ecore::EAttribute_ptr SVGPackage::getLine__markerEnd()
{
    return m_Line__markerEnd;
}
::ecore::EAttribute_ptr SVGPackage::getLine__markerStart()
{
    return m_Line__markerStart;
}
::ecore::EReference_ptr SVGPackage::getPolyline__waypoints()
{
    return m_Polyline__waypoints;
}
::ecore::EAttribute_ptr SVGPackage::getPolyline__strokeDashArray()
{
    return m_Polyline__strokeDashArray;
}
::ecore::EAttribute_ptr SVGPackage::getPolyline__markerEnd()
{
    return m_Polyline__markerEnd;
}
::ecore::EAttribute_ptr SVGPackage::getPolyline__markerStart()
{
    return m_Polyline__markerStart;
}
::ecore::EReference_ptr SVGPackage::getPolygon__waypoints()
{
    return m_Polygon__waypoints;
}
::ecore::EAttribute_ptr SVGPackage::getPolygon__markerEnd()
{
    return m_Polygon__markerEnd;
}
::ecore::EAttribute_ptr SVGPackage::getPolygon__markerStart()
{
    return m_Polygon__markerStart;
}
::ecore::EAttribute_ptr SVGPackage::getPath__pathLength()
{
    return m_Path__pathLength;
}
::ecore::EAttribute_ptr SVGPackage::getPath__d()
{
    return m_Path__d;
}
::ecore::EAttribute_ptr SVGPackage::getPath__markerEnd()
{
    return m_Path__markerEnd;
}
::ecore::EAttribute_ptr SVGPackage::getPath__markerStart()
{
    return m_Path__markerStart;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__markerUnits()
{
    return m_Marker__markerUnits;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__refX()
{
    return m_Marker__refX;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__refY()
{
    return m_Marker__refY;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__markerWidth()
{
    return m_Marker__markerWidth;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__markerHeight()
{
    return m_Marker__markerHeight;
}
::ecore::EAttribute_ptr SVGPackage::getMarker__orient()
{
    return m_Marker__orient;
}
::ecore::EReference_ptr SVGPackage::getMarker__drawing()
{
    return m_Marker__drawing;
}
::ecore::EAttribute_ptr SVGPackage::getText__lengthAdjust()
{
    return m_Text__lengthAdjust;
}
::ecore::EAttribute_ptr SVGPackage::getText__content()
{
    return m_Text__content;
}
::ecore::EAttribute_ptr SVGPackage::getTspan__content()
{
    return m_Tspan__content;
}
::ecore::EReference_ptr SVGPackage::getTref__xlinkHref()
{
    return m_Tref__xlinkHref;
}
::ecore::EReference_ptr SVGPackage::getAttribute__attOwner()
{
    return m_Attribute__attOwner;
}
::ecore::EAttribute_ptr SVGPackage::getScale__sx()
{
    return m_Scale__sx;
}
::ecore::EAttribute_ptr SVGPackage::getScale__sy()
{
    return m_Scale__sy;
}
::ecore::EAttribute_ptr SVGPackage::getTranslate__tx()
{
    return m_Translate__tx;
}
::ecore::EAttribute_ptr SVGPackage::getTranslate__ty()
{
    return m_Translate__ty;
}
::ecore::EAttribute_ptr SVGPackage::getRotate__angle()
{
    return m_Rotate__angle;
}
::ecore::EAttribute_ptr SVGPackage::getRotate__cx()
{
    return m_Rotate__cx;
}
::ecore::EAttribute_ptr SVGPackage::getRotate__cy()
{
    return m_Rotate__cy;
}
::ecore::EAttribute_ptr SVGPackage::getVisibility__visible()
{
    return m_Visibility__visible;
}
::ecore::EAttribute_ptr SVGPackage::getFontWeight__bold()
{
    return m_FontWeight__bold;
}
::ecore::EAttribute_ptr SVGPackage::getFontStyle__italic()
{
    return m_FontStyle__italic;
}
::ecore::EAttribute_ptr SVGPackage::getDimension__width()
{
    return m_Dimension__width;
}
::ecore::EAttribute_ptr SVGPackage::getDimension__height()
{
    return m_Dimension__height;
}
::ecore::EAttribute_ptr SVGPackage::getCoordinates__x()
{
    return m_Coordinates__x;
}
::ecore::EAttribute_ptr SVGPackage::getCoordinates__y()
{
    return m_Coordinates__y;
}
::ecore::EReference_ptr SVGPackage::getReferencedFile__referer()
{
    return m_ReferencedFile__referer;
}
::ecore::EAttribute_ptr SVGPackage::getReferencedFile__name()
{
    return m_ReferencedFile__name;
}
::ecore::EReference_ptr SVGPackage::getSvgFile__tag()
{
    return m_SvgFile__tag;
}
::ecore::EReference_ptr SVGPackage::getSvgFile__elements()
{
    return m_SvgFile__elements;
}

