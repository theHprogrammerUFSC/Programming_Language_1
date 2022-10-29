// FILE: SumFourNumbers_Two.c
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
    int n_sum;
    int sum;

    printf("\n Soma de quatro numeros inteiros: \n");

    printf("\n Informe o primeiro numero: ");
    scanf("%i", &n_sum);

    sum = n_sum;

    printf("\n Informe o segundo numero: ");
    scanf("%i", &n_sum);

    sum = sum + n_sum;

    printf("\n Informe o terceiro numero: ");
    scanf("%i", &n_sum);

    sum = sum + n_sum;

    printf("\n Informe o quarto numero: ");
    scanf("%i", &n_sum);

    sum = sum + n_sum;

    printf("\n A soma dos numeros inteiros e: \n");
    printf("\n Soma = %i \n", sum);

    system("pause");

    return 0;
}