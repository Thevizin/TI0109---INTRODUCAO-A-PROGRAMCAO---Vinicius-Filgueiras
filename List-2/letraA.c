#include <stdio.h>
#include <math.h>
/*
    Algoritmo em portugol
algoritmo
declare n1, n2, m
escreva "informe o valor da primeira e segunda nota, respectivamente"
leia n1, n2
m recebe 2*n1/5 + 3*n2/5
escreva "media ponderada = ",m
fim_algoritmo

*/

int main(){
   float n1,n2,m;
   printf(" informe o valor da primeira e segunda nota, respectivamente\n");
   scanf("%f\n",&n1);
   scanf("%f",&n2);
   m= 2*n1/5 + 3*n2/5;
   printf("media ponderada = %.1f",m);
   return 0;
}
