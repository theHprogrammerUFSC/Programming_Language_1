// FILE: AvaliationNote_Two.c
// TITLE: Avaliation Note
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "This program will receive a grade and will check if the studant has been passed ou failed"
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
    float note;

    printf("\n Verificacao de nota de aprovacao. \n");               //Recebimento de dados.

    printf("\n Informe sua nota: ");
    scanf("%f", &note);                                                 //Leitura da nota informada.

    if (note >= 60)                                                     //Condição: se a entrada for verdadeira, retorna a mensagem de aprovado.
    {
        printf("\n Voce foi aprovado. \n");
        printf("\n Parabens. \n");
    }
    else
    {
        printf("\n Voce foi reprovado. \n");
        printf("\n Infelizmente tera que fazer essa disciplina novamente. \n");
        printf("\n Boa Sorte!. \n");
    }
    
    system("pause");

    return 0;
}