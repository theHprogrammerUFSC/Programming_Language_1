// FILE: HelloWorld.c
// TITLE: My first program in C "Unidade_1_parte_3_v04_HellorWorld"
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 14, 2021
//
// PURPOSE: Training C
//      "This program will print one text line, Hello World"
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Print Text
// FUNCTIONS: none
//
// INCLUDE FILES:
// "stdio.h"
//
// DATA FILES: none

/****************************************************************************************************************************/




#include <stdio.h>                      /* Solicita ao compilador acrescentar a biblioteca stdio.h, 
                                        responsável por definições e declarações necessárias para entrada/saída
                                        geradas na tela. */

int main()                              // Indica a função principal.
{                                       // Início da função.
    printf("Hello World! \n");          // Exibe a mensagem.
    system("pause");                    // Pausa o sistema para não fechar o cmd.
    return 0;                           // Termino da função com sucesso.
}                                       // Fim da função.