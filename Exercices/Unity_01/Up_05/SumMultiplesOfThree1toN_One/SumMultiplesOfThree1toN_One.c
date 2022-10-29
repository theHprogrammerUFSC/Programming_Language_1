#include<stdio.h>

int main()
{
    int counter;                                                        //Contador
    int total;                                                          //Soma dos números
    int N;                                                              //Último número do intevalo

    printf("\n Soma dos inteiros pares multiplos de 3 no intervalo de 1 a N \n");

    total = 0;                                                          //Incialização

    printf("\n Digite o ultimo numero do intervalo (N): ");
    scanf("%i", &N);

    for (counter = 1; counter <= N; counter++)                          //Processamento: Inicialização; Condição de repetição; Incremento
    {
        if ((counter % 3 == 0) && (counter % 2 == 0))                   //Finalização: Condição de seleção.                             
        {
            printf("\n %i \n", counter);
            total = total + counter;
        }
    }

    printf("\n Soma = %i \n", total);
}