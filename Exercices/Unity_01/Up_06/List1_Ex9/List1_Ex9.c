#include<stdio.h>

int main()
{
    int soma;
    int N;

    printf("\n Soma de numeros inteiros positivos pares. \n");
    printf("\n Digite um numero negativo para sair do programa (Ex: -1). \n");

    N = 0;
    soma = 0;

    while (N >= 0)
    {
        printf("\n N = ");
        scanf("%i", &N);

        if ((N >= 0) && (N % 2 == 0))
        {
            soma+= N;
        }
    }
    
    printf("\n Soma = %i \n", soma);
    
    return 0;
}

/*    do
    {
        printf("\n N = ");
        scanf("%i", &N);

        if (N <= -1)
        {
            break;
        }
        else if (N % 2 == 0)
        {
            soma+= N;

        }        
    } while (1);

    printf("\n Soma = %i \n", soma);*/