#include<stdio.h>

int main()
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting2[] = "World";

    printf("\n Mensagem: %s %s\n", greeting, greeting2);

    char str[100];

    printf("\n Digite mensagem: ");
    scanf("%s", str);

    printf("\n Voce digitou: %s ", str);

    return 0;    
}