#include <stdio.h>
#include <stdlib.h>
#define N 10

// Functions

int inVet(int v[], int n, int num);
void printVet(int v[], int n);

// Main

int main()
{
    int n[N] = {7, 8, 1, 0, 8, 0, 7, 5, 6, 7};
    int cp[N] = {0};
    int i, k, l;
    int flag;

    printVet(n, N);

    l = 0;  // índice auxiliar do vetor cp

    for (i = 0; i < N; i++)
    {
        for (k = i + 1; k < N; k++)
        {
            if (n[i] == n[k])   // verifica se o valor se repete no vetor n
            {
                flag = inVet(cp, l, n[i]);  // se o valor já foi inserido no vetor cp
                if (flag == 0)  //se o valor ainda não foi inserido - inserir no vetor
                {
                    cp[l] = n[i];   // inserir o valor duplicado no vetor
                    l++;
                }
            } 
        }
    }

    printf("\n\n");
    
    printVet(cp, l);

    return 0;
}

int inVet(int v[], int n, int num)
{
    int i, f = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] == num)
        {
            f++;
        }
    }

    return f;
}

void printVet(int v[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\t %i", v[i]);
    }

    return;
}