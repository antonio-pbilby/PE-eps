#include <stdio.h>

char ALFABETO[27] = "abcdefghijklmnopqrstuvwxyz";
int FATOR = 2;

void encrypt (char texto_secreto[], int n){
    int i, j;

    for( i = 0; i < n; i++){

        for( j = 0; j < 26; j++){

            if( texto_secreto[i] == ALFABETO[j]){
                
                texto_secreto[i] = ALFABETO[(j+FATOR)%26];
                break;

            }
        }
    }
}

void decrypt (char texto_protegido[], int n){
    int i, j;
    
    for( i = 0; i < n; i++){
        for( j = 0; j < 26;j++){

            if( texto_protegido[i]==ALFABETO[j]){

                texto_protegido[i] = ALFABETO[(j-FATOR)%26];
                break;

            }
        }
    }
}

int main(){
    char texto[10]= "abcdefghi";
    encrypt(texto, 10);
    puts(texto);
    decrypt(texto,10);
    puts(texto);
    
    return 0;
}