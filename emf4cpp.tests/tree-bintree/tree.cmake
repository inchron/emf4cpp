
#
# tree.cmake
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

set(tree_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/tree.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreeFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreeFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreeNode.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreeNodeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/Leaf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/LeafImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/NonTerminal.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/NonTerminalImpl.cpp
)

set(tree_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/tree.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreeFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreeNode.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/Leaf.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tree/NonTerminal.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tree.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tree_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreeFactory.hpp DESTINATION include/emf4cpp/tree)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreePackage.hpp DESTINATION include/emf4cpp/tree)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tree/TreeNode.hpp DESTINATION include/emf4cpp/tree)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tree/Leaf.hpp DESTINATION include/emf4cpp/tree)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tree/NonTerminal.hpp DESTINATION include/emf4cpp/tree)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/tree/dllTree.hpp DESTINATION include/emf4cpp/tree)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/include/emf4cpp ${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/include/emf4cpp)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/lib)

add_library(emf4cpp-tree SHARED ${tree_HEADERS} ${tree_SOURCES})
set_target_properties(emf4cpp-tree PROPERTIES COMPILE_FLAGS "-DMAKE_TREE_DLL" VERSION 3.0.0 SOVERSION 3)
set_property(TARGET emf4cpp-tree APPEND PROPERTY INTERFACE_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_link_libraries(emf4cpp-tree emf4cpp-ecore)

install(TARGETS emf4cpp-tree DESTINATION lib)

