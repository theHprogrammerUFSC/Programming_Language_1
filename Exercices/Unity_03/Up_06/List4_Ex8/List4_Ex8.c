#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Functions

int reverse(int n, int rev);

// Main

int main()
{
    int N, result;

    printf("\n Programa que recebe um numero e inverte a ordem de seus digitos. \n");

    printf("\n Informe um numero: ");
    scanf("%i", &N);

    result = reverse(N, 0);

    printf("\n Numero invertido = %i", result);



    return 0;
}

int reverse(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    else
    {
        return reverse (n / 10, rev * 10 + n % 10);
    }
}

/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Functions

int reverse(int n);

// Main

int main()
{
    int N;

    printf("\n Programa que recebe um numero e inverte a ordem de seus digitos. \n");

    printf("\n Informe um numero: ");
    scanf("%i", &N);

    printf("\n\n Numero informado = %i ", N);

    printf("\n Numero invertido = ");

    reverse(N);


    return 0;
}

int reverse(int n)
{
    if (n == 0)
    {
        return n;
    }
    else
    {
        printf("%d", n % 10);
        n = n / 10;
        return reverse(n);
    }

    return 0;
}
*/