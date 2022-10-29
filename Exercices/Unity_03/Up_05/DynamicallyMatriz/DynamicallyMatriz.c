#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *matPtr;    //Pointer
    int i, j, n, m;

    printf("\n Quantidade de linhas: ");
    scanf("%d", &n);

    printf("\n Quantidade de colunas: ");
    scanf("%d", &m);

    // Memory allocation
    matPtr = (int*) malloc(n*m*sizeof(int));

    // Data Input
    printf("\n Entrada de dados: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", (matPtr + i*m+j));
        }
    }

    // Data output
    printf("\n\n Saida de dados: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%5d", *(matPtr + i*m+j));
        }
    printf("\n");
    }

    return 0;
}