#include<stdio.h>

int main()
{
    const int arraysize = 8;
    int cand[arraysize];
    int i, v;
    int n;
    float per1, per2;

    printf("\n Apuracao de votos: ");
    for (i = 0; i < arraysize; i++)
    {
        cand[i] = 0;                                                                //Incialização
    }

    printf("\n Informe a quantidade de votos que serao computados: ");
    scanf("%i", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n Escolha o candidato (1...7): ");
        scanf("%i", &v);
        if (v >= 1 && v <= 7)
        {
            cand[v]++;
        }
        else
        {
            cand[0]++;
        }
    }

    printf("\n Candidato    Votos \n");
    for (i = 1; i < arraysize; i++)
    {
        printf("\n %i              %i \n", i, cand[i]);
    }

    printf("\n Votos Nulos: %i \n", cand[0]);

    for (i = 1; i < arraysize; i++)
    {
        per1 = ((float)cand[i]/n)*100;

        printf("\n Porcentagem de votos do candidato %i = %.2f \n", i, per1);
    }
    
    per2 = ((float)cand[0]/n)*100;

    printf("\n Porcentagem de votos nulos = %.2f \n", per2);


    system("pause");
    
    return 0;
    
}



/*#include<stdio.h>

int main()
{
    const int arraysize = 6;
    int cand[arraysize];
    int i, v;

    printf("\n Apuracao de votos: ");
    for (i = 0; i < arraysize; i++)
    {
        cand[i] = 0;                                                                //Incialização
    }

    for (i = 0; i < 10; i++)
    {
        printf("\n Escolha o candidato (1...5): ");
        scanf("%i", &v);
        if (v >= 1 && v <= 5)
        {
            cand[v]++;
        }
        else
        {
            cand[0]++;
        }
    }

    printf("\n Candidato    Votos \n");
    for (i = 1; i < arraysize; i++)
    {
        printf("\n %i              %i \n", i, cand[i]);
    }

    printf("\n Votos Nulos: %i \n", cand[0]);
    
    return 0;
    
}*/