#include "duplica_impares.h"

void duplica_impares(int vetor[], int qtd)
{
    // Codigo da funcao aqui
    int i, j, index; //index é a posição do primeiro -1

    for (i = 0; i < qtd; i++)
    {
        if (vetor[i] == -1)
        {
            index = i;
            break;
        }
    }

    for (i = 0; i < qtd; i++)
    {
        if (vetor[i] % 2 != 0 && vetor[i] != -1)
        {
            for (j = index; j > i; j--)
            {
                vetor[j] = vetor[j - 1];
            }
            index += 1;
            i += 1;
        }
    }
}