// FILE: ClassAverageGrade_One.c
// TITLE: Class Average Grade.
// SUBMITTED: Helder Henrique da Silva
//      "All codeis my on except where credited to others"
// FOR COURSE: Programming I
// DUE DATE: March 04, 2021
//
// PURPOSE: Training C
//      "This program should receive 10 grades and average the grades."
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Print Text
// 2. Scan Text
// 3. Repetition Structure (while)
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
    int countergrade;                                               //Variável de inicialização: contador de notas
    float total;                                                    //Variável de inicialização: total das notas
    float grade;                                                    //Variável de recebimento das notas
    float average;                                                  //Variável de recebimento: média das notas
    float verification;                                               //Variavél de verificação

    printf("\n Media das notas de uma turma (intervalo de 0 a 100): \n");

    countergrade = 1;                                               //Inicialização
    total = 0.00;

    while (countergrade <= 10)                                      //Processamento: Estutura de repetição While
        {                                                           //Enquanto a condição for verdadeira (product<=1000) executa o código até que vire falsa
            printf("\n Digite a %i nota: ", countergrade);
            scanf("%f", &grade);

            total = total + grade;                                  //Incremeto: após receber o produto anterior, multiplica o resultado por 2, até chegar no valor da condição
            countergrade = countergrade + 1;
        }
        average = total / 10.00;                                    //Finalização
    
        printf("\n A media das notas da classe e: %.2f \n", average);

    
    system("pause");

    return 0;
}

/*    printf("\n Media das notas de uma turma (intervalo de 0 a 100): \n");

    countergrade = 1;                                               //Inicialização
    total = 0.00;

    printf("\n Digite uma nota de verificacao: ");
    scanf("%f", &verification);

    if ((verification > 100) || (verification < 0))
    {
        printf("\n Erro \n");
    }
    else
    {
        while (countergrade <= 10)                                  //Processamento: Estutura de repetição While
        {                                                           //Enquanto a condição for verdadeira (product<=1000) executa o código até que vire falsa
            printf("\n Digite a %i nota: ", countergrade);
            scanf("%f", &grade);

            total = total + grade;                                  //Incremeto: após receber o produto anterior, multiplica o resultado por 2, até chegar no valor da condição
            countergrade = countergrade + 1;
        }
        average = total / 10.00;                                    //Finalização
    
        printf("\n A media das notas da classe e: %2.f \n", average);
    }

    system("pause");

    return 0;
} */