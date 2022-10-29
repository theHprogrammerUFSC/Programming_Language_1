#include <stdio.h>

//Variáveis Globais.

int a = 20;
int sum(int a, int b);                                              //Declaração de função.

int main()
{
    //Variáveis local em função main.
    //int a = 10;
    int b = 5;
    int c = 0;

    printf("\n Valor de a em main() = %d \n\n", a);

    c = sum(a, b);

    printf("\n Valor de c = a + b em main() = %d \n\n", c);

    return 0;
}

//Soma de inteiros.

int sum(int a, int b)
{
    printf("\n_____________ Funcao sum (inicio) _____________\n");
    printf("\n Valore de a em sum() = %d \n", a);
    printf("\n Valore de b em sum() = %d \n", b);
    printf("\n_____________ Funcao sum (fim) _____________\n");

    return a + b;
}