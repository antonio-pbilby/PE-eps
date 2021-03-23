#include "logaritmo.h"

double logaritmo(double x, int n)
{
    // Codigo da funcao aqui
    x = x - 1;
    double soma = 0, potencia = 1, fracao;
    int i, sinal = -1;
    for (i = 0; i < n; i++)
    {
        sinal = sinal * -1;
        fracao = 1 / ((float)i + 1);
        potencia = potencia * x;
        soma += sinal * fracao * potencia;
    }
    return soma;
}