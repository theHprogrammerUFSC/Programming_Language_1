#include<stdio.h>

int main()
{
    const int line = 3, colun = 3;
    float A[line][colun];
    float B[line][colun];
    float C[line][colun];
    int i, j;
    float media = 0, total = 0, counter = 0;

    printf("\n Elemento maximo de uma matriz 3x3.\n");

    printf("\n Informe os elementos da matriz A: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("\n A[%i][%i] = ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("\n        Matriz A: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("%.2f\t", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            total+= A[i][j];
            counter++;
        }
    }

    media = total/counter;

    printf("\n Media = %.2f \n", media);

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            if (A[i][j] > media)
            {
                B[i][j] = A[i][j];
            }
            else
            {
                B[i][j] = 0;
            }
        }
    }

    printf("\n        Matriz B: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("%.2f\t", B[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            C[j][i] = A[i][j];
        }
    }

    printf("\n        Matriz C: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("%.2f\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}