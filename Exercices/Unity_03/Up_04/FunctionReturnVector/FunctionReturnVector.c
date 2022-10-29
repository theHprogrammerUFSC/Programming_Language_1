#include <stdio.h>

//Function to generate and return 10 random numbers
int * getRandom();

/***********************************************************/

int main()
{
    //a pointer to an int
    int *p;
    int i;

    p = getRandom();

    printf("\n Acesso em main(): \n");

    for (i = 0; i < 10; i++)
    {
        printf("*(p + %d): %d\n", i, *(p + i));
    }
    
    return 0;
}

/***********************************************************/

int * getRandom()
{
    static int r[10];
    int i;

    printf("\n Numeros gerados dentro da funcao: \n");

    for (i = 0; i < 10; i++)
    {
        r[i] = rand() % 20;
        printf("r[%d] = %d \n", i, r[i]);
    }
    
    return r;
}