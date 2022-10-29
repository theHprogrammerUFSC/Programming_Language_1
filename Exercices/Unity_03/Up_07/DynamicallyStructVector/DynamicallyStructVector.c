#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct

struct Books
{
    int book_id;
    char title[50];
    char author[50];
};

// Main

int main()
{
    struct Books *bPtr;
    int noOFBooks;
    int i, auxP1 = 0, auxP2 = 0;

    printf("\n Informe a quantidade de livros a serem cadastrados: ");
    scanf("%i", &noOFBooks);

    // Alocação dinâmica para a estrutura
    bPtr = (struct Books *) malloc(noOFBooks*sizeof(struct Books));

    for (i = 0; i < noOFBooks; i++)
    {
        printf("\n Entrada de Dados: Livro %i \n", i+1);

        (bPtr + i)->book_id = 100 + (i + 1);

        printf("    Titulo do Livro:     ");
        scanf(" %[^\n]%*c", (bPtr + i)->title);

        printf("    Autor do Livro:     ");
        scanf(" %[^\n]%*c", (bPtr + i)->author);

    }

    printf("\n /**************************************/ \n");

    printf("\n Livros Cadastrados \n");

    for (i = 0; i < noOFBooks; i++)
    {
        printf("\n _____Livro %i_____ \n", i+1);
        printf("Codigo do Livro: %i \n", (bPtr + i)->book_id);
        printf("Titulo do Livro: %s \n", (bPtr + i)->title);
        printf("Autor do Livro: %s \n", (bPtr + i)->author);
    }

    free(bPtr);

    return 0;
}