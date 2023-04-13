// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/LeftHandImpl.cpp
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

#include "LeftHand.hpp"
#include <eopposite/EoppositePackage.hpp>
#include <eopposite/NamedObject.hpp>
#include <eopposite/RightHand.hpp>
#include <eopposite/RightMultiple.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(LeftHandImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::eopposite;

void LeftHand::_initialize()
{
    // Supertypes
    ::eopposite::NamedObject::_initialize();

    // References

    /*PROTECTED REGION ID(LeftHandImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject LeftHand::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::LEFTHAND__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getName());
    }
        return _any;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTEE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getRightee());
    }
        return _any;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getRightMultiple());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void LeftHand::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::LEFTHAND__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTEE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::eopposite::RightHand > (_t0);
        setRightee(_t1);
    }
        return;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::eopposite::RightMultiple > (_t0);
        setRightMultiple(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean LeftHand::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::LEFTHAND__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getName());
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTEE:
        return getRightee().get() != nullptr;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE:
        return getRightMultiple().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void LeftHand::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr LeftHand::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::eopposite::EoppositePackage::_instance()->getLeftHand();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void LeftHand::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTEE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::eopposite::RightHand_ptr _t1 = std::dynamic_pointer_cast
                < ::eopposite::RightHand > (_t0);

        ::eopposite::RightHand_ptr _old_rightee = getRightee();
        if (_old_rightee && _old_rightee != _t0)
        {
            ::ecore::EJavaObject _this = ::ecore::EObject::_this();
            _old_rightee->::ecore::EObject::_inverseRemove(
                    ::eopposite::EoppositePackage::_instance()->getRightHand__leftee(),
                    _this);
        }

        // set reference
        basicsetRightee(_t1);
    }
        return;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::eopposite::RightMultiple_ptr _t1 = std::dynamic_pointer_cast
                < ::eopposite::RightMultiple > (_t0);

        ::eopposite::RightMultiple_ptr _old_rightMultiple = getRightMultiple();
        if (_old_rightMultiple && _old_rightMultiple != _t0)
        {
            ::ecore::EJavaObject _this = ::ecore::EObject::_this();
            _old_rightMultiple->::ecore::EObject::_inverseRemove(
                    ::eopposite::EoppositePackage::_instance()->getRightMultiple__leftees(),
                    _this);
        }

        // set reference
        basicsetRightMultiple(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void LeftHand::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTEE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::eopposite::RightHand_ptr _t1 = std::dynamic_pointer_cast
                < ::eopposite::RightHand > (_t0);

        // set reference
        if (basicgetRightee() == _t1)
            basicsetRightee(nullptr);
    }
        return;
    case ::eopposite::EoppositePackage::LEFTHAND__RIGHTMULTIPLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::eopposite::RightMultiple_ptr _t1 = std::dynamic_pointer_cast
                < ::eopposite::RightMultiple > (_t0);

        // set reference
        if (basicgetRightMultiple() == _t1)
            basicsetRightMultiple(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

