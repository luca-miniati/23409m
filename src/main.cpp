#include <iostream>
#include "utils.h"
#include "bitboard.h"
#include "move.h"

int main() {
    MoveGenerator m;
    Bitboard b(RANK_1);

    u64 emptySquares = UNIVERSE;
    // u64 emptySquares = UNIVERSE ^ (1ull << a6) ^ (1ull << g6);

    Bitboard res = m.pawnPushes(b, emptySquares, white);
    b.print();
    res.print();
}
