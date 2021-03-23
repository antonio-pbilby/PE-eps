#include "maior_palavra.h"

int comprimento_maior_palavra(char frase[])
{
  int inicio = -1, fim, i, len = 0;
  for (i = 0; i < 100; i++)
  {
    if (frase[i] == ' ')
    {

      if (i - inicio - 1 > len)
      {

        len = i - inicio - 1;
      }
      inicio = i;
    }
    else if (frase[i] == '\0' || frase[i] == '\n')
    {

      if (i - inicio - 1 > len)
      {

        len = i - inicio - 1;
      }
      break;
    }
  }
  return len;
}