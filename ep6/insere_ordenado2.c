#include <stdio.h>
void insere(double *vetor, int n, double valor)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        if (valor < *(vetor + i))
        {
            for (j = n; j > i; j--)
            {
                *(vetor + j) = *(vetor + j - 1);
            }
            *(vetor + j) = valor;
            return;
        }
    }
    *(vetor + n - 1) = valor;
}

void imprime(double *vetor, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(vetor + i));
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    double *vetor = malloc(sizeof(double) * n), entrada;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &entrada);
        if (entrada == -1)
        {
            i = n;
        }
        else
        {
            insere(vetor, i + 1, entrada);
            imprime(vetor, i + 1);
        }
    }
    free(vetor);
    return 0;
}