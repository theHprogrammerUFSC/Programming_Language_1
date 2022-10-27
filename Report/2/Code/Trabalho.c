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

/*********************************************************FILES************************************************************/

#include <stdio.h>
#include <stdlib.h>

/******************************************************FUNCTIONS************************************************************/

void print_title();
void print_menu();

/********************************************************STRUCTS************************************************************/

struct Streaming
{
    char Streaming_tipo[30];
    char Nome[30];
    char Categoria[30];
    float Nota;
};

/*********************************************************MAIN**************************************************************/

int main()
{
    struct Streaming *Quantidade;
    FILE *filePtr;
    int size_Streaming;
    int i, aux = 0, option, gr, k = 1;
    char Streaming_tipo[30];
    char Nome[30];
    char Categoria[30];
    float Nota;

    print_title();

    do                                                                                              //Repetição do menu
    {
        print_menu();

        printf("\n\n Informe o que deseja fazer: ");
        scanf("%i", &option);

/********************************************************CASE1************************************************************/

        switch (option)
        {
        case 1:                                                                                     //Criar arquivo novo.
            filePtr = fopen("registro.txt", "w+");

            if (filePtr == NULL)
            {
                printf("\n Erro! Nao foi possivel encontrar o arquivo! \n");
                return 1;
            }

            // Ler dados e gravar dados para arquivo
            printf("\n Os dados fornecidos serao gravados no arquivo registro.txt \n");             

            printf("\n Quantidade de Streamings que deseja avaliar: ");
            scanf("%i", &size_Streaming);

            // Alocação dinâmica para a estrutura
            Quantidade = (struct Streaming *) malloc(size_Streaming*sizeof(struct Streaming));

            for (i = 0; i < size_Streaming; i++)
            {
                printf("\n Informe os Dados da %i Streaming Assitida \n\n", i+1);                   //Entrada de Dados

                printf("    Nome:                               ");
                scanf(" %[^\t\n]%*c", (Quantidade + i)->Nome);

                printf("    Tipo (Filme/Serie/etc):             ");
                scanf(" %[^\t\n]%*c", (Quantidade + i)->Streaming_tipo);

                printf("    Categoria (Aventura/Comedia/etc):   ");
                scanf(" %[^\t\n]%*c", (Quantidade + i)->Categoria);

                do
                {
                    printf("    Nota de avaliacao [0, 10]:          ");
                    scanf("%f", &(Quantidade + i)->Nota);

                    aux = (Quantidade + i)->Nota;

                } while (aux > 10 || aux < 0);
            }

            printf("\n\n Dados informados: \n\n");                                                  //Confirmação dos Dados
            for (i = 0; i < size_Streaming; i++)
            {
                printf("    Nome:                          %s \n", (Quantidade + i)->Nome);
                printf("    Tipo:                          %s \n", (Quantidade + i)->Streaming_tipo);
                printf("    Categoria:                     %s \n", (Quantidade + i)->Categoria);
                printf("    Nota de avaliacao:             %.2f \n\n", (Quantidade + i)->Nota);
            }

            printf("\n Garavar para o arquivo? 1 - Sim; 0 - Nao; ");
            scanf("%i", &gr);

            if (gr == 1)                                                                            // Grava dados para o arquivo
            {
                for (i = 0; i < size_Streaming; i++)
                {
                    fprintf(filePtr, " %s\n", (Quantidade + i)->Nome);
                    fprintf(filePtr, " %s\n", (Quantidade + i)->Streaming_tipo);
                    fprintf(filePtr, " %s\n", (Quantidade + i)->Categoria);
                    fprintf(filePtr, " %.2f\n", (Quantidade + i)->Nota);
                }
            }

        fclose(filePtr);                                                                            // Fechar o arquivo
            break;

/********************************************************CASE2************************************************************/

        case 2:
            filePtr = fopen("registro.txt", "a");                                                   //Acrescimo de dados no arquivo

            if (filePtr == NULL)
            {
                printf("\n Erro! Nao foi possivel encontrar o arquivo! \n");
                return 1;
            }

            // Ler dados e gravar dados para arquivo
            printf("\n Os dados fornecidos serao acrescentados no arquivo registro.txt \n");

            printf("\n Quantidade de Streamings que deseja avaliar: ");
            scanf("%i", &size_Streaming);

            // Alocação dinâmica para a estrutura
            Quantidade = (struct Streaming *) malloc(size_Streaming*sizeof(struct Streaming));

            for (i = 0; i < size_Streaming; i++)                                                    //Entrada de Dados
            {
                printf("\n Informe os Dados da %i Streaming Assitida \n\n", i+1);

                printf("    Nome:                               ");
                scanf(" %[^\t\n]%*c", (Quantidade + i)->Nome);

                printf("    Tipo (Filme/Serie/etc):             ");
                scanf(" %[^\t\n]%*c", (Quantidade + i)->Streaming_tipo);

                printf("    Categoria (Aventura/Comedia/etc):   ");
                scanf(" %[^\t\n]%*c", (Quantidade + i)->Categoria);

                do
                {
                    printf("    Nota de avaliacao [0, 10]:          ");
                    scanf("%f", &(Quantidade + i)->Nota);

                    aux = (Quantidade + i)->Nota;

                } while (aux > 10 || aux < 0);
            }

            printf("\n\n Dados informados: \n\n");                                                  //Confirmação de Dados
            for (i = 0; i < size_Streaming; i++)
            {
                printf("    Nome:                          %s \n", (Quantidade + i)->Nome);
                printf("    Tipo:                          %s \n", (Quantidade + i)->Streaming_tipo);
                printf("    Categoria:                     %s \n", (Quantidade + i)->Categoria);
                printf("    Nota de avaliacao:             %.2f \n\n", (Quantidade + i)->Nota);
            }

            printf("\n Garavar para o arquivo? 1 - Sim; 0 - Nao; ");
            scanf("%i", &gr);

            if (gr == 1)                                                                            // Grava dados para o arquivo
            {
                for (i = 0; i < size_Streaming; i++)
                {
                    fprintf(filePtr, " %s\n", (Quantidade + i)->Nome);
                    fprintf(filePtr, " %s\n", (Quantidade + i)->Streaming_tipo);
                    fprintf(filePtr, " %s\n", (Quantidade + i)->Categoria);
                    fprintf(filePtr, " %.2f\n", (Quantidade + i)->Nota);
                }
            }

        fclose(filePtr);                                                                            // Fechar o arquivo
            break;

/********************************************************CASE3************************************************************/

        case 3:
            filePtr = fopen("registro.txt", "r");                                                   //Abre o arquivo para a leitura de dados

            if (filePtr == NULL)
            {
                printf("\n Erro! Nao foi possivel encontrar o arquivo! \n");
                return 1;   // Código de erro
            }

        printf("\n - Avaliacoes Cadastradas - \n\n");

            while (fscanf(filePtr, "%f", &Nota) != EOF)
        {
            fscanf(filePtr, "%f", &Nota);
            fgets(Nome, 30, filePtr);
            fgets(Streaming_tipo, 30, filePtr);
            fgets(Categoria, 30, filePtr);

            printf("    Nome:                          %s", Nome);
            printf("    Tipo:                         %s", Streaming_tipo);
            printf("    Categoria:                    %s", Categoria);
            printf("    Nota de avaliacao:             %.2f", Nota);
            printf("\n\n");

        }

        fclose(filePtr);                                                                            // Fechar o arquivo
            break;

/********************************************************CASE4************************************************************/

        case 4:
            printf("\n\n Codigo Finalizado. \n\n");
            break;
        default:
        printf("\n Opcao %i e um codigo invalido. Intervalo de codigo aceito: [1, 4] \n", option);
            break;
        }
    } while ((option >= 1) && (option <= 3));

    free(Quantidade);

    return 0;
}

/*****************************************************FUNCTIONS**********************************************************/

//Imprime o Título
void print_title()
{
    printf("\n");
    printf(" -------------------------------------------------------- \n"
           " |                                                      | \n"
           " |     Avaliacao de Streaming Assistidos na Netflix     | \n"
           " |                                                      | \n"
           " -------------------------------------------------------- \n");
    return;
}

// Imprime o Menu

void print_menu()
{
    printf(" -------------------------------------------------------- \n"
           " |                                                      | \n"
           " |     Avaliacao de Streaming Assistidos na Netflix     | \n"
           " |------------------------------------------------------| \n"
           " |     1- Criar um novo arquivo de avaliacao.           | \n"
           " |     2- Acrescentar avaliacao de streaming assistido. | \n"
           " |     3- Ler Arquivo registrado.                       | \n"
           " |     4- Finalizar.                                    | \n"
           " |                                                      | \n"
           " -------------------------------------------------------- \n");
    return;
}