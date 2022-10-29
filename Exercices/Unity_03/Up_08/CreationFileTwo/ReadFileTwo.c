#include <stdio.h>

// Leitura do arquivo aluno.txt

int main()
{
    FILE *filePtr;
    int id;
    float n;
    char name[100];

    // Abrir um arquivo
    filePtr = fopen("alunos.txt", "r");

    if (filePtr == NULL)
    {
        printf("\n Erro! Nao foi possivel encontrar o arquivo! \n");
        return 1;   // Código de erro
    }

    // Ler dados do arquivo
    printf("\n Programa faz a leitura de dados do arquivo alunos.txt \n");

    while (fscanf(filePtr, "%i", &id) != EOF)
    {
        fscanf(filePtr, "%i", &id);
        fgets(name, 100, filePtr);
        fscanf(filePtr, "%f", &n);

        printf("\n Leitura de dados: ");
        printf("\n Matricula: %i", id);
        printf("\n Nome: %s", name);
        printf(" Nota: %.2f \n\n", n);
    }

    // Fechar o arquivo
    fclose(filePtr);

    return 0;
}