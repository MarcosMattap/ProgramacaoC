/* Criar um programa que:
    1- Defina uma struct chamada aluno
    2- pergunte ao usuário quantos alunos ele quer cadastrar (isso define o tamanho da nossa alocação dinamica)
    3- Usar malloc para criar o espaço
    4- Lê os dados e salvar tudo em um arquivo chamado turma.txt.
        
*/

#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[50];
    float nota;
};

int main() {
    int quantidade;
    struct aluno *turma;

    printf("Quantos alunos deseja cadastrar? ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    turma = (struct aluno *) malloc(quantidade * sizeof(struct aluno));
    if (turma == NULL) {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    for(int i = 0; i < quantidade; i++){
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %49[^\n]", turma[i].nome);

        printf("Digite a nota do aluno %d: ", i + 1);
        while (scanf("%f", &turma[i].nota) != 1) {
            printf("Nota invalida. Digite novamente a nota do aluno %d: ", i + 1);
            limpar_buffer();
        }
    }

    FILE *arquivo;
    arquivo = fopen("turma.txt", "w");

    if(arquivo != NULL){
        for(int i = 0; i < quantidade; i++){
            fprintf(arquivo, "Nome: %s, Nota: %.2f\n", turma[i].nome, turma[i].nota);
        }
        fclose(arquivo);
    }

    free(turma);

    return 0;
}

