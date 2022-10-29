#include<stdio.h>

int main()
{
    int counter;                                                        //Contador

    printf("\n Multiplos de 3 no intervalo de 0 a 30. \n");

    for (counter = 0; counter <= 30; counter++)                         //Processamento: Inicialização; Condição de repetição; Incremento
    {
        if (counter % 3 == 0)                                           //Finalização: Condição de seleção.                             
        {
            printf("\n %i \n", counter);
        }
    }
}