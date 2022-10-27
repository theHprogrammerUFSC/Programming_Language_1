#include <stdio.h>
#include <stdlib.h>

void printl(int v[], int n);
int counter_odd(int v[], int n);
int counter_maior_k(int v[], int n, int m);

int main()
{
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *bPtr;
    int *cPtr;
    int i1, i2, k, counterodd = 0, countermaiork = 0, j = 0, l = 0;

    printf("\n\n Quastao 4 da autoavalicao: \n");

    printf("\n a = ");
    printl(a, 15);

    counterodd = counter_odd(a, 15);

    //Alocação Dinamica para o vetor b
    bPtr = (int*) malloc(counterodd*sizeof(int));

    for (i1 = 0; i1 < 15; i1++)
    {
        if (a[i1] % 2 != 0)
        {
            bPtr[j] = a[i1];
            j++;
        }
    }

    printf("\n b = ");
    printl(bPtr, counterodd);

    printf("\n Elementos do vetor b maiores que k: \n");
    printf("\n Informe k: ");
    scanf("%i", &k);

    countermaiork = counter_maior_k(bPtr, counterodd, k);

    if (countermaiork >= 1)
    {
        //Alocação Dinamica para o vetor c
        cPtr = (int*) malloc(countermaiork*sizeof(int));

        for (i2 = 0; i2 < counterodd; i2++)
        {
            if (bPtr[i2] > k)
            {
                cPtr[l] = bPtr[i2];
                l++;
            }
        }

        printf("\n c = ");
        printl(cPtr, countermaiork);
    }
    else
    {
        printf("\n Nao ha elementos no vetor b maior que o valor k = %i. \n", k);
    }

    return 0;
}

void printl(int v[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%i ", v[i]);
    }

    printf("\n\n");

    return;
}

int counter_odd(int v[], int n)
{
    int j, counter = 0;

    for (j = 0; j < n; j++)
    {
        if (v[j] % 2 != 0)
        {
            counter++;
        }
    }

    return counter;
}

int counter_maior_k(int v[], int n, int m)
{
        int l, counterk = 0;

    for (l = 0; l < n; l++)
    {
        if (v[l] > m)
        {
            counterk++;
        }
    }

    return counterk;
}