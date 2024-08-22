// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/StructureFactory.cpp
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

#include <kdm/structure/StructureFactory.hpp>

using namespace ::kdm::structure;

::ecore::Ptr< ::kdm::structure::StructureFactory > StructureFactory::s_holder;

::kdm::structure::StructureFactory_ptr StructureFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < StructureFactory > (new StructureFactory());

    return s_holder;
}

void StructureFactory::_setFactoryInstance(const StructureFactory_ptr &fac)
{
    StructurePackage::_instance()->setEFactoryInstance(fac);
    s_holder = fac;
}
