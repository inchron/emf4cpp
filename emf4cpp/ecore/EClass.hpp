// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EClass.hpp
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

#ifndef ECORE_ECLASS_HPP
#define ECORE_ECLASS_HPP

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

#include <ecore/EClassifier.hpp>

/*PROTECTED REGION ID(EClass_pre) ENABLED START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
#include <map>
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EClass : public virtual ::ecore::EClassifier
{
public:
    EClass();

    virtual ~EClass();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EBoolean isSuperTypeOf ( ::ecore::EClass_ptr _someClass);

    virtual ::ecore::EInt getFeatureCount ();

    virtual ::ecore::EStructuralFeature_ptr getEStructuralFeature ( ::ecore::EInt _featureID);

    virtual ::ecore::EInt getFeatureID ( ::ecore::EStructuralFeature_ptr _feature);

    virtual ::ecore::EStructuralFeature_ptr getEStructuralFeature ( ::ecore::EString const& _featureName);

    virtual ::ecore::EInt getOperationCount ();

    virtual ::ecore::EOperation_ptr getEOperation ( ::ecore::EInt _operationID);

    virtual ::ecore::EInt getOperationID ( ::ecore::EOperation_ptr _operation);

    virtual ::ecore::EOperation_ptr getOverride ( ::ecore::EOperation_ptr _operation);

    // Attributes
    virtual ::ecore::EBoolean isAbstract () const;
    virtual void setAbstract (::ecore::EBoolean _abstract);

    virtual ::ecore::EBoolean isInterface () const;
    virtual void setInterface (::ecore::EBoolean _interface);

    // References
    virtual const ::ecorecpp::mapping::EList< ::ecore::EClass_ptr >& getESuperTypes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EClass_ptr >& getESuperTypes ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EOperation_ptr >& getEOperations () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EOperation_ptr >& getEOperations ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& getEAllAttributes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& getEAllAttributes ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& getEAllReferences () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& getEAllReferences ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& getEReferences () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& getEReferences ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& getEAttributes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EAttribute_ptr >& getEAttributes ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& getEAllContainments () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EReference_ptr >& getEAllContainments ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EOperation_ptr >& getEAllOperations () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EOperation_ptr >& getEAllOperations ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature_ptr >& getEAllStructuralFeatures () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature_ptr >& getEAllStructuralFeatures ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EClass_ptr >& getEAllSuperTypes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EClass_ptr >& getEAllSuperTypes ();

    virtual ::ecore::EAttribute_ptr getEIDAttribute () const;
    virtual void setEIDAttribute (::ecore::EAttribute_ptr _eIDAttribute);

    virtual const ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature_ptr >& getEStructuralFeatures () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EStructuralFeature_ptr >& getEStructuralFeatures ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& getEGenericSuperTypes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& getEGenericSuperTypes ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& getEAllGenericSuperTypes () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EGenericType_ptr >& getEAllGenericSuperTypes ();

    /*PROTECTED REGION ID(EClass) ENABLED START*/

protected:

    typedef std::map< ::ecore::EString, ::ecore::EStructuralFeature_ptr > EStructuralFeatureMap;
    typedef std::map< ::ecore::EStructuralFeature_ptr, int > EStructuralFeatureIDMap;

    EStructuralFeatureMap m_eAllStructuralFeaturesMap;
    EStructuralFeatureIDMap m_eAllStructuralFeaturesIDMap;

public:
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(EClassImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EClass_ptr _this()
    {   return std::dynamic_pointer_cast<EClass>(shared_from_this());}

    // Attributes

    ::ecore::EBoolean m_abstract
    {};

    ::ecore::EBoolean m_interface
    {};

    // References

    ::ecore::EList_ptr< ::ecore::EClass_ptr > m_eSuperTypes;

    ::ecore::EList_ptr< ::ecore::EOperation_ptr > m_eOperations;

    ::ecore::EList_ptr< ::ecore::EAttribute_ptr > m_eAllAttributes;

    ::ecore::EList_ptr< ::ecore::EReference_ptr > m_eAllReferences;

    ::ecore::EList_ptr< ::ecore::EReference_ptr > m_eReferences;

    ::ecore::EList_ptr< ::ecore::EAttribute_ptr > m_eAttributes;

    ::ecore::EList_ptr< ::ecore::EReference_ptr > m_eAllContainments;

    ::ecore::EList_ptr< ::ecore::EOperation_ptr > m_eAllOperations;

    ::ecore::EList_ptr< ::ecore::EStructuralFeature_ptr > m_eAllStructuralFeatures;

    ::ecore::EList_ptr< ::ecore::EClass_ptr > m_eAllSuperTypes;

    std::weak_ptr< ::ecore::EAttribute > m_eIDAttribute;

    ::ecore::EList_ptr< ::ecore::EStructuralFeature_ptr > m_eStructuralFeatures;

    ::ecore::EList_ptr< ::ecore::EGenericType_ptr > m_eGenericSuperTypes;

    ::ecore::EList_ptr< ::ecore::EGenericType_ptr > m_eAllGenericSuperTypes;

};

}
 // ecore

#endif // ECORE_ECLASS_HPP

