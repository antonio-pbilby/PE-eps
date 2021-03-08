#include "op_ponteiro.h"

void operacao_int(int a, int b, char op, int* res) {
    switch (op)
    {
    case '+':
        *res = a + b;
        break;
    case '-':
        *res = a - b;
        break;
    case '*':
        *res = a * b;
        break;
    case '/':
        *res = a / b;
        break;
    case '%':
        *res = a % b;
        break;
    case '^':
        for(int i = 0; i < b-1; i++){
            a *= a;
        }
        *res = a;
        break;
    case '|':
        *res = a | b;
        break;
    case '&':
        *res = a & b;
        break;
    }
}