// FILE: NumberInAscendingOrder_One.c
// TITLE: Number In Ascendig Order
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "This program will receive three numbers and will inform them in ascending order"
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
    int n1, n2, n3;

    printf("\n Numeros em ordem crescente. \n");                            //Recebimento de dados.

    printf("\n Informe o primeiro numero: ");
    scanf("%i", &n1);                                                       //Leitura dos números informados.
 
    printf("\n Informe o segundo numero: ");
    scanf("%i", &n2); 

    printf("\n Informe o terceiro numero: ");
    scanf("%i", &n3); 

    if ((n1 == n2) && (n1 == n2) && (n2 == n3))                                                    //Condição: se a entrada for verdadeira, retorna a mensagem de aprovado.
    {
        printf("\n Os numeros informados sao iguais. \n");
    }
    else if ((n1 < n2) && (n1 < n3) && (n2 < n3))
    {
        printf("\n Os numeros em ordem crescente e: %i - %i - %i. \n", n1, n2, n3);
    }
    else if ((n1 < n3) && (n1 < n2) && (n3 < n2))
    {
        printf("\n Os numeros em ordem crescente e: %i - %i - %i. \n", n1, n3, n2);
    }
    else if ((n2 < n1) && (n2 < n3) && (n1 < n3))
    {
        printf("\n Os numeros em ordem crescente e: %i - %i - %i. \n", n2, n1, n3);
    }
    else if ((n2 < n3) && (n2 < n1) && (n3 < n1))
    {
        printf("\n Os numeros em ordem crescente e: %i - %i - %i. \n", n2, n3, n1);
    }
    else if ((n3 < n1) && (n3 < n2) && (n1 < n2))
    {
        printf("\n Os numeros em ordem crescente e: %i - %i - %i. \n", n3, n1, n2);
    }
    else if ((n3 < n2) && (n3 < n1) && (n2 < n1))
    {
        printf("\n Os numeros em ordem crescente e: %i - %i - %i. \n", n3, n2, n1);
    }
    
    system("pause");

    return 0;
}