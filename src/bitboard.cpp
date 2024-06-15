#include <iostream>
#include "utils.h"
#include "bitboard.h"

using u64 = std::uint64_t;

Bitboard::Bitboard() {
    this->value = EMPTY;
}

Bitboard::Bitboard(u64 value) {
    this->value = value;
}

bool Bitboard::get(int index) {
    return this->value & (1ull << index);
}

bool Bitboard::get(Bitboard other) {
    return this->value & (1ull << index);
}

void Bitboard::set(int index) {
    this->value |= (1ull << index);
}

void Bitboard::erase(int index) {
    if (this->get(index))
        this->value ^= (1ull << index);
}

u64 Bitboard::lshift(int index) {
    return this->value << index;
}

u64 Bitboard::rshift(int index) {
    return this->value >> index;
}

void Bitboard::print() {
    std::cout << "+---------------------+\n";
    std::cout << "|                     |\n";
    for (int i = 7; i >= 0; --i) {
        std::cout << "|   ";
        for (int j = 0; j < 8; ++j) {
            int index = i * 8 + j;

            if (this->get(index))
                std::cout << "x ";
            else
                std::cout << ". ";
        }
        std::cout << "  |\n";
    }
    std::cout << "|                     |\n";
    std::cout << "+---------------------+\n";
    std::cout << "Decimal: " << this->value << '\n';
}
