#include<stdio.h>

int main()
{
    const int line = 3, colun = 3;
    int M[line][colun];
    int d, i, j, p = 0, q = 0, aux, menor, k = 0, l = 0;

    printf("\n Informe os valores da matriz M 3x3: \n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("\n M[%i][%i] = ", i, j);
            scanf("%i", &M[i][j]);
        }
    }
    
    printf("\n\n     Matriz M\n");

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            printf("%i\t", M[i][j]);
        }
        printf("\n");
    }

    printf("\n Informe um valor de referencia d: ");
    scanf("%i", &d);

    aux = M[0][0];
    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            if (M[i][j] == d)
            {
                p = i;
                q = j;
                aux = M[i][j];
                printf("\n Numero %i se encontra na posicao M[%i][%i] \n", d, p, q);
            }
        }
    }

    if (aux != d)
    {
        printf("\nNumero %i nao foi encontrado na matriz. \n", d);
    }

    menor = M[0][0];
    for (i = 0; i < line; i++)
    {
        for (j = 0; j < colun; j++)
        {
            if (M[i][j] < menor)
            {
                menor = M[i][j];
                k = i;
                l = j;
            }
        }
    }

    if (menor % 2 == 0)
    {
        printf("\n O elemento da matriz M[%i][%i] = %i e um numero par.\n", k, l, menor);
    }
    else
    {
        printf("\n O elemento da matriz M[%i][%i] = %i e um numero impar.\n", k, l, menor);
    }
    

    return 0;
}