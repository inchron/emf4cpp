// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EReferenceImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#include "EReference.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::ecore;

/*PROTECTED REGION ID(EReferenceImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void EReference::_initialize()
{
    // Supertypes
    ::ecore::EStructuralFeature::_initialize();

    // References

    /*PROTECTED REGION ID(EReferenceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EReference::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        _any = m_eAnnotations->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ORDERED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_ordered);
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_unique);
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_lowerBound);
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_upperBound);
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    {
        _any = static_cast< ::ecore::EObject* >(m_eType);
    }
        return _any;
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
        _any = static_cast< ::ecore::EObject* >(m_eGenericType);
    }
        return _any;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__CHANGEABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_changeable);
    }
        return _any;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_volatile);
    }
        return _any;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_transient);
    }
        return _any;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_defaultValueLiteral);
    }
        return _any;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_unsettable);
    }
        return _any;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_derived);
    }
        return _any;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS:
    {
        _any = static_cast< ::ecore::EObject* >(m_eContainingClass);
    }
        return _any;
    case ::ecore::EcorePackage::EREFERENCE__CONTAINMENT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_containment);
    }
        return _any;
    case ::ecore::EcorePackage::EREFERENCE__RESOLVEPROXIES:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_resolveProxies);
    }
        return _any;
    case ::ecore::EcorePackage::EREFERENCE__EOPPOSITE:
    {
        _any = static_cast< ::ecore::EObject* >(m_eOpposite);
    }
        return _any;
    case ::ecore::EcorePackage::EREFERENCE__EKEYS:
    {
        _any = m_eKeys->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void EReference::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::ecore::EModelElement::getEAnnotations().clear();
        ::ecore::EModelElement::getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ORDERED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_ordered);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_unique);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, m_lowerBound);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, m_upperBound);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClassifier_ptr _t1 =
                dynamic_cast< ::ecore::EClassifier_ptr >(_t0);
        ::ecore::ETypedElement::setEType(_t1);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EGenericType_ptr _t1 =
                dynamic_cast< ::ecore::EGenericType_ptr >(_t0);
        ::ecore::ETypedElement::setEGenericType(_t1);
    }
        return;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__CHANGEABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_changeable);
    }
        return;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_volatile);
    }
        return;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_transient);
    }
        return;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_defaultValueLiteral);
    }
        return;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_unsettable);
    }
        return;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_derived);
    }
        return;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClass_ptr _t1 = dynamic_cast< ::ecore::EClass_ptr >(_t0);
        ::ecore::EStructuralFeature::setEContainingClass(_t1);
    }
        return;
    case ::ecore::EcorePackage::EREFERENCE__CONTAINMENT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_containment);
    }
        return;
    case ::ecore::EcorePackage::EREFERENCE__RESOLVEPROXIES:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, m_resolveProxies);
    }
        return;
    case ::ecore::EcorePackage::EREFERENCE__EOPPOSITE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EReference_ptr _t1 =
                dynamic_cast< ::ecore::EReference_ptr >(_t0);
        ::ecore::EReference::setEOpposite(_t1);
    }
        return;
    case ::ecore::EcorePackage::EREFERENCE__EKEYS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::ecore::EReference::getEKeys().clear();
        ::ecore::EReference::getEKeys().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EReference::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
        return m_eAnnotations && m_eAnnotations->size();
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::ecore::EcorePackage::ETYPEDELEMENT__ORDERED:
        return m_ordered != true;
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
        return m_unique != true;
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_lowerBound);
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
        return m_upperBound != 1;
    case ::ecore::EcorePackage::ETYPEDELEMENT__MANY:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_many);
    case ::ecore::EcorePackage::ETYPEDELEMENT__REQUIRED:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_required);
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
        return m_eType;
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
        return m_eGenericType;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__CHANGEABLE:
        return m_changeable != true;
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_volatile);
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_transient);
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_defaultValueLiteral);
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EJavaObject
                > ::is_set(m_defaultValue);
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_unsettable);
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_derived);
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS:
        return m_eContainingClass;
    case ::ecore::EcorePackage::EREFERENCE__CONTAINMENT:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_containment);
    case ::ecore::EcorePackage::EREFERENCE__CONTAINER:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_container);
    case ::ecore::EcorePackage::EREFERENCE__RESOLVEPROXIES:
        return m_resolveProxies != true;
    case ::ecore::EcorePackage::EREFERENCE__EOPPOSITE:
        return m_eOpposite;
    case ::ecore::EcorePackage::EREFERENCE__EREFERENCETYPE:
        return m_eReferenceType;
    case ::ecore::EcorePackage::EREFERENCE__EKEYS:
        return m_eKeys && m_eKeys->size();

    }
    throw "Error";
}

void EReference::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EReference::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage_ptr >(::ecore::EcorePackage::_instance())->getEReference();
    return _eclass;
}

