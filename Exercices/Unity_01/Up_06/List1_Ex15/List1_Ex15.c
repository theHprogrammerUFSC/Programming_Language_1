#include<stdio.h>

int main()
{
    int i = 1;
    float n, receptor = 1;
    float soma = 0;

    printf("\n Calculo da soma: 1/1 + 1/2 + ... + 1/n \n");

    printf("\n Informe n: ");
    scanf("%f", &n);

    while ((i <= n) && (n != 0))
    {
        soma = soma + (1 / receptor);

        printf("\n + 1/%.2f ", receptor);

        i++;
        receptor++;
    }
    
    printf("\n Soma = %.2f \n", soma);

    return 0;
}