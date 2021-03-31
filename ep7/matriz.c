#include "matriz.h"
#include <stdlib.h>

double **cria_matriz(int n_linhas, int n_colunas)
{
    double **m;
    m = malloc(sizeof(double *) * n_linhas);
    for (int i = 0; i < n_linhas; i++)
    {
        m[i] = malloc(sizeof(int) * n_colunas);
        for (int j = 0; j < n_colunas; j++)
        {
            m[i][j] = (i + j) % 2;
        }
    }
    return m;
}

void liberar_matriz(double **matriz, int n_linhas)
{
    for (int i = 0; i < n_linhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}