#include <stdio.h>
int insertion_sort(int *v, int n)
{
    int i, k, count = 0;
    for (i = 1; i < n; i++)
    {
        int item_atual = v[i];
        int indice_para_inserir = i;
        for (k = i - 1; k >= 0 && item_atual < v[k]; k--)
        {
            v[k + 1] = v[k];
            indice_para_inserir--;
            count++;
        }
        v[indice_para_inserir] = item_atual;

        //impressão do vetor novamente
        printf("%d ", v[0]);
        for (int j = 1; j < n - 1; j++)
        {
            printf("%d ", v[j]);
        }
        printf("%d\n", v[n - 1]);
    }
    if (count == 0)
    {
        return n - 1;
    }
    else if (count == n * (n - 1) / 2)
    {
        return count;
    }
    else
    {
        return count + n - 3;
    }
}

void main()
{
    //inicialização do vetor
    int n, contador;
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

    //ordenação do vetor
    contador = insertion_sort(vet, n);

    //impressão do vetor após a ordenação
    printf("%d ", vet[0]);
    for (int i = 1; i < n - 1; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("%d\n", vet[n - 1]);

    printf("%d\n", contador);
}