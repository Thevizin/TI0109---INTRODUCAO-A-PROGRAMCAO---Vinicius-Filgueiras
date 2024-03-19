#include <stdio.h>
#include <math.h>

/*
   algaritmo em portugol
algaritmo
declare X, N, T
escreva "Informe um número inteiro para calcular a sua tabuada: "
leia X
N recebe 0
enquanto N < 11 faca
    T recebe N*X
    escreva(X, "*", N, "=", T) 
    N recebe N + 1
escreva "fim"
fim_algoritmo
*/

int main() {
    int X, N, T;
    printf("informe um numero inteiro para calcular a sua tabuada: ");
    scanf("%d", &X);
    for (N = 0; N < 11; N++) {
        T = N * X;
        printf("%d * %d = %d\n", X, N, T);
    }
    printf("fim");
    return 0;
}
        

    