// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EGenericTypeImpl.cpp
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

#include "EGenericType.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EGenericTypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EGenericType::_initialize()
{
    // Supertypes

    // References
    if (m_eUpperBound)
    {
        m_eUpperBound->_initialize();
    }
    for (const auto &ref : getETypeArguments())
    {
        ref->_initialize();
    }
    if (m_eLowerBound)
    {
        m_eLowerBound->_initialize();
    }

    /*PROTECTED REGION ID(EGenericTypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EGenericType::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEUpperBound());
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
    {
        _any = getETypeArguments().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ERAWTYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getERawType());
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
    {
        _any = ::ecore::as < ::ecore::EObject > (getELowerBound());
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
    {
        _any = ::ecore::as < ::ecore::EObject > (getETypeParameter());
    }
        return _any;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEClassifier());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void EGenericType::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EGenericType > (_t0);
        setEUpperBound(_t1);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getETypeArguments().clear();
        getETypeArguments().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EGenericType > (_t0);
        setELowerBound(_t1);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::ETypeParameter > (_t0);
        setETypeParameter(_t1);
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EClassifier > (_t0);
        setEClassifier(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean EGenericType::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND:
        return getEUpperBound().get() != nullptr;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
        return getETypeArguments().size() > 0;
    case ::ecore::EcorePackage::EGENERICTYPE__ERAWTYPE:
        return getERawType().get() != nullptr;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
        return getELowerBound().get() != nullptr;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
        return getETypeParameter().get() != nullptr;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
        return getEClassifier().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void EGenericType::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr EGenericType::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::ecore::EcorePackage::_instance()->getEGenericType();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EGenericType::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EGenericType::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER:
    {
    }
        return;
    case ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

