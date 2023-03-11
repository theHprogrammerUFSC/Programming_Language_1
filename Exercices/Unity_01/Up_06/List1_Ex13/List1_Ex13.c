#include<stdio.h>

int main()
{
    int n, i = 0;
    int menor = 0;

    printf("\n Menor numero impar\n");

    do
    {
        printf("\n Digite um numero diferente de 0: ");
        scanf("%i", &n);

        if (i == 0)
        {
            menor = n;
            i++;
        }
        
        
        if ((n < menor) && (n % 2 != 0) && (n != 0))

        {
            menor = n;
        }

    } while (n != 0);

    printf("\n Menor numero impar = %i \n", menor);
    
    return 0;


    // Modo com informação de digitos pelo usuário.
     /*   printf("\n Digite a quantidade de numeros que deseja informar. \n");
    scanf("%i", &nvr);

    for (i = 0; i < nvr; i++)
    {
        printf("\n Digite um numero: ");
        scanf("%i", &n);

        if (n % 2 != 0)
        {
            menor = n;
        }
        
        if ((n < menor) && (n % 2 != 0))

        {
            menor = n;
        }
    }
    
    printf("\n Menor numero impar = %i \n", menor);*/
}