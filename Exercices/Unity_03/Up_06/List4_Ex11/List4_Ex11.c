#include <stdio.h>
#include <stdlib.h>

// Functions

void printVetor(int v[], int n);
int contadorpar(int v[], int n);
int contadorpositivo(int v[], int n);

// Main

int main()
{
    int *aPtr, *bPtr, *cPtr;
    int size_a, size_b, size_c;
    int i, j = 0, k = 0;

    printf("\n Informe a quantidade de elementos para o vetor a: ");
    scanf("%i", &size_a);

    //  Alocação de memória para o vetor a.
    aPtr = (int*) malloc(size_a*sizeof(int));

    printf("\n Informe os elementos do vetor a. \n");

    // Entrada de dados para o vetor a.
    for (i = 0; i < size_a; i++)
    {
        printf("\n a[%i] = ", i);
        scanf("%i", &aPtr[i]);
    }

    // Alocação de memória para os vetores b e c.
    size_b = contadorpar(aPtr, size_a);
    size_c = contadorpositivo(aPtr, size_a);

    bPtr = (int*) malloc(size_a*sizeof(int));
    cPtr = (int*) malloc(size_a*sizeof(int));

    //Determinando o vetor b
    for (i = 0; i < size_a; i++)
    {
        if (aPtr[i] % 2 == 0)
        {
            bPtr[j] = aPtr[i];
            j++;
        }
    }

    //Determinando o vetor c
    for (i = 0; i < size_a; i++)
    {
        if (aPtr[i] >= 0)
        {
            cPtr[k] = aPtr[i];
            k++;
        }
    }

// Saída de dados

    printf("\n\n Vetor a = ");
    printVetor(aPtr, size_a);
    printf("\n Vetor b = ");
    printVetor(bPtr, size_b);
    printf("\n Vetor c = ");
    printVetor(cPtr, size_c);

    free(aPtr);
    free(bPtr);
    free(cPtr);

    return 0;
}

//  Contagem dos elementos pares

int contadorpar(int v[], int n)
{
    int i, counterpar = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            counterpar++;
        }
    }

    return counterpar;
}

//  Contagem dos elementos positivos

int contadorpositivo(int v[], int n)
{
    int i, counterpositivo = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] >= 0)
        {
            counterpositivo++;
        }
    }

    return counterpositivo;
}

// Imprime vetor

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