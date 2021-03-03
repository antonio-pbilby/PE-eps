//#include "multiplicacao.h"
#include <stdio.h>

int multiplicacao_russa(int a, int b) {
    if (a == 1)
    {
        return b;
    }
    else
    {
        if (a%2 != 0)
        {
            return b + multiplicacao_russa(a/2, b*2);
        }
        else
        {
            return multiplicacao_russa(a/2, b*2);
        }
    }
}

void main(){
    int i = 123, j = 21;
    printf("%d", multiplicacao_russa(i,j));
}