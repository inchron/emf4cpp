// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildModelImpl.cpp
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

#include "BuildModel.hpp"
#include <kdm/build/BuildPackage.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/build/AbstractBuildElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(BuildModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::build;

void BuildModel::_initialize()
{
    // Supertypes
    ::kdm::kdm::KDMModel::_initialize();

    // References
    for (size_t i = 0; i < m_buildElement->size(); i++)
    {
        (*m_buildElement)[i]->_initialize();
    }

    /*PROTECTED REGION ID(BuildModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BuildModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT:
    {
        _any = getAudit().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY:
    {
        _any = getExtensionFamily().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::build::BuildPackage::BUILDMODEL__BUILDELEMENT:
    {
        _any = getBuildElement().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void BuildModel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAudit().clear();
        getAudit().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getExtensionFamily().clear();
        getExtensionFamily().insert_all(*_t0);
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::build::BuildPackage::BUILDMODEL__BUILDELEMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getBuildElement().clear();
        getBuildElement().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean BuildModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT:
        return getAudit().size() > 0;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY:
        return getExtensionFamily().size() > 0;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::build::BuildPackage::BUILDMODEL__BUILDELEMENT:
        return getBuildElement().size() > 0;

    }
    throw "Error";
}

void BuildModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr BuildModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::build::BuildPackage* >(::kdm::build::BuildPackage::_instance().get())->getBuildModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void BuildModel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY:
    {
    }
        return;
    case ::kdm::build::BuildPackage::BUILDMODEL__BUILDELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void BuildModel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__AUDIT:
    {
    }
        return;
    case ::kdm::kdm::KdmPackage::KDMFRAMEWORK__EXTENSIONFAMILY:
    {
    }
        return;
    case ::kdm::build::BuildPackage::BUILDMODEL__BUILDELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

