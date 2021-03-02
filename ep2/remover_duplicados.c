//#include "duplica_impares.h"
#include <stdio.h>

void duplica_impares(int vetor[], int qtd) {
    // Codigo da funcao aqui
    int i, j, index; //index é a posição do primeiro -1

    for(i=0; i<qtd; i++){
        if(vetor[i] == -1 && vetor[i]!=-1){
            index = i;
            break;
        }
    }

    for(i=0;i<qtd;i++){
        if(vetor[i]%2!=0){
            for(j=index; j>i; j--){
                vetor[j]=vetor[j-1];
            }
            index+=1;
            i+=1;
        }
    }
}

void main(){
    int v[5]={1,1,-1,-1,-1}, n=5,i;
    duplica_impares(v,n);
    for(i=0; i<n; i++){
        printf("%d ",v[i]);
    }

}