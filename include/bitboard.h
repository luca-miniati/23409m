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

        void set(int index);

        void erase(int index);

        void print();
};

#endif
