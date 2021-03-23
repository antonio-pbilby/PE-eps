#include <stdio.h>
void insere(int vetor[], int n, int valor)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        if (valor < vetor[i])
        {
            for (j = n; j > i; j--)
            {
                vetor[j] = vetor[j - 1];
            }
            vetor[j] = valor;
            return;
        }
    }
    vetor[n - 1] = valor;
}

void imprime(int vetor[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main()
{
    int i, j, n = 100, vetor[n], entrada, index_insercao;
    for (i = 0; i < n; i++)
    {
        vetor[i] = -1;
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &entrada);
        if (entrada == -1)
        {
            i = 100;
        }
        else
        {
            insere(vetor, i + 1, entrada);
            imprime(vetor, i + 1);
        }
    }
    return 0;
}