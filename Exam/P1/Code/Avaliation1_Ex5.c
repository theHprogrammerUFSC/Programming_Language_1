#include<stdio.h>

int main()
{
    //Declaração de variaveis:

    const int line = 3, colun = 3;
    int A[line][colun], B[line][colun], C[line][colun];
    int i, j;
    int countparA = 0, countparB = 0;


    //Declarações iniciais:
    //Declaração da Matriz A:

    printf("\n Informe os elementos da Matriz A 3x3: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("\n A[%i][%i] = ", i, j);
            scanf("%i", &A[i][j]);
        }  
    }
    printf("\n");

    //Declaração da Matriz B:

    printf("\n Informe os elementos da Matriz B 3x3: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("\n B[%i][%i] = ", i, j);
            scanf("%i", &B[i][j]);
        }  
    }
    printf("\n");

    //Saída Matriz A:

    printf("\n Matriz A 3x3: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("%i\t", A[i][j]);
        } 
        printf("\n");
    }

    //Saída Matriz A:

    printf("\n Matriz B 3x3: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("%i\t", B[i][j]);
        } 
        printf("\n");
    }

    //Parte (a) da questão.

    //Declaração da Matriz C:


    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            C[i][j] = 0;
        }  
    }

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            if (A[i][j] >= B[i][j])
            {
                C[i][j] = A[i][j];
            }
            else
            {
                C[i][j] = B[i][j];
            } 
        }  
    }

    //Saída Matriz C:

    printf("\n Matriz C 3x3: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("%i\t", C[i][j]);
        } 
        printf("\n");
    }

    //Parte (b) da questão.

    printf("\n Elementos pares de cada Matriz: \n");


    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            if (A[i][j] % 2 == 0)
            {
                countparA++;
            } 
        }  
    }

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            if (B[i][j] % 2 == 0)
            {
                countparB++;
            } 
        }  
    }

    printf("\n Quantidade de elementos pares da matriz A e igual a %i.\n", countparA);
    printf("\n Quantidade de elementos pares da matriz B e igual a %i.\n", countparB);

    if (countparA == countparB)
    {
        printf("\n As matrizes possuem a mesma quantidade de elementos pares.\n");
    }
    else if (countparA > countparB)
    {
        printf("\n A matriz A contem mais elementos pares que a matriz B.\n");
    }
    else if (countparB > countparA)
    {
        printf("\n A matriz B contem mais elementos pares que a matriz N.\n");
    }
   
    return 0;
}