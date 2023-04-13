// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * base/base1/base2/Base2Factory.cpp
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

#include <base/base1/base2/Base2Factory.hpp>

using namespace ::base::base1::base2;

::ecore::Ptr< ::base::base1::base2::Base2Factory > Base2Factory::s_holder;

::base::base1::base2::Base2Factory_ptr Base2Factory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < Base2Factory > (new Base2Factory());

    return s_holder;
}

void Base2Factory::_setFactoryInstance(const Base2Factory_ptr &fac)
{
    Base2Package::_instance()->setEFactoryInstance(fac);
    s_holder = fac;
}
