// FILE: ArithmeticMean.c
// TITLE: Arithmetic Mean
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 21, 2021
//
// PURPOSE: Training C
//      "This program will calculate the arithmetic mean of three notes and print them in the screen"
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
    float n1, n2, n3;                                                           //Variáveis recebidas do tipo real (float).
    float mean;                                                                 //Variável de processamento - média.

    printf("\n Calculo da media aritimetica. \n");

    printf("\n Informe a primeira nota: ");                                     //Entrada de dados: recebimento das notas.
    scanf("%f", &n1);

    printf("\n Informe a segunda nota: ");
    scanf("%f", &n2);

    printf("\n Informe a terceira nota: ");
    scanf("%f", &n3);

    mean = (n1 + n2 + n3)/3;                                                    //Processamento: cálculo da média aritimética.

    printf("\n A media aritimetica e: \n");                                     //Saída de dados: Resultado.
    printf("\n Media = (%f + %f + %f)/3 = %.3f \n", n1, n2, n3, mean);          //(%.xf): Número real com x casas decimais.

    return 0;    
}