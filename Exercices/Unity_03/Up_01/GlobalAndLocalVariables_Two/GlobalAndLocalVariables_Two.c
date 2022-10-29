#include <stdio.h>

int a; /* Recebe a = 0 por seu uma variável global.*/
void f(int b);                                              //Declaração de função.

int main()
{
    //Variáveis local em função main.
    int b; /* Não se sabe o valor que receberá por ser local. b = ??*/

    printf("\n Valor de a em main() = %d", a);
    printf("\n Valor de b em main() = %d \n\n", b);

    f(b);

    return 0;
}

//Soma de inteiros.

void f(int b)
{
    int c; /* Não se sabe o valor que receberá por ser local. c = ??*/

    printf("\n_____________ Funcao f (inicio) _____________\n");
    printf("\n Valore de a em f() = %d", a);
    printf("\n Valore de b em f() = %d", b);
    printf("\n Valore de c em f() = %d \n", c);
    printf("\n_____________ Funcao f (fim) _____________\n");

}