#include "vetor.h"
#include <stdlib.h>
#include <stdio.h>

int intercala_vetores(int *v_a, int n_a, int *v_b, int n_b, int **v)
{

    *v = malloc(sizeof(int) * (n_a + n_b));
    for (int i = 0; i < n_a + n_b; i++)
    {
        if (i < n_a)
        {
            insere(*v, i + 1, *(v_a + i));
        }
        else
        {
            insere(*v, i + 1, *(v_b + i - n_a));
        }
    }
    return n_a + n_b;
}
void insere(int *vetor, int n, int valor)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        if (valor < *(vetor + i))
        {
            for (j = n; j > i; j--)
            {
                *(vetor + j) = *(vetor + j - 1);
            }
            *(vetor + j) = valor;
            return;
        }
    }
    *(vetor + n - 1) = valor;
}