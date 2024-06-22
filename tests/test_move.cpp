#include <gtest/gtest.h>
#include "bitboard.h"
#include "move.h"
#include "utils.h"

TEST(MoveTest, MoveGeneration) {
    u64 bitboard;
    u64 occupancy;
    MoveGenerator moveGenerator;

    // starting position of pawns for white
    bitboard = RANK_2;
    // no blockers
    std::pair<u64, u64> p = moveGenerator.pawnPushes(bitboard, UNIVERSE, white);
    // all pawns can push once
    EXPECT_EQ(p.first, RANK_2);
    // all pawns can push twice
    EXPECT_EQ(p.second, RANK_2);

    // starting position of pawns for white
    bitboard = RANK_2;
    // no blockers
    
    p = moveGenerator.pawnPushes(bitboard, UNIVERSE, white);
    // all pawns can push once
    EXPECT_EQ(p.first, RANK_2);
    // all pawns can push twice
    EXPECT_EQ(p.second, RANK_2);

    // starting position of pawns for black
    bitboard = RANK_7;
    // no blockers
    p = moveGenerator.pawnPushes(bitboard, UNIVERSE, black);
    // all pawns can push once
    EXPECT_EQ(p.first, RANK_7);
    // all pawns can push twice
    EXPECT_EQ(p.second, RANK_7);

    // starting position of pawns for black
    bitboard = RANK_7;
    // no blockers
    p = moveGenerator.pawnPushes(bitboard, UNIVERSE, black);
    // all pawns can push once
    EXPECT_EQ(p.first, RANK_7);
    // all pawns can push twice
    EXPECT_EQ(p.second, RANK_7);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
