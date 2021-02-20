cmake_minimum_required(VERSION 3.19)
project(empire)

set(CMAKE_CXX_STANDARD 17)

add_executable(empire_engine_test main.cpp)

# add engine cmake lists
add_subdirectory(engine)

#includes
include_directories(engine/src)

# link
target_link_libraries(empire_engine_test empire_engine)