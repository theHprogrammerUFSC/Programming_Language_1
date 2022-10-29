// FILE: SumOdd0to100_One.c
// TITLE: Sum Odd 0 to 100
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: March 07, 2021
//
// PURPOSE: Training C
//      "This program will receive the odd numbers from 0 to 100 and make the sum of them"
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
    int counter;                                                        //Contador dos números.
    int total;                                                          //Soma dos números ímpares.

    printf("\n Soma dos numeros impares de 0 a 100.\n");

    counter = 1;                                                        //Inicialização.
    total = 0;

    while (counter <= 100)                                              //Processamento.
    {
        total = total + counter;
        printf("\n N = %i", counter);
        counter+= 2;
    }

    printf("\n Soma dos numeros impares de 0 a 100 = %i", total);       //Finalização.    

    return 0;
}