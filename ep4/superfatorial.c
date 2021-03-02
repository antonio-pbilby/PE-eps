//#include "superfatorial.h"
#include <stdio.h>

long superfatorial(int n)
{

    if (n < 2)
    {
        return 1;
    }
    else
    {
        return n * superfatorial(n - 1) * superfatorial(n - 1) / superfatorial(n-2);
    }
}

void main()
{
    int j = 4;
    printf("%d", superfatorial(j));
}