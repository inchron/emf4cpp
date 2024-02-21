// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EClassImpl.cpp
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

#include "EClass.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EClassImpl.cpp) ENABLED START*/
#include <iostream>
/*PROTECTED REGION END*/

using namespace ::ecore;

void EClass::_initialize()
{
    // Supertypes
    ::ecore::EClassifier::_initialize();

    // References
    for (const auto &ref : getEOperations())
    {
        ref->_initialize();
    }
    for (const auto &ref : getEStructuralFeatures())
    {
        ref->_initialize();
    }
    for (const auto &ref : getEGenericSuperTypes())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(EClassImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean EClass::isSuperTypeOf(
        [[maybe_unused]]::ecore::EClass_ptr _someClass)
{
    /*PROTECTED REGION ID(EClassImpl_isSuperTypeOf) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    for (auto superClass : _someClass->getEAllSuperTypes())
        if (superClass == _this())
            return true;

    return false;
    /*PROTECTED REGION END*/
}

::ecore::EInt EClass::getFeatureCount()
{
    /*PROTECTED REGION ID(EClassImpl_getFeatureCount) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    return getEAllStructuralFeatures().size();
    /*PROTECTED REGION END*/
}

::ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(
        [[maybe_unused]]::ecore::EInt _featureID)
{
    /*PROTECTED REGION ID(EClassImpl_getEStructuralFeature_0) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (m_eAllStructuralFeaturesIDMap.size() == 0)
        getEAllStructuralFeatures();

    for (const auto &pair : m_eAllStructuralFeaturesIDMap)
        if (pair.second == _featureID)
            return pair.first;

    std::cerr << "EClassImpl: " << getName() << " EStructuralFeature for ID: "
            << _featureID << " not found." << std::endl;
    for (auto &e : m_eAllStructuralFeaturesIDMap)
        std::cerr << e.first->getName() << ":\t" << e.second << std::endl;
    throw "EClassImpl: EStructuralFeature not found";
    /*PROTECTED REGION END*/
}

::ecore::EInt EClass::getFeatureID(
        [[maybe_unused]]::ecore::EStructuralFeature_ptr _feature)
{
    /*PROTECTED REGION ID(EClassImpl_getFeatureID) ENABLED START*/

    if (m_eAllStructuralFeaturesIDMap.size() == 0)
        getEAllStructuralFeatures();

    auto it = m_eAllStructuralFeaturesIDMap.find(_feature);
    if (it != m_eAllStructuralFeaturesIDMap.end())
        return it->second;

    std::cerr << "EClassImpl: " << getName()
            << " EStructuralFeature not found: " << _feature->getName()
            << std::endl;
    for (auto &e : m_eAllStructuralFeaturesIDMap)
        std::cerr << e.first->getName() << ":\t" << e.second << std::endl;
    throw "EClassImpl: EStructuralFeature not found";
    /*PROTECTED REGION END*/
}

::ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(
        [[maybe_unused]]::ecore::EString const &_featureName)
{
    /*PROTECTED REGION ID(EClassImpl_getEStructuralFeature_1) ENABLED START*/

    if (m_eAllStructuralFeaturesMap.size() == 0)
        getEAllStructuralFeatures();

    EStructuralFeatureMap::const_iterator it;
    if ((it = m_eAllStructuralFeaturesMap.find(_featureName))
            != m_eAllStructuralFeaturesMap.end())
        return it->second;

    std::cerr << "EClassImpl: " << getName()
            << " EStructuralFeature not found: " << _featureName << std::endl;
    for (auto &e : m_eAllStructuralFeaturesMap)
        std::cerr << "\t" << e.first << std::endl;
    throw "EClassImpl: EStructuralFeature not found";

    /*PROTECTED REGION END*/
}

::ecore::EInt EClass::getOperationCount()
{
    /*PROTECTED REGION ID(EClassImpl_getOperationCount) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getOperationCount";
    /*PROTECTED REGION END*/
}

::ecore::EOperation_ptr EClass::getEOperation(
        [[maybe_unused]]::ecore::EInt _operationID)
{
    /*PROTECTED REGION ID(EClassImpl_getEOperation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getEOperation";
    /*PROTECTED REGION END*/
}

::ecore::EInt EClass::getOperationID(
        [[maybe_unused]]::ecore::EOperation_ptr _operation)
{
    /*PROTECTED REGION ID(EClassImpl_getOperationID) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getOperationID";
    /*PROTECTED REGION END*/
}

::ecore::EOperation_ptr EClass::getOverride(
        [[maybe_unused]]::ecore::EOperation_ptr _operation)
{
    /*PROTECTED REGION ID(EClassImpl_getOverride) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getOverride";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EClass::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ECLASS__EANNOTATIONS:
    {
        _any = getEAnnotations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getName());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__INSTANCECLASSNAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getInstanceClassName());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__INSTANCECLASS:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EJavaClass
                > ::toAny(_any, getInstanceClass());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__DEFAULTVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EJavaObject
                > ::toAny(_any, getDefaultValue());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__INSTANCETYPENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getInstanceTypeName());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EPACKAGE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEPackage());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__ETYPEPARAMETERS:
    {
        _any = getETypeParameters().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__ABSTRACT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isAbstract());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__INTERFACE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, isInterface());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__ESUPERTYPES:
    {
        _any = getESuperTypes().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EOPERATIONS:
    {
        _any = getEOperations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EALLATTRIBUTES:
    {
        _any = getEAllAttributes().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EALLREFERENCES:
    {
        _any = getEAllReferences().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EREFERENCES:
    {
        _any = getEReferences().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EATTRIBUTES:
    {
        _any = getEAttributes().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EALLCONTAINMENTS:
    {
        _any = getEAllContainments().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EALLOPERATIONS:
    {
        _any = getEAllOperations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EALLSTRUCTURALFEATURES:
    {
        _any = getEAllStructuralFeatures().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EALLSUPERTYPES:
    {
        _any = getEAllSuperTypes().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EIDATTRIBUTE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getEIDAttribute());
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES:
    {
        _any = getEStructuralFeatures().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EGENERICSUPERTYPES:
    {
        _any = getEGenericSuperTypes().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ECLASS__EALLGENERICSUPERTYPES:
    {
        _any = getEAllGenericSuperTypes().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void EClass::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ECLASS__EANNOTATIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEAnnotations().clear();
        getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__INSTANCECLASSNAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setInstanceClassName(_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__INSTANCETYPENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setInstanceTypeName(_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__ETYPEPARAMETERS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getETypeParameters().clear();
        getETypeParameters().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__ABSTRACT:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setAbstract(_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__INTERFACE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        setInterface(_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__ESUPERTYPES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getESuperTypes().clear();
        getESuperTypes().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__EOPERATIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEOperations().clear();
        getEOperations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEStructuralFeatures().clear();
        getEStructuralFeatures().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__EGENERICSUPERTYPES:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEGenericSuperTypes().clear();
        getEGenericSuperTypes().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean EClass::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ECLASS__EANNOTATIONS:
        return getEAnnotations().size() > 0;
    case ::ecore::EcorePackage::ECLASS__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getName());
    case ::ecore::EcorePackage::ECLASS__INSTANCECLASSNAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getInstanceClassName());
    case ::ecore::EcorePackage::ECLASS__DEFAULTVALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EJavaObject
                > ::is_set(getDefaultValue());
    case ::ecore::EcorePackage::ECLASS__INSTANCETYPENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getInstanceTypeName());
    case ::ecore::EcorePackage::ECLASS__EPACKAGE:
        return getEPackage().get() != nullptr;
    case ::ecore::EcorePackage::ECLASS__ETYPEPARAMETERS:
        return getETypeParameters().size() > 0;
    case ::ecore::EcorePackage::ECLASS__ABSTRACT:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isAbstract());
    case ::ecore::EcorePackage::ECLASS__INTERFACE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(isInterface());
    case ::ecore::EcorePackage::ECLASS__ESUPERTYPES:
        return getESuperTypes().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EOPERATIONS:
        return getEOperations().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EALLATTRIBUTES:
        return getEAllAttributes().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EALLREFERENCES:
        return getEAllReferences().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EREFERENCES:
        return getEReferences().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EATTRIBUTES:
        return getEAttributes().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EALLCONTAINMENTS:
        return getEAllContainments().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EALLOPERATIONS:
        return getEAllOperations().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EALLSTRUCTURALFEATURES:
        return getEAllStructuralFeatures().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EALLSUPERTYPES:
        return getEAllSuperTypes().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EIDATTRIBUTE:
        return getEIDAttribute().get() != nullptr;
    case ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES:
        return getEStructuralFeatures().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EGENERICSUPERTYPES:
        return getEGenericSuperTypes().size() > 0;
    case ::ecore::EcorePackage::ECLASS__EALLGENERICSUPERTYPES:
        return getEAllGenericSuperTypes().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void EClass::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr EClass::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::ecore::EcorePackage::_instance()->getEClass();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EClass::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ECLASS__EANNOTATIONS:
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
    case ::ecore::EcorePackage::ECLASS__EPACKAGE:
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
    case ::ecore::EcorePackage::ECLASS__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::ECLASS__ESUPERTYPES:
    {
    }
        return;
    case ::ecore::EcorePackage::ECLASS__EOPERATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EOperation_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EOperation > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EOperation_ptr, -1, true, true >&) ::ecore::EClass::getEOperations();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EStructuralFeature_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EStructuralFeature > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EStructuralFeature_ptr, -1, true, true >&) ::ecore::EClass::getEStructuralFeatures();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__EGENERICSUPERTYPES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EClass::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::ECLASS__EANNOTATIONS:
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
    case ::ecore::EcorePackage::ECLASS__EPACKAGE:
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
    case ::ecore::EcorePackage::ECLASS__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::ECLASS__ESUPERTYPES:
    {
    }
        return;
    case ::ecore::EcorePackage::ECLASS__EOPERATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EOperation_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EOperation > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EOperation_ptr, -1, true, true >&) ::ecore::EClass::getEOperations();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EStructuralFeature_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EStructuralFeature > (_t0);

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EStructuralFeature_ptr, -1, true, true >&) ::ecore::EClass::getEStructuralFeatures();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::ECLASS__EGENERICSUPERTYPES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

