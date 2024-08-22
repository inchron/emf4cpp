// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/RightHandImpl.cpp
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

#include "RightHand.hpp"
#include <eopposite/EoppositePackage.hpp>
#include <eopposite/NamedObject.hpp>
#include <eopposite/LeftHand.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RightHandImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::eopposite;

void RightHand::_initialize()
{
    // Supertypes
    ::eopposite::NamedObject::_initialize();

    // References

    /*PROTECTED REGION ID(RightHandImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RightHand::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::RIGHTHAND__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getName());
    }
        return _any;
    case ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getLeftee());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void RightHand::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::RIGHTHAND__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::eopposite::LeftHand > (_t0);
        setLeftee(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean RightHand::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::RIGHTHAND__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getName());
    case ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE:
        return getLeftee().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void RightHand::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr RightHand::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::eopposite::EoppositePackage::_instance()->getRightHand();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RightHand::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::eopposite::LeftHand_ptr _t1 = std::dynamic_pointer_cast
                < ::eopposite::LeftHand > (_t0);

        ::eopposite::LeftHand_ptr _old_leftee = getLeftee();
        if (_old_leftee && _old_leftee != _t0)
        {
            ::ecore::EJavaObject _this = ::ecore::EObject::_this();
            _old_leftee->::ecore::EObject::_inverseRemove(
                    ::eopposite::EoppositePackage::_instance()->getLeftHand__rightee(),
                    _this);
        }

        // set reference
        basicsetLeftee(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RightHand::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::eopposite::EoppositePackage::RIGHTHAND__LEFTEE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::eopposite::LeftHand_ptr _t1 = std::dynamic_pointer_cast
                < ::eopposite::LeftHand > (_t0);

        // set reference
        if (basicgetLeftee() == _t1)
            basicsetLeftee(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

