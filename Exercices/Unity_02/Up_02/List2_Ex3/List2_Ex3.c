#include<stdio.h>

int main()
{
    int v[10];
    int somapar, somaelemento, i;

    printf("\n Soma dos elementos pares e dos elementos que estao na posicao par\n");

    somapar = 0;
    somaelemento = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\n Digite o %i elemento do vetor: ", i);
        scanf("%i", &v[i]);

        if (v[i] % 2 == 0)
        {
            somapar+= v[i];
        }
        if (i % 2 == 0)
        {
            somaelemento+= v[i];
        }
    }
    
    printf("\n Soma dos elementos pares do vetor: %i \n", somapar);
    printf("\n Soma dos elementos em posicao par: %i \n", somaelemento);
        
    return 0;
}