cmake_minimum_required(VERSION 3.29)

project(23409m VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    src/main.cpp
    src/bitboard.cpp
    src/move.cpp
)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(main ${SOURCES})

enable_testing()

target_link_libraries(main GTest::gtest_main)

add_subdirectory(tests)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
