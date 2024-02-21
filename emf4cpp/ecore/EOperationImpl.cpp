// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EOperationImpl.cpp
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

#include "EOperation.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ETypedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClass.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EOperationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EOperation::_initialize()
{
    // Supertypes
    ::ecore::ETypedElement::_initialize();

    // References
    for (const auto &ref : getETypeParameters())
    {
        ref->_initialize();
    }
    for (const auto &ref : getEParameters())
    {
        ref->_initialize();
    }
    for (const auto &ref : getEGenericExceptions())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(EOperationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EInt EOperation::getOperationID()
{
    /*PROTECTED REGION ID(EOperationImpl_getOperationID) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EOperation::getOperationID";
    /*PROTECTED REGION END*/
}

::ecore::EBoolean EOperation::isOverrideOf(
        [[maybe_unused]]::ecore::EOperation_ptr _someOperation)
{
    /*PROTECTED REGION ID(EOperationImpl_isOverrideOf) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EOperation::isOverrideOf";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EOperation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EOPERATION__EANNOTATIONS:
    {
        _any = getEAnnotations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getName());
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__ORDERED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isOrdered());
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__UNIQUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isUnique());
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__LOWERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getLowerBound());
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__UPPERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getUpperBound());
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__MANY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isMany());
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__REQUIRED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isRequired());
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__ETYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEType());
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__EGENERICTYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEGenericType());
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEContainingClass());
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
        _any = getETypeParameters().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        _any = getEParameters().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
        _any = getEExceptions().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
        _any = getEGenericExceptions().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void EOperation::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EOPERATION__EANNOTATIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEAnnotations().clear();
        getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ORDERED:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setOrdered(_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__UNIQUE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setUnique(_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__LOWERBOUND:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setLowerBound(_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__UPPERBOUND:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setUpperBound(_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ETYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EClassifier > (_t0);
        setEType(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EGENERICTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EGenericType > (_t0);
        setEGenericType(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getETypeParameters().clear();
        getETypeParameters().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEParameters().clear();
        getEParameters().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEExceptions().clear();
        getEExceptions().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEGenericExceptions().clear();
        getEGenericExceptions().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean EOperation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EOPERATION__EANNOTATIONS:
        return getEAnnotations().size() > 0;
    case ::ecore::EcorePackage::EOPERATION__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getName());
    case ::ecore::EcorePackage::EOPERATION__ORDERED:
        return isOrdered() != true;
    case ::ecore::EcorePackage::EOPERATION__UNIQUE:
        return isUnique() != true;
    case ::ecore::EcorePackage::EOPERATION__LOWERBOUND:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getLowerBound());
    case ::ecore::EcorePackage::EOPERATION__UPPERBOUND:
        return getUpperBound() != 1;
    case ::ecore::EcorePackage::EOPERATION__MANY:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isMany());
    case ::ecore::EcorePackage::EOPERATION__REQUIRED:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isRequired());
    case ::ecore::EcorePackage::EOPERATION__ETYPE:
        return getEType().get() != nullptr;
    case ::ecore::EcorePackage::EOPERATION__EGENERICTYPE:
        return getEGenericType().get() != nullptr;
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
        return getEContainingClass().get() != nullptr;
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
        return getETypeParameters().size() > 0;
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
        return getEParameters().size() > 0;
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
        return getEExceptions().size() > 0;
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
        return getEGenericExceptions().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void EOperation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr EOperation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::ecore::EcorePackage::_instance()->getEOperation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EOperation::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EOPERATION__EANNOTATIONS:
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
    case ::ecore::EcorePackage::EOPERATION__ETYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EGENERICTYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
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
                    ::ecore::EcorePackage::_instance()->getEClass__eOperations(),
                    _this);
        }

        // set reference
        basicsetEContainingClass(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EParameter_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EParameter > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EParameter_ptr, -1, true, true >&) ::ecore::EOperation::getEParameters();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EOperation::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EOPERATION__EANNOTATIONS:
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
    case ::ecore::EcorePackage::EOPERATION__ETYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EGENERICTYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
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
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EParameter_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EParameter > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EParameter_ptr, -1, true, true >&) ::ecore::EOperation::getEParameters();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

