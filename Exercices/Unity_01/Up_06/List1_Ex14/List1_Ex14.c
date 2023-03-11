#include<stdio.h>

int main()
{
    float n;
    float maiorn = 0;
    int i = 0;

    printf("\n Maior numero negativo\n");

    do
    {
        printf("\n Digite um numero negativo: ");
        scanf("%f", &n);

        if (i == 0)
        {
            maiorn = n;
            i++;
        }

        if ((n > maiorn) && (n <= -1))
        {
            maiorn = n;
        }

    } while (n <= -1);

    printf("\n Maior numero negativo = %.2f \n", maiorn);
    
    
    return 0;
}

/*    do
    {
        printf("\n Digite um numero negativo: ");
        scanf("%f", &n);

        if (n >= 0)
        {
            break;
        }

        if (n <= -1)
        {
            maiorn = n;
        }

        if (n > maiorn)
        {
            maiorn = n;
        }

    } while (1);

    printf("\n Maior numero negativo = %.2f \n", maiorn);*/