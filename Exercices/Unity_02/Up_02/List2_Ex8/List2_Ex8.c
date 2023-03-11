#include<stdio.h>

int main()
{
    const int line = 4, colun = 4;
    int A[line][colun];
    int i, j, pl, pc;
    int max = 0;

    printf("\n Elemento maximo de uma matriz 4x4.\n");

    printf("\n Informe os elementos da matriz A: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("\n A[%i][%i] = ", i, j);
            scanf("%i", &A[i][j]);
        }
    }

    printf("\n        Matriz A: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("%i\t", A[i][j]);
        }
        printf("\n");
        }

    max = A[0][0];

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            if (A[i][j] >= max)
            {
                max = A[i][j];
                pl = i;
                pc = j;
            }   
        }
    }
    printf("\n");

    printf("Elemento maximo = %i, Posicao: [%i][%i]", max, pl, pc);

    return 0;
}