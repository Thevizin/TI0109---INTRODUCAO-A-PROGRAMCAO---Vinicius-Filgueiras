#include <stdio.h>
#include <math.h>

/*
   algaritmo em portugol
algaritmo
declare Sm, S, N
escreva "escreva o valor do salario minimo: "
leia Sm
escreva "agora forneça o salario ganho pelo funcionario: "
leia S
N recebe S/Sm
escreva "o salario do funcionario eh igual a = vezes o salário minimo", N
fim_algoritmo
*/

int main(){
    float Sm, S, N;
    printf("escreva o valor do salario minimo: ");
    scanf("%f",&Sm);
    printf("agora informe o salario ganho pelo funcionario: ");
    scanf("%f", &S);
    N = S/Sm;
    printf("o salario do funcionario eh igual a %.1f vezes o salario minimo",N);

    return 0;
}