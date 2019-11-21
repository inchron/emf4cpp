// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EClassImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016-2018 <emf4cpp@inchron.com>
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

using namespace ::ecore;

void EClass::_init_collections()
{
    // Derived references

    /**
     * Nota: Temporal, ya que los métodos initialize desaparecerán
     */

    // eAttributes and eRefereces
    m_eAttributes->clear();
    m_eReferences->clear();
    m_eAllAttributes->clear();
    m_eAllReferences->clear();
    m_eAllStructuralFeatures->clear();
    m_eAllStructuralFeaturesMap.clear();
    for (size_t i = 0; i < m_eStructuralFeatures->size(); i++)
    {
        ::ecore::EStructuralFeature_ptr _esf = (*m_eStructuralFeatures)[i];
        ::ecore::EAttribute_ptr _at = ::ecore::as < ::ecore::EAttribute
                > (_esf);
        ::ecore::EReference_ptr _ref = ::ecore::as < ::ecore::EReference
                > (_esf);

        if (_at)
        {
            m_eAttributes->push_back(_at);
            m_eAllAttributes->push_back(_at);
        }
        else if (_ref)
        {
            m_eReferences->push_back(_ref);
            m_eAllReferences->push_back(_ref);
        }

        m_eAllStructuralFeatures->push_back(_esf);
        m_eAllStructuralFeaturesMap[_esf->getName()] = _esf;
    }

    // eAllSuperTypes
    m_eAllSuperTypes->clear();
    m_eAllSuperTypes->insert_all(*m_eSuperTypes);
    for (size_t i = 0; i < m_eAllSuperTypes->size(); i++)
    {
        ::ecore::EClass_ptr _st = (*m_eAllSuperTypes)[i];
        ::ecorecpp::mapping::EList < ::ecore::EClass_ptr > &_s =
                _st->getESuperTypes();

        // TODO: check duplicates
        m_eAllSuperTypes->insert_all(_s);
    }

    // eAllAttributes, eAllReferences and eAllStructuralFeatures
    for (size_t i = 0; i < m_eAllSuperTypes->size(); i++)
    {
        ::ecore::EClass_ptr _st = (*m_eAllSuperTypes)[i];
        ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature_ptr > const& _s =
                _st->getEStructuralFeatures();

        for (size_t j = 0; j < _s.size(); j++)
        {
            ::ecore::EAttribute_ptr _at = ::ecore::as < ::ecore::EAttribute
                    > (_s[j]);
            ::ecore::EReference_ptr _ref = ::ecore::as < ::ecore::EReference
                    > (_s[j]);

            if (_at)
                m_eAllAttributes->push_back(_at);
            else if (_ref)
                m_eAllReferences->push_back(_ref);

            m_eAllStructuralFeatures->push_back(_s[j]);
            m_eAllStructuralFeaturesMap[_s[j]->getName()] = _s[j];
        }
    }

    // eAllContainments
    m_eAllContainments->clear();
    for (size_t i = 0; i < m_eAllReferences->size(); i++)
    {
        ::ecore::EReference_ptr _ref = (*m_eAllReferences)[i];

        if (_ref->isContainment())
            m_eAllContainments->push_back(_ref);
    }

    // eAllOperations
    m_eAllOperations->clear();
    for (size_t i = 0; i < m_eOperations->size(); i++)
        m_eAllOperations->push_back((*m_eOperations)[i]);
    for (size_t i = 0; i < m_eAllSuperTypes->size(); i++)
    {
        ::ecore::EClass_ptr _st = (*m_eAllSuperTypes)[i];
        ::ecorecpp::mapping::EList< ::ecore::EOperation_ptr > const& _s =
                _st->getEOperations();

        for (size_t j = 0; j < _s.size(); j++)
            m_eAllOperations->push_back(_s[j]);
    }

    // eAllGenericSuperTypes
    m_eAllGenericSuperTypes->clear();
    for (size_t i = 0; i < m_eGenericSuperTypes->size(); i++)
        m_eAllGenericSuperTypes->push_back((*m_eGenericSuperTypes)[i]);
    for (size_t i = 0; i < m_eAllSuperTypes->size(); i++)
    {
        ::ecore::EClass_ptr _st = (*m_eAllSuperTypes)[i];
        ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr > const& _s =
                _st->getEGenericSuperTypes();

        for (size_t j = 0; j < _s.size(); j++)
            m_eAllGenericSuperTypes->push_back(_s[j]);
    }
}
/*PROTECTED REGION END*/

