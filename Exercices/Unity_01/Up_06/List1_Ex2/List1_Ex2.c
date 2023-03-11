#include<stdio.h>

int main()
{
    float x, y, z;
    float r1, r2;

    printf("\n Mostrar o menor resultado entre ((x*x + y*y) - 4) ((y*y + z*z) - 4) \n");

    printf("\n Informe o valor de x: ");
    scanf("%f", &x);

    printf("\n Informe o valor de y: ");
    scanf("%f", &y);

    printf("\n Informe o valor de z: ");
    scanf("%f", &z);

    r1 = ((x*x) + (y*y));
    r2 = ((y*y) + (z*z));

    if (r1 < r2)
    {
        r1 = r1 - 4;
        printf("\n O menor reultado foi obtido a partir de: r = (%.2f*%.2f + %.2f*%.2f) - 4", x, x, y, y);
        printf("\n r = %.2f", r1);
    }
    else
    {
        r2 = r2 - 4;
        printf("\n O menor reultado foi obtido a partir de: r = (%.2f*%.2f + %.2f*%.2f) - 4", y, y, z, z);
        printf("\n r = %.2f", r2);
    }
    
    return 0;
}