#include<stdio.h>

int main()
{
    float x, y;

    printf("\n Programa para encontrar o valor de y dado x. \n");

    printf("\n y = 0, se x <= 0 ");
    printf("\n y = x + 1, se 0 < x <= 1 ");
    printf("\n y = ((x*x) + 5), se x > 1 \n");

    printf("\n Informe o valor de x: ");
    scanf("%f", &x);

    if (x <= 0)
    {
        y = 0;
    }
    else if ((x > 0) && (x <= 1))
    {
        y = x + 1;
    }
    else if (x > 1)
    {
        y = ((x*x) + 5);
    }

    printf("\n y = %.2f \n", y);
    
    return 0;
}