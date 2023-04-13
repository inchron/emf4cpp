

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

# test
add_executable(test-targetversion main.cpp)
target_link_libraries(test-targetversion emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-v_1_0_edate emf4cpp-v_2_0_edate emf4cpp-v_3_0_edate)

add_test(NAME test-targetversion-1 COMMAND test-targetversion 1)
set_tests_properties(test-targetversion-1 PROPERTIES PASS_REGULAR_EXPRESSION http://www.example.org/edate/1.0)

add_test(NAME test-targetversion-2 COMMAND test-targetversion 2)
set_tests_properties(test-targetversion-2 PROPERTIES PASS_REGULAR_EXPRESSION http://www.example.org/edate/2.0)

add_test(NAME test-targetversion-3 COMMAND test-targetversion 3)
set_tests_properties(test-targetversion-3 PROPERTIES PASS_REGULAR_EXPRESSION http://www.example.org/edate/3.0)
