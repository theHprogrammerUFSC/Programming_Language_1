#include<stdio.h>

int main()
{
    int x, y;
    int divisao;

    printf("\n Verificacao se x e divisivel por y (resultado inteiro). \n");
    printf("\n Um numero e divisivel por outro quando o resto da divisao for zero egeral um valor inteiro. \n");

    printf("\n Informe o valor de x: ");
    scanf("%i", &x);

    printf("\n Informe o valor de y: ");
    scanf("%i", &y);

    if (y != 0)
    {
        //divisao = x / y;
        printf("%s", ((x % y) == 0) ? "\n x e divisivel por y (gera um valor inteiro)\n" : "\n x nao e divisivel por y (gera resto)\n ");
        //printf("\n Divisao = %i \n", divisao);
    }
    else
    {
         printf("\n Impossivel dividir um numero por 0. \n");
    }

    return 0;
}