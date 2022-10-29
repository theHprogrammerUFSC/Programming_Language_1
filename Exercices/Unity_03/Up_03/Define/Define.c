#include <stdio.h>

#define PI 3.14159
#define CIRCLE_AREA(x) (PI*(x)*(x))

/******************************************************/

int main()
{
    float area, n;

    printf("\n Digite o raio do circulo: ");
    scanf("%f", &n);

    area = CIRCLE_AREA(n);
    printf("\n Area = %.2f \n", area);

    return 0;
}