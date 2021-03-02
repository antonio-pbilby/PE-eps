#include <stdio.h>
#include "imprime_vetor.h"

void imprime_vetor(int vetor[], int qtd) {
  // Codigo da funcao aqui
  int vetor_index=0, count_imprimidos=0, colunas=1, i;
  while(count_imprimidos<qtd){
      for(i=0;i<colunas;i++){
          if(i==colunas-1){
              printf("%d", vetor[vetor_index]);
          } else{
              printf("%d ", vetor[vetor_index]);
          }
          vetor_index+=1;
          count_imprimidos+=1;
      }
      printf("\n");
      colunas+=1;
  }


}