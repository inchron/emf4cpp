// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EObject.hpp
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

#ifndef ECORE_EOBJECT_HPP
#define ECORE_EOBJECT_HPP

#include <ecore_forward.hpp>

#include "dllEcore.hpp"

/*PROTECTED REGION ID(EObject_pre) ENABLED START*/
#include <ecorecpp/notify_forward.hpp>
#include <ecorecpp/util/TreeIterator.hpp>
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EObject : public std::enable_shared_from_this<::ecore::EObject>
{
public:
    EObject();

    virtual ~EObject();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EClass_ptr eClass ();

    virtual ::ecore::EBoolean eIsProxy ();

    virtual ::ecore::EResource eResource ();

    virtual ::ecore::EObject_ptr eContainer ();

    virtual ::ecore::EStructuralFeature_ptr eContainingFeature ();

    virtual ::ecore::EReference_ptr eContainmentFeature ();

    virtual ::ecore::EList_ptr< ::ecore::EObject_ptr> eContents ();

    virtual ::ecorecpp::util::TreeIterator< ::ecore::EObject_ptr> eAllContents ();

    virtual ::ecore::EList_ptr< ::ecore::EObject_ptr> eCrossReferences ();

    virtual ::ecore::EJavaObject eGet ( [[maybe_unused]]::ecore::EStructuralFeature_ptr _feature);

    virtual ::ecore::EJavaObject eGet ( [[maybe_unused]]::ecore::EStructuralFeature_ptr _feature, [[maybe_unused]]::ecore::EBoolean _resolve);

    virtual void eSet ( [[maybe_unused]]::ecore::EStructuralFeature_ptr _feature, [[maybe_unused]]::ecore::EJavaObject const& _newValue);

    virtual ::ecore::EBoolean eIsSet ( [[maybe_unused]]::ecore::EStructuralFeature_ptr _feature);

    virtual void eUnset ( [[maybe_unused]]::ecore::EStructuralFeature_ptr _feature);

    virtual ::ecore::EJavaObject eInvoke ( [[maybe_unused]]::ecore::EOperation_ptr _operation, [[maybe_unused]]::ecore::EList_ptr< ::ecorecpp::mapping::any> const& _arguments);

    // Attributes

    // References

    /*PROTECTED REGION ID(EObject) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(EObjectImpl) ENABLED START*/

    void _inverseAdd ( ::ecore::EStructuralFeature_ptr _feature,
            ::ecore::EJavaObject const& _newValue);

    void _inverseRemove ( ::ecore::EStructuralFeature_ptr _feature,
            ::ecore::EJavaObject const& _oldValue);

    void _setEContainer(::ecore::EObject_ptr _eContainer,
            ::ecore::EStructuralFeature_ptr _eContainingFeature);

    void _setEResource(::ecorecpp::resource::Resource_ptr);
    void _basicSetEResource(::ecorecpp::resource::Resource_ptr);

    ::ecorecpp::resource::Resource_ptr _getDirectResource();

#ifdef ECORECPP_NOTIFICATION_API
    // Notification API
    /**
     * TODO: Returns non-const reference temporarily.
     * It will return a EList<Adapter> type non-const reference when implemented.
     */
    ::ecorecpp::mapping::EList< ::ecorecpp::notify::Adapter_ptr >& eAdapters();

    void eNotify( ::ecorecpp::notify::Notification_ptr _notification);

    bool eNotificationRequired();

    inline bool eDeliver()
    {
        return m_eDeliver;
    }

    inline void eSetDeliver(bool deliver)
    {
        m_eDeliver = deliver;
    }

#endif

protected:

    std::weak_ptr<::ecore::EObject> m_eContainer;
    std::weak_ptr<::ecore::EStructuralFeature> m_eContainingFeature;

#ifdef ECORECPP_NOTIFICATION_API
    // Notification API
    ::ecore::Ptr<::ecorecpp::mapping::EList< ::ecorecpp::notify::Adapter_ptr >> m_eAdapters;
    bool m_eDeliver;
#endif

    std::weak_ptr<::ecorecpp::resource::Resource> m_eResource;

    /*PROTECTED REGION END*/

protected:
    EObject_ptr _this()
    {   return shared_from_this();}

    // Attributes

    // References

};

}
 // ecore

#endif // ECORE_EOBJECT_HPP

