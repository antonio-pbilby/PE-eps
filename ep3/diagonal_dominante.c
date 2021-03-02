#include "diagonal_dominante.h"

int diagonal_dominante(int n, int m[][n]) {
    int i, j, sum, count_diagonal=0;
    for(i = 0; i < n; i++){
        sum = 0;
        for(j = 0; j < n; j++){
            if(j != i){
                if(m[i][j] >= 0){
                    sum += m[i][j];
                } else{
                    sum -= m[i][j];
                }
            }
        }
        if((m[i][i]) >= 0){
            if(m[i][i] > sum){
                count_diagonal += 1;
            } 
        } else if(-m[i][i] > sum){
            count_diagonal+=1;
        }
    }

    if(count_diagonal == n){
        return 1;
    } else{
        return 0;
    }
}
/*
void main(){
    int vetor[4][4] =   {{-9,2,3,3},
                        {3,-9,2,1},
                        {1,1,-6,1},
                        {2,0,2,-8}};
    
    int n = diagonal_dominante (4,vetor);
    printf("%d",n);
}*/