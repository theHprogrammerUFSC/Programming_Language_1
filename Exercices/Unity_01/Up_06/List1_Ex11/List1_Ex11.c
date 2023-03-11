#include<stdio.h>

int main()
{
    int c;
    float soma1 = 0, soma2 = 0, soma3 = 0;
    float i1, i2, i3;
    int action;
    float total;
    float per1, per2, per3;


    do
    {
        printf("\n Controle de dados de uma adega.\n"
               "\n Menu de selecao \n"
               "\n 1 - Vinho Tinto."
               "\n 2 - Vinho Branco."
               "\n 3 - Vinho Rose."
               "\n 0 - Finalizar. \n");

        printf("\n Selecione o tipo de vinho que deseja acrescentar ou retirar do controle de dados: ");
        scanf("%i", &c);

        if ((c > 3) || (c < 0))
        {
            printf("\n Dado nao consta em nossa lista. \n");
        }
        else if (c == 1)
        {
            printf("\n No momento ha %.2f vinhos tintos estocados na adega. \n", soma1);
            printf("\n Opcoes: \t" "\t 1: Adicionar. \t" "\t 2: Retirar. \n");
            scanf("%i", &action);

            switch (action)
            {
            case 1:
                printf("\n Informe a quantidade que deseja adicionar: ");
                scanf("%f", &i1);

                soma1 = soma1 + i1;
                break;
            case 2:
                printf("\n Informe a quantidade que deseja retirar: ");
                scanf("%f", &i1);

                soma1 = soma1 - i1;

                if (soma1 < 0)
                {
                    soma1 = 0;
                }
                break;
            default:
                printf("\n Valor nao consta - Volatando ao menu inicial. \n");
                break;
            }
        }

        else if (c == 2)
        {
            printf("\n No momento ha %.2f vinhos branco estocados na adega. \n", soma2);
            printf("\n Opcoes: \t" "\t 1: Adicionar. \t" "\t 2: Retirar. \n");
            scanf("%i", &action);

            switch (action)
            {
            case 1:
                printf("\n Informe a quantidade que deseja adicionar: ");
                scanf("%f", &i2);

                soma2 = soma2 + i2;
                break;
            case 2:
                printf("\n Informe a quantidade que deseja retirar: ");
                scanf("%f", &i2);

                soma2 = soma2 - i2;

                if (soma2 < 0)
                {
                    soma1 = 0;
                }
                break;
            default:
                printf("\n Valor nao consta - Volatando ao menu inicial. \n");
                break;
            }
        }

        else if (c == 3)
        {
            printf("\n No momento ha %.2f vinhos rose estocados na adega. \n", soma3);
            printf("\n Opcoes: \t" "\t 1: Adicionar. \t" "\t 2: Retirar. \n");
            scanf("%i", &action);

            switch (action)
            {
            case 1:
                printf("\n Informe a quantidade que deseja adicionar: ");
                scanf("%f", &i3);

                soma3 = soma3 + i3;
                break;
            case 2:
                printf("\n Informe a quantidade que deseja retirar: ");
                scanf("%f", &i3);

                soma3 = soma3 - i3;

                if (soma3 < 0)
                {
                    soma3 = 0;
                }
                break;
            default:
                printf("\n Valor nao consta - Volatando ao menu inicial. \n");
                break;
            }
        }     
    } while ((c >= 1) && (c <= 3));

    total = soma1 + soma2 + soma3;

    per1 = (soma1 / total) * 100;
    per2 = (soma2 / total) * 100;
    per3 = (soma3 / total) * 100;
    
    printf("\n Demonstrativo do estoque: \n");


    printf("\n Quantidade de vinho tinto no estoque: %.2f", soma1);
    printf("\n Porcentagem de vinho tinto no estoque: %.2f\n", per1);

    printf("\n Quantidade de vinho branco no estoque: %.2f", soma2);
    printf("\n Porcentagem de vinho branco no estoque: %.2f\n", per2);

    printf("\n Quantidade de vinho rose no estoque: %.2f", soma3);
    printf("\n Porcentagem de vinho rose no estoque: %.2f\n", per3);

    return 0;
}

 /*do
    {
        printf("\n Controle de dados de uma adega.\n"
               "\n Menu de selecao \n"
               "\n 1 - Vinho Tinto."
               "\n 2 - Vinho Branco."
               "\n 3 - Vinho Rose."
               "\n 0 - Finalizar. \n");

        printf("\n Selecione o tipo de vinho que deseja acrescentar ou retirar do controle de dados: ");
        scanf("%i", &c);

        if (c == 0)
        {
            printf("\n Finalizado.\n");
            break;
        }
        else if ((c > 3) || (c < 0))
        {
            printf("\n Dado nao consta em nossa lista. \n");
        }
        else if (c == 1)
        {
            printf("\n No momento ha %.2f vinhos tintos estocados na adega. \n", soma1);
            printf("\n Opcoes: \t" "\t 1: Adicionar. \t" "\t 2: Retirar. \n");
            scanf("%i", &action);

            switch (action)
            {
            case 1:
                printf("\n Informe a quantidade que deseja adicionar: ");
                scanf("%f", &i1);

                soma1 = soma1 + i1;
                break;
            case 2:
                printf("\n Informe a quantidade que deseja retirar: ");
                scanf("%f", &i1);

                soma1 = soma1 - i1;

                if (soma1 < 0)
                {
                    soma1 = 0;
                }
                break;
            default:
                printf("\n Valor nao consta - Volatando ao menu inicial. \n");
                break;
            }
        }

        else if (c == 2)
        {
            printf("\n No momento ha %.2f vinhos branco estocados na adega. \n", soma2);
            printf("\n Opcoes: \t" "\t 1: Adicionar. \t" "\t 2: Retirar. \n");
            scanf("%i", &action);

            switch (action)
            {
            case 1:
                printf("\n Informe a quantidade que deseja adicionar: ");
                scanf("%f", &i2);

                soma2 = soma2 + i2;
                break;
            case 2:
                printf("\n Informe a quantidade que deseja retirar: ");
                scanf("%f", &i2);

                soma2 = soma2 - i2;

                if (soma2 < 0)
                {
                    soma1 = 0;
                }
                break;
            default:
                printf("\n Valor nao consta - Volatando ao menu inicial. \n");
                break;
            }
        }

        else if (c == 3)
        {
            printf("\n No momento ha %.2f vinhos rose estocados na adega. \n", soma3);
            printf("\n Opcoes: \t" "\t 1: Adicionar. \t" "\t 2: Retirar. \n");
            scanf("%i", &action);

            switch (action)
            {
            case 1:
                printf("\n Informe a quantidade que deseja adicionar: ");
                scanf("%f", &i3);

                soma3 = soma3 + i3;
                break;
            case 2:
                printf("\n Informe a quantidade que deseja retirar: ");
                scanf("%f", &i3);

                soma3 = soma3 - i3;

                if (soma3 < 0)
                {
                    soma3 = 0;
                }
                break;
            default:
                printf("\n Valor nao consta - Volatando ao menu inicial. \n");
                break;
            }
        }     
    } while (1);

    total = soma1 + soma2 + soma3;

    per1 = (soma1 / total) * 100;
    per2 = (soma2 / total) * 100;
    per3 = (soma3 / total) * 100;
    
    printf("\n Demonstrativo do estoque: \n");


    printf("\n Quantidade de vinho tinto no estoque: %.2f", soma1);
    printf("\n Porcentagem de vinho tinto no estoque: %.2f\n", per1);

    printf("\n Quantidade de vinho branco no estoque: %.2f", soma2);
    printf("\n Porcentagem de vinho branco no estoque: %.2f\n", per2);

    printf("\n Quantidade de vinho rose no estoque: %.2f", soma3);
    printf("\n Porcentagem de vinho rose no estoque: %.2f\n", per3);*/