#include <stdio.h>
#include <stdlib.h>

// Functions

int impar(int *v, int n);
int sump(int v[], int n);

// Main

int main()
{
    int a[10] = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5};
    int v_imp, sum_vp;

    v_imp = impar(a, 10);

    sum_vp = sump(a, 10);

    printf("\n Quantidade de elementos impares do vetor = %i \n", v_imp);
    printf("\n Soma dos elementos positivos do vetor = %i \n", sum_vp);

    return 0;
}

// Retorna a quantidade elementos imapres de um vetor

int impar(int *v, int n)
{
    int i, counterimp = 0;

    for (i = 0; i < n; i++)
    {
        if ((v[i] % 2) != 0)
        {
            counterimp++;
        }
    }

    return counterimp;
}

// Retorna a soma dos elementos positivos de um vetor

int sump(int v[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] >= 0)
        {
            sum+= v[i];
        }
    }

    return sum;
}