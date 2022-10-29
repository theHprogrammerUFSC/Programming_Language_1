#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Windows: Sleep()
#include <windows.h>
#include <unistd.h>

int main()
{
    unsigned int seed;
    int i, j, n, r;

    printf("\n Geracao de numeros aleatorios de 1 ate 6. \n");
    printf("\n_____Funcao RAND (numeros pseudo aleatorios)_____\n");

    for (i = 1; i <= 10; i++)
    {
        n = 1 + rand() % 6;
        printf("%i  ", n);
    }
    
/*************************************************************************************************/

    printf("\n _____Funcao SRAND (numeros aleatorios)_____\n");

    seed = 1;

    while (seed != 0)
    {
        printf("\n Digite numero inteiro ou 0 para sair.");
        scanf("%u", &seed);

        if (seed != 0)
        {
            srand(seed);

            for (i = 1; i <= 10; i++)
            {
                n = 1 + rand() % 6;
                printf("%i  ", n);
            } 
        } 
    }

/*************************************************************************************************/

    printf("\n _____Funcao SRAND + TIME (numeros aleatorios)_____\n");
    printf("\n Digite quantas sequencias de numeros aleatorios devem ser geradas ");
    scanf("%d", &r);

    for (j = 1; j <= r; j++)
    {
        printf("\n Sequencia %i \n", j);
        srand(time(NULL));
        //getchar();    //Espera um sinal de teclado.

        for (i = 1; i <= 10; i++)
        {
            n = 1 + rand() % 6;
            printf("%i  ", n);
        }
        // Esperar por 2 segundos.

        //sleep(2); //LINUX

        Sleep(2000); //Windows.
        //getchar();
    }

    return 0;
}