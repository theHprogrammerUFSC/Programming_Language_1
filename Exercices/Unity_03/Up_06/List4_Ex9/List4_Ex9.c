// FILE:                    List4_Ex9.c
// TITLE:                   Dynamically_Struct_Vector
// SUBMITTED BY:            Helder Henrique da Silva
//                          "All codeis my on except where credited to others."
// FOR COURSE:              Programming I
// DUE DATE:                April 24, 2021
//
// PURPOSE:
// The program was designed to train the C language. It will receive a structure vector 
// to store a student's registration data, with the id, name and grades of two tests.
//
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Register a structure called student, with id, name, note of p1 and note of p2.
// 2. Creates a pointer to serve as a dynamically allocated vector.
// 3. Creates variables to receive the allocation size of the pointer and auxiliary variables to receive the notes.
// 4. Dynamically allocate the pointer and enter structure data through a repeating structure.
// 5. Checks whether the reported notes are within the range and makes sure this is guaranteed.
// 6. Output of data from cadastral data in the structure vector.
//
// FUNCTIONS:
// "struct Aluno"
//
// INCLUDE FILES:
// "stdio.h"
// "stdlib.h"
// "string.h"
//
// DATA FILES: none

/****************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct

struct Aluno
{
    int Aluno_id;
    char Nome[50];
    float Nota_p1;
    float Nota_p2;
};

// Main

int main()
{
    struct Aluno *TurmaPtr;
    int size_turma;
    int i, auxP1 = 0, auxP2 = 0;

    printf("\n Quanto alunos ha nessa turma: ");
    scanf("%i", &size_turma);

    // Alocação dinâmica para a estrutura
    TurmaPtr = (struct Aluno *) malloc(size_turma*sizeof(struct Aluno));

    for (i = 0; i < size_turma; i++)
    {
        printf("\n Entrada de Dados: Aluno %i \n", i+1);

        (TurmaPtr + i)->Aluno_id = 100 + (i + 1);

        printf("    Nome do aluno:     ");
        scanf(" %[^\n]%*c", (TurmaPtr + i)->Nome);

        do
        {
            printf("    Nota da P1 [0, 10]:     ");
            scanf("%f", &(TurmaPtr + i)->Nota_p1);

        auxP1 = (TurmaPtr + i)->Nota_p1;

        } while (auxP1 > 10 || auxP1 < 0);
        

        do
        {
            printf("    Nota da P2 [0, 10]:     ");
            scanf("%f", &(TurmaPtr + i)->Nota_p2);

        auxP2 = (TurmaPtr + i)->Nota_p2;

        } while (auxP2 > 10 || auxP2 < 0);
    }

    printf("\n /**************************************/ \n");

    printf("\n Dados dos alunos \n");

    for (i = 0; i < size_turma; i++)
    {
        printf("\n _____Aluno %i_____ \n", i+1);
        printf("Codigo do aluno: %i \n", (TurmaPtr + i)->Aluno_id);
        printf("Nome do aluno: %s \n", (TurmaPtr + i)->Nome);
        printf("Nota da P1: %.2f \n", (TurmaPtr + i)->Nota_p1);
        printf("Nota da P2: %.2f \n", (TurmaPtr + i)->Nota_p2);
    }

    free(TurmaPtr);

    return 0;
}