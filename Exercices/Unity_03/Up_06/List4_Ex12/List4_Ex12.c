#include <stdio.h>
#include <stdlib.h>

//  Functions

void printVetor(int v[], int n);
int contadorpar(int x[], int y[], int n, int m);

// Main

int main()
{
    int *aPtr, *bPtr, *cPtr;
    int size_a, size_b, size_c;
    int i, j = 0, k = 0;

    // Alocando o vetor a.
    printf("\n Informe o tamanho do vetor a: ");
    scanf("%i", &size_a);

    aPtr = (int*) malloc(size_a*sizeof(int));

    printf("\n Elementos do vetor a. \n");
    for (i = 0; i < size_a; i++)
    {
        printf("\n a[%i] = ", i);
        scanf("%i", &aPtr[i]);
    }

    // Alocando o vetor b.
    printf("\n Informe o tamanho do vetor b: ");
    scanf("%i", &size_b);

    bPtr = (int*) malloc(size_b*sizeof(int));

    printf("\n Elementos do vetor a. \n");
    for (i = 0; i < size_b; i++)
    {
        printf("\n b[%i] = ", i);
        scanf("%i", &bPtr[i]);
    }

    // Alocando o vetor c
    size_c = contadorpar(aPtr, bPtr, size_a, size_b);

    cPtr = (int*) malloc(size_c*sizeof(int));

    for (i = 0; i < size_a; i++)
    {
        if (aPtr[i] % 2 == 0)
        {
            cPtr[j] = aPtr[i];
            j++;
        }
    }

    k = j;

    for (i = 0; i < size_b; i++)
    {
        if (bPtr[i] % 2 == 0)
        {
            cPtr[k] = bPtr[i];
            k++;
        }
    }

    // Saída de dados
    printf("\n\n Vetor a = ");
    printVetor(aPtr, size_a);

    printf(" Vetor b = ");
    printVetor(bPtr, size_b);

    printf(" Vetor c = ");
    printVetor(cPtr, size_c);

    free(aPtr);
    free(bPtr);
    free(cPtr);

    return 0;
}

//Imprime o Vetor

void printVetor(int v[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%i  ", v[i]);
    }
    printf("\n\n");

    return;
}

// Conta a quantidade de elementos pares no vetor

int contadorpar(int x[], int y[], int n, int m)
{
    int i, j, counterpar_a = 0, counterpar_b = 0;

    for (i = 0; i < n; i++)
    {
        if (x[i] % 2 == 0)
        {
            counterpar_a++;
        }
    }

    for (j = 0; j < m; j++)
    {
        if (y[j] % 2 == 0)
        {
            counterpar_b++;
        }
    }

    return counterpar_a + counterpar_b;
}