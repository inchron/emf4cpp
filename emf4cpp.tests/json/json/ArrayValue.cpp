// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/ArrayValue.cpp
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

#include "ArrayValue.hpp"
#include <json/Value.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "json/JsonPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ArrayValue.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::json;

// Default constructor
ArrayValue::ArrayValue()
{
    /*PROTECTED REGION ID(ArrayValueImpl__ArrayValueImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ArrayValue::~ArrayValue()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::json::Value_ptr >& ArrayValue::getValues() const
{
    if (!m_values)
        return const_cast< ArrayValue* >(this)->getValues();

    return *m_values;
}

::ecorecpp::mapping::EList< ::json::Value_ptr >& ArrayValue::getValues()
{
    /*PROTECTED REGION ID(ArrayValue__getValues) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_values)
        m_values.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl< ::json::Value_ptr,
                        -1, true, false >(this,
                        ::json::JsonPackage::_instance()->getArrayValue__values()));
    /*PROTECTED REGION END*/
    return *m_values;
}

