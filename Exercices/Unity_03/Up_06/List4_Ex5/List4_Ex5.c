#include <stdio.h>
#include <stdlib.h>

// Functions

void substitui(int v1[], int v2[], int m, int n);
int menorvetor(int v[], int n);

// Main

int main()
{
    int a[10] = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5};
    int b[5] = {10, 20, 30, 40, -10};
    int i, j;

    for (i = 0; i < 10; i++)
    {
        printf("\t a[%i] = %i", i, a[i]);
    }
    printf("\n\n");

    for (j = 0; j < 5; j++)
    {
        printf("\t b[%i] = %i", i, b[j]);
    }
    printf("\n\n");

    substitui(a, b, 10, 5);

    return 0;
}

// Substitui todos os elementos negativos do vetor a pelo valor
// do maior elemento do vetor b.

void substitui(int v1[], int v2[], int m, int n)
{
    int i;

    for (i = 0; i < m; i++)
    {
        if ((v1[i] % 2) != 0)
        {
            v1[i] = menorvetor(v2, n);
        }
    }

    for (i = 0; i < m; i++)
    {
        printf("\t a[%i] = %i", i, v1[i]);
    }


    return;
}

int menorvetor(int v[], int n)
{
    int i, menor;

    menor = v[0];
    for (i = 0; i < n; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
        }
    }

    return menor;
}