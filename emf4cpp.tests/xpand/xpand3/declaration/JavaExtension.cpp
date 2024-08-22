// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/JavaExtension.cpp
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

#include "JavaExtension.hpp"
#include <xpand3/declaration/AbstractNamedDeclaration.hpp>
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

/*PROTECTED REGION ID(JavaExtension.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3::declaration;

// Default constructor
JavaExtension::JavaExtension()
{
    /*PROTECTED REGION ID(JavaExtensionImpl__JavaExtensionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

JavaExtension::~JavaExtension()
{
    if (m_javaType)
    {
        m_javaType.reset();
    }
    if (m_javaMethod)
    {
        m_javaMethod.reset();
    }
}

// Attributes

// References

::xpand3::Identifier_ptr JavaExtension::getJavaType() const
{
    return m_javaType;
}

void JavaExtension::setJavaType(::xpand3::Identifier_ptr _javaType)
{
    if (m_javaType)
        m_javaType->_setEContainer(JavaExtension_ptr(),
                ::xpand3::declaration::DeclarationPackage::_instance()->getJavaExtension__javaType());
    if (_javaType)
        _javaType->_setEContainer(_this(),
                ::xpand3::declaration::DeclarationPackage::_instance()->getJavaExtension__javaType());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::Identifier_ptr _old_javaType = m_javaType;
#endif
    m_javaType = _javaType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::declaration::DeclarationPackage::_instance()->getJavaExtension__javaType(),
                _old_javaType,
                m_javaType
            );
        eNotify(&notification);
    }
#endif
}

::xpand3::Identifier_ptr JavaExtension::getJavaMethod() const
{
    return m_javaMethod;
}

void JavaExtension::setJavaMethod(::xpand3::Identifier_ptr _javaMethod)
{
    if (m_javaMethod)
        m_javaMethod->_setEContainer(JavaExtension_ptr(),
                ::xpand3::declaration::DeclarationPackage::_instance()->getJavaExtension__javaMethod());
    if (_javaMethod)
        _javaMethod->_setEContainer(_this(),
                ::xpand3::declaration::DeclarationPackage::_instance()->getJavaExtension__javaMethod());

#ifdef ECORECPP_NOTIFICATION_API
    ::xpand3::Identifier_ptr _old_javaMethod = m_javaMethod;
#endif
    m_javaMethod = _javaMethod;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::xpand3::declaration::DeclarationPackage::_instance()->getJavaExtension__javaMethod(),
                _old_javaMethod,
                m_javaMethod
            );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::xpand3::Identifier_ptr >& JavaExtension::getJavaParamTypes() const
{
    if (!m_javaParamTypes)
        return const_cast< JavaExtension* >(this)->getJavaParamTypes();

    return *m_javaParamTypes;
}

::ecorecpp::mapping::EList< ::xpand3::Identifier_ptr >& JavaExtension::getJavaParamTypes()
{
    /*PROTECTED REGION ID(JavaExtension__getJavaParamTypes) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_javaParamTypes)
        m_javaParamTypes.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::xpand3::Identifier_ptr, -1, true, false >(this,
                        ::xpand3::declaration::DeclarationPackage::_instance()->getJavaExtension__javaParamTypes()));
    /*PROTECTED REGION END*/
    return *m_javaParamTypes;
}

