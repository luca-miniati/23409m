#include "move.h"
#include "utils.h"

u64 MoveGenerator::pawnPushes(Bitboard pawns, u64 emptySquares, int color) {
    u64 res = 0;
    if (color) { // black
        res |= ((pawns.value >> 8) & emptySquares) << 8; // single pushes
        res |= res & (((pawns.value >> 16) & emptySquares) << 8); // double pushes
    } else { // white
        res |= ((pawns.value << 8) & emptySquares) >> 8; // single pushes
        res |= res & (((pawns.value << 16) & emptySquares) >> 8); // double pushes
    }
    return res;
}

u64 MoveGenerator::knightAttacks(int square) {
    return this->knightMasks[square];
}

u64 MoveGenerator::kingAttacks(int square) {
    return this->kingMasks[square];
}

u64 MoveGeneratorManual::knightAttacks(int square) {
    u64 curr = (1ull << square);
    u64 attacks = 0;
    if (curr & NOT_FILE_H & NOT_RANK_7_8)
        attacks |= (1ull << (square + 10));
    if (curr & NOT_FILE_A & NOT_RANK_7_8)
        attacks |= (1ull << (square - 6));
    if (curr & NOT_FILE_G_H & NOT_RANK_8)
        attacks |= (1ull << (square + 17));
    if (curr & NOT_FILE_G_H & NOT_RANK_1)
        attacks |= (1ull << (square + 15));
    if (curr & NOT_FILE_H & NOT_RANK_1_2)
        attacks |= (1ull << (square + 6));
    if (curr & NOT_FILE_A & NOT_RANK_1_2)
        attacks |= (1ull << (square - 10));
    if (curr & NOT_FILE_A_B & NOT_RANK_1)
        attacks |= (1ull << (square - 17));
    if (curr & NOT_FILE_A_B & NOT_RANK_8)
        attacks |= (1ull << (square - 15));
    return attacks;
}

u64 MoveGeneratorManual::kingAttacks(int square) {
    u64 curr = (1ull << square);
    u64 attacks = 0;
    if (curr & NOT_FILE_A)
        attacks |= (1ull << (square - 8));
    if (curr & NOT_FILE_H)
        attacks |= (1ull << (square + 8));
    if (curr & NOT_RANK_1)
        attacks |= (1ull << (square - 1));
    if (curr & NOT_RANK_8)
        attacks |= (1ull << (square + 1));
    if (curr & NOT_FILE_A & NOT_RANK_1)
        attacks |= (1ull << (square - 9));
    if (curr & NOT_FILE_A & NOT_RANK_8)
        attacks |= (1ull << (square - 7));
    if (curr & NOT_FILE_H & NOT_RANK_1)
        attacks |= (1ull << (square + 7));
    if (curr & NOT_FILE_H & NOT_RANK_8)
        attacks |= (1ull << (square + 9));
    return attacks;
}
