// FILE: PrintNumber0to10.c
// TITLE: PrintNumber0to10.
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: March 03, 2021
//
// PURPOSE: Training C
//      "This program will print number 1 to 10, using a repetition structure"
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
    int num;                                                //Variável de inicialização

    printf("\n Teste da estrutura While: \n"
           "\n Numeros de 0 a 10 \n");

    num = 0;                                                //Inicialização

    while (num <= 10)                                       //Estutura de repetição While
    {                                                       //Enquanto a condição for verdadeira (num<=10) executa o código até que vire falsa
        printf("\n numero: %i \n", num);
        num = num + 1;                                      //Incremeto: após receber o numero anterior, acrescenta 1, até chegar no valor da condição
    }

    system("pause");

    return 0;
}