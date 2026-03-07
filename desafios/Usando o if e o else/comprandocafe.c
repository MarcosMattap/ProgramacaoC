#include <stdio.h>
int main(){
    float precocafe = 5.50;
    float meudinheiro;

    printf("Professor: Quanto você tem na carteira?");
    scanf("%f", &meudinheiro);

    if(meudinheiro >= precocafe){
        printf("Pode comprar! Aproveite o café!\n");
        //vamos calcular o trooco
        float troco = meudinheiro - precocafe;
        if (troco > 0){
            printf("Ainda te sobram R$%.2f de troco.\n", troco);
        }
        
    } else {
        printf("Você está curto de grana. Faltam R$ %.2f\n", precocafe - meudinheiro);
    }

    return 0;
}