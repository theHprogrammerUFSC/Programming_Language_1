#include<stdio.h>

int main()
{
    int counter;                                                        //Contador

    printf("\n Estrutura for com contador.\n"
           "\n Numeros de 0 a 10 \n");
    
    for (counter = 0; counter <= 10; counter++)                         //FOR: Incialização; Condição de Repetição; Incremento
    {
        printf("\n %i", counter);
    }

    return 0;
}