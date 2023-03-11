#include <stdio.h>
#include <stdlib.h>

// Functions

void substitui(int v[], int n, int maior);
int maiorvetor(int v[], int n);

// Main

int main()
{
    int a[10] = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5};
    int b[5] = {10, 20, 30, 40, 50};
    int maior, i;

    for (i = 0; i < 10; i++)
    {
        printf("\t a[%i] = %i", i, a[i]);
    }
    printf("\n\n");

        for (i = 0; i < 5; i++)
    {
        printf("\t b[%i] = %i", i, b[i]);
    }
    printf("\n\n");

    maior = maiorvetor(b, 5);

    substitui(a, 10, maior);

    return 0;
}

// Substitui todos os elementos negativos do vetor a pelo valor
// do maior elemento do vetor b.

void substitui(int v[], int n, int maior)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            v[i] = maior;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("\t a[%i] = %i", i, v[i]);
    }

    return;
}

int maiorvetor(int v[], int n)
{
    int i, maior;

    maior = v[0];
    for (i = 0; i < n; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
    }

    return maior;
}