#include <stdlib.h>
#include <stdio.h>

void insere(int *vetor, int n, int valor)
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

void main(){
    // int n,m;

    // scanf("%d",&n);
    // int *vet1 = malloc(sizeof(int) * n);
    // for (int i = 0; i < n; i++){
    //     scanf("%d", vet1 + i);
    // }

    // scanf("%d",&m);
    // int *vet2 = malloc(sizeof(int) * m);
    // for (int i = 0; i < m; i++){
    //     scanf("%d", vet2 + i);
    // }
    int n=5,m=5;
    int *vet1 = malloc(sizeof(int) * n);
    int *vet2 = malloc(sizeof(int) * m);
    *(vet1 + 0) = 1;
    *(vet1 + 1) = 2;
    *(vet1 + 2) = 3;
    *(vet1 + 3) = 4;
    *(vet1 + 4) = 5;

    *(vet2 + 0) = 6;
    *(vet2 + 1) = 7;
    *(vet2 + 2) = 8;
    *(vet2 + 3) = 9;
    *(vet2 + 4) = 10;
    
    int *vet3 = malloc(sizeof(int) * (n + m - 1));
    for (int i = 0; i < n + m - 1; i++){
        if(i < n){
            printf("%d\n", *(vet1 + i));
            insere(vet3, i+1, *(vet1 + i));
        }
        else{
            printf("%d\n", *(vet2 + i - n));
            insere(vet3, i+1, *(vet2 + i - n));
        }
    }

    for (int i = 0; i < n + m - 1; i++){
        printf("%d ", *(vet3 + i));
    }
    printf("\n");
    
    free(vet1);
    free(vet2);
    free(vet3);
}