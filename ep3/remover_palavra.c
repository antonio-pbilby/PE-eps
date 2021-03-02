//#include "remover_palavra.h"
#include <stdio.h>
#include <ctype.h>

void remover_palavra(int i, char frase[]) {
    int count_espaco=0, qtd;
    //um loop só pra não fazer os próximos loops até 100
    for (int j = 0; j < 100; j++){
        if( frase[j]=='\0'){
            qtd = j + 1;
            printf("qtd: %d\n", qtd);
            break;
        }
    }

    int vet[qtd], index=1; vet[0] = -1;

    //um vetor que armazena o index de cada espaço (de certa forma é onde começa e termina uma palavra)
    for( int j = 0; j < qtd; j++){
        if( frase[j]==' '){
            vet[index] = j;
            index++;
        }
    }
    vet[index] = qtd - 1;

    //loop pra imprimir o vet
    for ( int j = 0; j < index; j++){
        printf("%d ",vet[j]);
    }
    printf("\n");

    int tamanho_palavra = vet[i] - vet[i-1] - 1;
    printf("tamanho da palavra %d\n", tamanho_palavra);
    
    int passo, fim;

    if( isalpha(frase[ vet[i] - 1 ]) == 0){
        passo = tamanho_palavra;
        fim = qtd - tamanho_palavra + 1;
    }else{
        passo = tamanho_palavra + 1;
        fim = qtd - tamanho_palavra;
    }
    for( int j = vet[i-1]; j < fim; j++){
       frase [j] = frase [j + passo];
    }
    
    puts(frase);
}

void main(){
    char texto[100] = "uma frase de muitas tentativas";   //13 contando com \0 
                                        //vet [-1, 3, 9]
    remover_palavra(1, texto);
}