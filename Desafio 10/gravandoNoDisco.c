#include <stdio.h>
#include <stdlib.h> // Necessário para malloc e free

struct Aluno {
    char nome[50];
    float nota;
};

int main() {
    int n;
    printf("Professor: Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);

    // 1. Alocação Dinâmica
    struct Aluno* lista = (struct Aluno*) malloc(n * sizeof(struct Aluno));

    // 2. Leitura dos Dados (Sua lógica refinada)
    for (int i = 0; i < n; i++) {
        printf("\nNome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", lista[i].nome); // Lendo nome com espaços
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &lista[i].nota);
    }

    // 3. Gravando em Arquivo
    FILE *arquivo = fopen("turma.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(arquivo, "Aluno: %s | Nota: %.2f\n", lista[i].nome, lista[i].nota);
    }
    fclose(arquivo);

    printf("\nDados salvos com sucesso em 'turma.txt'!\n");

    // 4. Faxina de Memória (Obrigatório em C!)
    free(lista);

    return 0;
}