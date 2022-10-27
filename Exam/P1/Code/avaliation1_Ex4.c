#include<stdio.h>

int main()
{
    //Declaração de variaveis:

    int n[15];                                                                  //vetor de 15 elementos.
    int i;                                                                      //contador.
    int soma = 0;                                                               //soma dos pares.
    int k;                                                                      //valor de referência do usuário.

    //Declarações iniciais:

    printf("\n Informe os elementos do vetor n: \n");

    for (i = 0; i < 15; i++)
    {
        printf("\n n[%i] = ", i);
        scanf("%i", &n[i]);
    }

    printf("\n\n Elementos de n: \n");

    for (i = 0; i < 15; i++)
    {
       printf("n[%i] = %i\t", i, n[i]); 
    }

    //Parte (a) da questão:

    printf("\n\n Soma dos elementos pares do vetor n: \n");

    for (i = 0; i < 15; i++)
    {
        if (n[i] % 2 == 0)
        {
            soma+= n[i];
        }
    }

    printf("\n Soma dos elementos pares = %i \n\n", soma);

    /*************************************************************************************************/
    
    //Parte (b) da questão:

    printf("\n Multiplicacao por 10 dos elementos que forem iguais a k: \n");

    printf("\n Informe o valor k: ");
    scanf("%i", &k);


    for (i = 0; i < 15; i++)
    {
        if (k == n[i])
        {
            n[i] = n[i] * 10;
        }
    }

    printf("\n Elementos de n apos a substituicao: \n");

    for (i = 0; i < 15; i++)
    {
       printf("%i\t", n[i]); 
    }
    
    return 0;
}