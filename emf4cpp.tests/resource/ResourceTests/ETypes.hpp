// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ResourceTests/ETypes.hpp
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

#ifndef RESOURCETESTS_ETYPES_HPP
#define RESOURCETESTS_ETYPES_HPP

#include <ecore/EObject.hpp>

#include <ResourceTests/dllResourceTests.hpp>
#include <ResourceTests_forward.hpp>

#include <ecore_forward.hpp>

#include "ResourceTestsPackage.hpp"

/*PROTECTED REGION ID(ETypes_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ResourceTests
{

class EXPORT_RESOURCETESTS_DLL ETypes : public virtual ::ecore::EObject
{
public:
    ETypes();

    ~ETypes() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual ::ecore::EString const& getString () const;
    virtual void setString (::ecore::EString const& _string);

    virtual ::ecore::EString const& getEmptyString () const;
    virtual void setEmptyString (::ecore::EString const& _emptyString);

    virtual ::ecore::EDate getDate () const;
    virtual void setDate (::ecore::EDate _date);

    virtual ::ecore::EChar getChar () const;
    virtual void setChar (::ecore::EChar _char);

    virtual ::ecore::EBoolean isBool () const;
    virtual void setBool (::ecore::EBoolean _bool);

    virtual ::ecore::EDouble getDouble () const;
    virtual void setDouble (::ecore::EDouble _double);

    virtual ::ecore::EInt getInt () const;
    virtual void setInt (::ecore::EInt _int);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ResourceTestsPackage::ETYPES;

    /*PROTECTED REGION ID(ETypes) START*/
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

    /*PROTECTED REGION ID(ETypesImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ETypes_ptr _this()
    {   return std::dynamic_pointer_cast<ETypes>(shared_from_this());}

    // Attributes

    ::ecore::EString m_string
    {   "Hallo Welt!"};

    ::ecore::EString m_emptyString
    {   ""};

    ::ecore::EDate m_date
    {   "1976-05-27T12:13:14.123-0300"};

    ::ecore::EChar m_char
    {   98};

    ::ecore::EBoolean m_bool
    {   true};

    ::ecore::EDouble m_double
    {   3.14};

    ::ecore::EInt m_int
    {   10};

    // References

};

}
 // ResourceTests

#endif // RESOURCETESTS_ETYPES_HPP

