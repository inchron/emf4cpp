// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/File.hpp
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

#ifndef XPAND3_FILE_HPP
#define XPAND3_FILE_HPP

#include <xpand3/dllXpand3.hpp>
#include <xpand3_forward.hpp>

#include <ecore_forward.hpp>
#include <xpand3/declaration_forward.hpp>
#include <xpand3/SyntaxElement.hpp>

#include "Xpand3Package.hpp"

/*PROTECTED REGION ID(File_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{

class EXPORT_XPAND3_DLL File : public virtual ::xpand3::SyntaxElement
{
public:
    File();

    ~File() override;

    void _initialize() override;

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::xpand3::ImportStatement_ptr >& getImports () const;
    virtual ::ecorecpp::mapping::EList< ::xpand3::ImportStatement_ptr >& getImports ();

    virtual const ::ecorecpp::mapping::EList< ::xpand3::declaration::AbstractDeclaration_ptr >& getDeclarations () const;
    virtual ::ecorecpp::mapping::EList< ::xpand3::declaration::AbstractDeclaration_ptr >& getDeclarations ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = Xpand3Package::FILE;

    /*PROTECTED REGION ID(File) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve) override;
    void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID) override;
    void eUnset ( ::ecore::EInt _featureID) override;
    ::ecore::EClass_ptr _eClass () override;
    void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue) override;

    /*PROTECTED REGION ID(FileImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    File_ptr _this()
    {   return std::dynamic_pointer_cast<File>(shared_from_this());}

    // Attributes

    // References

    ::ecore::EList_ptr< ::xpand3::ImportStatement_ptr > m_imports;

    ::ecore::EList_ptr< ::xpand3::declaration::AbstractDeclaration_ptr > m_declarations;

};

}
 // xpand3

#endif // XPAND3_FILE_HPP

