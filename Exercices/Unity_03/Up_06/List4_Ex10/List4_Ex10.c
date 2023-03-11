#include <stdio.h>
#include <stdlib.h>

#define N 15

// Functions

int contadorpositivo(int v[], int n);
void printVetor(int v[], int n);

// Main

int main()
{
    int a[N] = {1, -2, -1, -2, -3, -4, -3, 4, -5, -6, -5, -6, -7, -8, 7};
    int *bPtr, counter, i, j = 0;

    counter = contadorpositivo(a, N);

    bPtr = (int*) malloc(counter*sizeof(int));

for (i = 0; i < N; i++)
{
    if (a[i] >= 0)
    {
        bPtr[j] = a[i];
        j++;
    }
    
}

    printf("\n Vetor a = ");
    printVetor(a, N);

    printf("\n\n Vetor b = ");
    printVetor(bPtr, counter);

    free(bPtr);

    return 0;
}

// Verifica quantos elementos positivos existem em a[]

int contadorpositivo(int v[], int n)
{
    int i, counter = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] >= 0)
        {
            counter++;
        }
    }

    return counter;
}

void printVetor(int v[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%i  ", v[i]);
    }
    if (n == 0)
    {
        printf("NULL");
    }
    

    return;
}