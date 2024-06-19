#include <gtest/gtest.h>
#include "bitboard.h"
#include "move.h"
#include "utils.h"

TEST(BitboardTest, BasicFunctionality) {
    Bitboard bitboard = RANK_2;
    MoveGenerator moveGenerator;
    // starting position of pawns, no blockers, white can push all pawns
    EXPECT_EQ(moveGenerator.pawnPushes(bitboard, UNIVERSE, white), RANK_2);
    // starting position of pawns, no blockers, white can push all pawns
    bitboard.value = RANK_7;
    EXPECT_EQ(moveGenerator.pawnPushes(bitboard, UNIVERSE, black), RANK_7);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
