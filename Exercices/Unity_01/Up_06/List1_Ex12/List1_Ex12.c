#include<stdio.h>

int main()
{
    int a, b, c;
    int soma = 0;
    int i;                                                                                          //Contador                                                                                       //Verificador de numero divisível

    printf("\n Soma dos numeros inteiros entre b e c e que sejam divisiveis por a. \n");

    printf("\n Informe o valor de a: ");
    scanf("%i", &a);

    printf("\n Informe o valor de b: ");
    scanf("%i", &b);

    printf("\n Informe o valor de c: ");
    scanf("%i", &c);

    for (i = b; i <= c ; i++)
    {
      if (a == 0)
      {
          printf("\n Impossivel divisao por 0 \n");
          break;
      }
      else if (i % a == 0)
      {
          soma+= i;

          printf("\n + %i ", i); 
      }  
    }

    printf("\n Soma = %i \n", soma);
    

    return 0;
}