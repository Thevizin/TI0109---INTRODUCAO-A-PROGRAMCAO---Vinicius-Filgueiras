#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo

    var
        X: vetor[1..100] de inteiro
        Y: vetor[1..100] de inteiro
        g, N, M, i: inteiro

    inicio
        escreva("Digite o tamanho dos vetores: ")
        leia(N)

        escreva("Digite os valores de X:\n")
        para i de 1 ate N faca
            escreva("Número ", i, ": ")
            leia(g)
            X[i] <- g
        fimpara

        escreva("Digite os valores de Y:\n")
        para i de 1 ate N faca
            escreva("Número ", i, ": ")
            leia(g)
            Y[i] <- g
        fimpara

        M <- 0
        para i de 1 ate N faca
            M <- M + X[i] * Y[i]
        fimpara

        escreva("O produto escalar de X e Y: ", M)

    fim

fim_algoritmo
  */


int main() {
    int X[100],Y[100],g,a=0,N,M=0;
    printf("digite o tamanho: ");
    scanf("%d",&N);
    printf("Digite os valores de X:");
    for(int i=0;i<N;i++){
        printf("\nnumero %d: ",i+1);
        scanf("%d",&g);
        X[i]=g;
    }
    printf("Digite os valores de X:");
    for(int i=0;i<N;i++){
        printf("\nnumero %d: ",i+1);
        scanf("%d",&g);
        Y[i]=g;
    }
    for(int i=0;i<N;i++){
      M += X[i] * Y[i];
    }
    printf("o produto escalar de X e Y: %d",M);
    return 0;
}