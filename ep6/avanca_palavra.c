#include <stdlib.h>
char *avanca_palavra(char *frase, char *trecho)
{
    int tamanho_frase = 0, tamanho_trecho = 0;
    int index = 0, n;
    while (*(frase + tamanho_frase) != '\0')
    {
        tamanho_frase++;
    }

    while (*(trecho + tamanho_trecho) != '\0')
    {
        tamanho_trecho++;
    }

    int i, j;
    for (i = 0; i < tamanho_frase - tamanho_trecho + 1; i++)
    {
        for (j = 0; j < tamanho_trecho; j++)
        {
            if (*(frase + i + j) != *(trecho + j))
            {
                break;
            }
        }
        if(j == tamanho_trecho){
            char *retorno;
            n = tamanho_frase - i;
            retorno = (char*)malloc(sizeof(char) * n);
            for(int k = i; k < tamanho_frase; k++){
                *(retorno + index) = *(frase + k);
                index++;
            }
            return retorno;
        }
    }
    return NULL;
}