// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/MachineImpl.cpp
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

#include "Machine.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/platform/DeployedComponent.hpp>
#include <kdm/platform/DeployedResource.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::kdm::platform;

/*PROTECTED REGION ID(MachineImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Machine::_initialize()
{
    // Supertypes
    ::kdm::platform::AbstractPlatformElement::_initialize();

    // References
    for (size_t i = 0; i < m_deployedComponent->size(); i++)
    {
        (*m_deployedComponent)[i]->_initialize();
        (*m_deployedComponent)[i]->_setEContainer(this,
                ::kdm::platform::PlatformPackage::_instance()->getMachine__deployedComponent());
    }
    for (size_t i = 0; i < m_deployedResource->size(); i++)
    {
        (*m_deployedResource)[i]->_initialize();
        (*m_deployedResource)[i]->_setEContainer(this,
                ::kdm::platform::PlatformPackage::_instance()->getMachine__deployedResource());
    }

    /*PROTECTED REGION ID(MachineImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Machine::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        _any = m_annotation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        _any = m_stereotype->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        _any = m_taggedValue->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__SOURCE:
    {
        _any = m_source->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__RELATION:
    {
        _any = m_relation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__ABSTRACTION:
    {
        _any = m_abstraction->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__IMPLEMENTATION:
    {
        _any = m_implementation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::platform::PlatformPackage::MACHINE__DEPLOYEDCOMPONENT:
    {
        _any = m_deployedComponent->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::kdm::platform::PlatformPackage::MACHINE__DEPLOYEDRESOURCE:
    {
        _any = m_deployedResource->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void Machine::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::core::Element::getAttribute().clear();
        ::kdm::core::Element::getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::core::Element::getAnnotation().clear();
        ::kdm::core::Element::getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::core::ModelElement::getStereotype().clear();
        ::kdm::core::ModelElement::getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::core::ModelElement::getTaggedValue().clear();
        ::kdm::core::ModelElement::getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__SOURCE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::platform::AbstractPlatformElement::getSource().clear();
        ::kdm::platform::AbstractPlatformElement::getSource().insert_all(*_t0);
    }
        return;
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__RELATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::platform::AbstractPlatformElement::getRelation().clear();
        ::kdm::platform::AbstractPlatformElement::getRelation().insert_all(
                *_t0);
    }
        return;
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__ABSTRACTION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::platform::AbstractPlatformElement::getAbstraction().clear();
        ::kdm::platform::AbstractPlatformElement::getAbstraction().insert_all(
                *_t0);
    }
        return;
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__IMPLEMENTATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::platform::AbstractPlatformElement::getImplementation().clear();
        ::kdm::platform::AbstractPlatformElement::getImplementation().insert_all(
                *_t0);
    }
        return;
    case ::kdm::platform::PlatformPackage::MACHINE__DEPLOYEDCOMPONENT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::platform::Machine::getDeployedComponent().clear();
        ::kdm::platform::Machine::getDeployedComponent().insert_all(*_t0);
    }
        return;
    case ::kdm::platform::PlatformPackage::MACHINE__DEPLOYEDRESOURCE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::kdm::platform::Machine::getDeployedResource().clear();
        ::kdm::platform::Machine::getDeployedResource().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Machine::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
        return m_annotation && m_annotation->size();
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
        return m_stereotype && m_stereotype->size();
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
        return m_taggedValue && m_taggedValue->size();
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(m_name);
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__SOURCE:
        return m_source && m_source->size();
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__RELATION:
        return m_relation && m_relation->size();
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__ABSTRACTION:
        return m_abstraction && m_abstraction->size();
    case ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__IMPLEMENTATION:
        return m_implementation && m_implementation->size();
    case ::kdm::platform::PlatformPackage::MACHINE__DEPLOYEDCOMPONENT:
        return m_deployedComponent && m_deployedComponent->size();
    case ::kdm::platform::PlatformPackage::MACHINE__DEPLOYEDRESOURCE:
        return m_deployedResource && m_deployedResource->size();

    }
    throw "Error";
}

void Machine::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Machine::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::platform::PlatformPackage_ptr >(::kdm::platform::PlatformPackage::_instance())->getMachine();
    return _eclass;
}

