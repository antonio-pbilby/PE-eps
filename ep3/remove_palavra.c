#include <stdio.h>
void remove_segunda_palavra (char frase[], int n){
    int i, count_espaco = 0, inicio, fim, len;
    for(i=0; i<n; i++){
        if(frase[i] == ' '){
            printf("entrou no primeiro if\n");
            count_espaco += 1;
            if(count_espaco == 1){
                printf("entrou no segundo if\n");
                inicio = i;
                printf("inicio = %d\n", inicio);
            } else if (count_espaco == 2){
                printf("entrou no terceiro if\n");
                fim = i;
                printf("fim = %d\n", fim);
                break;
            }
        }
    }

    len = fim - inicio;
    for(i=inicio+1; i<n-len; i++){
        frase[i]=frase[i+len];
    }

}
void main(){
    char frases[20] = "A Baca bacaxi";
    int n = 20;
    remove_segunda_palavra(frases,n);
    puts(frases);
}