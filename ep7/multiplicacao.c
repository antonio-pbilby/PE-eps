#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n_linhas_A, n_colunas_A;
    int n_linhas_B, n_colunas_B;
    int **mA, **mB, **mAB;

    scanf("%d %d", &n_linhas_A, &n_colunas_A);
    mA = malloc(sizeof(int *) * n_linhas_A);
    for (int i = 0; i < n_linhas_A; i++)
    {
        mA[i] = malloc(sizeof(int) * n_colunas_A);
        for (int j = 0; j < n_colunas_A; j++)
        {
            scanf("%d", *(mA + i) + j);
        }
    }

    scanf("%d %d", &n_linhas_B, &n_colunas_B);
    mB = malloc(sizeof(int *) * n_linhas_B);
    for (int i = 0; i < n_linhas_B; i++)
    {
        mB[i] = malloc(sizeof(int) * n_colunas_B);
        for (int j = 0; j < n_colunas_B; j++)
        {
            scanf("%d", *(mB + i) + j);
        }
    }

    int index = 0;
    int soma = 0;
    mAB = malloc(sizeof(int *) * n_linhas_A);
    for (int i = 0; i < n_linhas_A; i++)
    {
        mAB[i] = malloc(sizeof(int) * n_colunas_B);
        for (int j = 0; j < n_colunas_B; j++)
        {
            while (index < n_colunas_A)
            {
                soma += mA[i][index] * mB[index][j];
                index++;
            }
            mAB[i][j] = soma;
            printf("%d ", soma);
            index = 0;
            soma = 0;
        }
        printf("\n");
    }
    for (int i = 0; i < n_linhas_A; i++)
    {
        free(mA[i]);
        free(mAB[i]);
    }
    free(mA);
    for (int i = 0; i < n_linhas_B; i++)
    {
        free(mB[i]);
    }
    free(mB);
    free(mAB);
}