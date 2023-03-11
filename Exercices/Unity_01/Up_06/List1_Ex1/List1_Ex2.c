// Project Name: List1_Ex1
// Version: 1.0
// Author: Helder Henrique da Silva
// Date: 07-11-2022
// Description: This program calculates the result of the expression: max(a+b)

#include<stdio.h>

int main()
{
    float x, y, z;
    float r1, r2;

    printf("\n Mostrar o maior resultado entre ((x + y + z) + 3) ou ((x * y * z) + 3) \n");

    printf("\n Informe o valor de x: ");
    scanf("%f", &x);

    printf("\n Informe o valor de y: ");
    scanf("%f", &y);

    printf("\n Informe o valor de z: ");
    scanf("%f", &z);

    r1 = (x + y + z);
    r2 = (x * y * z);

    if (r1 > r2)
    {
        r1 = r1 + 3;
        printf("\n O maior reultado foi obtido a partir de: r = (%.2f + %.2f + %.2f) + 3", x, y, z);
        printf("\n r = %.2f", r1);
    }
    else
    {
        r2 = r2 + 3;
        printf("\n O maior reultado foi obtido a partir de: r = (%.2f * %.2f * %.2f) + 3", x, y, z);
        printf("\n r = %.2f", r2);
    }
    
    return 0;
}