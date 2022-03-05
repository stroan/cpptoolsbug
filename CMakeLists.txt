cmake_minimum_required( VERSION 3.16 )

project( CppDevDemo )

set(CMAKE_CXX_STANDARD 17)

include( FetchContent )
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

set_property(GLOBAL PROPERTY CTEST_TARGETS_ADDED 1)
include(CTest)
include(GoogleTest)

add_subdirectory( lib )
add_subdirectory( examples )
add_subdirectory( test )