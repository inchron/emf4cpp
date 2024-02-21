// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/FileImpl.cpp
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
#include <xpand3/Xpand3Package.hpp>
#include <xpand3/SyntaxElement.hpp>
#include <xpand3/ImportStatement.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(FileImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::xpand3;

void File::_initialize()
{
    // Supertypes
    ::xpand3::SyntaxElement::_initialize();

    // References
    for (const auto &ref : getImports())
    {
        ref->_initialize();
    }
    for (const auto &ref : getDeclarations())
    {
        ref->_initialize();
    }

    /*PROTECTED REGION ID(FileImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject File::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::FILE__LINE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getLine());
    }
        return _any;
    case ::xpand3::Xpand3Package::FILE__START:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getStart());
    }
        return _any;
    case ::xpand3::Xpand3Package::FILE__END:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, getEnd());
    }
        return _any;
    case ::xpand3::Xpand3Package::FILE__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, getFileName());
    }
        return _any;
    case ::xpand3::Xpand3Package::FILE__IMPORTS:
    {
        _any = getImports().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::xpand3::Xpand3Package::FILE__DECLARATIONS:
    {
        _any = getDeclarations().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void File::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::FILE__LINE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setLine(_t0);
    }
        return;
    case ::xpand3::Xpand3Package::FILE__START:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setStart(_t0);
    }
        return;
    case ::xpand3::Xpand3Package::FILE__END:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        setEnd(_t0);
    }
        return;
    case ::xpand3::Xpand3Package::FILE__FILENAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        setFileName(_t0);
    }
        return;
    case ::xpand3::Xpand3Package::FILE__IMPORTS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getImports().clear();
        getImports().insert_all(*_t0);
    }
        return;
    case ::xpand3::Xpand3Package::FILE__DECLARATIONS:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getDeclarations().clear();
        getDeclarations().insert_all(*_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean File::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::FILE__LINE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getLine());
    case ::xpand3::Xpand3Package::FILE__START:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getStart());
    case ::xpand3::Xpand3Package::FILE__END:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(getEnd());
    case ::xpand3::Xpand3Package::FILE__FILENAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(getFileName());
    case ::xpand3::Xpand3Package::FILE__IMPORTS:
        return getImports().size() > 0;
    case ::xpand3::Xpand3Package::FILE__DECLARATIONS:
        return getDeclarations().size() > 0;

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void File::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr File::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::xpand3::Xpand3Package::_instance()->getFile();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void File::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::FILE__IMPORTS:
    {
    }
        return;
    case ::xpand3::Xpand3Package::FILE__DECLARATIONS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void File::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::xpand3::Xpand3Package::FILE__IMPORTS:
    {
    }
        return;
    case ::xpand3::Xpand3Package::FILE__DECLARATIONS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

