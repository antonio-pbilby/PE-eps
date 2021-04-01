#include "discos.h"

void insere_disco(struct DiscoVoador novo_disco, struct DiscoVoador discos[], int n_discos)
{
    int index;
    for (int i = 0; i < n_discos; i++)
    {
        if (novo_disco.velocidade < discos[i].velocidade)
        {
            index = i;
            break;
        }
        else if (novo_disco.aceleracao < discos[i].aceleracao &&
                 novo_disco.velocidade == discos[i].velocidade)
        {
            index = i;
            break;
        }
        else if (novo_disco.autonomia <= discos[i].autonomia &&
                 novo_disco.aceleracao == discos[i].aceleracao &&
                 novo_disco.velocidade == discos[i].velocidade)
        {
            index = i;
            break;
        }
        index = i + 1;
    }

    for (int i = n_discos; i > index; i--)
    {
        discos[i] = discos[i - 1];
    }
    discos[index] = novo_disco;
}