#include <stdio.h>

int byValue(int a);                 //Passagem de argumento por valor
void byPtr(int *ptr);                //Passagem de argumento por referência

int main()
{
    int num;
    int x = -5, y = -5;

    printf("\n Passagem de argumento por byValue ");
    printf("\n x = %i", x);
    printf("\n Chamada da funcao num = byValue(x) ");
    num = byValue(x);
    printf("\n num = %i", num);
    printf("\n x = %i", x);

    printf("\n\n\n Passagem de argumento por byPtr ");
    printf("\n y = %i", y);
    printf("\n Chamada da funcao byPtr(&y) ");
    byPtr(&y);
    printf("\n y = %i", y);

    return 0;
}

//Passagem de argumento por valor
int byValue(int a)
{
    if (a < 0)
    {
        return a * -1;
    }
    else
    {
        return a;
    } 
}

//Passagem de argumento por referência
void byPtr(int *ptr)
{
    if (*ptr < 0)
    {
        *ptr = *ptr * -1;
        return;
    }   
}