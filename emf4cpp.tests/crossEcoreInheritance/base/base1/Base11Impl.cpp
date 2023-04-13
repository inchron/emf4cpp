// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/Base11Impl.cpp
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

#include "Base11.hpp"
#include <base/base1/Base1Package.hpp>
#include <base/base1/Base10.hpp>
#include <base/Base02.hpp>
#include <base/Base03.hpp>
#include <derived/Derived02.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(Base11Impl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::base::base1;

void Base11::_initialize()
{
    // Supertypes
    ::base::base1::Base10::_initialize();
    ::base::Base02::_initialize();
    ::base::Base03::_initialize();

    // References

    /*PROTECTED REGION ID(Base11Impl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Base11::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::base::base1::Base1Package::BASE11__VALBASE01:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getValBase01());
    }
        return _any;
    case ::base::base1::Base1Package::BASE11__DERIVED02REF:
    {
        _any = ::ecore::as < ::ecore::EObject > (getDerived02ref());
    }
        return _any;
    case ::base::base1::Base1Package::BASE11__VALBASE10:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getValBase10());
    }
        return _any;
    case ::base::base1::Base1Package::BASE11__VALBASE02:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getValBase02());
    }
        return _any;
    case ::base::base1::Base1Package::BASE11__VALBASE03:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getValBase03());
    }
        return _any;
    case ::base::base1::Base1Package::BASE11__VALBASE11:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getValBase11());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void Base11::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::base::base1::Base1Package::BASE11__VALBASE01:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setValBase01(_t0);
    }
        return;
    case ::base::base1::Base1Package::BASE11__DERIVED02REF:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::derived::Derived02 > (_t0);
        setDerived02ref(_t1);
    }
        return;
    case ::base::base1::Base1Package::BASE11__VALBASE10:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setValBase10(_t0);
    }
        return;
    case ::base::base1::Base1Package::BASE11__VALBASE02:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setValBase02(_t0);
    }
        return;
    case ::base::base1::Base1Package::BASE11__VALBASE03:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setValBase03(_t0);
    }
        return;
    case ::base::base1::Base1Package::BASE11__VALBASE11:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setValBase11(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean Base11::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::base::base1::Base1Package::BASE11__VALBASE01:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getValBase01());
    case ::base::base1::Base1Package::BASE11__DERIVED02REF:
        return getDerived02ref().get() != nullptr;
    case ::base::base1::Base1Package::BASE11__VALBASE10:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getValBase10());
    case ::base::base1::Base1Package::BASE11__VALBASE02:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getValBase02());
    case ::base::base1::Base1Package::BASE11__VALBASE03:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getValBase03());
    case ::base::base1::Base1Package::BASE11__VALBASE11:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getValBase11());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void Base11::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr Base11::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::base::base1::Base1Package::_instance()->getBase11();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Base11::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::base::base1::Base1Package::BASE11__DERIVED02REF:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::derived::Derived02_ptr _t1 = std::dynamic_pointer_cast
                < ::derived::Derived02 > (_t0);

        ::derived::Derived02_ptr _old_derived02ref = getDerived02ref();
        if (_old_derived02ref && _old_derived02ref != _t0)
        {
            ::ecore::EJavaObject _this = ::ecore::EObject::_this();
            _old_derived02ref->::ecore::EObject::_inverseRemove(
                    ::derived::DerivedPackage::_instance()->getDerived02__base01ref(),
                    _this);
        }

        // set reference
        basicsetDerived02ref(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Base11::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::base::base1::Base1Package::BASE11__DERIVED02REF:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::derived::Derived02_ptr _t1 = std::dynamic_pointer_cast
                < ::derived::Derived02 > (_t0);

        // set reference
        if (basicgetDerived02ref() == _t1)
            basicsetDerived02ref(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

