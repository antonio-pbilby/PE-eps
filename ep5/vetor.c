#include "vetor.h"
#include <math.h>
void estatisticas_vetor(int vetor[], int n, int *min, int *max, int *soma, double *media, double *desvio)
{
    *soma = 0;
    *max = vetor[0];
    *min = vetor[0];
    for (int i = 0; i < n; i++)
    {
        *soma += vetor[i];
        if (vetor[i] >= *max)
        {
            *max = vetor[i];
        }
        if (vetor[i] <= *min)
        {
            *min = vetor[i];
        }
    }
    *media = (double)*soma / n;
    *desvio = 0;
    for (int i = 0; i < n; i++)
    {
        *desvio += pow((double)(vetor[i] - *media), 2);
    }
    *desvio = sqrt(*desvio / n);
}