#include <stdio.h>
#include <string.h>

struct Books
{
    int book_id;
    char title[50];
    char author[50];
};

void printBook(struct Books book, int n);

/**********************************************************************************************************************/

int main()
{
    const int lib_size = 5;
    struct Books Lib[lib_size];
    int i;

    printf("\n Usar '_' no lugar dos espacos para evitar problemas. \n");

    for (i = 0; i < lib_size; i++)
    {
        printf("\n Entrada de dados para o Livro %i: \n", i);

        Lib[i].book_id = 100 + i;

        printf("\n Titulo do Livro: ");
        scanf("%s", Lib[i].title);

        printf("\n Autor do Livro: ");
        scanf("%s", Lib[i].author);
    }

    printf("\n Conteudo do vetor Lib: \n");

    for (i = 0; i < lib_size; i++)
    {
        printBook(Lib[i], i);
    }

    printf("\n");

    return 0;
}

void printBook(struct Books book, int n)
{
    printf("\n\n_____Livro %i_____\n", n);
    printf("Codigo do Livro: %d \n", book.book_id);
    printf("Titulo do Livro: %s \n", book.title);
    printf("Autor do Livro: %s \n", book.author);

    return;
}