// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EClassifierImpl.cpp
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

#include "EClassifier.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EClassifierImpl.cpp) ENABLED START*/

using namespace ::ecore;

void EClassifier::setClassifierID(::ecore::EInt _id)
{
    m_id = _id;
}
/*PROTECTED REGION END*/

using namespace ::ecore;

void EClassifier::_initialize()
{
    // Supertypes
    ::ecore::ENamedElement::_initialize();

    // References
    for (const auto &ref : getETypeParameters())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(EClassifierImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean EClassifier::isInstance(
        [[maybe_unused]]::ecore::EJavaObject const &_object)
{
    /*PROTECTED REGION ID(EClassifierImpl_isInstance) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClassifier::isInstance";
    /*PROTECTED REGION END*/
}

::ecore::EInt EClassifier::getClassifierID()
{
    /*PROTECTED REGION ID(EClassifierImpl_getClassifierID) ENABLED START*/
    return m_id;
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EClassifier::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ECLASSIFIER__EANNOTATIONS:
    {
        _any = getEAnnotations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getName());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getInstanceClassName());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EJavaClass
                > ::toAny(_any, getInstanceClass());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__DEFAULTVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EJavaObject
                > ::toAny(_any, getDefaultValue());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getInstanceTypeName());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEPackage());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
        _any = getETypeParameters().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void EClassifier::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ECLASSIFIER__EANNOTATIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEAnnotations().clear();
        getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setInstanceClassName(_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setInstanceTypeName(_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getETypeParameters().clear();
        getETypeParameters().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean EClassifier::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ECLASSIFIER__EANNOTATIONS:
        return getEAnnotations().size() > 0;
    case ::ecore::EcorePackage::ECLASSIFIER__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getName());
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getInstanceClassName());
    case ::ecore::EcorePackage::ECLASSIFIER__DEFAULTVALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EJavaObject
                > ::is_set(getDefaultValue());
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getInstanceTypeName());
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
        return getEPackage().get() != nullptr;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
        return getETypeParameters().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void EClassifier::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr EClassifier::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::ecore::EcorePackage::_instance()->getEClassifier_();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EClassifier::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ECLASSIFIER__EANNOTATIONS:
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
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
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
                    ::ecore::EcorePackage::_instance()->getEPackage__eClassifiers(),
                    _this);
        }

        // set reference
        basicsetEPackage(_t1);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EClassifier::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ECLASSIFIER__EANNOTATIONS:
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
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
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
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

