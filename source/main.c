#include <stdio.h>

int main()
{
    int val0, val1, val2;
    int resultado = 0;
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
        
        if (op2 == '+')
        {
                 if (op1 == '+') {resultado += val0 + val1; val0 = val2;}
            else if (op1 == '-') {resultado += val0 - val1; val0 = val2;}
        }
        
        else if (op2 == '-')
        {
                 if (op1 == '+') {resultado += val0 + val1; val0 = -val2;}
            else if (op1 == '-') {resultado += val0 - val1; val0 = -val2;}
        }

        else if (op2== '*')
        {
                 if (op1 == '+') {resultado += val0; val0 = val1*val2;}
            else if (op1 == '-') {resultado -= val0; val0 = val1*val2;}
        }
        else if (op2 == '/')
        {
                 if (op1 == '+') {resultado += val0; val0 = val1/val2;}
            else if (op1 == '-') {resultado -= val0; val0 = val1/val2;}
        }  
    }
    
    printf("%d", resultado);
    return 0;
}