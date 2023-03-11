#include<stdio.h>

int main()
{
    float n[11];
    float maior, menor;
    int posmaior, posmenor;
    float average, soma;
    int i;

    soma = 0;
    maior = 0;
    menor = 0;
    posmaior = 0;
    posmenor = 0;

    printf("\n Vetor de 10 elementos. \n");
    printf("\n Media dos elementos, maior e menor valor e suas respectivas posicoes. \n");

    for (i = 1; i < 11; i++)
    {
        printf("\n Vetor: %i elemento = ", i);
        scanf("%f", &n[i]);

        if (i == 1)
        {
            maior = n[i];
            menor = n[i];
            posmaior = i;
            posmenor = i;
            
        }
        if (n[i] > maior)
        {
            maior = n[i];
            posmaior = i;
        }
        else if (n[i] < menor)
        {
            menor = n[i];
            posmenor = i;
        }

        soma+= n[i];

    }

    average = soma/10;

    printf("\n Media dos elementos: %.2f \n", average);

    printf("\n O maior valor e: %.2f \n", maior);
    printf("\n A posicao do maior valor e: %i \n", posmaior);

    printf("\n O menor valor e: %.2f \n", menor);
    printf("\n A posicao do menor valor e: %i \n", posmenor);

    return 0;
}