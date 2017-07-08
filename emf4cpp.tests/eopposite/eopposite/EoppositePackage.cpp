// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/EoppositePackage.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
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

#include <eopposite/EoppositePackage.hpp>

using namespace ::eopposite;

std::unique_ptr< ::eopposite::EoppositePackage,
        ::ecorecpp::PackageDeleter< ::eopposite::EoppositePackage > > EoppositePackage::s_instance;

::eopposite::EoppositePackage_ptr EoppositePackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return nullptr;
        duringConstruction = true;
        new EoppositePackage();
        duringConstruction = false;
    }
    return s_instance.get();
}

::eopposite::EoppositePackage_ptr EoppositePackage::_getInstanceAndRemoveOwnership()
{
    s_instance.get_deleter()._owner = false;
    return _instance();
}
