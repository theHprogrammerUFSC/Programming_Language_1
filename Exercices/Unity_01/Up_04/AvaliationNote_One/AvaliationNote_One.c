// FILE: AvaliationNote_One.c
// TITLE: Avaliation Note
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "This program will receive a grade and will only check if the student has passed"
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Print Text
// 2. Scan Variables
// 3. Selection Structure (if)
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
/*  if (note > 100)
    {
        printf("\n Seu professor deu nota a mais? \n");
    }
    if (note < 60)
    {
        printf("\n Reprovado. \n");
    }
    if (note < 0)
    {
        printf("\n Como voce conseguiu tirar uma nota negativa?. \n");
    }
*/
    system("pause");

    return 0;
}