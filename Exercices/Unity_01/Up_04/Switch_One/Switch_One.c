// FILE: Switch_One.c
// TITLE: Switch.
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "study of the structure switch"
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Print Text
// 2. Scan Variables
// 3. Selection Structure (switch)
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
    int n;

    printf("\n Digite um numero inteiro entre 1 e 5: ");                //Entrada: Informa e lê um número.
    scanf("%i", &n);

    switch (n)                                                          //Estrutura switch - processamento e saída de dados.
    {
    case 1:
        printf("\n Um \n");
        break;
    case 2:
        printf("\n Dois \n");
        break;
    case 3:
        printf("\n Tres \n");
        break;
    case 4:
        printf("\n Quatro \n");
        break;
    case 5:
        printf("\n Cinco \n");
        break;
    default:
    printf("\n Numero %i e invalido. Intervalo aceito: [1, 5] \n", n);
        break;
    }

    system("pause");

    return 0;
}