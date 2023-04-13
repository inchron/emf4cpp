
#
# ReferenceSerialization.cmake
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

set(ReferenceSerialization_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/ReferenceSerializationPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/ReferenceSerializationFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/ReferenceSerializationPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/ReferenceSerializationFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/Container.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/ContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/Content.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/ContentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/Child.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/ChildImpl.cpp
)

set(ReferenceSerialization_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/ReferenceSerializationPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/ReferenceSerializationFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/Container.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/Content.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/Child.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/ReferenceSerializationFactory.hpp DESTINATION include/emf4cpp/ReferenceSerialization)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/ReferenceSerializationPackage.hpp DESTINATION include/emf4cpp/ReferenceSerialization)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/Container.hpp DESTINATION include/emf4cpp/ReferenceSerialization)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/Content.hpp DESTINATION include/emf4cpp/ReferenceSerialization)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/Child.hpp DESTINATION include/emf4cpp/ReferenceSerialization)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ReferenceSerialization/dllReferenceSerialization.hpp DESTINATION include/emf4cpp/ReferenceSerialization)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/include/emf4cpp ${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/include/emf4cpp)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/lib)

add_library(emf4cpp-ReferenceSerialization SHARED ${ReferenceSerialization_HEADERS} ${ReferenceSerialization_SOURCES})
set_target_properties(emf4cpp-ReferenceSerialization PROPERTIES COMPILE_FLAGS "-DMAKE_REFERENCESERIALIZATION_DLL" VERSION 3.0.0 SOVERSION 3)
set_property(TARGET emf4cpp-ReferenceSerialization APPEND PROPERTY INTERFACE_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_link_libraries(emf4cpp-ReferenceSerialization emf4cpp-ecore)

install(TARGETS emf4cpp-ReferenceSerialization DESTINATION lib)

