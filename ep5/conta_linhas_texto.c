#include "conta_linhas_texto.h"

void conta_linhas(char texto[], int largura_linha, int *qtd_linhas)
{
    *qtd_linhas = 0;
    int n = 0;
    while (texto[n] != '\0')
    {
        n++;
    }

    int inicio = -1;
    int tamanho_palavras[n], tam_pal_index = 0, cont_palavras = 1;
    for (int i = 0; i < n; i++)
    {
        if (texto[i] == ' ')
        {
            tamanho_palavras[tam_pal_index] = i - inicio - 1;
            tam_pal_index++;
            inicio = i;
            cont_palavras++;
        }
    }
    tamanho_palavras[tam_pal_index] = n - inicio - 1;
    int soma = 0;
    for (int i = 0; i < cont_palavras; i++)
    {
        soma += tamanho_palavras[i];
        if (soma > largura_linha)
        {
            soma = 0;
            *qtd_linhas = *qtd_linhas + 1;
            i--;
        }
        else
        {
            soma += 1;
        }
    }
    *qtd_linhas = *qtd_linhas + 1;
}