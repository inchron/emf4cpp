find_package(Qt5Core)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp ${Qt5Core_INCLUDE_DIRS})
link_directories(/opt/emf4cpp/lib ${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_SOURCE_DIR}/../../../builds/emf4cpp-generator-2.0.0-release/lib/)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

# test
add_executable(test-EOperationBody test.cpp)
target_link_libraries(test-EOperationBody emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-EOperationBody ${Qt5Core_LIBRARIES})

add_test(NAME test-EOperationBody COMMAND test-EOperationBody)
