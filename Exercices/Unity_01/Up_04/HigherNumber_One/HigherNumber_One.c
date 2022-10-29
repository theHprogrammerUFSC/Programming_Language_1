// FILE: Higher Number.c
// TITLE: Higher Number
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "This program will receive two numbers and show which is the biggest"
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

    printf("\n Verificacao do maior numero. \n");   //Recebimento de dados.

    printf("\n Informe o primeiro numero: ");
    scanf("%f", &n1);                                                   //Leitura dos números informados.

    printf("\n Informe o segundo numero: ");
    scanf("%f", &n2);   

    if (n1 == n2)                                                        //Condição: se a entrada for verdadeira, retorna a mensagem de aprovado.
    {
        printf("\n Os numeros sao iguais. \n");
    }
    else if (n1 > n2)
    {
        printf("\n O maior numero e: %.2f \n", n1);
    }
    else
    {
        printf("\n O maior numero e: %.2f \n", n2);
    }

    system("pause");

    return 0;
}