#include "primos.h"
#include <stdlib.h>

void separar_numeros_primos(ListaNumeros *lista)
{
    (*lista).primos = malloc(sizeof(int) * (*lista).n_numeros);
    for (int i = 0; i < (*lista).n_numeros; i++)
    {
        for (int j = 2; j < (*lista).numeros[i]; j++)
        {
            if ((*lista).numeros[i] % j == 0)
            {
                break;
            }
            else if ((*lista).numeros[i] == 2 || j == (*lista).numeros[i] - 1)
            {
                (*lista).primos[(*lista).n_primos] = (*lista).numeros[i];
                (*lista).n_primos += 1;
                (*lista).numeros[i] = -1;
            }
        }
    }

    int i = 0;
    while (i < (*lista).n_numeros)
    {
        if ((*lista).numeros[i] == -1)
        {
            for (int j = i; j < (*lista).n_numeros - 1; j++)
            {
                (*lista).numeros[j] = (*lista).numeros[j + 1];
            }
            (*lista).n_numeros -= 1;
        }
        else
        {
            i++;
        }
    }
}