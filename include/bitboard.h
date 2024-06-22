#ifndef BITBOARD_H
#define BITBOARD_H

#include "utils.h"

using u64 = std::uint64_t;

bool getBit(u64 bitboard, int index) {
    return bitboard & (1ull << index);
}

void setBit(u64& bitboard, int index) {
    bitboard |= (1ull << index);
}

void eraseBit(u64& bitboard, int index) {
    if (getBit(bitboard, index))
        bitboard ^= (1ull << index);
}

void printBitboard(u64 bitboard) {
    std::cout << "+---------------------+\n";
    std::cout << "|                     |\n";
    for (int i = 7; i >= 0; --i) {
        std::cout << "|   ";
        for (int j = 0; j < 8; ++j) {
            int index = i * 8 + j;

            if (getBit(bitboard, index))
                std::cout << "x ";
            else
                std::cout << ". ";
        }
        std::cout << "  |\n";
    }
    std::cout << "|                     |\n";
    std::cout << "+---------------------+\n";
    std::cout << "Decimal: " << bitboard << '\n';
}

#endif
