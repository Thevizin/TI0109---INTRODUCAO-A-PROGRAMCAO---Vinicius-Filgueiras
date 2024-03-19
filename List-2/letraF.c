#include <stdio.h>
#include <math.h>

/*
   algaritmo em portugol
algaritmo
declare L, A
escreva "informe o valor do lado do quadrado: "
leia L
A recebe L*L
escreva "o valor dea area do quadrado eh = ", A
fim_algoritmo
*/

int main(){
    float L, A;
    printf("informe o valor do lado do quadrado: ");
    scanf("%f",&L);
    A= L*L;
    printf("o valor da area do quadrado eh %.1f", A);

    return 0;
}