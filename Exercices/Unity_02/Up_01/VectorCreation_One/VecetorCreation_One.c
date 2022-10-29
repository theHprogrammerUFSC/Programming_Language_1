#include<stdio.h>

int main()
{
    int c[10];
    int i;

    for (i = 0; i < 10; i++)            //Inicializa o Array
    {
        c[i] = i;
    }

    printf("\n Elemento     Valor\n");

    for (i = 0; i < 10; i++)            //Imprime o Array
    {
        printf("\n    %i           %i\n", i, c[i]);
    }

    return 0;    
}