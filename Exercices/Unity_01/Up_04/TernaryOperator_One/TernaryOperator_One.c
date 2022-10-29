// FILE: TernaryOperator_One.c
// TITLE: Ternary Operator
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "This program will use a ternary operator for to see if a number is positive or negative"
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Print Text
// 2. Scan Variables
// 3. Ternary Operator ( condition ? expression true : expression false)
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

                                                                        //Condição: se a entrada for verdadeira, retorna a mensagem de aprovado.    
    printf("%s", number >= 0 ? "\n Numero Positivo \n" : "\n Numero Negativo\n ");

    system("pause");

    return 0;
}