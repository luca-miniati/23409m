#include <iostream>
#include "utils.h"
#include "bitboard.h"
#include "move.h"

int main() {
    MoveGenerator m;
    u64 emptySquares = UNIVERSE ^ (1ull << a6) ^ (1ull << g6);
    Bitboard b(RANK_7);
    Bitboard res = m.pawnPushes(b, emptySquares, 1);
    b.print();
    res.print();
}
