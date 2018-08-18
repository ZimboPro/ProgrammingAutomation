cmake_minimum_required(VERSION 3.0)

project(createclass)

set(NAME createclass)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(
    ${NAME}
    src/main.cpp
    src/Inherit.cpp
    src/Interface.cpp
    src/Standard.cpp
)