// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/MyDslPackage.cpp
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

#include <myDsl/MyDslPackage.hpp>

using namespace ::myDsl;

::ecore::Ptr< ::myDsl::MyDslPackage > MyDslPackage::s_instance;

::myDsl::MyDslPackage_ptr MyDslPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< MyDslPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < MyDslPackage > (new MyDslPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::myDsl::MyDslPackage_ptr MyDslPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

