#ifndef UTILS_H
#define UTILS_H

#include <cstdint>

using u64 = std::uint64_t;

enum SQUARES {
    a1, b1, c1, d1, e1, f1, g1, h1,
    a2, b2, c2, d2, e2, f2, g2, h2,
    a3, b3, c3, d3, e3, f3, g3, h3,
    a4, b4, c4, d4, e4, f4, g4, h4,
    a5, b5, c5, d5, e5, f5, g5, h5,
    a6, b6, c6, d6, e6, f6, g6, h6,
    a7, b7, c7, d7, e7, f7, g7, h7,
    a8, b8, c8, d8, e8, f8, g8, h8,
};

const u64 EMPTY = 0ull;
const u64 UNIVERSE = 0xffffffffffffffffULL;

const u64 FILE_A = 0xffull;
const u64 FILE_B = 0xff00ull;
const u64 FILE_C = 0xff0000ull;
const u64 FILE_D = 0xff000000ull;
const u64 FILE_E = 0xff00000000ull;
const u64 FILE_F = 0xff0000000000ull;
const u64 FILE_G = 0xff000000000000ull;
const u64 FILE_H = 0xff00000000000000ull;

const u64 NOT_FILE_A = 0xffffffffffffff00ull;
const u64 NOT_FILE_B = 0xffffffffffff00ffull;
const u64 NOT_FILE_A_B = 0xffffffffffff0000ull;
const u64 NOT_FILE_G = 0xff00ffffffffffffull;
const u64 NOT_FILE_H = 0xffffffffffffffull;
const u64 NOT_FILE_G_H = 0xffffffffffffull;

const u64 RANK_1 = 0x101010101010101ull;
const u64 RANK_2 = 0x202020202020202ull;
const u64 RANK_3 = 0x404040404040404ull;
const u64 RANK_4 = 0x808080808080808ull;
const u64 RANK_5 = 0x1010101010101010ull;
const u64 RANK_6 = 0x2020202020202020ull;
const u64 RANK_7 = 0x4040404040404040ull;
const u64 RANK_8 = 0x8080808080808080ull;

const u64 NOT_RANK_1 = 0xfefefefefefefefeull;
const u64 NOT_RANK_2 = 0xfdfdfdfdfdfdfdfdull;
const u64 NOT_RANK_1_2 = 0xfcfcfcfcfcfcfcfcull;
const u64 NOT_RANK_7 = 0xbfbfbfbfbfbfbfbfull;
const u64 NOT_RANK_8 = 0x7f7f7f7f7f7f7f7full;
const u64 NOT_RANK_7_8 = 0x3f3f3f3f3f3f3f3full;

#endif
