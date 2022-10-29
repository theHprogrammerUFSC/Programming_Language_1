#include<stdio.h>

int main()
{
    const int line = 2, column = 2;
    int i, j;
    int m[line][column];

    printf("\n Leitura de dados para uma matriz 2x2: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("\n Digite o elemento [%i][%i] da matriz: ", i, j);
            scanf("%i", &m[i][j]);
        }
    }
    
    printf("\n Matriz m: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%i\t", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}