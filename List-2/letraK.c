#include <stdio.h>
#include <math.h>

/*
   algaritmo em portugol
algaritmo
declare A, L, C, P
escreva "informe a largura de seu comodo em metros: "
leia L
escreva "informe o comprimento de seu comodo em metros: "
leia C
A recebe L*C
escreva ("seu comodo tem" A "metros quadrados")
P recebe 18*A
escreva ("para essa area, precisaremos de" P "W de potencia")
fim_algoritmo
*/

int main() {
    float A, L, C, P;
    printf("informe a largura de seu comodo em metros: ");
    scanf("%f",&L);
    printf("informe o comprimento de seu comodo em metros: ");
    scanf("%f",&C);
    A=L*C;
    printf("seu comodo tem %.2f metros quadrados\n",A);
    P=18*A;
    printf("para essa area, precisaremos de %.2fW de potencia",P);
    
    return 0;

}
        

    