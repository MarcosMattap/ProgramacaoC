#include <stdlib.h>

int *vetor;
int tamanho = 100;

int main() {
	//peça do computador: "Reserva espaço para 100 números inteiros"
	vetor = (int *) malloc( tamanho * sizeof(int));

	//Uso de vetor
	//Regra de ouro: Oque você alocou, você deve liberar
	free(vetor);
	
	
}