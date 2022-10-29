#include<stdio.h>

int square(int num);                                                   //Declaração da função
void printl();

/******************************************************************************************/

int main()
{
    //Variáveis locais

    int i;

    printf("\n O programa retorna n * n, [0...10] \n\n");

    for (i = 0; i <= 10; i++)
    {
        printf("\n %i elevado ao quadrado = %i", i, square(i));
        printl();
    }

    return 0;
}

/*****************************************************************************************/

//A função retorna o num * num

int square(int num)
{
    return num * num;
}

/*****************************************************************************************/

void printl()
{
    printf("\n ---------------------------------------------------------------------------- \n\n");
    return;
}