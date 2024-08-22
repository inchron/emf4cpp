
#
# idlmm.cmake
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

set(idlmm_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IdlmmPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IdlmmFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IdlmmPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IdlmmFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Container.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ContainerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Contained.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ContainedImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/InterfaceDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/InterfaceDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ModuleDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ModuleDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IDLType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IDLTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/OperationDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/OperationDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/AttributeDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/AttributeDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ConstantDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ConstantDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Typed.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/TypedImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ParameterDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ParameterDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/PrimitiveDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/PrimitiveDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ExceptionDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ExceptionDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Field.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/FieldImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/FixedDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/FixedDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/WstringDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/WstringDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/StringDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/StringDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/AliasDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/AliasDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ArrayDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ArrayDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/SequenceDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/SequenceDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/UnionField.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/UnionFieldImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/TypedefDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/TypedefDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/UnionDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/UnionDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/EnumDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/EnumDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/StructDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/StructDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/TranslationUnit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/TranslationUnitImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Include.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IncludeImpl.cpp
)

set(idlmm_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/idlmm.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IdlmmPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IdlmmFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Container.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Contained.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/InterfaceDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ModuleDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IDLType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/OperationDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/AttributeDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ConstantDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Typed.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ParameterDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/PrimitiveDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ExceptionDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Field.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/FixedDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/WstringDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/StringDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/AliasDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ArrayDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/SequenceDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/UnionField.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/TypedefDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/UnionDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/EnumDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/StructDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/TranslationUnit.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Include.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IdlmmFactory.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IdlmmPackage.hpp DESTINATION include/emf4cpp/idlmm)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Container.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Contained.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/InterfaceDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ModuleDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/IDLType.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/OperationDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/AttributeDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ConstantDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Typed.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ParameterDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/PrimitiveDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ExceptionDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Field.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/FixedDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/WstringDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/StringDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/AliasDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/ArrayDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/SequenceDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/UnionField.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/TypedefDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/UnionDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/EnumDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/StructDef.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/TranslationUnit.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/Include.hpp DESTINATION include/emf4cpp/idlmm)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlmm/dllIdlmm.hpp DESTINATION include/emf4cpp/idlmm)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/include/emf4cpp ${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/include/emf4cpp)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../builds/emf4cpp-generator-3.0.0-${CMAKE_BUILD_TYPE_LOWER}/lib)

add_library(emf4cpp-idlmm SHARED ${idlmm_HEADERS} ${idlmm_SOURCES})
set_target_properties(emf4cpp-idlmm PROPERTIES COMPILE_FLAGS "-DMAKE_IDLMM_DLL" VERSION 3.0.0 SOVERSION 3)
set_property(TARGET emf4cpp-idlmm APPEND PROPERTY INTERFACE_INCLUDE_DIRECTORIES $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_link_libraries(emf4cpp-idlmm emf4cpp-ecore)

install(TARGETS emf4cpp-idlmm DESTINATION lib)

