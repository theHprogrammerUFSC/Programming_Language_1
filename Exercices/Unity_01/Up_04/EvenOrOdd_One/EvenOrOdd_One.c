// FILE: EvenOrOdd_One.c
// TITLE: Even Or Odd
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "This program will receive a whole number and show wheter it is even or odd"
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Print Text
// 2. Scan Variables
// 3. Selection Structure (if/else)
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
    int number;

    printf("\n Par ou Impar. \n");                                      //Recebimento de dados.

    printf("\n Informe o numero a ser analisado: ");
    scanf("%i", &number);                                                   //Leitura dos números informados.
 
    if (number % 2 == 0)                                                    //Condição: se a entrada for verdadeira, retorna a mensagem de aprovado.
    {
        printf("\n O numero %i e par. \n", number);
    }
    else
    {
        printf("\n O numero %i e impar. \n", number);
    }
    
    system("pause");

    return 0;
}