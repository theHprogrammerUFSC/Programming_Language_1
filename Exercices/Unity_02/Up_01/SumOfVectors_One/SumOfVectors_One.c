#include<stdio.h>

int main()
{
    const int arraysize = 10;                                       //Tamanho do vetor.
    float n[arraysize];
    int i;
    float sum = 0;

    for (i = 0; i < arraysize; i++)                                 //Inicializa o Array
    {
        printf("\n Digite o elemento %i do vetor: ", i);
        scanf("%f", &n[i]);
    }

    printf("\n Elemento       Valor\n");

    for (i = 0; i < arraysize; i++)                                         //Imprime o Array
    {
        printf("\n    %i           %.2f\n", i, n[i]);
    }

    for (i = 0; i < arraysize; i++)
    {
        sum = sum + n[i];
    }
    
    printf("\n A soma dos elementos do vetor = %.2f \n", sum);

    return 0;    
}