#include<stdio.h>

int main()
{
    int counter;                                                        //Contador.

    /*******************************************************************************/

    counter = 0;                                                        //Inicialização.
    printf("\n Contador com incremento no corpo.\n");

    while (counter <= 10)
    {
        printf("\n counter = %i ", counter);
        ++counter;
    }

    /*******************************************************************************/

    counter = 10;                                                        //Inicialização.
    printf("\n Contador com incremento no corpo.\n");

    while (counter >= 0)
    {
        printf("\n counter = %i ", counter);
        counter-= 2;
    }

    /*******************************************************************************/

    counter = 0;                                                        //Inicialização.
    printf("\n Contador com incremento na condicao.\n");

    while (counter++ <= 10)
    {
        printf("\n counter = %i ", counter);
    }

    /*******************************************************************************/

    counter = 10;                                                        //Inicialização.
    printf("\n Contador com incremento na condicao.\n");

    while (--counter >= 0)
    {
        printf("\n counter = %i ", counter);
    }
    
    return 0;
}