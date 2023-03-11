#include<stdio.h>

int main()
{
    int n[10], r[10] = {0};
    int i, j, k = 0, counter = 0, verificador = 1;

    printf("\n Valores repetidos. \n");
    printf("\n Informe os valores de n: \n");

    for (i = 0; i < 10; i++)
    {
        printf("\n n = ");
        scanf("%i", &n[i]);
    }
    
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        for (j = i+1; j < 10; j++)
        {
            if (n[i] == n[j])
            {
                for (k = 0; k < counter; k++)                       //Verifica se n[i] ja foi incluido no vetor r
                {                                                   //e armazena o resultado na variavel verificador
                    if (n[i] == r[k])                               //verificador == 0 (já foi incluido)
                    {                                               //verificador == 1 (não foi incluido)
                        verificador = 0;
                    }
                }
                if (verificador != 0)                               //se ainda não foi incluido
                {                                                   //inclui o valor de n[i] no vetor r
                    r[counter] = n[i];
                    counter++;
                }
            }
            verificador = 1;                                        //Reinicialização do verificador
        }   
    }

    for (i = 0; i < counter; i++)
    {
        printf("\t %i", r[i]);
    }

    return 0;
}
