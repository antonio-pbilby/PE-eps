#include <stdio.h>
void imprime_elemento2(int v[], int n)
{
    if (n == 0)
    {
        printf("\n");
        return;
    }
    printf("%d ", v[n - 1]);
    imprime_elemento2(v, n - 1);
}

int main()
{
    int vetor[6] = {10, 20, 30, 40, 50, 60};
    imprime_elemento2(vetor, 6);
    return 0;
}