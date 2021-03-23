#include "frase.h"
#include <math.h>
#include <ctype.h>

void estatisticas_frase(char frase[], int *min, int *max, int *soma, double *media, double *desvio)
{
    int n = 0;
    while (frase[n] != '\0')
    {
        n++;
    }
    int v_espaco[n], v_espaco_index = 1;
    v_espaco[0] = -1;
    for (int i = 0; i < n; i++)
    {
        if (frase[i] == ' ')
        {
            v_espaco[v_espaco_index] = i;
            v_espaco_index++;
        }
    }
    v_espaco[v_espaco_index] = n;
    int tamanho_v_espaco = v_espaco_index + 1;

    int tamanho_palavra[n], tamanho_palavra_index = 0;
    for (int i = 1; i < tamanho_v_espaco; i++)
    {
        if (isalpha(frase[v_espaco[i] - 1]) > 0)
        {
            tamanho_palavra[tamanho_palavra_index] = v_espaco[i] - v_espaco[i - 1] - 1;
        }
        else
        {
            tamanho_palavra[tamanho_palavra_index] = v_espaco[i] - v_espaco[i - 1] - 2;
        }
        tamanho_palavra_index++;
    }

    *soma = 0;
    *max = tamanho_palavra[0];
    *min = tamanho_palavra[0];
    n = tamanho_v_espaco - 1;
    for (int i = 0; i < n; i++)
    {
        *soma += tamanho_palavra[i];
        if (tamanho_palavra[i] >= *max)
        {
            *max = tamanho_palavra[i];
        }
        if (tamanho_palavra[i] <= *min)
        {
            *min = tamanho_palavra[i];
        }
    }
    *media = (double)*soma / n;
    *desvio = 0;
    for (int i = 0; i < n; i++)
    {
        *desvio += pow((double)(tamanho_palavra[i] - *media), 2);
    }
    *desvio = sqrt(*desvio / n);
}