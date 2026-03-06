#include <stdio.h>

int main(){
   int Idade; //Reservando espaço para um inteiro
   int Dias;
   
   printf("Professor: Quantos anos você tem? ");

   //O '&' indica o endereço de memória onde a idade será guardada.
   scanf("%d", &Idade);
   Dias = Idade * 365;
   
   printf("Incrível! Você ja viveu pelomenos %d dias. \n" , Dias);

   return 0;
}