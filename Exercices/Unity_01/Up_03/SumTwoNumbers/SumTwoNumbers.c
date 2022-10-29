// FILE: SumTwoNumbers.c
// TITLE: Sum Two Numbers
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 20, 2021
//
// PURPOSE: Training C
//      "This program will sum two whole numbers and print them in the screen"
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

#include <stdio.h>                                      //Inclui a biblioteca responsável pelas entradas e saídas.

int main()                                              //Função principal. 
{                                                       //Começo da função principal.
    int n1, n2;                                         //Declaração das variáveis do tipo inteiro que serão recebidas.
    int sum;                                            //Varivel do tipo inteiro (resultado).

    printf("\n Soma de dois numeros inteiros: \n");  

    printf("\n Primeiro numero: ");                     //Entrada de dados: recebe os números.
    scanf("%i", &n1);

    printf("\n Segundo numero: ");
    scanf("%i", &n2);

    sum = n1 + n2;                                      //Processamento: soma os números digitados.

    printf("\n Soma = %i + %i = %i \n", n1, n2, sum);   //Saída de dados: mostra o resultado da soma.

    system("pause");                                    //Pausa no sistema para não fechar o cmd.

    return 0;                                           //Indica que o programa terminou com sucesso.
}                                                       //Término da função principal.