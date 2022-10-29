#include <stdio.h>

// Criação do arquivo output.txt

int main()
{
    FILE *filePtr;
    int i;

    // Criar um arquivo
    filePtr = fopen("output.txt", "w");

    if (filePtr == NULL)
    {
        printf("\n Erro! Nao foi possivel encontrar o arquivo! \n");
        return 1;   // Código de erro
    }

    // Gravar dados para arquivo
    for (i = 1; i <= 10; i++)
    {
        fprintf(filePtr, "%d\n", i);
    }
    
    // Fechar o arquivo
    printf("\n O programa gravou numeros de [1, 10] para o arquivo output.txt \n");
    fclose(filePtr);

    return 0;
}