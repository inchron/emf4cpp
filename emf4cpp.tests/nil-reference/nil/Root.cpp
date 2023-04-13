// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * nil/Root.cpp
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

#include "Root.hpp"
#include <nil/Root.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "nil/NilPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Root.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::nil;

// Default constructor
Root::Root()
{
    /*PROTECTED REGION ID(RootImpl__RootImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Root::~Root()
{
    if (m_containmentReference)
    {
        m_containmentReference.reset();
    }
}

// Attributes

// References

::nil::Root_ptr Root::getReference() const
{
    return m_reference.lock();
}

void Root::setReference(::nil::Root_ptr _reference)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::nil::Root_ptr _old_reference = m_reference.lock();
#endif
    m_reference = _reference;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::nil::NilPackage::_instance()->getRoot__reference(),
                _old_reference,
                m_reference.lock()
            );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::nil::Root_ptr >& Root::getManyReference() const
{
    if (!m_manyReference)
        return const_cast< Root* >(this)->getManyReference();

    return *m_manyReference;
}

::ecorecpp::mapping::EList< ::nil::Root_ptr >& Root::getManyReference()
{
    /*PROTECTED REGION ID(Root__getManyReference) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_manyReference)
        m_manyReference.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl< ::nil::Root_ptr,
                        -1, false, false >(this,
                        ::nil::NilPackage::_instance()->getRoot__manyReference()));
    /*PROTECTED REGION END*/
    return *m_manyReference;
}

::nil::Root_ptr Root::getContainmentReference() const
{
    return m_containmentReference;
}

void Root::setContainmentReference(::nil::Root_ptr _containmentReference)
{
    if (m_containmentReference)
        m_containmentReference->_setEContainer(Root_ptr(),
                ::nil::NilPackage::_instance()->getRoot__containmentReference());
    if (_containmentReference)
        _containmentReference->_setEContainer(_this(),
                ::nil::NilPackage::_instance()->getRoot__containmentReference());

#ifdef ECORECPP_NOTIFICATION_API
    ::nil::Root_ptr _old_containmentReference = m_containmentReference;
#endif
    m_containmentReference = _containmentReference;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::nil::NilPackage::_instance()->getRoot__containmentReference(),
                _old_containmentReference,
                m_containmentReference
            );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::nil::Root_ptr >& Root::getManyContainmentReference() const
{
    if (!m_manyContainmentReference)
        return const_cast< Root* >(this)->getManyContainmentReference();

    return *m_manyContainmentReference;
}

::ecorecpp::mapping::EList< ::nil::Root_ptr >& Root::getManyContainmentReference()
{
    /*PROTECTED REGION ID(Root__getManyContainmentReference) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_manyContainmentReference)
        m_manyContainmentReference.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl< ::nil::Root_ptr,
                        -1, true, false >(this,
                        ::nil::NilPackage::_instance()->getRoot__manyContainmentReference()));
    /*PROTECTED REGION END*/
    return *m_manyContainmentReference;
}

