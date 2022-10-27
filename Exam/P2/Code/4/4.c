#include <stdio.h>
#include <stdlib.h>

void printvector(int v[], int n);
int counterc(int v[], int n);

#define N 12

int main()
{
    int a[N] = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5, 6, -6};
    int *cPtr;
    int sizec;
    int k, j = 0;
    int soma_a = 0, soma_c = 0, soma_total = 0;

    // Parte 4-a da avaliação.

    printf("\n Vetor a = ");
    printvector(a, N);

    sizec = counterc(a, N);

    //Alocação dinâmica para o Vetor C e processamento de dados.
    cPtr = (int*) malloc(sizec*sizeof(int));

    for (k = 0; k < N; k++)
    {
        if ((a[k] % 2 == 0) && (a[k] < 0))
        {
            cPtr[j] = a[k];
            j++;
        }
    }

    printf("Vetor c = ");
    printvector(cPtr, sizec);


//----------------------------------------------------------------------------------
    // Parte 4-b da avaliação

    for (k = 0; k < N; k++)
    {
        soma_a+= a[k];
    }

    for (k = 0; k < sizec; k++)
    {
        soma_c+= cPtr[k];
    }

    soma_total = soma_a + soma_c;

    printf("\n\n Soma dos elementos do Vetor a = %i \n", soma_a);
    printf("\n Soma dos elementos do Vetor c = %i \n", soma_c);
    printf("\n Soma total = %i \n", soma_total);

    free(cPtr);
    return 0;
}

//-----------------------------------------------------------------------------------
// Imprimir os vetores

void printvector(int v[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%i ", v[i]);
    }
    printf("\n\n");
    
    return;
}

// Contador para o tamanho do Vetor c

int counterc(int v[], int n)
{
    int i, tam_c = 0;

    for (i = 0; i < n; i++)
    {
        if ((v[i] % 2 == 0) && (v[i] < 0))
        {
            tam_c++;
        }
    }

    return tam_c;
}