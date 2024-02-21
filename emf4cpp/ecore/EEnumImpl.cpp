// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EEnumImpl.cpp
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

#include "EEnum.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EEnumImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EEnum::_initialize()
{
    // Supertypes
    ::ecore::EDataType::_initialize();

    // References
    for (const auto &ref : getELiterals())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(EEnumImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EEnumLiteral_ptr EEnum::getEEnumLiteral(
        [[maybe_unused]]::ecore::EString const &_name)
{
    /*PROTECTED REGION ID(EEnumImpl_getEEnumLiteral_1) ENABLED START*/
    for (const auto &literal : *m_eLiterals)
    {
        if (literal->getName() == _name)
            return literal;
    }

    throw "InvalidNameLiteral";
    /*PROTECTED REGION END*/
}

::ecore::EEnumLiteral_ptr EEnum::getEEnumLiteral(
        [[maybe_unused]]::ecore::EInt _value)
{
    /*PROTECTED REGION ID(EEnumImpl_getEEnumLiteral_0) ENABLED START*/
    for (const auto &literal : *m_eLiterals)
    {
        if (literal->getValue() == _value)
            return literal;
    }

    throw "InvalidValue";
    /*PROTECTED REGION END*/
}

::ecore::EEnumLiteral_ptr EEnum::getEEnumLiteralByLiteral(
        [[maybe_unused]]::ecore::EString const &_literal)
{
    /*PROTECTED REGION ID(EEnumImpl_getEEnumLiteralByLiteral) ENABLED START*/
    for (const auto &literal : *m_eLiterals)
    {
        if (literal->getLiteral() == _literal)
            return literal;
    }

    throw std::logic_error(std::string("InvalidLiteral: ") + _literal);
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EEnum::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EENUM__EANNOTATIONS:
    {
        _any = getEAnnotations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EENUM__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getName());
    }
        return _any;
    case ::ecore::EcorePackage::EENUM__INSTANCECLASSNAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getInstanceClassName());
    }
        return _any;
    case ::ecore::EcorePackage::EENUM__INSTANCECLASS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EJavaClass
                > ::toAny(_any, getInstanceClass());
    }
        return _any;
    case ::ecore::EcorePackage::EENUM__DEFAULTVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EJavaObject
                > ::toAny(_any, getDefaultValue());
    }
        return _any;
    case ::ecore::EcorePackage::EENUM__INSTANCETYPENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getInstanceTypeName());
    }
        return _any;
    case ::ecore::EcorePackage::EENUM__EPACKAGE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEPackage());
    }
        return _any;
    case ::ecore::EcorePackage::EENUM__ETYPEPARAMETERS:
    {
        _any = getETypeParameters().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EENUM__SERIALIZABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isSerializable());
    }
        return _any;
    case ::ecore::EcorePackage::EENUM__ELITERALS:
    {
        _any = getELiterals().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void EEnum::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EENUM__EANNOTATIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEAnnotations().clear();
        getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EENUM__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::ecore::EcorePackage::EENUM__INSTANCECLASSNAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setInstanceClassName(_t0);
    }
        return;
    case ::ecore::EcorePackage::EENUM__INSTANCETYPENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setInstanceTypeName(_t0);
    }
        return;
    case ::ecore::EcorePackage::EENUM__ETYPEPARAMETERS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getETypeParameters().clear();
        getETypeParameters().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EENUM__SERIALIZABLE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setSerializable(_t0);
    }
        return;
    case ::ecore::EcorePackage::EENUM__ELITERALS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getELiterals().clear();
        getELiterals().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean EEnum::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EENUM__EANNOTATIONS:
        return getEAnnotations().size() > 0;
    case ::ecore::EcorePackage::EENUM__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getName());
    case ::ecore::EcorePackage::EENUM__INSTANCECLASSNAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getInstanceClassName());
    case ::ecore::EcorePackage::EENUM__DEFAULTVALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EJavaObject
                > ::is_set(getDefaultValue());
    case ::ecore::EcorePackage::EENUM__INSTANCETYPENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getInstanceTypeName());
    case ::ecore::EcorePackage::EENUM__EPACKAGE:
        return getEPackage().get() != nullptr;
    case ::ecore::EcorePackage::EENUM__ETYPEPARAMETERS:
        return getETypeParameters().size() > 0;
    case ::ecore::EcorePackage::EENUM__SERIALIZABLE:
        return isSerializable() != true;
    case ::ecore::EcorePackage::EENUM__ELITERALS:
        return getELiterals().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void EEnum::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr EEnum::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::ecore::EcorePackage::_instance()->getEEnum();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EEnum::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EENUM__EANNOTATIONS:
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
    case ::ecore::EcorePackage::EENUM__EPACKAGE:
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
    case ::ecore::EcorePackage::EENUM__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::EENUM__ELITERALS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EEnumLiteral_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EEnumLiteral > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EEnumLiteral_ptr, -1, true, true >&) ::ecore::EEnum::getELiterals();
        container.basicAdd(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EEnum::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EENUM__EANNOTATIONS:
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
    case ::ecore::EcorePackage::EENUM__EPACKAGE:
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
    case ::ecore::EcorePackage::EENUM__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::EENUM__ELITERALS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EEnumLiteral_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EEnumLiteral > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EEnumLiteral_ptr, -1, true, true >&) ::ecore::EEnum::getELiterals();
        container.basicRemove(_t1);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

