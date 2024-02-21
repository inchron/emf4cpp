// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EAnnotationImpl.cpp
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

#include "EAnnotation.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EModelElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EStringToStringMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EAnnotationImpl.cpp) ENABLED START*/
#include <ecore/EcoreFactory.hpp>

using namespace ::ecore;

bool EAnnotation::hasDetail(::ecore::EString const &key) const
{
    for (const auto &detail : getDetails())
    {
        if (detail->getKey() == key)
            return true;
    }
    return false;
}

::ecore::EString EAnnotation::getDetail(::ecore::EString const &key) const
{
    for (const auto &detail : getDetails())
    {
        if (detail->getKey() == key)
            return detail->getValue();
    }
    throw "Error";
}

void EAnnotation::setDetail(::ecore::EString const &key,
        ::ecore::EString const &value)
{
    for (const auto &detail : getDetails())
    {
        if (detail->getKey() == key)
        {
            detail->setValue(value);
            return;
        }
    }

    auto newDetail = ::ecore::create< ::ecore::EStringToStringMapEntry >();
    newDetail->_initialize();
    newDetail->setKey(key);
    newDetail->setValue(value);
    getDetails().push_back(newDetail);
}

void EAnnotation::removeDetail(::ecore::EString const &key)
{
    for (const auto &detail : getDetails())
    {
        if (detail->getKey() == key)
            getDetails().remove(detail);
    }
}

// Use the protected region if you add manually written code.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EAnnotation::_initialize()
{
    // Supertypes
    ::ecore::EModelElement::_initialize();

    // References
    for (const auto &ref : getDetails())
    {
        ref->_initialize();
    }
    for (const auto &ref : getContents())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(EAnnotationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EAnnotation::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EANNOTATION__EANNOTATIONS:
    {
        _any = getEAnnotations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EANNOTATION__SOURCE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getSource());
    }
        return _any;
    case ::ecore::EcorePackage::EANNOTATION__DETAILS:
    {
        _any = getDetails().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEModelElement());
    }
        return _any;
    case ::ecore::EcorePackage::EANNOTATION__CONTENTS:
    {
        _any = getContents().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EANNOTATION__REFERENCES:
    {
        _any = getReferences().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void EAnnotation::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EANNOTATION__EANNOTATIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEAnnotations().clear();
        getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__SOURCE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setSource(_t0);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__DETAILS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getDetails().clear();
        getDetails().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EModelElement > (_t0);
        setEModelElement(_t1);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__CONTENTS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getContents().clear();
        getContents().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__REFERENCES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getReferences().clear();
        getReferences().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean EAnnotation::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EANNOTATION__EANNOTATIONS:
        return getEAnnotations().size() > 0;
    case ::ecore::EcorePackage::EANNOTATION__SOURCE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getSource());
    case ::ecore::EcorePackage::EANNOTATION__DETAILS:
        return getDetails().size() > 0;
    case ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT:
        return getEModelElement().get() != nullptr;
    case ::ecore::EcorePackage::EANNOTATION__CONTENTS:
        return getContents().size() > 0;
    case ::ecore::EcorePackage::EANNOTATION__REFERENCES:
        return getReferences().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void EAnnotation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr EAnnotation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::ecore::EcorePackage::_instance()->getEAnnotation_();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EAnnotation::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EANNOTATION__EANNOTATIONS:
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
    case ::ecore::EcorePackage::EANNOTATION__DETAILS:
    {
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EModelElement_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EModelElement > (_t0);

        ::ecore::EModelElement_ptr _old_eModelElement = getEModelElement();
        if (_old_eModelElement && _old_eModelElement != _t0)
        {
            ::ecore::EJavaObject _this = ::ecore::EObject::_this();
            _old_eModelElement->::ecore::EObject::_inverseRemove(
                    ::ecore::EcorePackage::_instance()->getEModelElement__eAnnotations(),
                    _this);
        }

        // set reference
        basicsetEModelElement(_t1);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__CONTENTS:
    {
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__REFERENCES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EAnnotation::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EANNOTATION__EANNOTATIONS:
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
    case ::ecore::EcorePackage::EANNOTATION__DETAILS:
    {
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EModelElement_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EModelElement > (_t0);

        // set reference
        if (basicgetEModelElement() == _t1)
            basicsetEModelElement(nullptr);
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__CONTENTS:
    {
    }
        return;
    case ::ecore::EcorePackage::EANNOTATION__REFERENCES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

