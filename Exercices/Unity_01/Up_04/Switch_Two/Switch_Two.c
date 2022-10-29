// FILE: Switch_Two.c
// TITLE: Switch.
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: February 29, 2021
//
// PURPOSE: Training C
//      "This program will receive a code and a salary, and will readjust the salary based on the code"
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
    int c;                                                              //Código.
    float s;                                                            //Salário.
    float sn;                                                           //Novo salário.
    float a;                                                              //Aumento.

    printf("\n Escolha o cargo do funcionario: \n"                      //Entrada de dados.
           "1 - Escrituario \n"
           "2 - Secretario \n"
           "3 - Caixa \n"
           "4 - Gerente \n"
           "5 - Diretor \n");
    scanf("%i", &c);                                                    //Leitura de dados.

    printf("\n Informe seu salario atual: ");
    scanf("%f", &s);

    switch (c)                                                          //Estrutura switch - processamento e saída de dados.
    {
    case 1:
        a = s * 0.5;
        sn = s + a;
        printf("\n Cargo: 1 - Escrituario \n");
        printf("\n Salario atual RS %.2f \n", s);
        printf("\n Valor do aumento RS %.2f  \n", a);
        printf("\n Salario ajustado RS %.2f \n", sn);
        break;
    case 2:
        a = s * 0.35;
        sn = s + a;
        printf("\n Cargo: 2 - Secretario \n");
        printf("\n Salario atual RS %.2f \n", s);
        printf("\n Valor do aumento RS %.2f  \n", a);
        printf("\n Salario ajustado RS %.2f \n", sn);
        break;
    case 3:
        a = s * 0.2;
        sn = s + a;
        printf("\n Cargo: 3 - Caixa \n");
        printf("\n Salario atual RS %.2f \n", s);
        printf("\n Valor do aumento RS %.2f  \n", a);
        printf("\n Salario ajustado RS %.2f \n", sn);
        break;
    case 4:
        a = s * 0.1;
        sn = s + a;
        printf("\n Cargo: 4 - Gerente \n");
        printf("\n Salario atual RS %.2f \n", s);
        printf("\n Valor do aumento RS %.2f  \n", a);
        printf("\n Salario ajustado RS %.2f \n", sn);
        break;
    case 5:
        printf("\n Cargo: 5 - Diretor \n");
        printf("\n Salario atual RS %.2f \n", s);
        printf("\n Nao houve aumento no salario de diretores. \n");
        break;
    default:
    printf("\n Numero %i e um codigo invalido. Intervalo de codigo aceito: [1, 5] \n", c);
        break;
    }

    system("pause");

    return 0;
}