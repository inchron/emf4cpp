
#
# base.cmake
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


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -funroll-loops")

string(TOLOWER ${CMAKE_BUILD_TYPE} CMAKE_BUILD_TYPE_LOWER)

set(base_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/base.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/BasePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/BaseFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/BasePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/BaseFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/Base01.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/Base01Impl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/Base02.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/Base02Impl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/Base03.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/Base03Impl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base1Package.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base1Factory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base1PackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base1FactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base10.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base10Impl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base11.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base11Impl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base2Package.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base2Factory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base2PackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base2FactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base20.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base20Impl.cpp
)

set(base_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/base.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/BasePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/BaseFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/Base01.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/Base02.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/Base03.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/base/base1.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base1Package.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base1Factory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base10.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base11.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base2Package.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base2Factory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base20.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/BaseFactory.hpp DESTINATION include/emf4cpp/base)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/BasePackage.hpp DESTINATION include/emf4cpp/base)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/Base01.hpp DESTINATION include/emf4cpp/base)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/Base02.hpp DESTINATION include/emf4cpp/base)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/Base03.hpp DESTINATION include/emf4cpp/base)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/base1.hpp DESTINATION include/emf4cpp/base/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/base1_forward.hpp DESTINATION include/emf4cpp/base/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base1Factory.hpp DESTINATION include/emf4cpp/base/base1)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base1Package.hpp DESTINATION include/emf4cpp/base/base1)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base10.hpp DESTINATION include/emf4cpp/base/base1)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/Base11.hpp DESTINATION include/emf4cpp/base/base1)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2.hpp DESTINATION include/emf4cpp/base/base2)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2_forward.hpp DESTINATION include/emf4cpp/base/base2)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base2Factory.hpp DESTINATION include/emf4cpp/base/base1/base2)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base2Package.hpp DESTINATION include/emf4cpp/base/base1/base2)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/base1/base2/Base20.hpp DESTINATION include/emf4cpp/base/base1/base2)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/base/dllBase.hpp DESTINATION include/emf4cpp/base)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/include/emf4cpp ${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/include/emf4cpp)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/lib)

add_library(emf4cpp-base SHARED ${base_HEADERS} ${base_SOURCES})
set_target_properties(emf4cpp-base PROPERTIES COMPILE_FLAGS "-DMAKE_BASE_DLL" VERSION 3.0.0 SOVERSION 3)
set_property(TARGET emf4cpp-base APPEND PROPERTY INTERFACE_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_link_libraries(emf4cpp-base emf4cpp-ecore)

install(TARGETS emf4cpp-base DESTINATION lib)

