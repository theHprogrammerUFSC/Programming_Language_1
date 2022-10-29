#include<stdio.h>

int main()
{
    const int arraysize = 10;                                       //Tamanho do vetor.
    int n[arraysize];
    int i;

    for (i = 0; i < arraysize; i++)                                 //Inicializa o Array
    {
        printf("\n Digite o elemento %i do vetor. \n", i);
        scanf("%i", &n[i]);
    }

    printf("\n Elemento     Valor\n");

    for (i = 0; i < arraysize; i++)                                         //Imprime o Array
    {
        printf("\n    %i           %i\n", i, n[i]);
    }

    return 0;    
}