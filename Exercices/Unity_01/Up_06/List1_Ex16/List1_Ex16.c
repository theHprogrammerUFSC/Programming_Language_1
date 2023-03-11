// FILE:                    List1_Ex16.c
// TITLE:                   Sum of Digits
// SUBMITTED BY:            Helder Henrique da Silva
//                          "All codeis my on except where credited to others."
// FOR COURSE:              Programming I
// DUE DATE:                March 13, 2021
//
// PURPOSE:
// The program was designed to train the C language. It will read any integer
// any from there it will separate the digits of that number and add them up.
//
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Input with variables of type integer.
// 2. Read variable N informed.
// 3. Initialize the remaining variables.
// 4. Use a repetition structure to process the data, in order to separate each digit from the number.
// 5. Finalization of the program, showing the sum of the digits of the number.
//
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
    int N;                                                      //Número a ser processado pelo programa.
    int soma;                                                   //Soma dos dígitos de N.
    int resto;                                                  //Resto da divisão de um número inteiro.

    printf("\n Soma dos digitos de um numero\n");               //Entrada de Dados.
    printf("\n Digite um numero qualquer: ");
    scanf("%i", &N);

    soma = 0;                                                   //Inicialização.
    resto = 0;

    while (N != 0)                                              //Condição de repetição para o processamento.
    {
        resto = N % 10;                                         //Processamento.
        printf("\n R = %i \n", resto);                          //Informação: Números que ficaram salvo no resto.
        soma = soma + resto;                                    //Incremento da váriavel soma.
        N = N / 10;                                             //Incremento para a condição de repetição.
    }
    
    printf("\n Soma = %i \n", soma);                            //Saída de Dados.

     return 0;
}