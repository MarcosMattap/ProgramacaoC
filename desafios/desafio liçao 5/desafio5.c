/*
    criar uma função chamada eMaiorDeIdade (int idade).
        * ela deve receber um numro inteiro.
        * se for maior ou igual a 18, deve retornar 1 (verdadeiro).
        * se for menor que 18, deve retornar 0 (falso).
*/

#include <stdio.h>

//protótipo de função
int eMaiorDeIdade(int idade);

int main(){
    int idade = 20;

    //chamado a função
    int resultado = eMaiorDeIdade(idade);

    if(resultado){
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    return 0;
}

//Implementação da função
int eMaiorDeIdade(int idade){
    if(idade >= 18){
        return 1;
    } else {
        return 0;
    }
}