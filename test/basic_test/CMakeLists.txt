add_Executable(basic_test basic_test.cpp)
target_link_libraries(basic_test PUBLIC demolib gtest_main gtest)

gtest_discover_tests(basic_test)