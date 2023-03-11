#include <stdio.h>>

/*Functions*/

int numMin(int n1, int n2);

/*Main*/

int main()
{
    int n1, n2, i, repeat;

    printf("\n Programa que informa o menor valor de pares de numeros informados. \n");

    printf("\n Informe a quantidade de repeticoes a serem analisadas: ");
    scanf("%i", &repeat);

    for (i = 0; i < repeat; i++)
    {
        printf("\n Informe um par de numeros: \n");

        printf(" ");
        scanf("%i", &n1);
        printf(" ");
        scanf("%i", &n2);

        printf("\n Menor valor = %i\n", numMin(n1, n2));
    }
    
    
    return 0;
}

/*Function Resolution*/

int numMin(int n1, int n2)
{
    int menor;

    if (n1 > n2)
    {
        menor = n2;
    }
    else
    {
        menor = n1;
    }
    
    return menor;
}
