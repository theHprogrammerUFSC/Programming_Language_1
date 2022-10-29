// FILE: WhatYourWeightedArithmeticMean_Two.c
// TITLE: What Your Weighted Arithmetic Mean.
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "This program will receive three grades, calculate the weighted arithmetic mean, and inform the concept that the student took."
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Print Text
// 2. Scan Variables
// 3. Selection Structure (if/else) nested
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
    float note1, note2, note3;
    float p1, p2, p3;
    float mean;

    p1 = 0.2;
    p2 = 0.3;
    p3 = 0.5;

    printf("\n Verificacao de ceonceito de nota. \n");                      //Recebimento de dados.

    printf("\n Informe sua nota de trabalho de laboratorio: ");
    scanf("%f", &note1);                                                    //Leitura da nota informada.

    printf("\n Informe sua nota da avaliacao semestral: ");
    scanf("%f", &note2);

    printf("\n Informe sua nota do exame final: ");
    scanf("%f", &note3);

    mean = ((p1*note1 + p2*note2 + p3*note3)/(p1 + p2 + p3));

    if (mean >= 80)                                                         //Condição: se a entrada for verdadeira, retorna a mensagem de aprovado.
    {
        printf("\n Sua media final e: %.2f \n ", mean);
        printf("\n Conceito final: A \n");
        printf("\n Aprovado! Parabens. \n");
    }
    else if (mean >= 70)
    {
        printf("\n Sua media final e: %.2f \n ", mean);
        printf("\n Conceito final: B \n");
        printf("\n Aprovado! Parabens. \n");
    }
    else if (mean >= 60)
    {
        printf("\n Sua media final e: %.2f \n ", mean);
        printf("\n Conceito final: C \n");
        printf("\n Aprovado! Precisa melhorar. \n");
    }
    else if (mean >= 50)
    {
        printf("\n Sua media final e: %.2f \n ", mean);
        printf("\n Conceito final: D \n");
        printf("\n Reprovado! \n");
        printf("\n Devera fazer esta disciplina novamente. \n");
    }
    else
    {
        printf("\n Sua media final e: %.2f \n ", mean);
        printf("\n Conceito final: E \n");
        printf("\n Reprovado. \n");
        printf("\n Devera fazer esta disciplina novamente. \n");
    }

    system("pause");

    return 0;
}