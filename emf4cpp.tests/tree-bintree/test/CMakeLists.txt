include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/..  ${CMAKE_CURRENT_SOURCE_DIR}/../../../emf4cpp)
link_directories(/opt/emf4cpp/lib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

# read
add_executable(tree-read read.cpp)
target_link_libraries(tree-read emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-tree)

# transform
add_executable(tree-transform transform.cpp)
target_link_libraries(tree-transform emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-tree emf4cpp-bintree)

# test
add_executable(test-tree test.cpp)
target_link_libraries(test-tree emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-tree)

add_test(NAME tree-read COMMAND tree-read ${CMAKE_CURRENT_SOURCE_DIR}/model.xmi)
# it takes way too long, therefore disable the test
set_tests_properties(tree-read PROPERTIES DISABLED True)
add_test(NAME test-tree COMMAND test-tree)
# it takes way too long, therefore disable the test
set_tests_properties(test-tree PROPERTIES DISABLED True)
