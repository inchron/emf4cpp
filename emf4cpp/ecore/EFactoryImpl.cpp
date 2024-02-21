// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EFactoryImpl.cpp
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

#include "EFactory.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EModelElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EFactoryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EFactory::_initialize()
{
    // Supertypes
    ::ecore::EModelElement::_initialize();

    // References

    /*PROTECTED REGION ID(EFactoryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EObject_ptr EFactory::create(
        [[maybe_unused]]::ecore::EClass_ptr _eClass)
{
    /*PROTECTED REGION ID(EFactoryImpl_create) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EFactory::create";
    /*PROTECTED REGION END*/
}

::ecore::EJavaObject EFactory::createFromString(
        [[maybe_unused]]::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]]::ecore::EString const &_literalValue)
{
    /*PROTECTED REGION ID(EFactoryImpl_createFromString) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EFactory::createFromString";
    /*PROTECTED REGION END*/
}

::ecore::EString EFactory::convertToString(
        [[maybe_unused]]::ecore::EDataType_ptr _eDataType,
        [[maybe_unused]]::ecore::EJavaObject const &_instanceValue)
{
    /*PROTECTED REGION ID(EFactoryImpl_convertToString) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EFactory::convertToString";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EFactory::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EFACTORY__EANNOTATIONS:
    {
        _any = getEAnnotations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EFACTORY__EPACKAGE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEPackage());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void EFactory::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EFACTORY__EANNOTATIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEAnnotations().clear();
        getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EFACTORY__EPACKAGE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EPackage > (_t0);
        setEPackage(_t1);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean EFactory::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EFACTORY__EANNOTATIONS:
        return getEAnnotations().size() > 0;
    case ::ecore::EcorePackage::EFACTORY__EPACKAGE:
        return getEPackage().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void EFactory::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr EFactory::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::ecore::EcorePackage::_instance()->getEFactory();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EFactory::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EFACTORY__EANNOTATIONS:
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
    case ::ecore::EcorePackage::EFACTORY__EPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EPackage_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EPackage > (_t0);

        ::ecore::EPackage_ptr _old_ePackage = getEPackage();
        if (_old_ePackage && _old_ePackage != _t0)
        {
            ::ecore::EJavaObject _this = ::ecore::EObject::_this();
            _old_ePackage->::ecore::EObject::_inverseRemove(
                    ::ecore::EcorePackage::_instance()->getEPackage__eFactoryInstance(),
                    _this);
        }

        // set reference
        basicsetEPackage(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EFactory::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EFACTORY__EANNOTATIONS:
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
    case ::ecore::EcorePackage::EFACTORY__EPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EPackage_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EPackage > (_t0);

        // set reference
        if (basicgetEPackage() == _t1)
            basicsetEPackage(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

