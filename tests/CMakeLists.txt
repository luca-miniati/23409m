add_executable(testBitboard ../src/bitboard.cpp test_bitboard.cpp)
target_link_libraries(testBitboard gtest gtest_main pthread)
target_include_directories(testBitboard PRIVATE ${PROJECT_SOURCE_DIR}/include)
add_test(NAME testBitboard COMMAND testBitboard)

add_executable(testMove ../src/move.cpp ../src/bitboard.cpp test_move.cpp)
target_link_libraries(testMove gtest gtest_main pthread)
target_include_directories(testMove PRIVATE ${PROJECT_SOURCE_DIR}/include)
add_test(NAME testMove COMMAND testMove)
