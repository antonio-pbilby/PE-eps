#include "superfatorial.h"

long superfatorial(int n)
{

    if (n < 2)
    {
        return 1;
    }
    else
    {
        return n * superfatorial(n - 1) * superfatorial(n - 1) / superfatorial(n - 2);
    }
}