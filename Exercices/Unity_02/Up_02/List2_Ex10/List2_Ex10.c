#include<stdio.h>

int main()
{
    const int line = 3, colun = 3;
    float A[line][colun];
    int i, j;
    float detA;

    printf("\n Determinante.\n");

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

    detA = (A[0][0] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][0]) + (A[1][0] * A[2][1] * A[0][2]) -
           (A[0][2] * A[1][1] * A[2][0]) - (A[0][1] * A[1][0] * A[2][2]) - (A[1][2] * A[2][1] * A[0][0]);

    printf("\n Determinante da matriz A = %.2f ", detA);

    return 0;
}