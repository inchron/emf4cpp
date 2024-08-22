// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/AbstractAspect.cpp
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

#include "AbstractAspect.hpp"
#include <xpand3/declaration/AbstractDeclaration.hpp>
#include <xpand3/File.hpp>
#include <xpand3/DeclaredParameter.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/declaration/DeclarationPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractAspect.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::declaration;

// Default constructor
AbstractAspect::AbstractAspect()
{
    /*PROTECTED REGION ID(AbstractAspectImpl__AbstractAspectImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractAspect::~AbstractAspect()
{
    if (m_pointcut)
    {
        m_pointcut.reset();
    }
}

// Attributes

::ecore::EBoolean AbstractAspect::isWildparams() const
{
    return m_wildparams;
}

void AbstractAspect::setWildparams(::ecore::EBoolean _wildparams)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_wildparams = m_wildparams;
#endif
    m_wildparams = _wildparams;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::declaration::DeclarationPackage::_instance()->getAbstractAspect__wildparams(),
                _old_wildparams,
                m_wildparams
            );
        eNotify(&notification);
    }
#endif
}

// References

::xpand3::Identifier_ptr AbstractAspect::getPointcut() const
{
    return m_pointcut;
}

void AbstractAspect::setPointcut(::xpand3::Identifier_ptr _pointcut)
{
    if (m_pointcut)
        m_pointcut->_setEContainer(AbstractAspect_ptr(),
                ::xpand3::declaration::DeclarationPackage::_instance()->getAbstractAspect__pointcut());
    if (_pointcut)
        _pointcut->_setEContainer(_this(),
                ::xpand3::declaration::DeclarationPackage::_instance()->getAbstractAspect__pointcut());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::Identifier_ptr _old_pointcut = m_pointcut;
#endif
    m_pointcut = _pointcut;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::declaration::DeclarationPackage::_instance()->getAbstractAspect__pointcut(),
                _old_pointcut,
                m_pointcut
            );
        eNotify(&notification);
    }
#endif
}

