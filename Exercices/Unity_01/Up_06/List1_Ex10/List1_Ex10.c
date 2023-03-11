#include<stdio.h>

int main()
{
    int contador;
    int countererror;
    int N;
    float average;
    int total;
    int aux;

    contador = 1;
    countererror = 0;
    total = 0;

    printf("\n Media aritimetica de numeros pares positivos. \n");

    printf("\n Digite a quantidade de valores que deseja informar: ");
    scanf("%i", &aux);

    while (contador <= aux)
    {
        if (aux < 0)
        {
            break;
        }
        
        printf("\n Informe o numero: ");
        scanf("%i", &N);

        if ((N >= 0) && (N % 2 == 0))
        {
            contador++;
            total+= N;
        }
        else if ((N < 0) || (N % 2 != 0))
        {
            countererror++;
            printf("\n Entrada Invalida. \n");
        }        
    }

    average = total/(aux);

    printf("\n Media = %.2f ", average);
    printf("\n Quantidade de tentativas de entreda invalida: %i ", countererror); 
    
    
    return 0;
}