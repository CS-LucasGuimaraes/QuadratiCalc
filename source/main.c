#include <stdio.h>

int raise(int base, int exponent)
{
    if (exponent > 0)
    {
        for (int i = 0; i < exponent; i++)
        {
            base *= base;
        }
        return base;
    }

    else if (exponent < 0)
    {
        for (int i = 0; -i > exponent; i--)
        {
            base *= base;
        }
        return 1/base;
    }

    else
    {
        if (base != 0) return 1;
        else return 0;
    }
}

int defineAuxiliars(char operator)
{
        if (operator == '+' || operator == '*') return 1;
        return -1;
}

float expression()
{
    int value0, value1, value2;
    float resultado = 0;
    char operator1, operator2;

    scanf("%d", &value0);
    while (1)
    {
        scanf("%c", &operator1);
        if (operator1 == '\n') 
        {
            resultado += value0;
            break;
        }
        int aux1 = defineAuxiliars(operator1);

        scanf("%d", &value1);

        if (operator1 == '*' || operator1 == '/') {value0 += value0 * raise(value1, aux1);}
        else{
            printf("entrou no else");
            scanf("%c", &operator2);
            if (operator2 == '\n')
            {
                resultado += value0 + value1*aux1;
                break;
            }
            int aux2 = defineAuxiliars(operator2);

            scanf("%d", &value2);

            if(operator2 == '+' || operator2 == '-')
            {
                resultado += value0 + value1*aux1; value0 = value2*aux2;
            }

            else if (operator2 == '*' || operator2 == '/')
            {
            value0 += value0 + (value1*operator1 * raise(value2,operator2));
            }
        }
    }
    return resultado;
}

int main()
{
    while (1)
    {
    float resultado = expression();
    printf("O resultado da sua expressão é %f", resultado);
    printf("\n");

    }
    
    return 0;
}