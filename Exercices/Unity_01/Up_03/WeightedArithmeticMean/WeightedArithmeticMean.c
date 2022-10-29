// FILE: WeightedArithmeticMean.c
// TITLE: Weigted Arithmetic Mean
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 21, 2021
//
// PURPOSE: Training C
//      "This program will calculate the weighted arithmetic mean of three notes and print them in the screen"
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
    float n1, n2, n3, p1, p2, p3;                                               //Variáveis recebidas do tipo real (float).
    float wam;                                                                  //Variável de processamento - média.

    printf("\n Calculo da media aritimetica ponderada. \n");

    printf("\n Informe a primeira nota: ");                                     //Entrada de dados: recebimento das notas e respectivos pesos.
    scanf("%f", &n1);
    printf("\n Informe o peso da primeira nota: ");
    scanf("%f", &p1);

    printf("\n Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("\n Informe o peso da segunda nota: ");
    scanf("%f", &p2);

    printf("\n Informe a terceira nota: ");
    scanf("%f", &n3);
    printf("\n Informe o peso da terceira nota: ");
    scanf("%f", &p3);

    wam = (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 + p3);                               //Processamento: cálculo da média aritimética.

    printf("\n A media aritimetica ponderada e: \n");                           //Saída de dados: Resultado.
                                                                                //(%.xf): Número real com x casas decimais.
    printf("\n Media = (%.3f*%.3f + %.3f*%.3f + %.3f*%.3f)/(%.3f + %.3f + %.3f) = %.3f \n", n1, p1, n2, p2, n3, p3, p1, p2, p3, wam);


    return 0;    
}