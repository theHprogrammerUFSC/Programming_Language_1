#include<stdio.h>

int main()
{
    int a, b;
    double c, d;

    a = 7;
    b = 2;

    c = a / b;
    printf("\n Divisao inteira : %i / %i = %lf \n", a, b, c);

    d = (double) a / b;
    printf("\n Divisao com conversao de tipo: %i / %i = %lf \n", a, b, d);

    return 0;
}