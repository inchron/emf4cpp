// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/SvgFileImpl.cpp
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

#include "SvgFile.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/ReferencedFile.hpp>
#include <SVG/Image.hpp>
#include <SVG/Svg.hpp>
#include <SVG/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SvgFileImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::SVG;

void SvgFile::_initialize()
{
    // Supertypes
    ::SVG::ReferencedFile::_initialize();

    // References

    /*PROTECTED REGION ID(SvgFileImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SvgFile::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::SVG::SVGPackage::SVGFILE__REFERER:
    {
        _any = getReferer().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::SVG::SVGPackage::SVGFILE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::SVG::SVGPackage::SVGFILE__TAG:
    {
        _any = ::ecore::as < ::ecore::EObject > (getTag());
    }
        return _any;
    case ::SVG::SVGPackage::SVGFILE__ELEMENTS:
    {
        _any = getElements().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void SvgFile::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::SVGFILE__REFERER:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getReferer().clear();
        getReferer().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__NAME:
    {
        ::PrimitiveTypes::String _t0;
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__TAG:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::SVG::Svg > (_t0);
        setTag(_t1);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__ELEMENTS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getElements().clear();
        getElements().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean SvgFile::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::SVGFILE__REFERER:
        return getReferer().size() > 0;
    case ::SVG::SVGPackage::SVGFILE__NAME:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::String
                > ::is_set(getName());
    case ::SVG::SVGPackage::SVGFILE__TAG:
        return getTag().get() != nullptr;
    case ::SVG::SVGPackage::SVGFILE__ELEMENTS:
        return getElements().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void SvgFile::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr SvgFile::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::SVG::SVGPackage::_instance()->getSvgFile();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SvgFile::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::SVGFILE__REFERER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Image_ptr _t1 = std::dynamic_pointer_cast < ::SVG::Image > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Image_ptr, -1,
                        false, true >&) ::SVG::ReferencedFile::getReferer();
        container.basicAdd(_t1);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__TAG:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Svg_ptr _t1 = std::dynamic_pointer_cast < ::SVG::Svg > (_t0);

        ::SVG::Svg_ptr _old_tag = getTag();
        if (_old_tag && _old_tag != _t0)
        {
            ::ecore::EJavaObject _this = ::ecore::EObject::_this();
            _old_tag->::ecore::EObject::_inverseRemove(
                    ::SVG::SVGPackage::_instance()->getSvg__owner_SVG(), _this);
        }

        // set reference
        basicsetTag(_t1);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__ELEMENTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Element_ptr _t1 = std::dynamic_pointer_cast < ::SVG::Element
                > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Element_ptr,
                        -1, false, true >&) ::SVG::SvgFile::getElements();
        container.basicAdd(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SvgFile::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::SVGFILE__REFERER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::Image_ptr _t1 = std::dynamic_pointer_cast < ::SVG::Image > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Image_ptr, -1,
                        false, true >&) ::SVG::ReferencedFile::getReferer();
        container.basicRemove(_t1);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__TAG:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::Svg_ptr _t1 = std::dynamic_pointer_cast < ::SVG::Svg > (_t0);

        // set reference
        if (basicgetTag() == _t1)
            basicsetTag(nullptr);
    }
        return;
    case ::SVG::SVGPackage::SVGFILE__ELEMENTS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::Element_ptr _t1 = std::dynamic_pointer_cast < ::SVG::Element
                > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Element_ptr,
                        -1, false, true >&) ::SVG::SvgFile::getElements();
        container.basicRemove(_t1);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

