#include <stdio.h>
#include <stdlib.h>

// Functions

float minv(float v[], int n);
float sumv(float *v, int n);
float meanv(float v[], int n);

// Main

int main()
{
    float a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -1};
    float b[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -1, 11, 12, 13, 14, 15};

    printf("\n Para o vetor a: \n");

    printf("\n Menor valor do vetor a = %.2f", minv(a, 10));
    printf("\n Soma dos elementos do vetor a = %.2f", sumv(a, 10));
    printf("\n Valor medio dos elementos do vetor a = %.2f \n", meanv(a, 10));

    printf("\n Para o vetor b: \n");

    printf("\n Menor valor do vetor b = %.2f", minv(b, 15));
    printf("\n Soma dos elementos do vetor b = %.2f", sumv(b, 15));
    printf("\n Valor medio dos elementos do vetor b = %.2f \n", meanv(b, 15));

    return 0;
}

// Achar o menor elemento do vetor

float minv(float v[], int n)
{
    int i;
    float menor;

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

// Achar a soma dos elementos do vetor

float sumv(float *v, int n)
{
    int  i;
    float sum = 0;

    for (i = 0; i < n; i++)
    {
        sum+= v[i];
    }

    return sum;
}

// Achar a média dos elementos do vetor

float meanv(float v[], int n)
{
    int i;
    float total = 0, mean = 0;

    for (i = 0; i < n; i++)
    {
        total+= v[i];
    }

    mean = total / n;    

    return mean;
}