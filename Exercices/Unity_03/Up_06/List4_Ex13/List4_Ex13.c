#include <stdio.h>
#include <stdlib.h>

//  Functions

void printMatriz(int **v, int m, int n);

// Main

int main()
{
    int **aPtr, **bPtr;
    int i, j, m, n;

    printf("\n Informe a quantidade de linhas: ");
    scanf("%i", &m);

    printf("\n Informe a quantidade de colunas: ");
    scanf("%i", &n);

    // Alocação da Matria a
    printf("\n Elementos da Matriz a \n");

    // Alocação das linhas
    aPtr = (int**) malloc(m*sizeof(int*));

    for (i = 0; i < m; i++)
    {
        // Alocação das colunas
        aPtr[i] = (int*) malloc(n*sizeof(int));
        for (j = 0; j < n; j++)
        {
            printf("a[%i][%i] = ", i, j);
            scanf("%d", &aPtr[i][j]);
        }
    }

    // Alocação da Matria b
    printf("\n Matriz b, transposta de a \n");

    // Alocação das linhas
    bPtr = (int**) malloc(n*sizeof(int*));

    for (i = 0; i < n; i++)
    {
        // Alocação das colunas
        bPtr[i] = (int*) malloc(m*sizeof(int));
        for (j = 0; j < m; j++)
        {
            bPtr[i][j] = aPtr[j][i];
        }
    }

    // Saída de dados
    printf("\n    Matriz a    \n");
    printMatriz(aPtr, m, n);

    printf("\n    Matriz b    \n");
    printMatriz(bPtr, n, m);

    free(aPtr);
    free(bPtr);

    return 0;
}

// Imprime uma Matriz
void printMatriz(int **v, int m, int n)
{
    int i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("    %i", v[i][j]);
        }
    printf("\n");
    }

    return;
}