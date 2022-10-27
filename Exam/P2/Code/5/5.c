#include <stdio.h>
#include <stdlib.h>

int counter_par(int **v, int n);

int main()
{
    int **APtr;
    int i, j, m;
    int *bPtr, size_b = 0, k = 0;
    int *cPtr, maior;

    printf("\n Informe o tamanho (m) da Matriz A mxm: ");
    scanf("%i", &m);

    // Alocação de memoria para as linhas.
    APtr = (int**) malloc(m*sizeof(int*));

    printf("\n\n Entrada de Dados: \n");
    for (i = 0; i < m; i++)
    {
        // Alocação de memoria para as colunas.
        APtr[i] = (int*) malloc(m*sizeof(int));
        for (j = 0; j < m; j++)
        {
            printf("A[%i][%i] = ", i, j);
            scanf("%i", &APtr[i][j]);
        }
    }

//------------------------------------------------------------------

    size_b = counter_par(APtr, m);

    // Alocação dinâmica para o Vetor b
    bPtr = (int*) malloc(size_b*sizeof(int));

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                bPtr[k] = APtr[i][j];
                k++;
            }
        }
    }

//------------------------------------------------------------------

    cPtr = (int*) malloc(m*sizeof(int));

    for (i = 0; i < m; i++)
    {
        maior = APtr[i][0];
        for (j = 0; j < m; j++)
        {
            if (APtr[i][j] > maior)
            {
                maior = APtr[i][j];
            }
        }
    cPtr[i] = maior;
    }
    

//------------------------------------------------------------------

    printf("\n\n Vetor A: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%5d ", APtr[i][j]);
        }
    printf("\n");
    }

    printf("\n Vetor b: ");
    for (i = 0; i < size_b; i++)
    {
        printf("%i ", bPtr[i]);
    }

    printf("\n\n Vetor c: ");
    for (i = 0; i < m; i++)
    {
        printf("%i ", cPtr[i]);
    }

    free(APtr);
    free(bPtr);
    free(cPtr);
    return 0;
}

// Contador para o vetor b
int counter_par(int **v, int n)
{
    int i, j, counter = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                counter++;
            }
        }
    }

    return counter;
}