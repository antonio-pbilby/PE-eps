#include "remover_duplicados.h"

void remover_duplicados(int vetor[], int qtd)
{
    // Codigo da funcao aqui
    int i, j;
    for (i = 1; i < qtd; i++)
    {
        if (vetor[i] == vetor[i - 1] && vetor[i] != -1)
        {
            for (j = i; j < qtd - 1; j++)
            {
                vetor[j] = vetor[j + 1];
            }
            vetor[j] = -1;
            i -= 1;
        }
    }
}