cmake_minimum_required(VERSION 3.10)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(tests test_binary_search.cpp)

target_link_libraries(tests binary_search ${GTEST_BOTH_LIBRARIES} pthread)
gtest_discover_tests(tests)
