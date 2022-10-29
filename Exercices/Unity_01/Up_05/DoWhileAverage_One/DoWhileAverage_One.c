#include<stdio.h>

int main()
{
    int counter;                                                        //Contador
    float number;                                                       //Número fornecido
    float average;                                                      //Média dos números
    float total;                                                        //Soma dos números

    printf("\n Media de 5 numeros fornecidos pelo usuario. \n");

    counter = 1;                                                        //Incialização
    total = 0;

    do                                                                  //Processamento
    {
        printf("\n Digite o %i numero: ", counter);
        scanf("%f", &number);
        total = total + number;
        counter++;                                                      //Incremento
    } while (counter <= 5);                                             //Condição

    average = total / (counter -1);                                     //Finalização

    printf("\n Media = %.2f \n", average); 
    
}