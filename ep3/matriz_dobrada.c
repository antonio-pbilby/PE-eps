#include <stdio.h>

void dobra_matriz (int n, int m[n][n]){
    int i, j;
    //primeira dobra
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j < n/2){
                m[i][j] += m[i][n-j-1];
            } else{
                m[i][j] = 0;
            }
        }
    }

    //segunda dobra
    for(j = 0; j < n/2; j++){
        for(i = 0; i < n; i++){
            if(i < n/2){
                m[i][j] += m[n-1-i][j];
            } else{
                m[i][j] = 0;
            }
        }
    }

}

void main(){
    int vetor[6][6] = { {1,1,1,1,1,1} , 
                        {2,2,2,2,2,2},  
                        {3,3,3,3,3,3} , 
                        {4,4,4,4,4,4},
                        {5,5,5,5,5,5},
                        {6,6,6,6,6,6}};
    
    dobra_matriz (6, vetor);
    int i,j;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            printf("%d ",vetor[i][j]);
        }
        printf("\n");
    }
}