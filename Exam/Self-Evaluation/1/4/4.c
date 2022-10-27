#include<stdio.h>

int main()
{
    int v[10];
    int i, k, soma = 0;

    printf("\n Informe os elementos do vetor: \n");

    for (i = 0; i < 10; i++)
    {
        printf("\n v = ");
        scanf("%i", &v[i]);
    }

    printf("\n Os elementos do vetor v sao: \n");

    for (i = 0; i < 10; i++)
    {
        printf("%i\t", v[i]);
    }

    printf("\n\n Informe o valor de referencia k: ");
    scanf("%i", &k);

    printf("\n\n Soma dos elementos do vetor maiores que k.\n");

    for (i = 0; i < 10; i++)
    {
        if (v[i] > k)
        {
            soma = soma + v[i];
        }
    }
    
    printf("\n Soma = %i\n", soma);

    printf("\n Substituicao dos valores pares do vetor por -1.\n");

    for (i = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0)
        {
            v[i] = -1;
        }  
    }

    printf("\n Valores do vetor v apos substituicao: \n");

    for (i = 0; i < 10; i++)
    {
        printf("%i\t", v[i]);
    }

    return 0;
}