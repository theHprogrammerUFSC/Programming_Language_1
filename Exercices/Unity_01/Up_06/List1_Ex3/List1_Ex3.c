#include<stdio.h>

int main()
{
    float x, y;

    printf("\n Programa para encontrar o valor de y dado x. \n");

    printf("\n y = x*x, se (-2 <= x <= 2) ");
    printf("\n y = 4, se (x < -2 ou x > 2) ");

    printf("\n Informe o valor de x: ");
    scanf("%f", &x);

    if ((x < -2) || (x > 2))
    {
        y = 4;
    }
    else
    {
        y = x*x;
    }

    printf("\n y = %.2f \n", y);
    
    return 0;
}