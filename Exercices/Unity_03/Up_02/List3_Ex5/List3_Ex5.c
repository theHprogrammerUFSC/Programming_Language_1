#include <stdio.h>
#include <math.h>

//Functions

int reverse(int n);

//Main

int main()
{
    int N;

    printf("\n Programa que recebe um numero e inverte a ordem de seus digitos. \n");

    printf("\n Informe um numero: ");
    scanf("%i", &N);

    printf("\n\n Numero informado = %i ", N);
    printf("\n Numero invertido = %i ", reverse(N));

    return 0;
}

int reverse(int n)
{
    int resto = 0, inverso = 0;

        while (n != 0)
        {
            resto = n % 10;
            inverso = inverso * 10 + resto;
            n = n / 10;
        }
        
    return inverso;
}