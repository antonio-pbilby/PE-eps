#include <stdio.h>

int selection_sort(int *v, int n)
{
    int i, cont=0;
    for (i = 0; i < n - 1; i++)
    {
        int indice_menor = i;
        int k;
        for (k = i + 1; k < n; k++)
            if (v[k] < v[indice_menor])
                indice_menor = k;
        if (indice_menor != i)
        {
            int tmp = v[i];
            v[i] = v[indice_menor];
            v[indice_menor] = tmp;
            cont++;
        }
        //impressão do vetor novamente
        printf("%d ", v[0]);
        for (int j = 1; j < n - 1; j++)
        {
            printf("%d ", v[j]);
        }
        printf("%d\n", v[n - 1]);
    }
    return cont;
}

void main()
{
    int n;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    // //impressão do vetor antes da ordenação
    printf("%d ", vet[0]);
    for (int i = 1; i < n - 1; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("%d\n", vet[n - 1]);

    int cont_troca = selection_sort(vet, n);

     //impressão do vetor após a ordenação
    printf("%d ", vet[0]);
    for (int i = 1; i < n - 1; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("%d\n", vet[n - 1]);

    printf("%d\n", cont_troca);
}