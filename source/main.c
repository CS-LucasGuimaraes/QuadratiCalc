#include <stdio.h>

int raise(int base, int exponent)
{
    if (exponent == 0)
    {
        if (base != 0) return 1;
        else return NULL;
    }

    else
    {
        for (int i = 0; i < exponent; i++)
        {
            base *= base;
        }
    }

    if (exponent > 0) return base;
    else if (exponent < 0) return 1/base;
}

float expression()
{
    int val0, val1, val2;
    float resultado = 0;
    char op1, op2;

    scanf("%d", &val0);
    while (1)
    {
        scanf("%c", &op1);
        if (op1 == '\n') 
        {
            resultado += val0;
            break;
        }

        scanf("%d", &val1);

        if (op1 == '*') {resultado += val0 * val1; continue;}
        else if (op1 == '/') {resultado += val0 / val1; continue;}
        
        scanf("%c", &op2);
        if (op2 == '\n')
        {
                 if(op1 == '+') resultado += val0 + val1;
            else if(op1 == '-') resultado += val0 - val1;
            break;
        }
        scanf("%d", &val2);
        
        int aux1 = 1;
        if (op1 == '-')
            aux1 = -1;

        int aux2 = 1;
        if (op2 == '-' || op2 == '/')
            aux2 = -1;


        if(op2 == '+' || op2 == '-')
        {
            resultado += val0 + val1*aux1; val0 = val2*aux2;
        }

        else if (op2 == '*' || op2 == '/')
        {
        resultado = resultado + val0*aux1; val0 = val1*(raise(val2,aux2));
        }
    }
    return resultado;
}

int main()
{
    float resultado = expression();
    printf("O resultado da sua expressão é %f", resultado);
    return 0;
}