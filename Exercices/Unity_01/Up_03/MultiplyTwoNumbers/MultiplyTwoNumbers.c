// FILE: MultiplyTwoNumbers.c
// TITLE: Multiply Two Numbers
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 20, 2021
//
// PURPOSE: Training C
//      "This program will multiply two whole numbers and print them in the screen"
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Print Text
// 2. Scan Variables
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
    int n1, n2;                                                     //Variáveis recebidas.
    int mult;                                                       //Variável para resultado.

    printf("\n Multiplicacao de dois numeros inteiros. \n");

    printf("\n Primeiro numero: ");                                 //Entrada de dados: recebe os números da multiplicação.
    scanf("%i", &n1);

    printf("\n Segundo numero: ");
    scanf("%i", &n2);

    mult = n1*n2;                                                   //Processamento: multiplica os números recebidos.

    printf("\n Resultado da multiplicacao: \n");                    //Saída de dados: mostra o resultado da multiplicação.
    printf("\n Multiplicacao = %i . %i = %i \n", n1, n2, mult);

    system("pause");

    return 0;
}