#include<stdio.h>

int main()
{
    int counter;                                                            //Contador de notas.
    float grade;                                                            //Nota.
    float total;                                                            //Soma das notas.
    float average;                                                          //Média das notas.

    total = 0;                                                              //Inicialização.
    counter = 0;

    printf("\n Media da turma. \n");

    printf("\n Digite a nota ou (-1) para finalizar: ");                    //Processamento.
    scanf("%f", &grade);

    while (grade > -1)                                                      //Condição para lançamento das notas.
    {
        total = total + grade;
        counter = counter + 1;
        printf("\n Digite a nota ou (-1) para finalizar: ");
        scanf("%f", &grade);
    }
    
    if (counter != 0)                                                       //Finalização
    {
        average = total / counter;
        printf("\n Media da turma = %.2f \n", average);
    }
    else
    {
        printf("\n Nenhuma nota foi fornecida.\n");
    }

    return 0;
}