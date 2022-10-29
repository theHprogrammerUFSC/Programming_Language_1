#include <stdio.h>

// Leitura de dados do arquivo output.txt
// O arquivo output.txt deve estar presente na pasta atual

int main()
{
    FILE *in_fPtr;
    int num;

    // Abertura do arquivo para a leitura
    in_fPtr = fopen("output.txt", "r");

    if (in_fPtr == NULL)
    {
        printf("\n Erro! Nao foi possivel abrir o arquivo! \n");
        return 1;   // Código de erro
    }

    // Leitura de dados do arquivo
    printf("\n Leitura de dados do arquivo output.txt \n");

    while (fscanf(in_fPtr, "%d", &num) == 1)
    {
        printf("Numero: %d \n", num);
    }

    // Fechar o arquivo
    fclose(in_fPtr);

    return 0;
}