#include <stdio.h>
#include <stdlib.h>

// Functions

int count(int *v, int n, int k);

// Main

int main()
{
    int a[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int k;

    printf("\n Informe um valor para verificar quantas vezes ele aparece no vetor: ");
    scanf("%i", &k);

    printf("\n O valor %i aparece %i vezes no vetor a. \n", k, count(a, 10, k));

    return 0;
}

// Verifica quantas vezes um valor aparece em um vetor

int count(int *v, int n, int k)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] == k)
        {
            count++;
        }
    }

    return count;
}