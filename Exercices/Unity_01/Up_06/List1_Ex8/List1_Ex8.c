#include<stdio.h>

int main()
{
    int contador;
    int N;
    int max, min;

    printf("\n Informe um numero positivo para continuar ou um numero negativo para sair do programa. \n");

    max = 0;
    min = 0;
    N = 0;
    contador = 0;

    do
    {
        printf("\n N = ");
        scanf("%i", &N);

        if (contador == 0)
        {
            max = N;
            min = N;
            contador++;
        }
        else if (N <= -1)
        {
            break;
        }
        else if (N > max)
        {
            max = N;
        }
        else if ((N < min) && (N >= 0))
        {
            min = N;
        }              
    } while (N >= 0);

    printf("\n Maior numero fornecido: %i \n", max);
    printf("\n Menor numero fornecido: %i \n", min);

    return 0;
}

    /*do
    {
        printf("\n N = ");
        scanf("%i", &N);

        if (contador == 0)
        {
            max = N;
            min = N;
            contador++;
        }
        else if (N <= -1)
        {
            break;
        }
        else if (N > max)
        {
            max = N;
        }
        else if (N < min)
        {
            min = N;
        }              
    } while (1);

    printf("\n Maior numero fornecido: %i \n", max);
    printf("\n Menor numero fornecido: %i \n", min);*/