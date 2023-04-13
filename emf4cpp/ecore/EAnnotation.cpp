// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EAnnotation.cpp
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
#include <ecore/EModelElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EStringToStringMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EAnnotation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EAnnotation::EAnnotation()
{
    /*PROTECTED REGION ID(EAnnotationImpl__EAnnotationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EAnnotation::~EAnnotation()
{
}

// Attributes

::ecore::EString const& EAnnotation::getSource() const
{
    return m_source;
}

void EAnnotation::setSource(::ecore::EString const &_source)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_source = m_source;
#endif
    m_source = _source;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEAnnotation__source(),
                _old_source,
                m_source
            );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& EAnnotation::getDetails() const
{
    if (!m_details)
        return const_cast< EAnnotation* >(this)->getDetails();

    return *m_details;
}

::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& EAnnotation::getDetails()
{
    /*PROTECTED REGION ID(EAnnotation__getDetails) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_details)
        m_details.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EStringToStringMapEntry_ptr, -1, true, false >(
                        this,
                        ::ecore::EcorePackage::_instance()->getEAnnotation__details()));
    /*PROTECTED REGION END*/
    return *m_details;
}

::ecore::EModelElement_ptr EAnnotation::getEModelElement() const
{
    return m_eModelElement.lock();
}

::ecore::EModelElement_ptr EAnnotation::basicgetEModelElement()
{
    return m_eModelElement.lock();
}

void EAnnotation::basicsetEModelElement(
        ::ecore::EModelElement_ptr _eModelElement)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EModelElement_ptr _old_eModelElement = m_eModelElement.lock();
#endif
    m_eModelElement = _eModelElement;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ecore::EcorePackage::_instance()->getEAnnotation__eModelElement(),
                _old_eModelElement,
                m_eModelElement.lock()
            );
        eNotify(&notification);
    }
#endif
}

void EAnnotation::setEModelElement(::ecore::EModelElement_ptr _eModelElement)
{
    ::ecore::EModelElement_ptr _old_eModelElement = m_eModelElement.lock();
    if (_eModelElement != _old_eModelElement)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (_old_eModelElement)
        {
            _old_eModelElement->::ecore::EObject::_inverseRemove(
                    ::ecore::EcorePackage::_instance()->getEModelElement__eAnnotations(),
                    _this);
        }
        if (_eModelElement && ::ecore::EcorePackage::_instance())
        {
            _eModelElement->::ecore::EObject::_inverseAdd(
                    ::ecore::EcorePackage::_instance()->getEModelElement__eAnnotations(),
                    _this);
        }
        basicsetEModelElement(_eModelElement);
    }
}

const ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& EAnnotation::getContents() const
{
    if (!m_contents)
        return const_cast< EAnnotation* >(this)->getContents();

    return *m_contents;
}

::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& EAnnotation::getContents()
{
    /*PROTECTED REGION ID(EAnnotation__getContents) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_contents)
        m_contents.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EObject_ptr, -1, true, false >(this,
                        ::ecore::EcorePackage::_instance()->getEAnnotation__contents()));
    /*PROTECTED REGION END*/
    return *m_contents;
}

const ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& EAnnotation::getReferences() const
{
    if (!m_references)
        return const_cast< EAnnotation* >(this)->getReferences();

    return *m_references;
}

::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& EAnnotation::getReferences()
{
    /*PROTECTED REGION ID(EAnnotation__getReferences) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_references)
        m_references.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EObject_ptr, -1, false, false >(this,
                        ::ecore::EcorePackage::_instance()->getEAnnotation__references()));
    /*PROTECTED REGION END*/
    return *m_references;
}

