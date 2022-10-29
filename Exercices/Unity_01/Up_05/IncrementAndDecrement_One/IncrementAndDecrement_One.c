#include<stdio.h>

int main()
{
    int c;                                                              //Contador.

    printf("\n Teste de Pre-Incremento e Pos-Incremento\n");

    c = 5;
    printf("\n Pre-Incremento: \n");
    printf("\n c = %i \n", c);                                          //Imprime c = 5.
    printf("\n ++c = %i \n", ++c);                                      //Pré-Incrementa e imprime 6.
    printf("\n c = %i \n", c);                                          //Imprime 6.

    c = 5;
    printf("\n Pos-Incremento: \n");
    printf("\n c = %i \n", c);                                          //Imprime c = 5.
    printf("\n c++ = %i \n", c++);                                      //Imprime 5 e Pós-Incrementa
    printf("\n c = %i \n", c);                                          //Imprime 6.

    c = 5;
    printf("\n Pre-Decrementa: \n");
    printf("\n c = %i \n", c);                                          //Imprime c = 5.
    printf("\n --c = %i \n", --c);                                      //Pré-Decrementa e imprime 4.
    printf("\n c = %i \n", c);                                          //Imprime 6.

    c = 5;
    printf("\n Pos-Decrementa: \n");
    printf("\n c = %i \n", c);                                          //Imprime c = 5.
    printf("\n c-- = %i \n", c--);                                      //Imprime 5 e Pós-Decrementa
    printf("\n c = %i \n", c);                                          //Imprime 4.

    return 0;
}