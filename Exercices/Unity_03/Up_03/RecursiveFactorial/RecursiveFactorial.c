#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

/*************************************************/

int main()
{
    int num;

    printf("\n Digite um numero: ");
    scanf("%i", &num);

    if (num >= 0)
    {
        printf("\n %i = %d \n", num, factorial(num));
    }
    else
    {
        printf("\nNumero invalido!\n");
    }
    
    return 0;
}