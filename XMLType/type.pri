
#
# type.pri
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
    type.cpp \
    type/TypePackage.cpp \
    type/TypeFactory.cpp \
    type/TypePackageImpl.cpp \
    type/TypeFactoryImpl.cpp \
    type/AnyType.cpp \
    type/AnyTypeImpl.cpp \
    type/ProcessingInstruction.cpp \
    type/ProcessingInstructionImpl.cpp \
    type/SimpleAnyType.cpp \
    type/SimpleAnyTypeImpl.cpp \
    type/XMLTypeDocumentRoot.cpp \
    type/XMLTypeDocumentRootImpl.cpp \


HEADERS += \
    type.hpp \
    type_forward.hpp \
    type/TypePackage.hpp \
    type/TypeFactory.hpp \
    type/TypeItemDispatcher.hpp \
    type/AnyType.hpp \
    type/ProcessingInstruction.hpp \
    type/SimpleAnyType.hpp \
    type/XMLTypeDocumentRoot.hpp \

