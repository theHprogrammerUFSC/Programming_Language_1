#include <stdio.h>
#include <stdlib.h>

struct Books
{
    int book_id;
    char title[50];
    char author[50];
};

/*********************************************/

int main()
{
    struct Books *aPtr;
    struct Books *bPtr;

    //  Alocação dinâmica para o livro 1
    aPtr = (struct Books*) malloc(sizeof(struct Books));

    //  Alocação dinâmica para o livro 2
    bPtr = (struct Books*) malloc(sizeof(struct Books));


/*********************************************/

    printf("\n Entrada de dados para o Livro 1 \n");

    printf(" Identificador: ");
    scanf("%d", &aPtr->book_id);

    printf(" Titulo do Livro: ");
    scanf(" %[^\n]%*c", aPtr->title);

    printf(" Autor do Livro: ");
    scanf(" %[^\n]%*c", aPtr->author);


    printf("\n Entrada de dados para o Livro 2 \n");

    printf(" Identificador: ");
    scanf("%d", &bPtr->book_id);

    printf(" Titulo do Livro: ");
    scanf(" %[^\n]%*c", bPtr->title);

    printf(" Autor do Livro: ");
    scanf(" %[^\n]%*c", bPtr->author);

/*********************************************/

    printf("\n");

    printf("\n Livros Cadastrados \n");

    printf("\n_____Livro 1_____\n");
    printf("Codigo do Livro: %d \n", aPtr->book_id);
    printf("Titulo do Livro: %s \n", aPtr->title);
    printf("Autor do Livro: %s \n", aPtr->author);

    printf("\n_____Livro 2_____\n");
    printf("Codigo do Livro: %d \n", bPtr->book_id);
    printf("Titulo do Livro: %s \n", bPtr->title);
    printf("Autor do Livro: %s \n", bPtr->author);
}
