#include <gtest/gtest.h>
#include "bitboard.h"

TEST(BitboardTest, BasicFunctionality) {
    u64 bitboard = 0ull;
    EXPECT_EQ(getBit(bitboard, 0), false);
    setBit(bitboard, 1);
    EXPECT_EQ(getBit(bitboard, 0), false);
    EXPECT_EQ(getBit(bitboard, 1), true);
    eraseBit(bitboard, 1);
    EXPECT_EQ(getBit(bitboard, 1), false);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
