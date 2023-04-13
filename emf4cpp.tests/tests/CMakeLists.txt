
cmake_minimum_required(VERSION 3.1.0)

project(tests CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "")

find_package(Qt5Core)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../../emf4cpp ${Qt5Core_INCLUDE_DIRS})
link_directories(/opt/emf4cpp/lib)

# read-metamodel
add_executable(read-metamodel read-metamodel.cpp)
target_link_libraries(read-metamodel emf4cpp-ecorecpp emf4cpp-ecore)
add_test(NAME read-metamodel COMMAND read-metamodel ${CMAKE_CURRENT_SOURCE_DIR}/entrada.ecore)
set_tests_properties(read-metamodel PROPERTIES PASS_REGULAR_EXPRESSION 0x[0-9a-f]+)

# company
add_executable(company company.cpp)
target_link_libraries(company emf4cpp-ecorecpp emf4cpp-ecore)
add_test(NAME company COMMAND company)
# test causes segmentation fault
set_tests_properties(company PROPERTIES DISABLED True)

# test-serializer
add_executable(test-serializer test-serializer.cpp)
target_link_libraries(test-serializer emf4cpp-ecorecpp emf4cpp-ecore)
add_test(NAME test-serializer COMMAND test-serializer ${CMAKE_CURRENT_SOURCE_DIR}/entrada.ecore salida.ecore)
# what is the input and the expected output?
set_tests_properties(test-serializer PROPERTIES DISABLED True)

# test-json-serializer
add_executable(test-json-serializer test-json-serializer.cpp)
target_link_libraries(test-json-serializer emf4cpp-ecorecpp emf4cpp-ecore)
add_test(NAME test-json-serializer COMMAND test-json-serializer)
