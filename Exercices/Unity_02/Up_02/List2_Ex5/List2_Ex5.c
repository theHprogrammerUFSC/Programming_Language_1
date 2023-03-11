#include<stdio.h>

int main()
{
    int a[5], b[5], c[10];
    int i;

    printf("\n Vetor c com valores intercalados entre a e b. \n");

    for (i = 0; i < 5; i++)
    {
        printf("\n Elemento de a: ");
        scanf("%i", &a[i]);
    }

        for (i = 0; i < 5; i++)
    {
        printf("\n Elemento de b: ");
        scanf("%i", &b[i]);
    }

    for (i = 0; i < 5; i++)
    {
        c[i*2] = a[i];
    }
    for (i = 0; i < 5; i++)
    {
        c[(i*2)+1] = b[i];
    }
        
    
    printf("\n Valores de a: \n");

    for (i = 0; i < 5; i++)
    {
        printf("\t %i, ", a[i]);
    }
    
    printf("\n Valores de b: \n");

    for (i = 0; i < 5; i++)
    {
        printf("\t %i, ", b[i]);
    }

    printf("\n Valores de c: \n");

    for (i = 0; i < 10; i++)
    {
        printf("\t %i, ", c[i]);
    }
    
}