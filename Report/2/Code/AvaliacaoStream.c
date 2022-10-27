// FILE:                    AvaliacaoStream.c
// TITLE:                   Avaliacao Stream
// SUBMITTED BY:            Helder Henrique da Silva
//                          "All codeis my on except where credited to others."
// FOR COURSE:              Programming I
// DUE DATE:                May 04, 2021
//
// PURPOSE:
// The program aims to develop the C programming language. This program must contain a structure 
// that represents an entity (something that exists) and must have several attributes (at least three). 
// In addition, you must read the data and store it over the fields of the structure. Finally, 
// the structure data must be recorded in a text file.
//
// OVERALL METHOD: 
// The list of general tasks is:
// 1. It registers a structure "Streaming" containing four fields, being: Streaming_tipo, Name, Category and Note.
// 2. Create the variables to control the program (pointers for dynamic allocation and creation of file and counters).
// 3. Calls the program title and menu using auxiliary functions.
// 4. Open a file and check that it is not corrupted.
// 5. Create a while repetition structure to be able to execute the program
// 6. Create a while repetition structure to allocate memory correctly according to past conditions.
// 7. Create a repeating structure for data entry and for Note data, a condition is made in do while so that you 
//    cannot place a value range.
// 8. Creates a repeating structure for data output.
// 9. Create a data recording checker for the file, containing a repetition structure if you want to record the data.
// 10. Informs if you want to continue adding entries, if the answer is affirmative, then the program is executed 
//     again, otherwise it is closed, thus closing the text file and clearing the memory of the pointers.
//
// FUNCTIONS:
// "struct Streaming"
// "void print_title()" 
//
// INCLUDE FILES:
// "stdio.h"
// "stdlib.h"
//
// DATA FILES:
// "avaliacao.txt"

/****************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void print_title();

struct Streaming
{
    char Streaming_tipo[100];
    char Nome[100];
    char Categoria[50];
    float Nota;
};

// -----------------------------------------------------Main.-----------------------------------------------------------------

int main()
{
    struct Streaming *QuantidadePtr;
    FILE *filePtr;
    int size_Streaming;
    int i, k = 1, aux = 0, gr, l = 1, j;

    print_title();

// --------------------------------------------Criar e abrir arquivo.-----------------------------------------------------

        filePtr = fopen("avaliacao.txt", "w");

        if (filePtr == NULL)
        {
            printf("\n Erro! Nao foi possivel encontrar o arquivo! \n");
            return 1;
        }

        printf("\n Os dados fornecidos serao gravados no arquivo avaliacao.txt \n");

    while (k != 0)
    {

// -----------------------------------------Alocação dinâmica para a estrutura.-------------------------------------------

        do
        {

            printf("\n Quantidade de Streamings que deseja avaliar: ");
            scanf("%i", &size_Streaming);

            QuantidadePtr = (struct Streaming *) malloc(size_Streaming*sizeof(struct Streaming));

            if (QuantidadePtr == NULL || size_Streaming == 0)
            {
                printf("\n Erro na alocacao de memoria. Informe um valor maior que 0. \n\n");
            }

        } while (QuantidadePtr == NULL || size_Streaming == 0);

// ------------------------------------------------Entrada de Dados.------------------------------------------------------

        for (i = 0; i < size_Streaming; i++)
        {
            printf("\n Informe os Dados da %i Streaming Assitida \n\n", i+1);

            printf("    Nome:                               ");
            scanf(" %[^\t\n]%*c", (QuantidadePtr + i)->Nome);

            printf("    Tipo (Filme/Serie/etc):             ");
            scanf(" %[^\t\n]%*c", (QuantidadePtr + i)->Streaming_tipo);

            printf("    Categoria (Aventura/Comedia/etc):   ");
            scanf(" %[^\t\n]%*c", (QuantidadePtr + i)->Categoria);

            do
            {
                printf("    Nota de avaliacao [0, 10]:          ");
                scanf("%f", &(QuantidadePtr + i)->Nota);

                aux = (QuantidadePtr + i)->Nota;

            } while (aux > 10 || aux < 0);
        }

// --------------------------------------------Saída de Dados: Confirmação.-----------------------------------------------

        printf("\n\n Dados informados: \n\n");
        for (i = 0; i < size_Streaming; i++)
        {
            printf("    Nome:                          %s \n", (QuantidadePtr + i)->Nome);
            printf("    Tipo:                          %s \n", (QuantidadePtr + i)->Streaming_tipo);
            printf("    Categoria:                     %s \n", (QuantidadePtr + i)->Categoria);
            printf("    Nota de avaliacao:             %.2f \n\n", (QuantidadePtr + i)->Nota);
        }

// --------------------------------------------Grava dados para o arquivo.-----------------------------------------------

        printf("\n Garavar para o arquivo? 1 - Sim; 0 - Nao; ");
        scanf("%i", &gr);

        if (gr == 1)
        {
            if (l == 1)
            {
                fprintf(filePtr, "      Avaliacao de Streamings assistidos na Netflix       \n\n");
                l++;
            }

            for (i = 0; i < size_Streaming; i++)
            {
                fprintf(filePtr, " Nome:               %s\n", (QuantidadePtr + i)->Nome);
                fprintf(filePtr, " Tipo:               %s\n", (QuantidadePtr + i)->Streaming_tipo);
                fprintf(filePtr, " Categoria:          %s\n", (QuantidadePtr + i)->Categoria);
                fprintf(filePtr, " Nota de avaliacao:  %.2f\n\n", (QuantidadePtr + i)->Nota);
            }
        }
        else
        {
            printf("\n\n Dados nao foram gravados. \n\n");
        }

// --------------------------------------------Condição para repetição.-------------------------------------------------

        printf("\n Deseja Continuar? 1 - Sim; 0 - Nao: ");
        scanf("%i", &k);
    }

// ---------------------------------------Fecha o arquivo e libera a memoria.-------------------------------------------

    printf("\n Programa Encerrado.");

    fclose(filePtr);
    free(QuantidadePtr);

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