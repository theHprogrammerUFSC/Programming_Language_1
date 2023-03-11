#include<stdio.h>

int main()
{
    const int m = 4, n = 2, q = 3;
    int A[m][n];
    int B[n][q];
    int C[m][q];
    int i, j, r;

    printf("\n Produto de matriz: A4x2 . B2x3 = C4x3\n ");

    printf("\n Informe os elementos da matriz A: \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\n A[%i][%i] = ", i, j);
            scanf("%i", &A[i][j]);
        } 
    }

    printf("\n Informe os elementos da matriz B: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("\n B[%i][%i] = ", i, j);
            scanf("%i", &B[i][j]);
        } 
    }

    printf("\n\t Matriz A: \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%i", A[i][j]);
        }
        printf("\n");
    }

    printf("\n\t Matriz B: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("\t%i", B[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            C[i][j] = 0;
        } 
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (r = 0; r < n; r++)
            {
                C[i][j]+= A[i][r] * B[r][j];
            }
        } 
    }

    printf("\n\t Matriz C: \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("\t%i", C[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}