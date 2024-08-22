
#
# myDsl.cmake
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

set(myDsl_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/MyDslPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/MyDslFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/MyDslPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/MyDslFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Model.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/ModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Import.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/ImportImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Type.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/TypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/SimpleType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/SimpleTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Entity.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/EntityImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Property.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/PropertyImpl.cpp
)

set(myDsl_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/myDsl.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/MyDslPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/MyDslFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Model.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Import.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Type.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/SimpleType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Entity.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Property.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/myDsl.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/myDsl_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/MyDslFactory.hpp DESTINATION include/emf4cpp/myDsl)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/MyDslPackage.hpp DESTINATION include/emf4cpp/myDsl)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Model.hpp DESTINATION include/emf4cpp/myDsl)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Import.hpp DESTINATION include/emf4cpp/myDsl)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Type.hpp DESTINATION include/emf4cpp/myDsl)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/SimpleType.hpp DESTINATION include/emf4cpp/myDsl)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Entity.hpp DESTINATION include/emf4cpp/myDsl)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/Property.hpp DESTINATION include/emf4cpp/myDsl)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/myDsl/dllMyDsl.hpp DESTINATION include/emf4cpp/myDsl)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/include/emf4cpp ${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/include/emf4cpp)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/lib)

add_library(emf4cpp-myDsl SHARED ${myDsl_HEADERS} ${myDsl_SOURCES})
set_target_properties(emf4cpp-myDsl PROPERTIES COMPILE_FLAGS "-DMAKE_MYDSL_DLL" VERSION 3.0.0 SOVERSION 3)
set_property(TARGET emf4cpp-myDsl APPEND PROPERTY INTERFACE_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_link_libraries(emf4cpp-myDsl emf4cpp-ecore)

install(TARGETS emf4cpp-myDsl DESTINATION lib)

