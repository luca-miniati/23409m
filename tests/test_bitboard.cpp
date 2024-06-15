#include <gtest/gtest.h>
#include "bitboard.h"

TEST(BitboardTest, BasicFunctionality) {
    Bitboard b;
    EXPECT_EQ(b.get(0), false);
    b.set(1);
    EXPECT_EQ(b.get(0), false);
    EXPECT_EQ(b.get(1), true);
    b.erase(1);
    EXPECT_EQ(b.get(1), false);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
