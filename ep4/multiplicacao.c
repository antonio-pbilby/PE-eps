#include "multiplicacao.h"

int multiplicacao_russa(int a, int b)
{
    if (a == 1)
    {
        return b;
    }
    else
    {
        if (a % 2 != 0)
        {
            return b + multiplicacao_russa(a / 2, b * 2);
        }
        else
        {
            return multiplicacao_russa(a / 2, b * 2);
        }
    }
}