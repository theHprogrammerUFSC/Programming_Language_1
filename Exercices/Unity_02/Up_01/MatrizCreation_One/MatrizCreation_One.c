#include<stdio.h>

int main()
{
    int i, j;
    int m[2][2] = {{1, 2}, {3, 4}};

    printf("\n Programa imprime uma matriz 2x2 com valores definidos: \n\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%i", m[i][j]);
        }
        printf("\n");    
    }
    
    return 0;
}