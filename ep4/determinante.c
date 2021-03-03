//#include "determinante.h"
#include <stdio.h>

void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n - 1][n - 1], int c)
{
    // Implementar
    //trataremos linha e coluna como os índices das matrizes, ou seja, a coluna 3 da matriz seria c = 2
    //e a linha 1 da matriz seria i = 0
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (j < c)
            {
                printf("j e c: %d %d\n", j, c);
                printf("m_entrada[i + 1][j]: %f\n", m_entrada[i + 1][j]);
                m_saida[i][j] = m_entrada[i + 1][j];
                printf("m_saida[i][j]: %f\n", m_saida[i][j]);
            }
            else
            {
                printf("j e c: %d %d\n", j, c);
                printf("m_entrada[i + 1][j + 1]: %f\n", m_entrada[i + 1][j + 1]);
                m_saida[i][j] = m_entrada[i + 1][j + 1];
                printf("m_saida[i][j]: %f\n", m_saida[i][j]);

            }
        }
    }
}

float calcula_determinante(int n, float m_entrada[n][n])
{
    // Implementar (esta funcao deve ser recursiva)
    float soma = 0;
    if (n == 1)
    {
        return m_entrada[0][0];
    }
    else
    {
        float m_saida[n - 1][n - 1];
        for (int j = 0; j < n; j++)
        {
            remove_primeira_linha_e_coluna_c(n, m_entrada, m_saida, j);
            if (j % 2 == 0)
            {
                soma += m_entrada[0][j] * calcula_determinante(n - 1, m_saida);
            }
            else
            {
                soma -= m_entrada[0][j] * calcula_determinante(n - 1, m_saida);
            }
        }
        return soma;
    }
}

int main()
{
    // Implementar
    /*
    int n;
    scanf("%d", &n);
    float primeiraMatriz[n][n];
    for( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            scanf("%f", &primeiraMatriz[i][j]);
        }
    }
    */
    float vetor[2][2] = {{1, 2}, {3, 4}};
    printf("%f", calcula_determinante(2, vetor));
    return 0;
}