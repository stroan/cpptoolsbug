add_executable(basic basic.cpp)

target_include_directories(basic PUBLIC "${PROJECT_SOURCE_DIR}/lib/")
target_link_libraries(basic PUBLIC demolib)