using namespace ::ecore;

void EClass::_initialize()
{
    // Supertypes
    ::ecore::EClassifier::_initialize();

    // References
    for (size_t i = 0; i < m_eOperations->size(); i++)
    {
        (*m_eOperations)[i]->_initialize();
    }
    for (size_t i = 0; i < m_eStructuralFeatures->size(); i++)
    {
        (*m_eStructuralFeatures)[i]->_initialize();
    }
    for (size_t i = 0; i < m_eGenericSuperTypes->size(); i++)
    {
        (*m_eGenericSuperTypes)[i]->_initialize();
    }

    /*PROTECTED REGION ID(EClassImpl__initialize) ENABLED START*/
    _init_collections();
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EBoolean EClass::isSuperTypeOf(::ecore::EClass_ptr _someClass)
{
    /*PROTECTED REGION ID(EClassImpl_isSuperTypeOf) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::isSuperTypeOf";
    /*PROTECTED REGION END*/
}

::ecore::EInt EClass::getFeatureCount()
{
    /*PROTECTED REGION ID(EClassImpl_getFeatureCount) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getFeatureCount";
    /*PROTECTED REGION END*/
}

::ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(
        ::ecore::EInt _featureID)
{
    /*PROTECTED REGION ID(EClassImpl_getEStructuralFeature_0) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getEStructuralFeature";
    /*PROTECTED REGION END*/
}

::ecore::EInt EClass::getFeatureID(::ecore::EStructuralFeature_ptr _feature)
{
    /*PROTECTED REGION ID(EClassImpl_getFeatureID) ENABLED START*/
    return _feature->getFeatureID();
    /*PROTECTED REGION END*/
}

::ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(
        ::ecore::EString const& _featureName)
{
    /*PROTECTED REGION ID(EClassImpl_getEStructuralFeature_1) ENABLED START*/

    if (m_eAllStructuralFeaturesMap.size() == 0)
        _init_collections();

    EStructuralFeatureMap::const_iterator it;
    if ((it = m_eAllStructuralFeaturesMap.find(_featureName))
            != m_eAllStructuralFeaturesMap.end())
        return it->second;

    std::cerr << "EClassImpl: " << getName()
            << " EStructuralFeature not found: " << _featureName << std::endl;
    for (auto& e : m_eAllStructuralFeaturesMap)
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

::ecore::EOperation_ptr EClass::getEOperation(::ecore::EInt _operationID)
{
    /*PROTECTED REGION ID(EClassImpl_getEOperation) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getEOperation";
    /*PROTECTED REGION END*/
}

::ecore::EInt EClass::getOperationID(::ecore::EOperation_ptr _operation)
{
    /*PROTECTED REGION ID(EClassImpl_getOperationID) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EClass::getOperationID";
    /*PROTECTED REGION END*/
}

::ecore::EOperation_ptr EClass::getOverride(::ecore::EOperation_ptr _operation)
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
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        _any = getEAnnotations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
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

    }
    throw "Error";
}

void EClass::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEAnnotations().clear();
        getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
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
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::ecore::EPackage > (_t0);
        setEPackage(_t1);
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
    throw "Error";
}

::ecore::EBoolean EClass::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
        return getEAnnotations().size() > 0;
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
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
    throw "Error";
}

void EClass::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EClass::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEClass();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EClass::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EAnnotation_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EAnnotation > (_t0);

        // add to a list
        auto& container =
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
            _old_ePackage->_inverseRemove(
                    ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS, _this);
        }

        // set reference
        basicsetEPackage(_t1);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
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
        auto& container =
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
        auto& container =
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
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EAnnotation_ptr _t1 = std::dynamic_pointer_cast
                < ::ecore::EAnnotation > (_t0);

        // add to a list
        auto& container =
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
        auto& container =
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
        auto& container =
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

