#include<stdio.h>

int main()
{
    int counter;                                                        //Contador

    printf("\n Estutura Do/While \n"
           "\n Contagem 0 a 10.\n");

    counter = 0;                                                        //Incialização

    do                                                                  //Processamento
    {
        printf("\n %i \n", counter);
        counter++;
    } while (counter <= 10);                                            //Condição

    return 0;
    
}