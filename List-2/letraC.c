#include <stdio.h>
#include <math.h>
/*
   algoritmo em portugol
algoritmo
declare s, v, sl
escreva "escreva o valor do salario fixo do funcionario"
leia s
escreva "quanto, em dinheiro, o funcionario vendeu nesse mes"
leia v
sl recebe s + v*0,05
escreva "o salario liquido eh ", sl
fim_algoritmo
*/

int main(){
float s, v, s1;
printf("escreva o valor do salario fixo do funcionario\n");
scanf("%f",&s);
printf("quanto, em dinheiro, o funcionario vendeu nesse mes\n");
scanf("%f",&v);
s1 = s + v*0.05;
printf("o salario liquido eh %.1f",s1);
}

