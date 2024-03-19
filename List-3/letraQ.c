#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
algoritmo
declare X, G como inteiros
escreva("digite um numero: ")
leia(X)
se(X <= 1) entao
escreva("1")
senao se(X > 1 e X <= 2) entao
escreva("2")
senao se(X > 2 e X <= 3) entao
G = X * X
escreva(G)
senao
G = X * X * X
escreva(G)
fim_se
fim_algoritmo

*/

int main() {
    int X, G;
    printf("digite um numero: ");
    scanf("%d", &X);
    if(X <= 1){
        printf("1");
    }
    else if(X > 1 && X <= 2){
        printf("2");
    }
    else if(X > 2 && X <= 3){
        G = X * X;
        printf("%d", G);
    }
    else{
        G = X * X * X;
        printf("%d", G);
    }
    return 0;
}


