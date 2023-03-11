#include <stdio.h>
#include <stdlib.h>

//  Functions

void printMatriz(int **v, int m, int n);

// Main

int main()
{
    int **aPtr;
    int i, j, m, n, maior, linha, coluna;

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

    //Maior elemento e sua respectiva linha e coluna
    maior = aPtr[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (aPtr[i][j] > maior)
            {
                maior = aPtr[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    // Saída de dados
    printf("\n    Matriz a    \n");
    printMatriz(aPtr, m, n);

    printf("\n");
    printf("\n Maior elemento da matriz = %i", maior);
    printf("\n Linha do maior elemento = %i", linha);
    printf("\n Coluna do maior elemento = %i", coluna);

    free(aPtr);

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