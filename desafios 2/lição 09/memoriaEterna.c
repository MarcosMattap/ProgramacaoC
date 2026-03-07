#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("dados.txt", "w");
    // "w" - para write (escrever) - cria um novo arquivo ou sobrescreve um arquivo existente

    if(arquivo != NULL){
        fprintf(arquivo, "Nome: Gabriel, Nota: 10\n");
        fclose(arquivo);
        // fecha o arquivo para salvar as alterações e liberar recursos
    }
    
    return 0;
}