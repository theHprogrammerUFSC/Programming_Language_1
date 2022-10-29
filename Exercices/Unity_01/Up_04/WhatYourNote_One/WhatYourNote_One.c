// FILE: WhatYourNote_One.c
// TITLE: What Your Note.
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "This program will receive a grade and check it's concept"
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
    float note;

    printf("\n Verificacao de ceonceito de nota. \n");                  //Recebimento de dados.

    printf("\n Informe sua nota: ");
    scanf("%f", &note);                                                 //Leitura da nota informada.
/*
    if (note >= 90)                                                     //Condição: se a entrada for verdadeira, retorna a mensagem de aprovado.
        printf("\n A \n");
    else
        if (note >= 80)
            printf("\n B \n");
        else
            if (note >= 70)
                printf("\n C \n");
            else
                if (note >= 60)
                    printf("\n D \n");
                else
                    if (note < 60)
                        printf("\n R \n");
  */

    if (note >= 90)                                                     //Condição: se a entrada for verdadeira, retorna a mensagem de aprovado.
        printf("\n A \n");
    else if (note >= 80)
        printf("\n B \n");
    else if (note >= 70)
        printf("\n C \n");
    else if (note >= 60)
        printf("\n D \n");
    else
        printf("\n R \n");

    system("pause");

    return 0;
}