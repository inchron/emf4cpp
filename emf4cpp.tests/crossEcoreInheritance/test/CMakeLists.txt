include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

# test
add_executable(test_base1 main.cpp)
target_link_libraries(test_base1 emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-base emf4cpp-derived)

add_test(NAME test-cross-inheritance COMMAND test_base1)
