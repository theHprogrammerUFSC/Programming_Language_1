#include<stdio.h>

int main()
{
    int n[10];
    int i;

    for (i = 0; i < 5; i++)            //Inicializa o Array
    {
        printf("\n Digite o elemento %i do vetor. \n", i);
        scanf("%i", &n[i]);
    }

    printf("\n Elemento     Valor\n");

    for (i = 0; i < 5; i++)            //Imprime o Array
    {
        printf("\n    %i           %i\n", i, n[i]);
    }

    return 0;    
}