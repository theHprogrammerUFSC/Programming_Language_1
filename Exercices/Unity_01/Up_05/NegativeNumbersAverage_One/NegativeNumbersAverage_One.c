// FILE: NegativeNumberAverage_One.c
// TITLE: Negative Number Average
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: March 07, 2021
//
// PURPOSE: Training C
//      "This program will receive a random number of negative numbers and average them. The program is controlled by a flag"
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Print Text
// 2. Scan Text
// 3. Repetition Structure (while)
// 4. Selection Structure (if/else)
// FUNCTIONS: none
//
// INCLUDE FILES:
// "stdio.h"
//
// DATA FILES: none

/****************************************************************************************************************************/

#include<stdio.h>

int main()
{
    int counter;                                                            //Contador de notas.
    float number;                                                           //Número negativo
    float total;                                                            //Soma dos números negativos.
    float average;                                                          //Média dos números negativos.

    total = 0;                                                              //Inicialização.
    counter = 0;

    printf("\n Media de numeros negativos. \n");

    printf("\n Digite um numero negativo ou (1) para finalizar: ");         //Processamento.
    scanf("%f", &number);

    while (number <= 0)                                                      //Condição para soma dos números.
    {
        total = total + number;
        counter = counter + 1;
        printf("\n Digite um numero negativo ou (1) para finalizar: ");
        scanf("%f", &number);
    }
    
    if (counter != 0)                                                       //Finalização
    {
        average = total / counter;
        printf("\n Media da turma = %.2f \n", average);
    }
    else
    {
        printf("\n Nenhuma nota foi fornecida.\n");
    }

    return 0;
}