#include "dec2bin.h"

int dec2bin(int n_decimal)
{
    if (n_decimal == 1)
    {
        return 1;
    }
    else
    {
        return n_decimal % 2 + 10 * dec2bin(n_decimal / 2);
    }
}