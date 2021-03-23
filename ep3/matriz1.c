#include "matriz1.h"

int verifica_matriz(int n, int matriz[n][n])
{
    // Escreva o código da função aqui
    // Observe como o parâmetro da matriz é definido:
    //   o parâmetro n é definido antes do parâmetro matriz,
    //   pois a matriz utiliza n em sua definição
    int i, j, count_zeros, count_linhas = 0;
    for (i = 0; i < n; i++)
    {
        count_zeros = 0;
        for (j = 0; j < n; j++)
        {
            if (matriz[i][j] != 0)
            {
                count_zeros += 1;
            }
        }
        if (count_zeros == 1)
        {
            count_linhas += 1;
        }
    }
    if (count_linhas == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}