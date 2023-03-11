#include<stdio.h>

int main()
{
    const int line = 3, colun = 3;
    int A[line][colun];
    int i, j;
    int soma = 0;

    printf("\n Soma dos elementos pares da matriz A 3x3.\n");

    for (i = 0; i < line; i++)                                                  //Entrada de dados
    {
        for (j = 0; j < colun; j++)
        {
            printf("\n Informe o elemento [%i][%i] da matriz A: ", i, j);
            scanf("%i", &A[i][j]);
        }
    }
   
    printf("\n    Matriz A.\n");                                                 //Saída de dados 1

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("%i\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nElementos Pares: \n");

    for (i = 0; i < line; i++)                                                  //Processamento
    {
        for (j = 0; j < colun; j++)
        {
            if (A[i][j] % 2 == 0)
            {
                printf("%i\t", A[i][j]);
                soma+= A[i][j];
            }
        }
    }


    printf("\n\n Soma dos elementos pares = %i \n\n", soma);                    //Saída de dados 2
        
    return 0;
}