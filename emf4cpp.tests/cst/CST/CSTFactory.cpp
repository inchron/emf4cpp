// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * CST/CSTFactory.cpp
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

#include <CST/CSTFactory.hpp>

using namespace ::CST;

::ecore::Ptr< ::CST::CSTFactory > CSTFactory::s_holder;

::CST::CSTFactory_ptr CSTFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < CSTFactory > (new CSTFactory());

    return s_holder;
}

void CSTFactory::_setFactoryInstance(const CSTFactory_ptr &fac)
{
    CSTPackage::_instance()->setEFactoryInstance(fac);
    s_holder = fac;
}
