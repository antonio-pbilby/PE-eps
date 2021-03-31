#include <stdio.h>
#include <stdlib.h>

void teste1()
{
    int x = 2, y = 5;
    int *z = &x;
    int **w = &z;
    **w = y;
    printf("%d\n", x);
}

void teste2(){
    int x = 2, y = 5;
    int *z = &x;
    int **w, **k;
    w = &z;
    *z = 8;
    k = w;
    **k = y;
    printf("%d\n", x);
}

void teste3(){
    int *x, *y;
    x = malloc(sizeof(int));
    y = malloc(sizeof(int));

    int **z = &x;
    int **w, **k;
    *x = 9;
    *y = 11;
    **z = *x + 6;
    w = &y;
    k = w;
    w = z;
    z = k;
    printf("%d %d\n", **z, **w);
    free(x); free(y);
}

void main()
{
    printf("ola");
}
