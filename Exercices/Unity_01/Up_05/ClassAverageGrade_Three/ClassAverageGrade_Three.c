#include<stdio.h>

int main()
{
    int counter;                                                                //Contador de notas
    int counterA;                                                               //Contador de alunos aprovados
    int counterR;                                                               //Contador de alunos reprovados
    float grade;                                                                //Nota do aluno
    float averageA;                                                             //Média dos alunos aprovados
    float totalA;                                                               //Soma das notas dos alunos aprovados

    counter = 1;                                                                //Inicialização
    counterA = 0;
    counterR = 0;
    totalA = 0;

    printf("\n Media dos alunos aprovados / Quantidade de alunos reprovados \n");
    printf("\n Intervalo de notas [0, 10] \n");

    do                                                                          //Processamento
    {
        printf("\n Nota do aluno = ");                                          //Entrada da nota do aluno
        scanf("%f", &grade);                                                    //Leitura da nota do aluno
        if ((grade >= 0) && (grade <= 10))                                      //Condição de seleção: intervalo de [0, 10]
        {
            if ((grade >= 6) && (grade <= 10))                                  //Condição de Seleção: Alunos aprovados
            {
                counterA++;                                                     //Incremento de +1 caso aluno aprovado
                totalA = totalA + grade;                                        //Soma as notas dos alunos aprovados
                counter++;                                                      //Incrementa +1 nota de aluno informada
            }
            else                                                                //Condição de seleção: alunos reprovados
            {
                counterR++;                                                     //Incremento de +1 caso aluno reprovado
                counter++;                                                      //Incrementa +1 nota de aluno informada
            }
        }
        else                                                                    //Condição de seleção:  Intervalo inválido
        {
            printf("\n Nota invalida. Intervalo permitido [0, 10] \n");
        } 
    } while (counter <= 15);                                                    //Condição de repetição para 15 alunos

    if (counterR >= 15)                                                         //Condição de seleção: Caso todos alunos sejam reprovados 
    {
        printf("\n Nao houve alunos aprovados \n");
        printf("\n Qauntidade de estudantes reprovados = %i \n", counterR); 
    }
    else                                                                        //Condição de seleção: Pelo menos 1 aprovado
    {
        printf("\n Nota media dos alunos aprovados \n");

        averageA = totalA / counterA;

        printf("\n Media dos aprovados = %.2f \n", averageA);

        printf("\n Qauntidade de estudantes reprovados = %i \n", counterR);
    }
    

    return 0;
}