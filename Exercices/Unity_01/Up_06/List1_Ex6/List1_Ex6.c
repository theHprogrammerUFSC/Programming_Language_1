#include<stdio.h>

int main()
{
    int c;
    float N1, N2;
    float operator;

    printf("\n Calculadora: Operacao com dois numeros reais. \n");

    printf("\n Informe o primeiro numero: ");
    scanf("%f", &N1);
    printf("\n Informe o segundo numero: ");
    scanf("%f", &N2);

    printf("\n Operacoes: \n"
           "1 - Soma (+) \n"
           "2 - Subtracao (-) \n"
           "3 - Multiplicacao (*) \n"
           "4 - Divisao (/) \n"
           "\n Escolha a operacao desejada: ");
    scanf("%i", &c);

    switch (c)
    {
    case 1:
        operator = N1 + N2;
        printf("\n Soma = %.2f + %.2f = %.2f \n", N1, N2, operator);
        break;
    case 2:
        operator = N1 - N2;
        printf("\n Subtracao = %.2f - %.2f = %.2f \n", N1, N2, operator);
        break;
    case 3:
        operator = N1 * N2;
        printf("\n Multiplicacao = %.2f * %.2f = %.2f \n", N1, N2, operator);
        break;
    case 4:
        if (N2 == 0)
        {
            printf("\n Impossivel divisao por 0");
        }
        else
        {
            operator = N1 / N2;
            printf("\n Divisao = %.2f / %.2f = %.2f \n", N1, N2, operator);
        }
        break;
    default:
    printf("\n Numero %i e um codigo invalido. Intervalo de codigo aceito: [1, 4] \n", c);
        break;
    }

    return 0;
}