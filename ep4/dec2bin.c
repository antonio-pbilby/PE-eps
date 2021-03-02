//#include "dec2bin.h"
#include <stdio.h>
int dec2bin(int n_decimal) {
    if (n_decimal == 1){
        return 1;
    } else{
        return  (n_decimal % 2 + 10 * (dec2bin(n_decimal/2)));
    }
}

void main(){
    int n = 14;
    printf("%d",dec2bin(n));
}