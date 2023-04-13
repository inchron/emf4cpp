// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/File.cpp
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

#include "File.hpp"
#include <xpand3/SyntaxElement.hpp>
#include <xpand3/ImportStatement.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "xpand3/Xpand3Package.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(File.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3;

// Default constructor
File::File()
{
    /*PROTECTED REGION ID(FileImpl__FileImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

File::~File()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::xpand3::ImportStatement_ptr >& File::getImports() const
{
    if (!m_imports)
        return const_cast< File* >(this)->getImports();

    return *m_imports;
}

::ecorecpp::mapping::EList< ::xpand3::ImportStatement_ptr >& File::getImports()
{
    /*PROTECTED REGION ID(File__getImports) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_imports)
        m_imports.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::xpand3::ImportStatement_ptr, -1, true, false >(this,
                        ::xpand3::Xpand3Package::_instance()->getFile__imports()));
    /*PROTECTED REGION END*/
    return *m_imports;
}

const ::ecorecpp::mapping::EList< ::xpand3::declaration::AbstractDeclaration_ptr >& File::getDeclarations() const
{
    if (!m_declarations)
        return const_cast< File* >(this)->getDeclarations();

    return *m_declarations;
}

::ecorecpp::mapping::EList< ::xpand3::declaration::AbstractDeclaration_ptr >& File::getDeclarations()
{
    /*PROTECTED REGION ID(File__getDeclarations) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_declarations)
        m_declarations.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::xpand3::declaration::AbstractDeclaration_ptr, -1,
                        true, false >(this,
                        ::xpand3::Xpand3Package::_instance()->getFile__declarations()));
    /*PROTECTED REGION END*/
    return *m_declarations;
}

