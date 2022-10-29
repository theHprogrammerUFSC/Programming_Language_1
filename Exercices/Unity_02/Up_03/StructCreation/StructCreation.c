#include<stdio.h>
#include<string.h>

struct Livros
{
    int book_id;
    char title[50];
    char author[50];
};

/**********************************************************************************************************************/

int main()
{
    struct Livros Book1;
    struct Livros Book2;

    strcpy( Book1.title, "Logica de Programacao");
    strcpy( Book1.author, "FORBELLONE");
    Book1.book_id = 101;

    strcpy( Book2.title, "Treinamento em Linguagem C");
    strcpy( Book2.author, "MIZRAHI");
    Book2.book_id = 102;

    printf("\n ____________Livro 1 (Book 1)____________ \n");
    printf("Codigo (book_id): %d \n", Book1.book_id);
    printf("Titulo (title): %s \n", Book1.title);
    printf("Autor (Author): %s \n", Book1.author);

    printf("\n ____________Livro 2 (Book 2)____________ \n");
    printf("Codigo (book_id): %d \n", Book2.book_id);
    printf("Titulo (title): %s \n", Book2.title);
    printf("Autor (Author): %s \n", Book2.author);

    return 0;
}