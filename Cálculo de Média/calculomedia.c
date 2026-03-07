#include <stdio.h>

//protótipo de função (avisa o compilador que a função existe.)

float calcularMedia(float n1, float n2);

int main(){
    float n1 = 8.0, n2 = 6.0;

    //chamado a função
    float resultado = calcularMedia(n1, n2);

    printf("A média é: %.2f\n", resultado);

    return 0;
}


//Implementação da função
float calcularMedia(float n1, float n2){
    return (n1 + n2) / 2;
}
