#include<stdio.h>

int max(int num1, int num2);                                                                //Declaração de função
/******************************************************************************************************************/

int main()
{
    //Variáveis locais
    int a, b;
    int num_max;

    printf("\n O programa retorna o maior de dois numeros\n");
    printf("\n Digite o primeiro numero: ");
    scanf("%i", &a);
    printf("\n Digite o segundo numero: ");
    scanf("%i", &b);

    num_max = max(a, b);                                                                    //Chamada de Função
    printf("\n\n O maior numero e: %d \n", num_max);

    num_max = max(100, b);                                                                  //Chamada de Função
    printf("\n\n O maior numero e: %d \n", num_max);

    num_max = max(a, -5);                                                                    //Chamada de Função
    printf("\n\n O maior numero e: %d \n", num_max);

    return 0;
}

//Função para retorno do máximo de dois números

int max(int num1, int num2)
{
    //Variáveis locais
    int result;

    if (num1 == num2)
    {
        result = num1;
        printf("\n Os numeros sao iguais. \n");
    }
    else if (num1 > num2)
    {
        result = num1;
    }
    else if (num2 > num1)
    {
        result = num2;
    }

    return result;
}