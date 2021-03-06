#
# CMakeLists.txt
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

cmake_minimum_required(VERSION 3.1.0)

#add_subdirectory(PyEcore)
add_subdirectory(ast)
add_subdirectory(company)
add_subdirectory(company/test)
add_subdirectory(crossEcoreInheritance)
add_subdirectory(crossEcoreInheritance/test)
add_subdirectory(cst)
add_subdirectory(cst/test)
add_subdirectory(edate)
add_subdirectory(edate/test)
add_subdirectory(enumeration)
add_subdirectory(enumeration/test)
add_subdirectory(eopposite)
add_subdirectory(eopposite/test)
add_subdirectory(idlmm)
add_subdirectory(idlmm/qi EXCLUDE_FROM_ALL)
add_subdirectory(idlmm/test)
add_subdirectory(json)
add_subdirectory(kdm EXCLUDE_FROM_ALL)
add_subdirectory(kdm/test EXCLUDE_FROM_ALL)
add_subdirectory(mydsl)
add_subdirectory(mydsl/antlr EXCLUDE_FROM_ALL)
add_subdirectory(ReferenceSerialization)
add_subdirectory(ReferenceSerialization/test)
add_subdirectory(resource)
add_subdirectory(resource/test)
add_subdirectory(subpackage)
add_subdirectory(svg)
add_subdirectory(TargetVersion)
add_subdirectory(TargetVersion/test)
add_subdirectory(tests)
add_subdirectory(tree-bintree)
add_subdirectory(tree-bintree/test)
add_subdirectory(treeiterator)
add_subdirectory(treeiterator/test)
add_subdirectory(xpand)
add_subdirectory(xpand/antlr EXCLUDE_FROM_ALL)

add_subdirectory(mapping-tests)
add_subdirectory(EOperationBody)
add_subdirectory(EOperationBody/test)
add_subdirectory(nil-reference)
add_subdirectory(nil-reference/test)

