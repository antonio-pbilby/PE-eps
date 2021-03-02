#include "stdio.h"

double logaritmo(double x, int n) {
    // Codigo da funcao aqui
    x=x-1;
    double soma=0, potencia=1, fracao;
    int i, sinal=-1;
    for(i=0;i<n;i++){
        printf("%d\n",i);

        sinal = sinal * -1;
        printf("   sinal: %d",sinal);

        fracao = 1/((float) i+1);
        printf("   fracao: %f",fracao);

        potencia = potencia * x;
        printf("   potencia: %f\n",potencia);
        soma += sinal*fracao*potencia;
    }
    return soma;
    
}
int main(){
    double y=0.75;
    int m=10;
    logaritmo(y,m);
    return 0;
}