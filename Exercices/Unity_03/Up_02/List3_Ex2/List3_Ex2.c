#include <stdio.h>

int fatorial(int N);                //Função para calcular um número fatorial.

int main()
{
    int number;

    printf("\n Informe o numero para calcular seu fatorial: ");
    scanf("%i", &number);

    if (number >= 0)
    {
        printf("\n %i! = %i", number, fatorial(number));
    }
    else
    {
        printf("\n Numero invalido. \n");
    }
    
    return 0;
}

/*******************************************************************************/

int fatorial(int N)
{
    int result = N;

    if ( N <= 1)
    {
        return 1;
    }
    while (N > 1)
    {
        result = result * (N - 1);
        N--;
    }
    
    return result;   
}