// FILE: SumFourNumbers.c
// TITLE: Sum Four Numbers
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 21, 2021
//
// PURPOSE: Training C
//      "This program will sum four whole numbers and print them in the screen"
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
    int n1, n2, n3, n4;                                                 //Variáveis de recebimento.
    int sum;                                                            //Variável de processamento.

    printf("\n Soma de quatro numeros inteiros. \n");

    printf("\n Informe o primeiro numero: ");                           //Entrada de dados: recebimento dos números a serem somados.
    scanf("%i", &n1);

    printf("\n Informe o segundo numero: ");
    scanf("%i", &n2);

    printf("\n Informe o terceiro numero: ");
    scanf("%i", &n3);

    printf("\n Informe o quarto numero: ");
    scanf("%i", &n4);

    sum = n1 + n2 + n3 + n4;                                            //Processamento: soma dos números informados.

    printf("\n Resultado da Soma: \n");                                 //Saída de dados: Mostra a soma dos números.
    printf("\n Soma = %i + %i + %i + %i = %i \n", n1, n2, n3, n4, sum);

    system("pause");

    return 0;
}