
#
# company.pri
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
# Copyright (C) INCHRON GmbH 2016-2019 <emf4cpp@inchron.com>
# Copyright (C) INCHRON AG 2019-2023 <emf4cpp@inchron.com>
#
# EMF4CPP is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published
# by the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# EMF4CPP is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
#


SOURCES += \
    company.cpp \
    company/CompanyPackage.cpp \
    company/CompanyFactory.cpp \
    company/CompanyPackageImpl.cpp \
    company/CompanyFactoryImpl.cpp \
    company/Employee.cpp \
    company/EmployeeImpl.cpp \
    company/Department.cpp \
    company/DepartmentImpl.cpp \
    company/Company.cpp \
    company/CompanyImpl.cpp \
    company/PhonebookEntry.cpp \
    company/PhonebookEntryImpl.cpp \


HEADERS += \
    company.hpp \
    company_forward.hpp \
    company/CompanyPackage.hpp \
    company/CompanyFactory.hpp \
    company/CompanyItemDispatcher.hpp \
    company/Employee.hpp \
    company/Department.hpp \
    company/Company.hpp \
    company/PhonebookEntry.hpp \

