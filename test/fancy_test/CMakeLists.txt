add_Executable(fancy_test fancy_test.cpp)
target_link_libraries(fancy_test PUBLIC demolib gtest_main gtest)

gtest_discover_tests(fancy_test)