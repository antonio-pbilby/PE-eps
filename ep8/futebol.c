#include "estruturas.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct TimeFutebol time;
    time.nome = malloc(sizeof(char) * 100);
    scanf("%s", time.nome);
    scanf("%d", &time.pontos);
    scanf("%d", &time.gols);
    scanf("%d", &time.vitorias);
    scanf("%d", &time.derrotas);
    scanf("%d", &time.empates);

    imprimir(time);
    free(time.nome);
    return 0;
}