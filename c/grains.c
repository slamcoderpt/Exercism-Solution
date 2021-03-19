#include "grains.h"

const uint8_t chessboardSize = 64;

uint64_t square(uint8_t index)
{
    if(index <= 0 || index > chessboardSize) return 0;

    return 1ULL << (index - 1);
}

uint64_t total(void)
{
    return square(chessboardSize + 1) - 1; // 2 power(n + 1) - 1
}
