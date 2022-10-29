// FILE: PowerOf2_One.c
// TITLE: Power of 2.
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: March 04, 2021
//
// PURPOSE: Training C
//      "This program must find the first porwer of 2 greater than 1000"
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Print Text
// 2. Repetition Structure (while)
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
    int product;                                            //Variável de inicialização

    printf("\n Primeira potencia de 2 maior que 1000: \n");

    product = 2;                                            //Inicialização

    while (product <= 1000)                                 //Estutura de repetição While
    {                                                       //Enquanto a condição for verdadeira (product<=1000) executa o código até que vire falsa
        printf("\n product: %i \n", product);
        product = product * 2;                              //Incremeto: após receber o produto anterior, multiplica o resultado por 2, até chegar no valor da condição
    }

    printf("\n O valor da primeira potencia de 2 maior que 1000 e: %i \n", product);

    system("pause");

    return 0;
}