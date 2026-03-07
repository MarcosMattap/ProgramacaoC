/*
    Desafio de programação

    Montar função main que:

    * pergunte o numero de alunos (n)
    * usar o malloc para criar o vetor de struct Aluno
    * usar o loop for para ler o nome e a nota de cada aluno
    
    Dica: Para ler uma string (o nome) com espaço use o scanf("%[^\n]s", lista[i].nome); -
    esse formato especial diz ao C para ler tudo até o enter ser precionado.



*/


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    int n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    getchar(); // Limpar o buffer do teclado

    Aluno* lista = (Aluno*)malloc(n * sizeof(Aluno));
    if (lista == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%[^\n]s", lista[i].nome);
        getchar(); // Limpar o buffer do teclado
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &lista[i].nota);
        getchar(); // Limpar o buffer do teclado
    }

    // Exibir os alunos e suas notas
    printf("\nLista de Alunos:\n");
    for (int i = 0; i < n; i++) {
        printf("Aluno: %s, Nota: %.2f\n", lista[i].nome, lista[i].nota);
    }

    free(lista); // Liberar a memória alocada
    return 0;
}

