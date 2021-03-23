#include "contafreq.h"
//conta a frequência que o digito se repete no num
int contafreq(int num, int digito)
{
    if (num < 10)
    {
        return num == digito;
    }
    else
    {
        return (num % 10 == digito) + contafreq(num / 10, digito);
    }
}