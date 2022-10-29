#include<stdio.h>
#include<math.h>

/************************************************************/

int  main()
{
    //Variáveis locais
    int i;

    printf("\n O programa retorna n * n * n, [0...10] \n");

    for (i = 0; i <= 10; i++)
    {
        printf("\n %i elevado ao cubo = %.0f \n", i, pow(i, 3));
    }

    return 0;
}