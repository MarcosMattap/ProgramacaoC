#include <stdio.h>
/*/
    Objetivo: Criar um sistema para uma escola. 
    O programa recebe a nota do aluno (0 a 10).
    1. se a nota for 7 ou maior, o progrma imprime "Aprovado"
    2. se a nota for entre 5 e 6.9, o programa imprime "Recuperação"
    3. se a nota for menor que 5, o programa imprime "Reprovado"
*/
int main(){
    float nota;

    printf("Professor: Qual a nota do aluno? ");
    scanf("%f", &nota);

    if (nota >= 7.0){
        printf("Aprovado\n");
    } else if (nota >= 5.0 && nota < 7.0){
        printf("Recuperação\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}