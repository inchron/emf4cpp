include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

# test
add_executable(test-resourceoptions test-options.cpp)
add_executable(test-uriconverter test-uriconverter.cpp)
add_executable(test-multiplerootobjects test-multiplerootobjects.cpp)

target_link_libraries(test-resourceoptions emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-ResourceTests)
target_link_libraries(test-uriconverter emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-ResourceTests)
target_link_libraries(test-multiplerootobjects emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-ResourceTests)

add_test(NAME test-resourceoptions COMMAND test-resourceoptions)
set_tests_properties(test-resourceoptions PROPERTIES WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
# Where is the package ResourceOptions
set_tests_properties(test-resourceoptions PROPERTIES DISABLED True)
add_test(NAME test-uriconverter COMMAND test-uriconverter)
