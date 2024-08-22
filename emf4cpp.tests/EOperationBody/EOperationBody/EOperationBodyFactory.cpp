// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * EOperationBody/EOperationBodyFactory.cpp
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

#include <EOperationBody/EOperationBodyFactory.hpp>

using namespace ::EOperationBody;

::ecore::Ptr< ::EOperationBody::EOperationBodyFactory > EOperationBodyFactory::s_holder;

::EOperationBody::EOperationBodyFactory_ptr EOperationBodyFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < EOperationBodyFactory
                > (new EOperationBodyFactory());

    return s_holder;
}

void EOperationBodyFactory::_setFactoryInstance(
        const EOperationBodyFactory_ptr &fac)
{
    EOperationBodyPackage::_instance()->setEFactoryInstance(fac);
    s_holder = fac;
}
