#include<stdio.h>

int main()
{
    int n[15] = {11, 22, 33, 44, 55, 66, 77};
    int i;

    printf("\n Elemento     Valor\n");

    for (i = 0; i < 15; i++)            //Imprime o Array
    {
        printf("\n    %i           %i\n", i, n[i]);
    }

    return 0;    
}