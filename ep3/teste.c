#include <stdio.h>

void main(){
    char a[50] = "teste para macacos falantes, 123 testando";
    for(int i=0; i<50; i++){
        if( a[i] >= 'A' && a[i]>='Z' ||
            a[i] >= 'a' && a[i]<='z'){
            
            printf("ok\n");
        }
    }   
}