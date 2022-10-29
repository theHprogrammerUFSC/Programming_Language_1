#include <stdio.h>

// Criação do arquivo aluno.txt

int main()
{
    FILE *filePtr;
    int id, i = 1, ch;
    float n;
    char name[100];

    // Criar um arquivo
    filePtr = fopen("alunos.txt", "w");

    if (filePtr == NULL)
    {
        printf("\n Erro! Nao foi possivel encontrar o arquivo! \n");
        return 1;   // Código de erro
    }

    // Ler dados e gravar dados para arquivo
    printf("\n Programa grava dados para arquivo alunos.txt \n");

    while (i != 0)
    {
        printf("\n Digite a matricula do aluno: ");
        scanf("%i", &id);

        // fflush(stdin);
        printf("\n Digite o nome do aluno: ");
        scanf(" %[^\t\n]s", name);

        printf("\n Digite a nota do aluno: ");
        scanf("%f", &n);

        printf("\n Voce digitou: ");
        printf("\n Matricula: %i", id);
        printf("\n Nome: %s", name);
        printf("\n Nota: %.2f", n);

        printf("\n Garava para o arquivo? 1 - Sim; 0 - Nao; ");
        scanf("%i", &ch);

        if (ch == 1)    // Grava dados para o arquivo
        {
            fprintf(filePtr, "%d\n", id);
            fprintf(filePtr, "%s\n", name);
            fprintf(filePtr, "%.2f\n", n);
        }
        
        printf("\n Deseja continuar? 1 - Sim; 0 - Nao;");
        scanf("%i", &i);
    }
    
    // Fechar o arquivo
    fclose(filePtr);

    return 0;
}