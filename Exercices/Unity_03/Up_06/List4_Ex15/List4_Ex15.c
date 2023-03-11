#include <stdio.h>
#include <stdlib.h>

//  Functions

void printMatriz(int **v, int m, int n);
void printVetor(int *v, int n);
int contadorpar(int **v, int m, int n);

// Main

int main()
{
    int **aPtr, *bPtr;
    int i, j, m, n, counterpar = 0, k;

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

    // Alocação do vetor b

    counterpar = contadorpar(aPtr, m, n);

    // Alocação das linhas
    bPtr = (int*) malloc(counterpar*sizeof(int));

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (aPtr[i][j] % 2 == 0)
            {
                bPtr[k] = aPtr[i][j];
                k++;
            }
        }
    }

    // Saída de dados
    printf("\n    Matriz a    \n");
    printMatriz(aPtr, m, n);

    printf("\n Vetor b = ");
    printVetor(bPtr, counterpar);

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

// Conta quantos elementos pares tem na matriz
int contadorpar(int **v, int m, int n)
{
    int i, j, counter = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (v[i][j] % 2 == 0)
            {
                counter++;
            }
        }
    }

    return counter;
}

// Imprime um vetor
void printVetor(int *v, int n)
{
    int i;

    for ( i = 0; i < n; i++)
    {
        printf("%i ", v[i]);
    }

    return;
}