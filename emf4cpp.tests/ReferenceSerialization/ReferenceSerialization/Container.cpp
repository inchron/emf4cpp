// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ReferenceSerialization/Container.cpp
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

#include "Container.hpp"
#include <ReferenceSerialization/Content.hpp>
#include <ReferenceSerialization/Child.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ReferenceSerialization/ReferenceSerializationPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Container.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ReferenceSerialization;

// Default constructor
Container::Container()
{
    /*PROTECTED REGION ID(ContainerImpl__ContainerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Container::~Container()
{
    if (m_child)
    {
        m_child.reset();
    }
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::ReferenceSerialization::Content_ptr >& Container::getContents() const
{
    if (!m_contents)
        return const_cast< Container* >(this)->getContents();

    return *m_contents;
}

::ecorecpp::mapping::EList< ::ReferenceSerialization::Content_ptr >& Container::getContents()
{
    /*PROTECTED REGION ID(Container__getContents) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_contents)
        m_contents.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ReferenceSerialization::Content_ptr, -1, true, false >(
                        this,
                        ::ReferenceSerialization::ReferenceSerializationPackage::_instance()->getContainer__contents()));
    /*PROTECTED REGION END*/
    return *m_contents;
}

const ::ecorecpp::mapping::EList< ::ReferenceSerialization::Content_ptr >& Container::getReferences() const
{
    if (!m_references)
        return const_cast< Container* >(this)->getReferences();

    return *m_references;
}

::ecorecpp::mapping::EList< ::ReferenceSerialization::Content_ptr >& Container::getReferences()
{
    /*PROTECTED REGION ID(Container__getReferences) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_references)
        m_references.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::ReferenceSerialization::Content_ptr, -1, false, false >(
                        this,
                        ::ReferenceSerialization::ReferenceSerializationPackage::_instance()->getContainer__references()));
    /*PROTECTED REGION END*/
    return *m_references;
}

::ReferenceSerialization::Child_ptr Container::getChild() const
{
    return m_child;
}

void Container::setChild(::ReferenceSerialization::Child_ptr _child)
{
    if (m_child)
        m_child->_setEContainer(Container_ptr(),
                ::ReferenceSerialization::ReferenceSerializationPackage::_instance()->getContainer__child());
    if (_child)
        _child->_setEContainer(_this(),
                ::ReferenceSerialization::ReferenceSerializationPackage::_instance()->getContainer__child());

#ifdef ECORECPP_NOTIFICATION_API
    ::ReferenceSerialization::Child_ptr _old_child = m_child;
#endif
    m_child = _child;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ReferenceSerialization::ReferenceSerializationPackage::_instance()->getContainer__child(),
                _old_child,
                m_child
            );
        eNotify(&notification);
    }
#endif
}

::ReferenceSerialization::Child_ptr Container::getChildRef() const
{
    return m_childRef.lock();
}

void Container::setChildRef(::ReferenceSerialization::Child_ptr _childRef)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ReferenceSerialization::Child_ptr _old_childRef = m_childRef.lock();
#endif
    m_childRef = _childRef;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::ReferenceSerialization::ReferenceSerializationPackage::_instance()->getContainer__childRef(),
                _old_childRef,
                m_childRef.lock()
            );
        eNotify(&notification);
    }
#endif
}

