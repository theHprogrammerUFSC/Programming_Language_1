// FILE: NumberSinal_Two.c
// TITLE: Number Sinal
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "This program will receive a whole and will check if it is a positive or negative number"
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

    printf("\n Verificacao se um numero e positivo ou negativo. \n");   //Recebimento de dados.

    printf("\n Informe o numero: ");
    scanf("%i", &number);                                               //Leitura do número informada.

    if (number >= 0)                                                    //Condição: se a entrada for verdadeira, retorna a mensagem de aprovado.
    {
        printf("\n O numero informado e positivo. \n");
    }
    else
    {
        printf("\n O numero informado e negativo. \n");
    }
    
    system("pause");

    return 0;
}