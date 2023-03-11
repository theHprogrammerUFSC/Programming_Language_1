#include <stdio.h>
#include <stdlib.h>

// Functions

int msum(int v[], int n);
int maxv(int v[], int n);
int minv(int v[], int n);

// Main

int main()
{
    int a[10] = {1, 2, -3, -4, 5, 6, -7, -8, 9, 10};

    printf("\n Maior elemento do vetor = %i\n", maxv(a, 10));

    printf("\n Menor elemento do vetor = %i\n", minv(a, 10));

    printf("\n Soma do maior e menor elemento do vetor = %i\n", msum(a, 10));

    return 0;
}

// Soma do maior e menor elemento de um vetor

int msum(int v[], int n)
{
    int max, min;

    max = maxv(v, n);

    min = minv(v, n);

    return max + min;
}

int maxv(int v[], int n)
{
    int i, max;

    max = v[0];
    for (i = 0; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }

    return max;
}

int minv(int v[], int n)
{
    int i, min;

    min = v[0];
    for (i = 0; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }

    return min;
}