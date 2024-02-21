// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EAttributeImpl.cpp
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

#include "EAttribute.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EAttributeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EAttribute::_initialize()
{
    // Supertypes
    ::ecore::EStructuralFeature::_initialize();

    // References

    /*PROTECTED REGION ID(EAttributeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EAttribute::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EATTRIBUTE__EANNOTATIONS:
    {
        _any = getEAnnotations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getName());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__ORDERED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isOrdered());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__UNIQUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isUnique());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__LOWERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getLowerBound());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__UPPERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getUpperBound());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__MANY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isMany());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__REQUIRED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isRequired());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__ETYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEType());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__EGENERICTYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEGenericType());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__CHANGEABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isChangeable());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__VOLATILE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isVolatile());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__TRANSIENT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isTransient());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__DEFAULTVALUELITERAL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getDefaultValueLiteral());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__DEFAULTVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EJavaObject
                > ::toAny(_any, getDefaultValue());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__UNSETTABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isUnsettable());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__DERIVED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isDerived());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__ECONTAININGCLASS:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEContainingClass());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__ID:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isID());
    }
        return _any;
    case ::ecore::EcorePackage::EATTRIBUTE__EATTRIBUTETYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEAttributeType());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void EAttribute::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EATTRIBUTE__EANNOTATIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEAnnotations().clear();
        getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__ORDERED:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setOrdered(_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__UNIQUE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setUnique(_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__LOWERBOUND:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setLowerBound(_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__UPPERBOUND:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setUpperBound(_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__ETYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EClassifier > (_t0);
        setEType(_t1);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__EGENERICTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EGenericType > (_t0);
        setEGenericType(_t1);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__CHANGEABLE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setChangeable(_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__VOLATILE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setVolatile(_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__TRANSIENT:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setTransient(_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__DEFAULTVALUELITERAL:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setDefaultValueLiteral(_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__UNSETTABLE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setUnsettable(_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__DERIVED:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setDerived(_t0);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__ID:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setID(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean EAttribute::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EATTRIBUTE__EANNOTATIONS:
        return getEAnnotations().size() > 0;
    case ::ecore::EcorePackage::EATTRIBUTE__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getName());
    case ::ecore::EcorePackage::EATTRIBUTE__ORDERED:
        return isOrdered() != true;
    case ::ecore::EcorePackage::EATTRIBUTE__UNIQUE:
        return isUnique() != true;
    case ::ecore::EcorePackage::EATTRIBUTE__LOWERBOUND:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getLowerBound());
    case ::ecore::EcorePackage::EATTRIBUTE__UPPERBOUND:
        return getUpperBound() != 1;
    case ::ecore::EcorePackage::EATTRIBUTE__MANY:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isMany());
    case ::ecore::EcorePackage::EATTRIBUTE__REQUIRED:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isRequired());
    case ::ecore::EcorePackage::EATTRIBUTE__ETYPE:
        return getEType().get() != nullptr;
    case ::ecore::EcorePackage::EATTRIBUTE__EGENERICTYPE:
        return getEGenericType().get() != nullptr;
    case ::ecore::EcorePackage::EATTRIBUTE__CHANGEABLE:
        return isChangeable() != true;
    case ::ecore::EcorePackage::EATTRIBUTE__VOLATILE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isVolatile());
    case ::ecore::EcorePackage::EATTRIBUTE__TRANSIENT:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isTransient());
    case ::ecore::EcorePackage::EATTRIBUTE__DEFAULTVALUELITERAL:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getDefaultValueLiteral());
    case ::ecore::EcorePackage::EATTRIBUTE__DEFAULTVALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EJavaObject
                > ::is_set(getDefaultValue());
    case ::ecore::EcorePackage::EATTRIBUTE__UNSETTABLE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isUnsettable());
    case ::ecore::EcorePackage::EATTRIBUTE__DERIVED:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isDerived());
    case ::ecore::EcorePackage::EATTRIBUTE__ECONTAININGCLASS:
        return getEContainingClass().get() != nullptr;
    case ::ecore::EcorePackage::EATTRIBUTE__ID:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isID());
    case ::ecore::EcorePackage::EATTRIBUTE__EATTRIBUTETYPE:
        return getEAttributeType().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void EAttribute::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr EAttribute::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::ecore::EcorePackage::_instance()->getEAttribute();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EAttribute::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EATTRIBUTE__EANNOTATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EAnnotation_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EAnnotation > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EAnnotation_ptr, -1, true, true >&) ::ecore::EModelElement::getEAnnotations();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__ETYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__EGENERICTYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClass_ptr _t1 = std::dynamic_pointer_cast < ::ecore::EClass
                > (_t0);

        ::ecore::EClass_ptr _old_eContainingClass = getEContainingClass();
        if (_old_eContainingClass && _old_eContainingClass != _t0)
        {
            ::ecore::EJavaObject _this = ::ecore::EObject::_this();
            _old_eContainingClass->::ecore::EObject::_inverseRemove(
                    ::ecore::EcorePackage::_instance()->getEClass__eStructuralFeatures(),
                    _this);
        }

        // set reference
        basicsetEContainingClass(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EAttribute::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EATTRIBUTE__EANNOTATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EAnnotation_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EAnnotation > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EAnnotation_ptr, -1, true, true >&) ::ecore::EModelElement::getEAnnotations();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__ETYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__EGENERICTYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::EATTRIBUTE__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EClass_ptr _t1 = std::dynamic_pointer_cast < ::ecore::EClass
                > (_t0);

        // set reference
        if (basicgetEContainingClass() == _t1)
            basicsetEContainingClass(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

