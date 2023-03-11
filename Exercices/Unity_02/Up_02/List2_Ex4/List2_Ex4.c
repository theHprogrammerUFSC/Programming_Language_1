#include<stdio.h>

int main(){

    int a[10];
    int b[10];
    int c[10];
    int i, j, k;

    printf("\n Elementos positivos e negativos.\n");                                    //Entrada

    for (i = 0; i < 10; i++)
    {
       printf("\n Informe um valor: ");
       scanf("%i", &a[i]);
    }

    for (j = 0; j < 10; j++)
    {
       b[j] = 0;
    }
    for (k = 0; k < 10; k++)
    {
       c[k] = 0;
    }


    j = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 0)
        {
            b[j] = a[i];
            j++;
        }
    }

    k = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0)
        {
            c[k] = a[i];
            k++;
        }
    }
    
    

    printf("\n\n VALORES INFORMADOS: \n");                                              //Saída

    for (i = 0; i < 10; i++)
    {
        printf("%i\t ", a[i]);
    }

    printf("\n\n VALORES POSITIVOS: \n");

    for (j = 0; j < 10; j++)
    {
        printf("%i\t ", b[j]);
    }

    printf("\n\n VALORES NEGATIVOS: \n");

    for (k = 0; k < 10; k++)
    {
        printf("%i\t ", c[k]);
    }       

    return 0;
}