#include <stdlib.h>
#include <stdio.h>


void func2()
{
    //para alocar memória dinamicamente, podemos usar o malloc
    //void* malloc(size_t size);
    //para liberar a memória, usamor o free
    //void free(void* ptr);

    int *n;                  //declaração do ponteiro
    n = malloc(sizeof(int)); //alocação de um inteiro
    free(n);                 //liberação da memória

    //alocação dinâmica vetores
    int *a;
    a = malloc(5 * sizeof(int));
    free(n);
    free(a);
}

void aritmetica()
{
    //operadores aritméticos sobre ponteiros
    //++ -- + -

    // char *ptr = malloc(sizeof(char));

    // printf("%p\n", ptr); //00AB18C8

    // ptr++;

    // printf("%p\n", ptr); //00AB18C9 incrementa 1 pq o tipo é char

    int *ptr = malloc(sizeof(char));

    printf("%p\n", ptr); //00B518C8

    ptr++;

    printf("%p\n", ptr); //00B518CC incrementa 4 pq o tipo é int

    //int *ptr1 = malloc(sizeof(int));
    //char *ptr2 = malloc(sizeof(char));
    //double *ptr3 = malloc(sizeof(double));
    // ptr1 = ptr1 + 1; //ptr1 = ptr1 + 1*sizeof(int)
    // ptr2 = ptr2 + 1; //ptr2 = ptr2 + 1*sizeof(char)
    // ptr3 = ptr3 + 1; //ptr3 = ptr3 + 1*sizeof(double)
    // sizeof(char) = 1; sizeof(int) = 4; sizeof(double) = 8
    free(ptr);
}

int vetores()
{
    //aplicando aritmética de ponteiros em vetores

    int *vetor = malloc(sizeof(int) * 10);
    *(vetor + 0) = 80;  //vetor[0] = 80
    *(vetor + 4) = 507; //vetor[4] = 507
    free(vetor);
}

void func1()
{
    int *ptr = malloc(sizeof(int) * 10);

    int i;
    for (i = 0; i < 10; i++)
    {
        *(ptr + i) = i * i;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
}

//como retornar um vetor 
// int* cria_vetor(int n){
//     //implementação da função
//     int vetor[n];

//     int i;
//     for(i = 0; i < n; i++)
//     {
//         vetor[i] = i+1;
//     }
//     //return vetor; //NÃO RETORNE PONTEIRO PARA VARIÁVEL LOCAL
// }
int* cria_vetor(int n){
    int *vetor = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++)
    {
        vetor[i] = i + 1;
    }

    return vetor;
}

void teste(){
    int i;
    for (i = 0; i < 5; i++){
        printf("lol\n");
    }
    printf("%d",i);
}
int main()
{
    teste();
    return 0;
}