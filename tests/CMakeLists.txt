add_executable(testBitboard ../src/bitboard.cpp test_bitboard.cpp)
target_link_libraries(testBitboard gtest gtest_main pthread)
target_include_directories(testBitboard PRIVATE ${PROJECT_SOURCE_DIR}/include)
add_test(NAME testBitboard COMMAND testBitboard)
