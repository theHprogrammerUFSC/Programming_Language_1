#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n -1) + fibonacci(n-2);
}

/***********************************************/

int main()
{
    int i, num;

    printf("\n Quantos numeros da serie Fibonacci devem ser gerados? ");
    scanf("%i", &num);

    if (num >= 0)
    {
        for (i = 0; i < num; i++)
        {
            printf(" %i ", fibonacci(i));
        }
    }
    else
    {
        printf("\n Numero Invalido!\n");
    }
    
    return 0;
}