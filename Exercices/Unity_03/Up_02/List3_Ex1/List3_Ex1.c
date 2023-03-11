// FILE:                    List3_Ex1.c
// TITLE:                   Simple Calculator
// SUBMITTED BY:            Helder Henrique da Silva
//                          "All codeis my on except where credited to others."
// FOR COURSE:              Programming I
// DUE DATE:                March 30, 2021
//
// PURPOSE:
// The program was designed to train the C language and the application of functions. It will read two real numbers 
// and will offer a calculator menu, depending on the code chosen it will perform the respective operation.
//
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Input variables.
// 2. Read variable X, Y and call the menu function and read the variable option.
// 3. Call the calculator function that contains a switch and if selection structure for each operation
//
// FUNCTIONS:
// "void menu()"
// "int calculadora(float N1, float N2, int c)"
//
// INCLUDE FILES:
// "stdio.h"
// "stdlib.h"
// "math.h"
//
// DATA FILES: none

/****************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Função.
void menu();
int calculadora(float N1, float N2, int c);

int main()
{
    float x, y;
    int option;

    printf("\n Calculadora de dois numeros reias. \n");

    printf("\n Informe o primeiro valor: ");
    scanf("%f", &x);
    printf("\n Informe o segundo valor: ");
    scanf("%f", &y);

    menu();
    scanf("%i", &option);

    calculadora(x, y, option);

    return 0;
}

//Menu
void menu()
{
    printf("\n\n Menu Calculadora: Escolha a operacao desejada. \n"
           "1 - Adicao. \n"
           "2 - Subtracao. \n"
           "3 - Divisao. \n"
           "4 - Multiplicacao. \n"
           "5 - Potencia. \n");

    return;
}

//Calculadora
int calculadora(float N1, float N2, int c)
{
    float result;

    switch (c)
    {
    case 1:
        result = N1 + N2;
        printf("\n Soma = %.2f + %.2f = %.2f \n", N1, N2, result);
        break;
    case 2:
        result = N1 - N2;
        printf("\n Subtracao = %.2f - %.2f = %.2f \n", N1, N2, result);
        break;
    case 3:
        if (N2 == 0)
        {
            printf("\n Impossivel divisao por 0. \n");
        }
        else
        {
        result = N1 / N2;
        printf("\n Divisao = %.2f / %.2f = %.2f \n", N1, N2, result);
        }
        break;
    case 4:
        result = N1 * N2;
        printf("\n Multiplicacao = %.2f * %.2f = %.2f \n", N1, N2, result);
        break;
    case 5:
        result = pow(N1, N2);
        printf("\n Potencia = (%.2f)^%.2f = %.2f \n", N1, N2, result);
        break;
    default:
        printf("\n Numero %i e um codigo invalido. Intervalo de codigo aceito: [1, 5]. \n", c);
        break;
    }

    return;
}