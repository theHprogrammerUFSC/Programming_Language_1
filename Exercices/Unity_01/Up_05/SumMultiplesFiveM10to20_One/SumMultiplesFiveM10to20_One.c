#include<stdio.h>

int main()
{
    int counter;                                                        //Contador
    int total;

    printf("\n Soma dos multiplos de 5 no intervalo de -10 a 20. \n");

    total = 0;

    for (counter = -10; counter <= 20; counter++)                       //Processamento: Inicialização; Condição de repetição; Incremento
    {
        if (counter % 5 == 0)                                           //Finalização: Condição de seleção.                             
        {
            printf("\n %i \n", counter);
            total = total + counter;
        }
    }

    printf("\n Soma = %i \n", total);
}