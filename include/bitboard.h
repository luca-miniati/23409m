#ifndef BITBOARD_H
#define BITBOARD_H

#include <cstdint>

using u64 = std::uint64_t;

class Bitboard {
private:
    u64 value;
public:
    Bitboard();
    Bitboard(u64 value);
    bool get(int index);
    bool get(Bitboard other);
    void set(int index);
    void set(Bitboard other);
    void erase(int index);
    void erase(Bitboard other);
    void lshift(int index);
    void rshift(int index);
    void print();
    u64 operator | (Bitboard other);
    u64 operator & (Bitboard other);
    u64 operator ^ (Bitboard other);
    u64 operator >> (Bitboard other);
    u64 operator << (Bitboard other);
};

#endif
