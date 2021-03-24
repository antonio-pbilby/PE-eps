#include "vetor.h"
#include <stdlib.h>

int *duplica_impares(int *v, int n_entrada, int *n_retorno)
{
    *n_retorno = 0;
    int *vetor_retorno = malloc(sizeof(inf) * 2 * n_entrada);

    for (int i = 0; i < n_entrada; i++)
    {
        if (*(v + i) % 2 != 0)
        {
            *(vetor_retorno + *n_retorno) = *(v + i);
            *n_retorno += 1;
            *(vetor_retorno + *n_retorno) = *(v + i);
            *n_retorno += 1;
        }
        else
        {
            *(vetor_retorno + *n_retorno) = *(v + i);
            *n_retorno += 1;
        }
    }
    return vetor_retorno;
}