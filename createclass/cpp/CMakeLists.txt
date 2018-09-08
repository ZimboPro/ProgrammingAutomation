cmake_minimum_required(VERSION 3.0)

project(createclass)

set(NAME createclass)

include(FetchContent)
set(FETCHCONTENT_QUIET OFF)
FetchContent_Declare(
    fmt
    URL https://github.com/fmtlib/fmt/releases/download/5.1.0/fmt-5.1.0.zip
)

FetchContent_GetProperties(fmt)

if (NOT fmt_POPULATED)
    FetchContent_Populate(fmt)
    add_subdirectory(${fmt_SOURCE_DIR} ${fmt_BINARY_DIR})
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${fmt_SOURCE_DIR}/include)

add_executable(
    ${NAME}
    src/main.cpp
    src/Inherit.cpp
    src/Interface.cpp
    src/Standard.cpp
    src/Parse.cpp
    src/File.cpp
)

target_link_libraries(${NAME} PUBLIC fmt)