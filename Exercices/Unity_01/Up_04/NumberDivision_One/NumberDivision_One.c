// FILE: NumberDivision_One.c
// TITLE: Number Division
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "This program will receive two numbers and check if they can be divided. If you can, make the division"
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
    float n1, n2;
    float division;

    printf("\n Divisao de dois numeros. \n");   //Recebimento de dados.

    printf("\n Informe o primeiro numero: ");
    scanf("%f", &n1);                                                   //Leitura dos números informados.

    printf("\n Informe o segundo numero: ");
    scanf("%f", &n2);   
/*
    if (n2 == 0)                                                        //Condição: se a entrada for verdadeira, retorna a mensagem de aprovado.
    {
        printf("\n Divisao por zero. \n");
    }
    else
    {
        division = n1 / n2;
        printf("\n Divisao = %.2f \n", division);
    }
*/
        if (n2 != 0)                                                    //Condição: se a entrada for verdadeira, retorna a mensagem de aprovado.
    {
        division = n1 / n2;
        printf("\n Divisao = %.2f \n", division);
    }
    else
    {
        printf("\n Divisao por zero. \n");
    }
    
    system("pause");

    return 0;
}