#include <stdio.h>
void teste1(){
   int x = 10;
   int *y = &x; //*y aponta pra &x
   int *z = &x; //*z aponta pra &x
   int c = *y + *z; //c = &x + &x
   *y = c; // 
   printf("%d\n", x); //20?
}

void teste2(){
    int x = 8;
    x++; // x = 9
    int *y = &x; //*y aponta pra &x
    *y = *y + 1; // x = 9 + 1
    printf("%d\n", x); //x = 10
}

void teste3(){
    int x = 8;
    x++;
    int *y = &x;
    y = y + 1;
    printf("%d\n", x); // x = 9
}

void teste4(){
    int a = 507;
    int *c;
    *c = 30; // valor do ponteiro = 30
    *c = &a; //ponteiro aponta pra &a, *c = a? ou agr o valor de a = *c
    printf("%d\n", a); //ou é 507 ou é 30, acho que é 507
    *c = 10; //*c = 10 e a = 10
    printf("%d\n", a);
    c = &a; //ende
    *c = 10;
    printf("%d\n", a);
}
void main(){
    teste4();
}