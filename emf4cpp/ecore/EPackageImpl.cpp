// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EPackageImpl.cpp
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

#include "EPackage.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EFactory.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EPackageImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EPackage::_initialize()
{
    // Supertypes
    ::ecore::ENamedElement::_initialize();

    // References
    for (const auto &ref : getEClassifiers())
    {
        ref->_initialize();
    }
    for (const auto &ref : getESubpackages())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(EPackageImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EClassifier_ptr EPackage::getEClassifier(
        [[maybe_unused]]::ecore::EString const &_name)
{
    /*PROTECTED REGION ID(EPackageImpl_getEClassifier) ENABLED START*/
    if (m_eClassifiersMap.size() == 0)
    {
        // Fill eClassifiers map
        for (const auto &classifier : getEClassifiers())
        {
            m_eClassifiersMap[classifier->getName()] = classifier;
        }
    }

    EClassifierMapType::const_iterator it;
    if ((it = m_eClassifiersMap.find(_name)) != m_eClassifiersMap.end())
        return it->second;

    throw std::logic_error(
            std::string("EPackage: EClassifier not found: ") + _name);
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EPackage::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EPACKAGE__EANNOTATIONS:
    {
        _any = getEAnnotations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getName());
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__NSURI:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getNsURI());
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__NSPREFIX:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getNsPrefix());
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEFactoryInstance());
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
    {
        _any = getEClassifiers().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
    {
        _any = getESubpackages().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getESuperPackage());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void EPackage::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EPACKAGE__EANNOTATIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEAnnotations().clear();
        getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__NSURI:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setNsURI(_t0);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__NSPREFIX:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setNsPrefix(_t0);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EFactory > (_t0);
        setEFactoryInstance(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEClassifiers().clear();
        getEClassifiers().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getESubpackages().clear();
        getESubpackages().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean EPackage::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EPACKAGE__EANNOTATIONS:
        return getEAnnotations().size() > 0;
    case ::ecore::EcorePackage::EPACKAGE__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getName());
    case ::ecore::EcorePackage::EPACKAGE__NSURI:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getNsURI());
    case ::ecore::EcorePackage::EPACKAGE__NSPREFIX:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getNsPrefix());
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
        return getEFactoryInstance().get() != nullptr;
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
        return getEClassifiers().size() > 0;
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
        return getESubpackages().size() > 0;
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
        return getESuperPackage().get() != nullptr;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void EPackage::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr EPackage::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::ecore::EcorePackage::_instance()->getEPackage();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EPackage::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EPACKAGE__EANNOTATIONS:
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
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EFactory_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EFactory > (_t0);

        ::ecore::EFactory_ptr _old_eFactoryInstance = getEFactoryInstance();
        if (_old_eFactoryInstance && _old_eFactoryInstance != _t0)
        {
            ::ecore::EJavaObject _this = ::ecore::EObject::_this();
            _old_eFactoryInstance->::ecore::EObject::_inverseRemove(
                    ::ecore::EcorePackage::_instance()->getEFactory__ePackage(),
                    _this);
        }

        // set reference
        basicsetEFactoryInstance(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClassifier_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EClassifier > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EClassifier_ptr, -1, true, true >&) ::ecore::EPackage::getEClassifiers();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EPackage_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EPackage > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EPackage_ptr,
                        -1, true, true >&) ::ecore::EPackage::getESubpackages();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EPackage_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EPackage > (_t0);

        ::ecore::EPackage_ptr _old_eSuperPackage = getESuperPackage();
        if (_old_eSuperPackage && _old_eSuperPackage != _t0)
        {
            ::ecore::EJavaObject _this = ::ecore::EObject::_this();
            _old_eSuperPackage->::ecore::EObject::_inverseRemove(
                    ::ecore::EcorePackage::_instance()->getEPackage__eSubpackages(),
                    _this);
        }

        // set reference
        basicsetESuperPackage(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EPackage::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EPACKAGE__EANNOTATIONS:
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
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EFactory_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EFactory > (_t0);

        // set reference
        if (basicgetEFactoryInstance() == _t1)
            basicsetEFactoryInstance(nullptr);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EClassifier_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EClassifier > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EClassifier_ptr, -1, true, true >&) ::ecore::EPackage::getEClassifiers();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EPackage_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EPackage > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EPackage_ptr,
                        -1, true, true >&) ::ecore::EPackage::getESubpackages();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EPackage_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EPackage > (_t0);

        // set reference
        if (basicgetESuperPackage() == _t1)
            basicsetESuperPackage(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

